/*
** Automatically generated from `univ.m'
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
INIT mercury__univ__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "univ.c"
#include "univ.mh"

#line 27 "univ.c"
#line 136 "io.int2"
#include "io.mh"

#line 31 "univ.c"
#line 144 "io.int2"
#include "string.mh"

#line 35 "univ.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "univ.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "univ.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "univ.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 51 "univ.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 55 "univ.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 59 "univ.c"
#line 150 "io.opt"
#include "dir.mh"

#line 63 "univ.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 67 "univ.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "univ.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "univ.c"
#line 20 "store.opt"
#include "store.mh"

#line 79 "univ.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 83 "univ.c"
#line 4 "char.opt"
#include "char.mh"

#line 87 "univ.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 91 "univ.c"
#line 4 "int.opt"
#include "int.mh"

#line 95 "univ.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 99 "univ.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "univ.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 107 "univ.c"
#line 108 "univ.c"
#ifndef UNIV_DECL_GUARD
#define UNIV_DECL_GUARD

#line 112 "univ.c"
#line 113 "univ.c"

#endif
#line 116 "univ.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_univ__type_ctor_info_univ_0;
MR_decl_label5(univ__det_univ_to_type_2_0, 3,2,5,6,13)
MR_decl_label1(__Unify___univ__univ_0_0, 6)
MR_decl_label2(__Compare___univ__univ_0_0, 3,2)
MR_def_extern_entry(univ__type_to_univ_2_0)
MR_def_extern_entry(univ__type_to_univ_2_1)
MR_def_extern_entry(univ__type_to_univ_2_2)
MR_def_extern_entry(univ__univ_to_type_2_0)
MR_def_extern_entry(univ__univ_to_type_2_1)
MR_def_extern_entry(univ__univ_to_type_2_2)
MR_def_extern_entry(fn__univ__univ_1_0)
MR_def_extern_entry(fn__univ__univ_1_1)
MR_def_extern_entry(fn__univ__univ_1_2)
MR_def_extern_entry(fn__univ__univ_value_1_0)
MR_def_extern_entry(fn__univ__univ_type_1_0)
MR_def_extern_entry(univ__det_univ_to_type_2_0)
MR_decl_static(univ__construct_univ_2_0)
MR_decl_static(univ__unravel_univ_2_0)
MR_def_extern_entry(__Unify___univ__univ_0_0)
MR_def_extern_entry(__Compare___univ__univ_0_0)
MR_decl_static(fn__f_117_110_105_118_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

const MR_PseudoTypeInfo mercury_data_univ__field_types_univ_0_0[] = {
	(MR_PseudoTypeInfo) 513
};

const MR_DuExistLocn mercury_data_univ__exist_locns_univ_0_0[] = {
	{ 0, -1 }
};

static const MR_DuExistInfo mercury_data_univ__exist_info_univ_0_0 = {
	1,
	0,
	0,
	mercury_data_univ__exist_locns_univ_0_0,
	
};

static const MR_DuFunctorDesc mercury_data_univ__du_functor_desc_univ_0_0 = {
	"univ_cons",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_univ__field_types_univ_0_0,
	NULL,
	&mercury_data_univ__exist_info_univ_0_0
};

const MR_DuFunctorDescPtr mercury_data_univ__du_stag_ordered_univ_0_0[] = {
	&mercury_data_univ__du_functor_desc_univ_0_0

};

const MR_DuPtagLayout mercury_data_univ__du_ptag_ordered_univ_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_univ__du_stag_ordered_univ_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_univ__du_name_ordered_univ_0[] = {
	&mercury_data_univ__du_functor_desc_univ_0_0
};

const MR_Integer mercury_data_univ__functor_number_map_univ_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___univ__univ_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___univ__univ_0_0)),
	"univ",
	"univ",
	{ (void *)mercury_data_univ__du_name_ordered_univ_0 },
	{ (void *)mercury_data_univ__du_ptag_ordered_univ_0 },
	1,
	4,
	mercury_data_univ__functor_number_map_univ_0
};




MR_BEGIN_MODULE(univ_module0)
	MR_init_entry1(univ__type_to_univ_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__univ__type_to_univ_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_to_univ'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__univ__type_to_univ_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(univ_module1)
	MR_init_entry1(univ__type_to_univ_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__univ__type_to_univ_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_to_univ'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__univ__type_to_univ_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__typed_unify_2_1);

MR_BEGIN_MODULE(univ_module2)
	MR_init_entry1(univ__type_to_univ_2_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__univ__type_to_univ_2_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_to_univ'/2 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__univ__type_to_univ_2_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_tempr3 = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(univ_module3)
	MR_init_entry1(univ__univ_to_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__univ__univ_to_type_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_to_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__univ__univ_to_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_tempr3 = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(univ_module4)
	MR_init_entry1(univ__univ_to_type_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__univ__univ_to_type_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_to_type'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__univ__univ_to_type_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(univ_module5)
	MR_init_entry1(univ__univ_to_type_2_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__univ__univ_to_type_2_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_to_type'/2 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__univ__univ_to_type_2_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(univ_module6)
	MR_init_entry1(fn__univ__univ_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__univ__univ_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__univ__univ_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(univ_module7)
	MR_init_entry1(fn__univ__univ_1_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__univ__univ_1_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__univ__univ_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(univ_module8)
	MR_init_entry1(fn__univ__univ_1_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__univ__univ_1_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ'/2 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__univ__univ_1_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_tempr3 = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(univ_module9)
	MR_init_entry1(fn__univ__univ_value_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__univ__univ_value_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_value'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__univ__univ_value_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(univ_module10)
	MR_init_entry1(fn__univ__univ_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__univ__univ_type_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__univ__univ_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__univ__univ_type_1_0
	TypeInfo_for_T = MR_tempr1;
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
#line 538 "univ.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__type_name_1_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(univ_module11)
	MR_init_entry1(univ__det_univ_to_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__univ__det_univ_to_type_2_0);
	MR_init_label5(univ__det_univ_to_type_2_0,3,2,5,6,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_univ_to_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__univ__det_univ_to_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		univ__det_univ_to_type_2_0_i3);
MR_def_label(univ__det_univ_to_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(univ__det_univ_to_type_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(univ__det_univ_to_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__univ__det_univ_to_type_2_0
	TypeInfo_for_T = MR_tempr1;
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
#line 616 "univ.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	}
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		univ__det_univ_to_type_2_0_i5);
MR_def_label(univ__det_univ_to_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__univ__det_univ_to_type_2_0
	TypeInfo_for_T = MR_sv(2);
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
#line 650 "univ.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		univ__det_univ_to_type_2_0_i6);
MR_def_label(univ__det_univ_to_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\tObject Type: ", 14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\tUniv Type: ", 12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("det_univ_to_type: conversion failed\n", 36);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		univ__det_univ_to_type_2_0_i13);
MR_def_label(univ__det_univ_to_type_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(univ_module12)
	MR_init_entry1(univ__construct_univ_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__univ__construct_univ_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_univ'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(univ__construct_univ_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(univ_module13)
	MR_init_entry1(univ__unravel_univ_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__univ__unravel_univ_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unravel_univ'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(univ__unravel_univ_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__typed_unify_2_0);

MR_BEGIN_MODULE(univ_module14)
	MR_init_entry1(__Unify___univ__univ_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___univ__univ_0_0);
	MR_init_label1(__Unify___univ__univ_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___univ__univ_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___univ__univ_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_0);
	}
MR_def_label(__Unify___univ__univ_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__typed_compare_3_0);

MR_BEGIN_MODULE(univ_module15)
	MR_init_entry1(__Compare___univ__univ_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___univ__univ_0_0);
	MR_init_label2(__Compare___univ__univ_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___univ__univ_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___univ__univ_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___univ__univ_0_0_i2);
MR_def_label(__Compare___univ__univ_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___univ__univ_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__typed_compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(univ_module16)
	MR_init_entry1(fn__f_117_110_105_118_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_117_110_105_118_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_117_110_105_118_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__univ__unravel_univ_2_0);

void
ML_unravel_univ(MR_Word * Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

void
ML_unravel_univ(MR_Word * Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__univ__unravel_univ_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__univ__unravel_univ_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument1 = MR_r1;
	*Mercury__argument3 = MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__univ__construct_univ_2_0);

void
ML_construct_univ(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

void
ML_construct_univ(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__univ__construct_univ_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__univ__construct_univ_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument3 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__univ_maybe_bunch_0(void)
{
	univ_module0();
	univ_module1();
	univ_module2();
	univ_module3();
	univ_module4();
	univ_module5();
	univ_module6();
	univ_module7();
	univ_module8();
	univ_module9();
	univ_module10();
	univ_module11();
	univ_module12();
	univ_module13();
	univ_module14();
	univ_module15();
	univ_module16();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__univ__init(void);
void mercury__univ__init_type_tables(void);
void mercury__univ__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__univ__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__univ__init_complexity_procs(void);
#endif

void mercury__univ__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__univ_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_univ__type_ctor_info_univ_0,
		univ__univ_0_0);
	mercury__univ__init_debugger();
}

void mercury__univ__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_univ__type_ctor_info_univ_0);
	}
}


void mercury__univ__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__univ__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__univ);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__univ__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
