/*
** Automatically generated from `store.m'
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
INIT mercury__store__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "store.c"
#include "store.mh"

#line 27 "store.c"
#line 530 "io.int"
#include "io.mh"

#line 31 "store.c"
#line 538 "io.int"
#include "string.mh"

#line 35 "store.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "store.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "store.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "store.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 51 "store.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "store.c"
#line 4 "char.opt"
#include "char.mh"

#line 59 "store.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 63 "store.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "store.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "store.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 75 "store.c"
#line 4 "int.opt"
#include "int.mh"

#line 79 "store.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 83 "store.c"
#line 148 "io.opt"
#include "dir.mh"

#line 87 "store.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 91 "store.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 95 "store.c"
#line 96 "store.c"
#ifndef STORE_DECL_GUARD
#define STORE_DECL_GUARD

#line 100 "store.c"
#line 575 "store.m"

    #include "mercury_type_info.h"
    #include "mercury_heap.h"
    #include "mercury_misc.h"         /* for MR_fatal_error() */
    #include "mercury_deconstruct.h"  /* for MR_arg() */

#line 108 "store.c"
#line 109 "store.c"

#endif
#line 112 "store.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_store__store__arity1__io__state__arity0__[],
	mercury_data_base_typeclass_info_store__store__arity1__store__store__arity1__[];

extern const MR_TypeClassDeclStruct
	mercury_data_store__type_class_decl_store_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_store__type_ctor_info_store_ref_2,
	mercury_data_store__type_ctor_info_store_mutvar_2,
	mercury_data_store__type_ctor_info_store_1,
	mercury_data_store__type_ctor_info_io_ref_2,
	mercury_data_store__type_ctor_info_io_mutvar_1,
	mercury_data_store__type_ctor_info_generic_ref_2,
	mercury_data_store__type_ctor_info_generic_mutvar_2;
MR_decl_label1(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_101_113_117_97_108_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0, 2)
MR_decl_label1(store__new_cyclic_mutvar_4_0, 2)
MR_decl_label1(store__ref_functor_5_0, 2)
MR_decl_label1(store__store_equal_2_0, 1)
MR_decl_label1(__Unify___store__generic_mutvar_2_0, 6)
MR_decl_label1(__Unify___store__generic_ref_2_0, 6)
MR_decl_label2(__Compare___store__generic_mutvar_2_0, 3,2)
MR_decl_label2(__Compare___store__generic_ref_2_0, 3,2)
MR_def_extern_entry(store__do_init_1_0)
MR_def_extern_entry(store__new_1_0)
MR_def_extern_entry(store__new_mutvar_4_0)
MR_def_extern_entry(store__get_mutvar_4_0)
MR_def_extern_entry(store__copy_mutvar_4_0)
MR_def_extern_entry(store__set_mutvar_4_0)
MR_def_extern_entry(store__unsafe_new_uninitialized_mutvar_3_0)
MR_def_extern_entry(store__new_cyclic_mutvar_4_0)
MR_def_extern_entry(store__new_ref_4_0)
MR_def_extern_entry(store__unsafe_ref_value_4_0)
MR_def_extern_entry(store__ref_functor_5_0)
MR_def_extern_entry(store__arg_ref_5_0)
MR_def_extern_entry(store__new_arg_ref_5_0)
MR_def_extern_entry(store__set_ref_4_0)
MR_def_extern_entry(store__set_ref_value_4_0)
MR_def_extern_entry(store__copy_ref_value_4_0)
MR_def_extern_entry(store__extract_ref_value_3_0)
MR_def_extern_entry(store__unsafe_arg_ref_5_0)
MR_def_extern_entry(store__unsafe_new_arg_ref_5_0)
MR_def_extern_entry(store__store_equal_2_0)
MR_def_extern_entry(store__store_compare_3_0)
MR_def_extern_entry(__Unify___store__generic_mutvar_2_0)
MR_def_extern_entry(__Compare___store__generic_mutvar_2_0)
MR_def_extern_entry(__Unify___store__generic_ref_2_0)
MR_def_extern_entry(__Compare___store__generic_ref_2_0)
MR_def_extern_entry(__Unify___store__io_mutvar_1_0)
MR_def_extern_entry(__Compare___store__io_mutvar_1_0)
MR_def_extern_entry(__Unify___store__io_ref_2_0)
MR_def_extern_entry(__Compare___store__io_ref_2_0)
MR_def_extern_entry(__Unify___store__store_1_0)
MR_def_extern_entry(__Compare___store__store_1_0)
MR_def_extern_entry(__Unify___store__store_mutvar_2_0)
MR_def_extern_entry(__Compare___store__store_mutvar_2_0)
MR_def_extern_entry(__Unify___store__store_ref_2_0)
MR_def_extern_entry(__Compare___store__store_ref_2_0)
MR_def_extern_entry(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_101_113_117_97_108_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0)
MR_def_extern_entry(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_0)
MR_def_extern_entry(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_2_0)
MR_def_extern_entry(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_3_0)
MR_def_extern_entry(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0)
MR_def_extern_entry(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_51_44_32_52_93_95_48_3_0)
MR_decl_static(fn__f_115_116_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_store__pti_store_1__pseudo_2 = {
	&mercury_data_store__type_ctor_info_store_1,
{	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_store__pti_generic_ref_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 = {
	&mercury_data_store__type_ctor_info_generic_ref_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_store__pti_store_1__pseudo_2
}};

const MR_TypeCtorInfo_Struct mercury_data_store__type_ctor_info_store_ref_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___store__store_ref_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___store__store_ref_2_0)),
	"store",
	"store_ref",
	{ 0 },
	{ (void *)&mercury_data_store__pti_generic_ref_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 },
	-1,
	0,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_store__pti_generic_mutvar_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 = {
	&mercury_data_store__type_ctor_info_generic_mutvar_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_store__pti_store_1__pseudo_2
}};

const MR_TypeCtorInfo_Struct mercury_data_store__type_ctor_info_store_mutvar_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___store__store_mutvar_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___store__store_mutvar_2_0)),
	"store",
	"store_mutvar",
	{ 0 },
	{ (void *)&mercury_data_store__pti_generic_mutvar_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_c_pointer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_c_pointer_0;

static const MR_NotagFunctorDesc mercury_data_store__notag_functor_desc_store_1 = {
	"mkstore",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_c_pointer_0,
	NULL
};

const MR_Integer mercury_data_store__functor_number_map_store_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_store__type_ctor_info_store_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND_USEREQ,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___store__store_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___store__store_1_0)),
	"store",
	"store",
	{ (void *)&mercury_data_store__notag_functor_desc_store_1 },
	{ (void *)&mercury_data_store__notag_functor_desc_store_1 },
	1,
	4,
	mercury_data_store__functor_number_map_store_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_store__pti_generic_ref_2__pseudo_1__plain_io__type_ctor_info_state_0 = {
	&mercury_data_store__type_ctor_info_generic_ref_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_store__type_ctor_info_io_ref_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___store__io_ref_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___store__io_ref_2_0)),
	"store",
	"io_ref",
	{ 0 },
	{ (void *)&mercury_data_store__pti_generic_ref_2__pseudo_1__plain_io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_store__pti_generic_mutvar_2__pseudo_1__plain_io__type_ctor_info_state_0 = {
	&mercury_data_store__type_ctor_info_generic_mutvar_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_store__type_ctor_info_io_mutvar_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___store__io_mutvar_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___store__io_mutvar_1_0)),
	"store",
	"io_mutvar",
	{ 0 },
	{ (void *)&mercury_data_store__pti_generic_mutvar_2__pseudo_1__plain_io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_ref_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_private_builtin__pti_ref_1__pseudo_1 = {
	&mercury_data_private_builtin__type_ctor_info_ref_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_NotagFunctorDesc mercury_data_store__notag_functor_desc_generic_ref_2 = {
	"ref",
	(MR_PseudoTypeInfo) &mercury_data_private_builtin__pti_ref_1__pseudo_1,
	NULL
};

const MR_Integer mercury_data_store__functor_number_map_generic_ref_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_store__type_ctor_info_generic_ref_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___store__generic_ref_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___store__generic_ref_2_0)),
	"store",
	"generic_ref",
	{ (void *)&mercury_data_store__notag_functor_desc_generic_ref_2 },
	{ (void *)&mercury_data_store__notag_functor_desc_generic_ref_2 },
	1,
	4,
	mercury_data_store__functor_number_map_generic_ref_2
};

static const MR_NotagFunctorDesc mercury_data_store__notag_functor_desc_generic_mutvar_2 = {
	"mutvar",
	(MR_PseudoTypeInfo) &mercury_data_private_builtin__pti_ref_1__pseudo_1,
	NULL
};

const MR_Integer mercury_data_store__functor_number_map_generic_mutvar_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_store__type_ctor_info_generic_mutvar_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___store__generic_mutvar_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___store__generic_mutvar_2_0)),
	"store",
	"generic_mutvar",
	{ (void *)&mercury_data_store__notag_functor_desc_generic_mutvar_2 },
	{ (void *)&mercury_data_store__notag_functor_desc_generic_mutvar_2 },
	1,
	4,
	mercury_data_store__functor_number_map_generic_mutvar_2
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_store__store__arity1__io__state__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 0,
	
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_store__store__arity1__store__store__arity1__[] = {
	(MR_Code *) 1,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 0,
	
};

const MR_ConstString mercury_data_store__type_class_id_var_names_store_1[] = {
	"T",
};

static const MR_TypeClassId mercury_data_store__type_class_id_store_1 = {
	"store",
	"store",
	1,
	1,
	0,
	mercury_data_store__type_class_id_var_names_store_1,
	NULL
};

const MR_TypeClassDeclStruct mercury_data_store__type_class_decl_store_1 = {
	&mercury_data_store__type_class_id_store_1,
	0,
	0,
	NULL
};


MR_BEGIN_MODULE(store_module0)
	MR_init_entry1(store__do_init_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__do_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_S;
#define	MR_PROC_LABEL	mercury__store__do_init_1_0
	MR_OBTAIN_GLOBAL_LOCK("do_init");
{
#line 282 "store.m"

    /* TypeInfo_for_S */
;}
#line 423 "store.c"
	MR_RELEASE_GLOBAL_LOCK("do_init");
	MR_r1 = TypeInfo_for_S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module1)
	MR_init_entry1(store__new_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__new_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_S;
#define	MR_PROC_LABEL	mercury__store__new_1_0
	MR_OBTAIN_GLOBAL_LOCK("do_init");
{
#line 282 "store.m"

    /* TypeInfo_for_S */
;}
#line 455 "store.c"
	MR_RELEASE_GLOBAL_LOCK("do_init");
	MR_r1 = TypeInfo_for_S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module2)
	MR_init_entry1(store__new_mutvar_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__new_mutvar_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Val;
	MR_Word	Mutvar;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__new_mutvar_4_0
	Val = MR_r3;
	S0 = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("new_mutvar");
{
#line 322 "store.m"

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_PROC_LABEL, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    * (MR_Word *) Mutvar = Val;
    S = S0;
;}
#line 496 "store.c"
	MR_RELEASE_GLOBAL_LOCK("new_mutvar");
	MR_r1 = Mutvar;
	MR_r2 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module3)
	MR_init_entry1(store__get_mutvar_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__get_mutvar_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Mutvar;
	MR_Word	Val;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__get_mutvar_4_0
	Mutvar = MR_r3;
	S0 = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("get_mutvar");
{
#line 333 "store.m"

    Val = * (MR_Word *) Mutvar;
    S = S0;
;}
#line 535 "store.c"
	MR_RELEASE_GLOBAL_LOCK("get_mutvar");
	MR_r1 = Val;
	MR_r2 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module4)
	MR_init_entry1(store__copy_mutvar_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__copy_mutvar_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	Mutvar;
	MR_Word	Val;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__copy_mutvar_4_0
	Mutvar = MR_r3;
	S0 = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("get_mutvar");
{
#line 333 "store.m"

    Val = * (MR_Word *) Mutvar;
    S = S0;
;}
#line 576 "store.c"
	MR_RELEASE_GLOBAL_LOCK("get_mutvar");
	MR_tempr1 = Val;
	MR_tempr2 = S;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Val;
	MR_Word	Mutvar;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__copy_mutvar_4_0
	Val = MR_tempr1;
	S0 = MR_tempr2;
	MR_OBTAIN_GLOBAL_LOCK("new_mutvar");
{
#line 322 "store.m"

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_PROC_LABEL, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    * (MR_Word *) Mutvar = Val;
    S = S0;
;}
#line 600 "store.c"
	MR_RELEASE_GLOBAL_LOCK("new_mutvar");
	MR_r1 = Mutvar;
	MR_r2 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module5)
	MR_init_entry1(store__set_mutvar_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__set_mutvar_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Mutvar;
	MR_Word	Val;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__set_mutvar_4_0
	Mutvar = MR_r3;
	Val = MR_r4;
	S0 = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("set_mutvar");
{
#line 341 "store.m"

    * (MR_Word *) Mutvar = Val;
    S = S0;
;}
#line 641 "store.c"
	MR_RELEASE_GLOBAL_LOCK("set_mutvar");
	MR_r1 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module6)
	MR_init_entry1(store__unsafe_new_uninitialized_mutvar_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__unsafe_new_uninitialized_mutvar_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Mutvar;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__unsafe_new_uninitialized_mutvar_3_0
	S0 = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("unsafe_new_uninitialized_mutvar");
{
#line 409 "store.m"

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_PROC_LABEL, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    S = S0;
;}
#line 679 "store.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_new_uninitialized_mutvar");
	MR_r1 = Mutvar;
	MR_r2 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(store_module7)
	MR_init_entry1(store__new_cyclic_mutvar_4_0);
	MR_init_label1(store__new_cyclic_mutvar_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__new_cyclic_mutvar_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Mutvar;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__new_cyclic_mutvar_4_0
	S0 = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("unsafe_new_uninitialized_mutvar");
{
#line 409 "store.m"

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_PROC_LABEL, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    S = S0;
;}
#line 724 "store.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_new_uninitialized_mutvar");
	MR_r2 = Mutvar;
	MR_tempr1 = S;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(store__new_cyclic_mutvar_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__store__new_cyclic_mutvar_4_0_i2);
MR_def_label(store__new_cyclic_mutvar_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Mutvar;
	MR_Word	Val;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__new_cyclic_mutvar_4_0
	Mutvar = MR_sv(1);
	Val = MR_r1;
	S0 = MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("set_mutvar");
{
#line 341 "store.m"

    * (MR_Word *) Mutvar = Val;
    S = S0;
;}
#line 755 "store.c"
	MR_RELEASE_GLOBAL_LOCK("set_mutvar");
	MR_r2 = S;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module8)
	MR_init_entry1(store__new_ref_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__new_ref_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Val;
	MR_Word	Ref;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__new_ref_4_0
	Val = MR_r3;
	S0 = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("new_ref");
{
#line 513 "store.m"

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_PROC_LABEL, "store:ref/2");
    MR_define_size_slot(0, Ref, 1);
    * (MR_Word *) Ref = Val;
    S = S0;
;}
#line 797 "store.c"
	MR_RELEASE_GLOBAL_LOCK("new_ref");
	MR_r1 = Ref;
	MR_r2 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module9)
	MR_init_entry1(store__unsafe_ref_value_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__unsafe_ref_value_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ref;
	MR_Word	Val;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__unsafe_ref_value_4_0
	Ref = MR_r3;
	S0 = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("unsafe_ref_value");
{
#line 551 "store.m"

    Val = * (MR_Word *) Ref;
    S = S0;
;}
#line 836 "store.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_ref_value");
	MR_r1 = Val;
	MR_r2 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__functor_4_1);

MR_BEGIN_MODULE(store_module10)
	MR_init_entry1(store__ref_functor_5_0);
	MR_init_label1(store__ref_functor_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__ref_functor_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Ref;
	MR_Word	Val;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__ref_functor_5_0
	Ref = MR_r3;
	S0 = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("unsafe_ref_value");
{
#line 551 "store.m"

    Val = * (MR_Word *) Ref;
    S = S0;
;}
#line 881 "store.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_ref_value");
	MR_r2 = Val;
	MR_tempr1 = S;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(deconstruct__functor_4_1,
		store__ref_functor_5_0_i2);
MR_def_label(store__ref_functor_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module11)
	MR_init_entry1(store__arg_ref_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__arg_ref_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo_for_ArgT;
	MR_Word	Ref;
	MR_Integer	ArgNum;
	MR_Word	ArgRef;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__arg_ref_5_0
	TypeInfo_for_T = MR_r1;
	TypeInfo_for_ArgT = MR_r2;
	Ref = MR_r4;
	ArgNum = MR_r5;
	S0 = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("arg_ref");
{
#line 586 "store.m"
{
    MR_TypeInfo type_info;
    MR_TypeInfo arg_type_info;
    MR_TypeInfo exp_arg_type_info;
    MR_Word     *arg_ref;

    type_info = (MR_TypeInfo) TypeInfo_for_T;
    exp_arg_type_info = (MR_TypeInfo) TypeInfo_for_ArgT;

    MR_save_transient_registers();

    if (!MR_arg(type_info, (MR_Word *) Ref, ArgNum, &arg_type_info,
        &arg_ref, MR_NONCANON_ABORT))
    {
        MR_fatal_error("store.arg_ref: argument number out of range");
    }

    if (MR_compare_type_info(arg_type_info, exp_arg_type_info) !=
        MR_COMPARE_EQUAL)
    {
        MR_fatal_error("store.arg_ref: argument has wrong type");
    }

    MR_restore_transient_registers();

    ArgRef = (MR_Word) arg_ref;
    S = S0;
};}
#line 958 "store.c"
	MR_RELEASE_GLOBAL_LOCK("arg_ref");
	MR_r1 = ArgRef;
	MR_r2 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module12)
	MR_init_entry1(store__new_arg_ref_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__new_arg_ref_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo_for_ArgT;
	MR_Word	Val;
	MR_Integer	ArgNum;
	MR_Word	ArgRef;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__new_arg_ref_5_0
	TypeInfo_for_T = MR_r1;
	TypeInfo_for_ArgT = MR_r2;
	Val = MR_r4;
	ArgNum = MR_r5;
	S0 = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("new_arg_ref");
{
#line 631 "store.m"
{
    MR_TypeInfo type_info;
    MR_TypeInfo arg_type_info;
    MR_TypeInfo exp_arg_type_info;
    MR_Word     *arg_ref;

    type_info = (MR_TypeInfo) TypeInfo_for_T;
    exp_arg_type_info = (MR_TypeInfo) TypeInfo_for_ArgT;

    MR_save_transient_registers();

    if (!MR_arg(type_info, (MR_Word *) &Val, ArgNum, &arg_type_info,
        &arg_ref, MR_NONCANON_ABORT))
    {
        MR_fatal_error("store.new_arg_ref: argument number out of range");
    }

    if (MR_compare_type_info(arg_type_info, exp_arg_type_info) !=
        MR_COMPARE_EQUAL)
    {
        MR_fatal_error("store.new_arg_ref: argument has wrong type");
    }

    MR_restore_transient_registers();

    /*
    ** For no_tag types, the argument may have the same address as the
    ** term.  Since the term (Val) is currently on the C stack, we can't
    ** return a pointer to it; so if that is the case, then we need
    ** to copy it to the heap before returning.
    */

    if (arg_ref == &Val) {
        MR_offset_incr_hp_msg(ArgRef, MR_SIZE_SLOT_SIZE,
            MR_SIZE_SLOT_SIZE + 1, MR_PROC_LABEL, "store:ref/2");
        MR_define_size_slot(0, ArgRef, 1);
        * (MR_Word *) ArgRef = Val;
    } else {
        ArgRef = (MR_Word) arg_ref;
    }
    S = S0;
};}
#line 1041 "store.c"
	MR_RELEASE_GLOBAL_LOCK("new_arg_ref");
	MR_r1 = ArgRef;
	MR_r2 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module13)
	MR_init_entry1(store__set_ref_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__set_ref_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ref;
	MR_Word	ValRef;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__set_ref_4_0
	Ref = MR_r3;
	ValRef = MR_r4;
	S0 = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("set_ref");
{
#line 690 "store.m"

    * (MR_Word *) Ref = * (MR_Word *) ValRef;
    S = S0;
;}
#line 1081 "store.c"
	MR_RELEASE_GLOBAL_LOCK("set_ref");
	MR_r1 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module14)
	MR_init_entry1(store__set_ref_value_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__set_ref_value_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ref;
	MR_Word	Val;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__set_ref_value_4_0
	Ref = MR_r3;
	Val = MR_r4;
	S0 = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("set_ref_value");
{
#line 705 "store.m"

    * (MR_Word *) Ref = Val;
    S = S0;
;}
#line 1120 "store.c"
	MR_RELEASE_GLOBAL_LOCK("set_ref_value");
	MR_r1 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module15)
	MR_init_entry1(store__copy_ref_value_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__copy_ref_value_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ref;
	MR_Word	Val;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__copy_ref_value_4_0
	Ref = MR_r3;
	S0 = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("unsafe_ref_value");
{
#line 551 "store.m"

    Val = * (MR_Word *) Ref;
    S = S0;
;}
#line 1158 "store.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_ref_value");
	MR_r1 = Val;
	MR_r2 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module16)
	MR_init_entry1(store__extract_ref_value_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__extract_ref_value_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ref;
	MR_Word	Val;
#define	MR_PROC_LABEL	mercury__store__extract_ref_value_3_0
	Ref = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("extract_ref_value");
{
#line 720 "store.m"

    Val = * (MR_Word *) Ref;
;}
#line 1193 "store.c"
	MR_RELEASE_GLOBAL_LOCK("extract_ref_value");
	MR_r1 = Val;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module17)
	MR_init_entry1(store__unsafe_arg_ref_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__unsafe_arg_ref_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ref;
	MR_Integer	Arg;
	MR_Word	ArgRef;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__unsafe_arg_ref_5_0
	Ref = MR_r4;
	Arg = MR_r5;
	S0 = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("unsafe_arg_ref");
{
#line 736 "store.m"
{
    /* unsafe - does not check type & arity, won't handle no_tag types */
    MR_Word *Ptr;

    Ptr = (MR_Word *) MR_strip_tag((MR_Word) Ref);
    ArgRef = (MR_Word) &Ptr[Arg];
    S = S0;
};}
#line 1237 "store.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_arg_ref");
	MR_r1 = ArgRef;
	MR_r2 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module18)
	MR_init_entry1(store__unsafe_new_arg_ref_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__unsafe_new_arg_ref_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Val;
	MR_Integer	Arg;
	MR_Word	ArgRef;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__store__unsafe_new_arg_ref_5_0
	Val = MR_r4;
	Arg = MR_r5;
	S0 = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("unsafe_new_arg_ref");
{
#line 755 "store.m"
{
    /* unsafe - does not check type & arity, won't handle no_tag types */
    MR_Word *Ptr;

    Ptr = (MR_Word *) MR_strip_tag((MR_Word) Val);
    ArgRef = (MR_Word) &Ptr[Arg];
    S = S0;
};}
#line 1282 "store.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_new_arg_ref");
	MR_r1 = ArgRef;
	MR_r2 = S;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module19)
	MR_init_entry1(store__store_equal_2_0);
	MR_init_label1(store__store_equal_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__store_equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_101_113_117_97_108_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0,
		store__store_equal_2_0_i1);
MR_def_label(store__store_equal_2_0,1)
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


MR_BEGIN_MODULE(store_module20)
	MR_init_entry1(store__store_compare_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__store__store_compare_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___private_builtin__ref_1_0);

MR_BEGIN_MODULE(store_module21)
	MR_init_entry1(__Unify___store__generic_mutvar_2_0);
	MR_init_label1(__Unify___store__generic_mutvar_2_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___store__generic_mutvar_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___store__generic_mutvar_2_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___private_builtin__ref_1_0);
MR_def_label(__Unify___store__generic_mutvar_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___private_builtin__ref_1_0);

MR_BEGIN_MODULE(store_module22)
	MR_init_entry1(__Compare___store__generic_mutvar_2_0);
	MR_init_label2(__Compare___store__generic_mutvar_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___store__generic_mutvar_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___store__generic_mutvar_2_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___store__generic_mutvar_2_0_i2);
MR_def_label(__Compare___store__generic_mutvar_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___store__generic_mutvar_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___private_builtin__ref_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module23)
	MR_init_entry1(__Unify___store__generic_ref_2_0);
	MR_init_label1(__Unify___store__generic_ref_2_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___store__generic_ref_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___store__generic_ref_2_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___private_builtin__ref_1_0);
MR_def_label(__Unify___store__generic_ref_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module24)
	MR_init_entry1(__Compare___store__generic_ref_2_0);
	MR_init_label2(__Compare___store__generic_ref_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___store__generic_ref_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___store__generic_ref_2_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___store__generic_ref_2_0_i2);
MR_def_label(__Compare___store__generic_ref_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___store__generic_ref_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___private_builtin__ref_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module25)
	MR_init_entry1(__Unify___store__io_mutvar_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___store__io_mutvar_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___store__generic_mutvar_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module26)
	MR_init_entry1(__Compare___store__io_mutvar_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___store__io_mutvar_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___store__generic_mutvar_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module27)
	MR_init_entry1(__Unify___store__io_ref_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___store__io_ref_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module28)
	MR_init_entry1(__Compare___store__io_ref_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___store__io_ref_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module29)
	MR_init_entry1(__Unify___store__store_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___store__store_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module30)
	MR_init_entry1(__Compare___store__store_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___store__store_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_51_44_32_52_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module31)
	MR_init_entry1(__Unify___store__store_mutvar_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___store__store_mutvar_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(store, store);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___store__generic_mutvar_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module32)
	MR_init_entry1(__Compare___store__store_mutvar_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___store__store_mutvar_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(store, store);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Compare___store__generic_mutvar_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module33)
	MR_init_entry1(__Unify___store__store_ref_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___store__store_ref_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(store, store);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___store__generic_ref_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module34)
	MR_init_entry1(__Compare___store__store_ref_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___store__store_ref_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(store, store);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Compare___store__generic_ref_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(store_module35)
	MR_init_entry1(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_101_113_117_97_108_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0);
	MR_init_label1(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_101_113_117_97_108_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_101_113_117_97_108_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("attempt to unify two stores", 27);
	MR_np_call_localret_ent(require__error_1_0,
		f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_101_113_117_97_108_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0_i2);
MR_def_label(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_101_113_117_97_108_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module36)
	MR_init_entry1(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_99_111_109_112_97_114_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("attempt to compare two stores", 29);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module37)
	MR_init_entry1(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___store__generic_ref_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module38)
	MR_init_entry1(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___store__generic_ref_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module39)
	MR_init_entry1(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module40)
	MR_init_entry1(f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_51_44_32_52_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_116_111_114_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_115_116_111_114_101_95_49_95_95_91_49_44_32_51_44_32_52_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(store_module41)
	MR_init_entry1(fn__f_115_116_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_116_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__store_maybe_bunch_0(void)
{
	store_module0();
	store_module1();
	store_module2();
	store_module3();
	store_module4();
	store_module5();
	store_module6();
	store_module7();
	store_module8();
	store_module9();
	store_module10();
	store_module11();
	store_module12();
	store_module13();
	store_module14();
	store_module15();
	store_module16();
	store_module17();
	store_module18();
	store_module19();
	store_module20();
	store_module21();
	store_module22();
	store_module23();
	store_module24();
	store_module25();
	store_module26();
	store_module27();
	store_module28();
	store_module29();
	store_module30();
	store_module31();
	store_module32();
	store_module33();
	store_module34();
	store_module35();
	store_module36();
	store_module37();
	store_module38();
	store_module39();
}

static void mercury__store_maybe_bunch_1(void)
{
	store_module40();
	store_module41();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__store__init(void);
void mercury__store__init_type_tables(void);
void mercury__store__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__store__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__store__init_complexity_procs(void);
#endif

void mercury__store__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__store_maybe_bunch_0();
	mercury__store_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_store__type_ctor_info_store_ref_2,
		store__store_ref_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_store__type_ctor_info_store_mutvar_2,
		store__store_mutvar_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_store__type_ctor_info_store_1,
		store__store_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_store__type_ctor_info_io_ref_2,
		store__io_ref_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_store__type_ctor_info_io_mutvar_1,
		store__io_mutvar_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_store__type_ctor_info_generic_ref_2,
		store__generic_ref_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_store__type_ctor_info_generic_mutvar_2,
		store__generic_mutvar_2_0);
#ifndef MR_STATIC_CODE_ADDRESSES
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__store__init_debugger();
}

void mercury__store__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_store__type_ctor_info_store_ref_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_store__type_ctor_info_store_mutvar_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_store__type_ctor_info_store_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_store__type_ctor_info_io_ref_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_store__type_ctor_info_io_mutvar_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_store__type_ctor_info_generic_ref_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_store__type_ctor_info_generic_mutvar_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_store__type_class_decl_store_1);
	}
}


void mercury__store__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__store__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__store__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
