/*
** Automatically generated from `type_desc.m'
** by the Mercury compiler,
** version rotd-2011-07-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__type_desc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "type_desc.c"
#include "type_desc.mh"

#line 28 "type_desc.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "type_desc.c"
#line 150 "io.int2"
#include "string.mh"

#line 36 "type_desc.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "type_desc.c"
#line 30 "time.int2"
#include "time.mh"

#line 44 "type_desc.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "type_desc.c"
#line 45 "builtin.opt"
#include "array.mh"

#line 52 "type_desc.c"
#line 4 "int.opt"
#include "int.mh"

#line 56 "type_desc.c"
#line 53 "int.opt"
#include "stm_builtin.mh"

#line 60 "type_desc.c"
#line 55 "int.opt"
#include "store.mh"

#line 64 "type_desc.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 68 "type_desc.c"
#line 156 "io.opt"
#include "dir.mh"

#line 72 "type_desc.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 76 "type_desc.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 80 "type_desc.c"
#line 4 "char.opt"
#include "char.mh"

#line 84 "type_desc.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 88 "type_desc.c"
#line 3 "float.opt"
#include "float.mh"

#line 92 "type_desc.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 96 "type_desc.c"
#line 3 "math.opt"
#include "math.mh"

#line 100 "type_desc.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 104 "type_desc.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 108 "type_desc.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 112 "type_desc.c"
#line 113 "type_desc.c"
#ifndef TYPE_DESC_DECL_GUARD
#define TYPE_DESC_DECL_GUARD

#line 117 "type_desc.c"
#line 245 "type_desc.m"

#include "mercury_heap.h" /* for MR_incr_hp_msg() etc. */
#include "mercury_misc.h" /* for MR_fatal_error() */
#include "mercury_string.h"   /* for MR_make_aligned_string() */
#include "mercury_type_desc.h"

#line 125 "type_desc.c"
#line 126 "type_desc.c"

#endif
#line 129 "type_desc.c"

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

extern const MR_TypeCtorInfo_Struct
	mercury_data_type_desc__type_ctor_info_pseudo_type_rep_0;
MR_decl_label4(type_desc__list__all_true__ho6_2_0, 29,6,2,1)
MR_decl_label4(type_desc__list__map__ho5_3_0, 28,5,9,10)
MR_decl_label1(type_desc__is_exist_pseudo_type_desc_2_0, 1)
MR_decl_label1(type_desc__is_univ_pseudo_type_desc_2_0, 1)
MR_decl_label1(type_desc__pseudo_type_ctor_and_args_3_0, 1)
MR_decl_label1(type_desc__pseudo_type_desc_is_ground_1_0, 1)
MR_decl_label6(type_desc__type_arg_names_3_0, 49,4,6,11,8,15)
MR_decl_label1(type_desc__type_desc_to_type_info_2_0, 2)
MR_decl_label1(type_desc__type_info_list_to_type_desc_list_2_0, 18)
MR_decl_label1(type_desc__type_info_to_type_desc_2_0, 2)
MR_decl_label2(fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0, 5,2)
MR_decl_label1(fn__type_desc__det_make_type_2_0, 2)
MR_decl_label2(fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0, 4,1)
MR_decl_label1(fn__type_desc__make_type_2_0, 1)
MR_decl_label1(fn__type_desc__pseudo_type_args_1_0, 1)
MR_decl_label1(fn__type_desc__pseudo_type_ctor_1_0, 1)
MR_decl_label3(fn__type_desc__pseudo_type_desc_to_rep_1_0, 3,8,12)
MR_decl_label10(fn__type_desc__type_name_1_0, 2,4,7,11,13,8,20,16,25,29)
MR_decl_label3(fn__type_desc__type_name_1_0, 27,37,44)
MR_decl_label5(__Unify___type_desc__pseudo_type_rep_0_0, 7,5,22,11,1)
MR_decl_label10(__Compare___type_desc__pseudo_type_rep_0_0, 9,7,5,37,17,19,15,41,24,25)
MR_decl_label4(__Compare___type_desc__pseudo_type_rep_0_0, 43,26,44,30)
MR_def_extern_entry(type_desc__pseudo_type_ctor_and_args_3_0)
MR_def_extern_entry(type_desc__pseudo_type_desc_is_ground_1_0)
MR_decl_static(type_desc__is_univ_pseudo_type_desc_2_0)
MR_decl_static(type_desc__is_exist_pseudo_type_desc_2_0)
MR_def_extern_entry(fn__type_desc__pseudo_type_desc_to_rep_1_0)
MR_def_extern_entry(fn__type_desc__type_desc_to_pseudo_type_desc_1_0)
MR_def_extern_entry(fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0)
MR_def_extern_entry(fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0)
MR_def_extern_entry(fn__type_desc__ground_pseudo_type_desc_to_type_desc_det_1_0)
MR_def_extern_entry(fn__type_desc__type_of_1_0)
MR_def_extern_entry(type_desc__has_type_2_0)
MR_def_extern_entry(type_desc__same_type_2_0)
MR_def_extern_entry(type_desc__type_ctor_and_args_3_0)
MR_def_extern_entry(type_desc__type_ctor_name_and_arity_4_0)
MR_def_extern_entry(fn__type_desc__type_name_1_0)
MR_decl_static(type_desc__type_arg_names_3_0)
MR_def_extern_entry(fn__type_desc__type_ctor_1_0)
MR_def_extern_entry(fn__type_desc__pseudo_type_ctor_1_0)
MR_def_extern_entry(fn__type_desc__type_args_1_0)
MR_def_extern_entry(fn__type_desc__pseudo_type_args_1_0)
MR_def_extern_entry(fn__type_desc__type_ctor_name_1_0)
MR_def_extern_entry(fn__type_desc__type_ctor_module_name_1_0)
MR_def_extern_entry(fn__type_desc__type_ctor_arity_1_0)
MR_def_extern_entry(fn__type_desc__make_type_2_0)
MR_def_extern_entry(fn__type_desc__make_type_2_1)
MR_def_extern_entry(fn__type_desc__det_make_type_2_0)
MR_def_extern_entry(type_desc__type_desc_to_type_info_2_0)
MR_def_extern_entry(type_desc__type_info_to_type_desc_2_0)
MR_def_extern_entry(type_desc__type_info_list_to_type_desc_list_2_0)
MR_decl_static(type_desc__call_rtti_compare_type_infos_3_0)
MR_decl_static(fn__type_desc__get_type_info_for_type_info_0_0)
MR_def_extern_entry(__Unify___type_desc__pseudo_type_rep_0_0)
MR_def_extern_entry(__Compare___type_desc__pseudo_type_rep_0_0)
MR_decl_static(type_desc__list__map__ho5_3_0)
MR_decl_static(type_desc__list__all_true__ho6_2_0)
MR_def_extern_entry(f_116_121_112_101_95_100_101_115_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0)
MR_decl_static(fn__f_116_121_112_101_95_100_101_115_99_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
MR_string_const("}", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const(")", 1),
MR_tbmkword(0, 0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_ctor_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_pseudo_type_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_pseudo_type_desc_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1type_desc__type_ctor_info_pseudo_type_desc_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_type_desc__type_ctor_info_pseudo_type_desc_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_ctor_desc_0;

const MR_PseudoTypeInfo mercury_data_type_desc__field_types_pseudo_type_rep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_type_desc__type_ctor_info_type_ctor_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1type_desc__type_ctor_info_pseudo_type_desc_0
};

static const MR_DuFunctorDesc mercury_data_type_desc__du_functor_desc_pseudo_type_rep_0_0 = {
	"bound",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_type_desc__field_types_pseudo_type_rep_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_type_desc__field_types_pseudo_type_rep_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_type_desc__du_functor_desc_pseudo_type_rep_0_1 = {
	"univ_tvar",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_type_desc__field_types_pseudo_type_rep_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_type_desc__field_types_pseudo_type_rep_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_type_desc__du_functor_desc_pseudo_type_rep_0_2 = {
	"exist_tvar",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_type_desc__field_types_pseudo_type_rep_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_type_desc__du_stag_ordered_pseudo_type_rep_0_0[] = {
	&mercury_data_type_desc__du_functor_desc_pseudo_type_rep_0_0

};

const MR_DuFunctorDescPtr mercury_data_type_desc__du_stag_ordered_pseudo_type_rep_0_1[] = {
	&mercury_data_type_desc__du_functor_desc_pseudo_type_rep_0_1

};

const MR_DuFunctorDescPtr mercury_data_type_desc__du_stag_ordered_pseudo_type_rep_0_2[] = {
	&mercury_data_type_desc__du_functor_desc_pseudo_type_rep_0_2

};

const MR_DuPtagLayout mercury_data_type_desc__du_ptag_ordered_pseudo_type_rep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_type_desc__du_stag_ordered_pseudo_type_rep_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_type_desc__du_stag_ordered_pseudo_type_rep_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_type_desc__du_stag_ordered_pseudo_type_rep_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_type_desc__du_name_ordered_pseudo_type_rep_0[] = {
	&mercury_data_type_desc__du_functor_desc_pseudo_type_rep_0_0,
	&mercury_data_type_desc__du_functor_desc_pseudo_type_rep_0_2,
	&mercury_data_type_desc__du_functor_desc_pseudo_type_rep_0_1
};

const MR_Integer mercury_data_type_desc__functor_number_map_pseudo_type_rep_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_pseudo_type_rep_0 = {
	0,
	14,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___type_desc__pseudo_type_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___type_desc__pseudo_type_rep_0_0)),
	"type_desc",
	"pseudo_type_rep",
	{ (void *)mercury_data_type_desc__du_name_ordered_pseudo_type_rep_0 },
	{ (void *)mercury_data_type_desc__du_ptag_ordered_pseudo_type_rep_0 },
	3,
	4,
	mercury_data_type_desc__functor_number_map_pseudo_type_rep_0
};




MR_BEGIN_MODULE(type_desc_module0)
	MR_init_entry1(type_desc__pseudo_type_ctor_and_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__pseudo_type_ctor_and_args_3_0);
	MR_init_label1(type_desc__pseudo_type_ctor_and_args_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pseudo_type_ctor_and_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__type_desc__pseudo_type_ctor_and_args_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	PseudoTypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgPseudoTypeInfos;
#define	MR_PROC_LABEL	mercury__type_desc__pseudo_type_ctor_and_args_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r1;
{
#line 720 "type_desc.m"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
};}
#line 374 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(type_desc__pseudo_type_ctor_and_args_3_0_i1);
	MR_r2 = TypeCtorDesc;
	MR_r3 = ArgPseudoTypeInfos;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(type_desc__pseudo_type_ctor_and_args_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module1)
	MR_init_entry1(type_desc__pseudo_type_desc_is_ground_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__pseudo_type_desc_is_ground_1_0);
	MR_init_label1(type_desc__pseudo_type_desc_is_ground_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pseudo_type_desc_is_ground'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__type_desc__pseudo_type_desc_is_ground_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	PseudoTypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgPseudoTypeInfos;
#define	MR_PROC_LABEL	mercury__type_desc__pseudo_type_desc_is_ground_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r1;
{
#line 720 "type_desc.m"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
};}
#line 433 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(type_desc__pseudo_type_desc_is_ground_1_0_i1);
	MR_r1 = ArgPseudoTypeInfos;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(type_desc__list__all_true__ho6_2_0);
MR_def_label(type_desc__pseudo_type_desc_is_ground_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module2)
	MR_init_entry1(type_desc__is_univ_pseudo_type_desc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__is_univ_pseudo_type_desc_2_0);
	MR_init_label1(type_desc__is_univ_pseudo_type_desc_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_univ_pseudo_type_desc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(type_desc__is_univ_pseudo_type_desc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	PseudoTypeDesc;
	MR_Integer	TypeVarNum;
#define	MR_PROC_LABEL	mercury__type_desc__is_univ_pseudo_type_desc_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r1;
{
#line 362 "type_desc.m"

    MR_PseudoTypeInfo   pseudo_type_info;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    if (MR_PSEUDO_TYPEINFO_IS_VARIABLE(pseudo_type_info) &&
        MR_TYPE_VARIABLE_IS_UNIV_QUANT(pseudo_type_info))
    {
        TypeVarNum = (MR_Integer) pseudo_type_info;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 489 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(type_desc__is_univ_pseudo_type_desc_2_0_i1);
	MR_r2 = TypeVarNum;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(type_desc__is_univ_pseudo_type_desc_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module3)
	MR_init_entry1(type_desc__is_exist_pseudo_type_desc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__is_exist_pseudo_type_desc_2_0);
	MR_init_label1(type_desc__is_exist_pseudo_type_desc_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_exist_pseudo_type_desc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(type_desc__is_exist_pseudo_type_desc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	PseudoTypeDesc;
	MR_Integer	TypeVarNum;
#define	MR_PROC_LABEL	mercury__type_desc__is_exist_pseudo_type_desc_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r1;
{
#line 390 "type_desc.m"

    MR_PseudoTypeInfo   pseudo_type_info;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    if (MR_PSEUDO_TYPEINFO_IS_VARIABLE(pseudo_type_info) &&
        MR_TYPE_VARIABLE_IS_EXIST_QUANT(pseudo_type_info))
    {
        TypeVarNum = (MR_Integer) pseudo_type_info;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 546 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(type_desc__is_exist_pseudo_type_desc_2_0_i1);
	MR_r2 = TypeVarNum;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(type_desc__is_exist_pseudo_type_desc_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(type_desc_module4)
	MR_init_entry1(fn__type_desc__pseudo_type_desc_to_rep_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__pseudo_type_desc_to_rep_1_0);
	MR_init_label3(fn__type_desc__pseudo_type_desc_to_rep_1_0,3,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pseudo_type_desc_to_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__pseudo_type_desc_to_rep_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	PseudoTypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgPseudoTypeInfos;
#define	MR_PROC_LABEL	mercury__fn__type_desc__pseudo_type_desc_to_rep_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r1;
{
#line 720 "type_desc.m"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
};}
#line 607 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__type_desc__pseudo_type_desc_to_rep_1_0_i3);
	MR_r2 = TypeCtorDesc;
	MR_tempr1 = ArgPseudoTypeInfos;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__type_desc__pseudo_type_desc_to_rep_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	PseudoTypeDesc;
	MR_Integer	TypeVarNum;
#define	MR_PROC_LABEL	mercury__fn__type_desc__pseudo_type_desc_to_rep_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r1;
{
#line 390 "type_desc.m"

    MR_PseudoTypeInfo   pseudo_type_info;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    if (MR_PSEUDO_TYPEINFO_IS_VARIABLE(pseudo_type_info) &&
        MR_TYPE_VARIABLE_IS_EXIST_QUANT(pseudo_type_info))
    {
        TypeVarNum = (MR_Integer) pseudo_type_info;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 645 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__type_desc__pseudo_type_desc_to_rep_1_0_i8);
	MR_r2 = TypeVarNum;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_proceed();
MR_def_label(fn__type_desc__pseudo_type_desc_to_rep_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	PseudoTypeDesc;
	MR_Integer	TypeVarNum;
#define	MR_PROC_LABEL	mercury__fn__type_desc__pseudo_type_desc_to_rep_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r1;
{
#line 362 "type_desc.m"

    MR_PseudoTypeInfo   pseudo_type_info;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    if (MR_PSEUDO_TYPEINFO_IS_VARIABLE(pseudo_type_info) &&
        MR_TYPE_VARIABLE_IS_UNIV_QUANT(pseudo_type_info))
    {
        TypeVarNum = (MR_Integer) pseudo_type_info;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 680 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__type_desc__pseudo_type_desc_to_rep_1_0_i12);
	MR_r2 = TypeVarNum;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
MR_def_label(fn__type_desc__pseudo_type_desc_to_rep_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pseudo_type_desc_to_rep: internal error", 39);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module5)
	MR_init_entry1(fn__type_desc__type_desc_to_pseudo_type_desc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__type_desc_to_pseudo_type_desc_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_desc_to_pseudo_type_desc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__type_desc_to_pseudo_type_desc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeDesc;
	MR_Word	PseudoTypeDesc;
#define	MR_PROC_LABEL	mercury__fn__type_desc__type_desc_to_pseudo_type_desc_1_0
	TypeDesc = MR_r1;
{
#line 415 "type_desc.m"

    PseudoTypeDesc = TypeDesc;
;}
#line 724 "type_desc.c"
	MR_r1 = PseudoTypeDesc;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module6)
	MR_init_entry1(fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0);
	MR_init_label2(fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ground_pseudo_type_desc_to_type_desc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	PseudoTypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgPseudoTypeInfos;
#define	MR_PROC_LABEL	mercury__fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r1;
{
#line 720 "type_desc.m"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
};}
#line 778 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0_i1);
	MR_tempr1 = ArgPseudoTypeInfos;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(type_desc__list__all_true__ho6_2_0,
		fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0_i4);
MR_def_label(fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__type_desc__ground_pseudo_type_desc_to_type_desc_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module7)
	MR_init_entry1(fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0);
	MR_init_label2(fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_ground_pseudo_type_desc_to_type_desc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	PseudoTypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgPseudoTypeInfos;
#define	MR_PROC_LABEL	mercury__fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r1;
{
#line 720 "type_desc.m"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
};}
#line 855 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0_i2);
	MR_tempr1 = ArgPseudoTypeInfos;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(type_desc__list__all_true__ho6_2_0,
		fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0_i5);
MR_def_label(fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_ground_pseudo_type_desc_to_type_desc: not ground", 52);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module8)
	MR_init_entry1(fn__type_desc__ground_pseudo_type_desc_to_type_desc_det_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__ground_pseudo_type_desc_to_type_desc_det_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ground_pseudo_type_desc_to_type_desc_det'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__ground_pseudo_type_desc_to_type_desc_det_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module9)
	MR_init_entry1(fn__type_desc__type_of_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__type_of_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_of'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__type_of_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__type_desc__type_of_1_0
	TypeInfo_for_T = MR_r1;
{
#line 466 "type_desc.m"
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
#line 944 "type_desc.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module10)
	MR_init_entry1(type_desc__has_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__has_type_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'has_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__type_desc__has_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__type_desc__has_type_2_0
	TypeInfo = MR_r1;
{
#line 507 "type_desc.m"

    TypeInfo_for_T = TypeInfo;
;}
#line 979 "type_desc.c"
	MR_r1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module11)
	MR_init_entry1(type_desc__same_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__same_type_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'same_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__type_desc__same_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_121_112_101_95_100_101_115_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module12)
	MR_init_entry1(type_desc__type_ctor_and_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__type_ctor_and_args_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_ctor_and_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__type_desc__type_ctor_and_args_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__type_desc__type_ctor_and_args_3_0
	TypeDesc = MR_r1;
{
#line 691 "type_desc.m"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 1045 "type_desc.c"
	MR_r1 = TypeCtorDesc;
	MR_r2 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module13)
	MR_init_entry1(type_desc__type_ctor_name_and_arity_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__type_ctor_name_and_arity_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_ctor_name_and_arity'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__type_desc__type_ctor_name_and_arity_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__type_desc__type_ctor_name_and_arity_4_0
	TypeCtorDesc = MR_r1;
{
#line 991 "type_desc.m"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 1109 "type_desc.c"
	MR_r1 = (MR_Word) TypeCtorModuleName;
	MR_r2 = (MR_Word) TypeCtorName;
	MR_r3 = TypeCtorArity;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__append_3_1);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(type_desc_module14)
	MR_init_entry1(fn__type_desc__type_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__type_name_1_0);
	MR_init_label10(fn__type_desc__type_name_1_0,2,4,7,11,13,8,20,16,25,29)
	MR_init_label3(fn__type_desc__type_name_1_0,27,37,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__type_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__fn__type_desc__type_name_1_0
	TypeDesc = MR_r1;
{
#line 691 "type_desc.m"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 1163 "type_desc.c"
	MR_r2 = TypeCtorDesc;
	MR_r3 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__fn__type_desc__type_name_1_0
	TypeCtorDesc = MR_r2;
{
#line 991 "type_desc.m"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 1206 "type_desc.c"
	MR_r2 = (MR_Word) TypeCtorModuleName;
	MR_r1 = (MR_Word) TypeCtorName;
	MR_r4 = TypeCtorArity;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__type_desc__type_name_1_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(fn__type_desc__type_name_1_0_i37);
MR_def_label(fn__type_desc__type_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(fn__type_desc__type_name_1_0_i4);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("func", 4)) != 0)) {
		MR_GOTO_LAB(fn__type_desc__type_name_1_0_i4);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__type_desc__type_name_1_0_i7);
MR_def_label(fn__type_desc__type_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 0;
MR_def_label(fn__type_desc__type_name_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(fn__type_desc__type_name_1_0_i8);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(fn__type_desc__type_name_1_0_i8);
	}
	MR_np_call_localret_ent(type_desc__type_arg_names_3_0,
		fn__type_desc__type_name_1_0_i11);
MR_def_label(fn__type_desc__type_name_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		fn__type_desc__type_name_1_0_i13);
MR_def_label(fn__type_desc__type_name_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("{", 1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		fn__type_desc__type_name_1_0_i37);
MR_def_label(fn__type_desc__type_name_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__type_desc__type_name_1_0_i16);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__type_desc__type_name_1_0_i16);
	}
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__type_desc__type_name_1_0_i16);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__type_desc__type_name_1_0,
		fn__type_desc__type_name_1_0_i20);
MR_def_label(fn__type_desc__type_name_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("((func) = ", 10);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		fn__type_desc__type_name_1_0_i37);
MR_def_label(fn__type_desc__type_name_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(type_desc__type_arg_names_3_0,
		fn__type_desc__type_name_1_0_i25);
MR_def_label(fn__type_desc__type_name_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__type_desc__type_name_1_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		fn__type_desc__type_name_1_0_i29);
MR_def_label(fn__type_desc__type_name_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("(", 1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		fn__type_desc__type_name_1_0_i37);
MR_def_label(fn__type_desc__type_name_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("(", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		fn__type_desc__type_name_1_0_i37);
MR_def_label(fn__type_desc__type_name_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("builtin", 7)) == 0)) {
		MR_GOTO_LAB(fn__type_desc__type_name_1_0_i44);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
MR_def_label(fn__type_desc__type_name_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module15)
	MR_init_entry1(type_desc__type_arg_names_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__type_arg_names_3_0);
	MR_init_label6(type_desc__type_arg_names_3_0,49,4,6,11,8,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_arg_names'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(type_desc__type_arg_names_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(type_desc__type_arg_names_3_0_i49);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(type_desc__type_arg_names_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		type_desc__type_arg_names_3_0_i4);
MR_def_label(type_desc__type_arg_names_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(type_desc__type_arg_names_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(type_desc__type_arg_names_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(type_desc__type_arg_names_3_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(type_desc__type_arg_names_3_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		type_desc__type_arg_names_3_0_i11);
MR_def_label(type_desc__type_arg_names_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(") = ", 4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(type_desc__type_arg_names_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(type_desc__type_arg_names_3_0,
		type_desc__type_arg_names_3_0_i15);
MR_def_label(type_desc__type_arg_names_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module16)
	MR_init_entry1(fn__type_desc__type_ctor_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__type_ctor_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_ctor'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__type_ctor_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo;
	MR_Word	TypeCtor;
#define	MR_PROC_LABEL	mercury__fn__type_desc__type_ctor_1_0
	TypeInfo = MR_r1;
{
#line 640 "type_desc.m"
{
    MR_TypeCtorInfo type_ctor_info;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();
    type_info = MR_collapse_equivalences((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();

    type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);

    TypeCtor = (MR_Word) MR_make_type_ctor_desc(type_info, type_ctor_info);
};}
#line 1491 "type_desc.c"
	MR_r1 = TypeCtor;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module17)
	MR_init_entry1(fn__type_desc__pseudo_type_ctor_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__pseudo_type_ctor_1_0);
	MR_init_label1(fn__type_desc__pseudo_type_ctor_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pseudo_type_ctor'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__pseudo_type_ctor_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	PseudoTypeInfo;
	MR_Word	TypeCtor;
#define	MR_PROC_LABEL	mercury__fn__type_desc__pseudo_type_ctor_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeInfo = MR_r1;
{
#line 665 "type_desc.m"
{
    MR_TypeCtorInfo     type_ctor_info;
    MR_PseudoTypeInfo   pseudo_type_info;

    MR_save_transient_registers();
    pseudo_type_info = MR_collapse_equivalences_pseudo(
        (MR_PseudoTypeInfo) PseudoTypeInfo);
    MR_restore_transient_registers();

    if (MR_PSEUDO_TYPEINFO_IS_VARIABLE(pseudo_type_info)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        type_ctor_info = MR_PSEUDO_TYPEINFO_GET_TYPE_CTOR_INFO(
            pseudo_type_info);
        TypeCtor = (MR_Word) MR_make_type_ctor_desc_pseudo(pseudo_type_info,
            type_ctor_info);
        SUCCESS_INDICATOR = MR_TRUE;
    }
};}
#line 1546 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__type_desc__pseudo_type_ctor_1_0_i1);
	MR_r2 = TypeCtor;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__type_desc__pseudo_type_ctor_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module18)
	MR_init_entry1(fn__type_desc__type_args_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__type_args_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_args'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__type_args_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__fn__type_desc__type_args_1_0
	TypeDesc = MR_r1;
{
#line 691 "type_desc.m"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 1599 "type_desc.c"
	MR_r1 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module19)
	MR_init_entry1(fn__type_desc__pseudo_type_args_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__pseudo_type_args_1_0);
	MR_init_label1(fn__type_desc__pseudo_type_args_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pseudo_type_args'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__pseudo_type_args_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	PseudoTypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgPseudoTypeInfos;
#define	MR_PROC_LABEL	mercury__fn__type_desc__pseudo_type_args_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r1;
{
#line 720 "type_desc.m"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
};}
#line 1649 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__type_desc__pseudo_type_args_1_0_i1);
	MR_r2 = ArgPseudoTypeInfos;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__type_desc__pseudo_type_args_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module20)
	MR_init_entry1(fn__type_desc__type_ctor_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__type_ctor_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_ctor_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__type_ctor_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__fn__type_desc__type_ctor_name_1_0
	TypeCtorDesc = MR_r1;
{
#line 991 "type_desc.m"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 1720 "type_desc.c"
	MR_r1 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module21)
	MR_init_entry1(fn__type_desc__type_ctor_module_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__type_ctor_module_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_ctor_module_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__type_ctor_module_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__fn__type_desc__type_ctor_module_name_1_0
	TypeCtorDesc = MR_r1;
{
#line 991 "type_desc.m"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 1783 "type_desc.c"
	MR_r1 = (MR_Word) TypeCtorModuleName;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module22)
	MR_init_entry1(fn__type_desc__type_ctor_arity_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__type_ctor_arity_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_ctor_arity'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__type_ctor_arity_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__fn__type_desc__type_ctor_arity_1_0
	TypeCtorDesc = MR_r1;
{
#line 991 "type_desc.m"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 1846 "type_desc.c"
	MR_r1 = TypeCtorArity;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module23)
	MR_init_entry1(fn__type_desc__make_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__make_type_2_0);
	MR_init_label1(fn__type_desc__make_type_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__make_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
	MR_Word	TypeDesc;
#define	MR_PROC_LABEL	mercury__fn__type_desc__make_type_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeCtorDesc = MR_r1;
	ArgTypes = MR_r2;
{
#line 868 "type_desc.m"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeCtorInfo type_ctor_info;
    MR_Word     arg_type;
    int     list_length;
    int     arity;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        arity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);
        arity = type_ctor_info->MR_type_ctor_arity;
    }

    arg_type = ArgTypes;
    for (list_length = 0; ! MR_list_is_empty(arg_type); list_length++) {
        arg_type = MR_list_tail(arg_type);
    }

    if (list_length != arity) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        MR_save_transient_registers();
        TypeDesc = (MR_Word) MR_make_type(arity, type_ctor_desc, ArgTypes);
        MR_restore_transient_registers();
        SUCCESS_INDICATOR = MR_TRUE;
    }
};}
#line 1915 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__type_desc__make_type_2_0_i1);
	MR_r2 = TypeDesc;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__type_desc__make_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module24)
	MR_init_entry1(fn__type_desc__make_type_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__make_type_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_type'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__make_type_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
	MR_Word	TypeDesc;
#define	MR_PROC_LABEL	mercury__fn__type_desc__make_type_2_1
	TypeDesc = MR_r1;
{
#line 970 "type_desc.m"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_FALSE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 1968 "type_desc.c"
	MR_r1 = TypeCtorDesc;
	MR_r2 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module25)
	MR_init_entry1(fn__type_desc__det_make_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__det_make_type_2_0);
	MR_init_label1(fn__type_desc__det_make_type_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_make_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__type_desc__det_make_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
	MR_Word	TypeDesc;
#define	MR_PROC_LABEL	mercury__fn__type_desc__det_make_type_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeCtorDesc = MR_r1;
	ArgTypes = MR_r2;
{
#line 868 "type_desc.m"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeCtorInfo type_ctor_info;
    MR_Word     arg_type;
    int     list_length;
    int     arity;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        arity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);
        arity = type_ctor_info->MR_type_ctor_arity;
    }

    arg_type = ArgTypes;
    for (list_length = 0; ! MR_list_is_empty(arg_type); list_length++) {
        arg_type = MR_list_tail(arg_type);
    }

    if (list_length != arity) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        MR_save_transient_registers();
        TypeDesc = (MR_Word) MR_make_type(arity, type_ctor_desc, ArgTypes);
        MR_restore_transient_registers();
        SUCCESS_INDICATOR = MR_TRUE;
    }
};}
#line 2038 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__type_desc__det_make_type_2_0_i2);
	MR_r1 = TypeDesc;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__type_desc__det_make_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_make_type/2: make_type/2 failed (wrong arity)", 49);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module26)
	MR_init_entry1(type_desc__type_desc_to_type_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__type_desc_to_type_info_2_0);
	MR_init_label1(type_desc__type_desc_to_type_info_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_desc_to_type_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__type_desc__type_desc_to_type_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__type_desc__type_desc_to_type_info_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 88 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 2081 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(type_desc__type_desc_to_type_info_2_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(type_desc__type_desc_to_type_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_desc_to_type_info/2", 24);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module27)
	MR_init_entry1(type_desc__type_info_to_type_desc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__type_info_to_type_desc_2_0);
	MR_init_label1(type_desc__type_info_to_type_desc_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_info_to_type_desc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__type_desc__type_info_to_type_desc_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__type_desc__type_info_to_type_desc_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 88 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 2123 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(type_desc__type_info_to_type_desc_2_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(type_desc__type_info_to_type_desc_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_info_to_type_desc/2", 24);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module28)
	MR_init_entry1(type_desc__type_info_list_to_type_desc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__type_info_list_to_type_desc_list_2_0);
	MR_init_label1(type_desc__type_info_list_to_type_desc_list_2_0,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_info_list_to_type_desc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__type_desc__type_info_list_to_type_desc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__type_desc__type_info_list_to_type_desc_list_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 88 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 2165 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(type_desc__type_info_list_to_type_desc_list_2_0_i18);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(type_desc__type_info_list_to_type_desc_list_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(type_desc__list__map__ho5_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(rtti_implementation__compare_type_infos_3_0);

MR_BEGIN_MODULE(type_desc_module29)
	MR_init_entry1(type_desc__call_rtti_compare_type_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__call_rtti_compare_type_infos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_rtti_compare_type_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(type_desc__call_rtti_compare_type_infos_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rtti_implementation__compare_type_infos_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;

MR_BEGIN_MODULE(type_desc_module30)
	MR_init_entry1(fn__type_desc__get_type_info_for_type_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__type_desc__get_type_info_for_type_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_type_info_for_type_info'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__type_desc__get_type_info_for_type_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__type_desc__get_type_info_for_type_info_0_0
	TypeInfo_for_T = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
{
#line 466 "type_desc.m"
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
#line 2241 "type_desc.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___type_desc__type_ctor_desc_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(type_desc_module31)
	MR_init_entry1(__Unify___type_desc__pseudo_type_rep_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___type_desc__pseudo_type_rep_0_0);
	MR_init_label5(__Unify___type_desc__pseudo_type_rep_0_0,7,5,22,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___type_desc__pseudo_type_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___type_desc__pseudo_type_rep_0_0_i22);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___type_desc__pseudo_type_rep_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___type_desc__pseudo_type_rep_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___type_desc__type_ctor_desc_0_0,
		__Unify___type_desc__pseudo_type_rep_0_0_i7);
MR_def_label(__Unify___type_desc__pseudo_type_rep_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___type_desc__pseudo_type_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, pseudo_type_desc);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___type_desc__pseudo_type_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___type_desc__pseudo_type_rep_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___type_desc__pseudo_type_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___type_desc__pseudo_type_rep_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___type_desc__pseudo_type_rep_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___type_desc__pseudo_type_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___type_desc__pseudo_type_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___type_desc__type_ctor_desc_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(type_desc_module32)
	MR_init_entry1(__Compare___type_desc__pseudo_type_rep_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___type_desc__pseudo_type_rep_0_0);
	MR_init_label10(__Compare___type_desc__pseudo_type_rep_0_0,9,7,5,37,17,19,15,41,24,25)
	MR_init_label4(__Compare___type_desc__pseudo_type_rep_0_0,43,26,44,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___type_desc__pseudo_type_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i44);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i7);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	MR_tempr5 = MR_tempr1;
	MR_sv(1) = MR_tempr4;
	MR_tempr6 = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr5, 0);
	MR_r2 = MR_tfield(0, MR_tempr6, 0);
	}
	MR_np_call_localret_ent(__Compare___type_desc__type_ctor_desc_0_0,
		__Compare___type_desc__pseudo_type_rep_0_0_i9);
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i30);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, pseudo_type_desc);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i43);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i17);
	}
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i41);
	}
	MR_r3 = MR_tfield(2, MR_sv(1), 0);
	MR_r4 = MR_tfield(2, MR_sv(2), 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i37);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i24);
	}
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_sv(1), 0);
	MR_r4 = MR_tfield(1, MR_sv(2), 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i26);
	}
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(__Compare___type_desc__pseudo_type_rep_0_0_i37);
	}
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___type_desc__pseudo_type_rep_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module33)
	MR_init_entry1(type_desc__list__map__ho5_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__list__map__ho5_3_0);
	MR_init_label4(type_desc__list__map__ho5_3_0,28,5,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map__ho5'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(type_desc__list__map__ho5_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(type_desc__list__map__ho5_3_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(type_desc__list__map__ho5_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 1);
	{
#define	MR_PROC_LABEL	mercury__type_desc__list__map__ho5_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 88 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 2522 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(type_desc__list__map__ho5_3_0_i5);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(type_desc__list__map__ho5_3_0,
		type_desc__list__map__ho5_3_0_i10);
MR_def_label(type_desc__list__map__ho5_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_info_to_type_desc/2", 24);
	MR_np_call_localret_ent(require__error_1_0,
		type_desc__list__map__ho5_3_0_i9);
MR_def_label(type_desc__list__map__ho5_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(type_desc__list__map__ho5_3_0,
		type_desc__list__map__ho5_3_0_i10);
MR_def_label(type_desc__list__map__ho5_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module34)
	MR_init_entry1(type_desc__list__all_true__ho6_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__type_desc__list__all_true__ho6_2_0);
	MR_init_label4(type_desc__list__all_true__ho6_2_0,29,6,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_true__ho6'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(type_desc__list__all_true__ho6_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(type_desc__list__all_true__ho6_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(type_desc__list__all_true__ho6_2_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	{
	MR_Word	PseudoTypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgPseudoTypeInfos;
#define	MR_PROC_LABEL	mercury__type_desc__list__all_true__ho6_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	PseudoTypeDesc = MR_r2;
{
#line 720 "type_desc.m"
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
};}
#line 2607 "type_desc.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(type_desc__list__all_true__ho6_2_0_i1);
	MR_tempr1 = ArgPseudoTypeInfos;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(type_desc__list__all_true__ho6_2_0,
		type_desc__list__all_true__ho6_2_0_i6);
MR_def_label(type_desc__list__all_true__ho6_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(type_desc__list__all_true__ho6_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(type_desc__list__all_true__ho6_2_0_i29);
MR_def_label(type_desc__list__all_true__ho6_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(type_desc__list__all_true__ho6_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module35)
	MR_init_entry1(f_116_121_112_101_95_100_101_115_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_121_112_101_95_100_101_115_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__same_type__[1, 2, 3]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_121_112_101_95_100_101_115_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(type_desc_module36)
	MR_init_entry1(fn__f_116_121_112_101_95_100_101_115_99_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_121_112_101_95_100_101_115_99_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_121_112_101_95_100_101_115_99_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__fn__type_desc__get_type_info_for_type_info_0_0);

MR_Word
ML_get_type_info_for_type_info(void);

MR_Word
ML_get_type_info_for_type_info(void)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__type_desc__get_type_info_for_type_info_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__type_desc__get_type_info_for_type_info_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_entry(mercury__fn__type_desc__type_name_1_0);

MR_String
ML_type_name(MR_Word Mercury__argument1);

MR_String
ML_type_name(MR_Word Mercury__argument1)
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
	MR_String return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__type_desc__type_name_1_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__type_desc__type_name_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__type_desc__call_rtti_compare_type_infos_3_0);

void
ML_call_rtti_compare_type_infos(MR_Word * Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3);

void
ML_call_rtti_compare_type_infos(MR_Word * Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__type_desc__call_rtti_compare_type_infos_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument2;
	MR_r2 = Mercury__argument3;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__type_desc__call_rtti_compare_type_infos_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument1 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__type_desc_maybe_bunch_0(void)
{
	type_desc_module0();
	type_desc_module1();
	type_desc_module2();
	type_desc_module3();
	type_desc_module4();
	type_desc_module5();
	type_desc_module6();
	type_desc_module7();
	type_desc_module8();
	type_desc_module9();
	type_desc_module10();
	type_desc_module11();
	type_desc_module12();
	type_desc_module13();
	type_desc_module14();
	type_desc_module15();
	type_desc_module16();
	type_desc_module17();
	type_desc_module18();
	type_desc_module19();
	type_desc_module20();
	type_desc_module21();
	type_desc_module22();
	type_desc_module23();
	type_desc_module24();
	type_desc_module25();
	type_desc_module26();
	type_desc_module27();
	type_desc_module28();
	type_desc_module29();
	type_desc_module30();
	type_desc_module31();
	type_desc_module32();
	type_desc_module33();
	type_desc_module34();
	type_desc_module35();
	type_desc_module36();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__type_desc__init(void);
void mercury__type_desc__init_type_tables(void);
void mercury__type_desc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__type_desc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__type_desc__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__type_desc__init_threadscope_string_table(void);
#endif

void mercury__type_desc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__type_desc_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_type_desc__type_ctor_info_pseudo_type_rep_0,
		type_desc__pseudo_type_rep_0_0);
	mercury__type_desc__init_debugger();
}

void mercury__type_desc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_type_desc__type_ctor_info_pseudo_type_rep_0);
	}
}


void mercury__type_desc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__type_desc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__type_desc);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__type_desc__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__type_desc__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
