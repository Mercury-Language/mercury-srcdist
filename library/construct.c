/*
** Automatically generated from `construct.m'
** by the Mercury compiler,
** version rotd-2011-05-29, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__construct__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "construct.c"
#include "construct.mh"

#line 28 "construct.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "construct.c"
#line 150 "io.int2"
#include "string.mh"

#line 36 "construct.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "construct.c"
#line 30 "time.int2"
#include "time.mh"

#line 44 "construct.c"
#line 33 "array.int2"
#include "array.mh"

#line 48 "construct.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 52 "construct.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 56 "construct.c"
#line 61 "array.opt"
#include "store.mh"

#line 60 "construct.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 64 "construct.c"
#line 156 "io.opt"
#include "dir.mh"

#line 68 "construct.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 72 "construct.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 76 "construct.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "construct.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "construct.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 88 "construct.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 92 "construct.c"
#line 4 "char.opt"
#include "char.mh"

#line 96 "construct.c"
#line 4 "int.opt"
#include "int.mh"

#line 100 "construct.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 104 "construct.c"
#line 129 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 108 "construct.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 112 "construct.c"
#line 113 "construct.c"
#ifndef CONSTRUCT_DECL_GUARD
#define CONSTRUCT_DECL_GUARD

#line 117 "construct.c"
#line 138 "construct.m"


#include "mercury_type_desc.h"
#include "mercury_construct.h"


#line 125 "construct.c"
#line 126 "construct.c"

#endif
#line 129 "construct.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_construct__type_ctor_info_functor_number_lex_0,
	mercury_data_construct__type_ctor_info_functor_number_ordinal_0;
MR_decl_label1(construct__find_functor_5_0, 1)
MR_decl_label5(construct__find_functor_2_6_0, 27,3,5,2,1)
MR_decl_label1(construct__get_functor_internal_5_0, 1)
MR_decl_label1(construct__get_functor_ordinal_3_0, 1)
MR_decl_label3(construct__get_functor_with_names_6_0, 2,4,1)
MR_decl_label1(construct__get_functor_with_names_internal_6_0, 1)
MR_decl_label1(construct__null_1_0, 1)
MR_decl_label1(fn__construct__construct_3_0, 1)
MR_decl_label2(fn__construct__construct_tuple_1_0, 2,3)
MR_decl_label1(fn__construct__det_num_functors_1_0, 2)
MR_decl_label1(fn__construct__get_functor_lex_2_0, 1)
MR_decl_label1(fn__construct__get_functor_ordinal_2_0, 1)
MR_decl_label1(fn__construct__null_to_no_1_0, 3)
MR_decl_label1(fn__construct__num_functors_1_0, 1)
MR_decl_label3(fn__construct__list__map__ho5_2_0, 17,4,5)
MR_decl_label2(fn__construct__list__map__ho6_2_0, 16,4)
MR_decl_label3(fn__construct__list__map__ho7_2_0, 28,5,10)
MR_decl_label2(__Compare___construct__functor_number_lex_0_0, 2,3)
MR_decl_label2(__Compare___construct__functor_number_ordinal_0_0, 2,3)
MR_def_extern_entry(fn__construct__num_functors_1_0)
MR_def_extern_entry(fn__construct__det_num_functors_1_0)
MR_def_extern_entry(construct__get_functor_internal_5_0)
MR_def_extern_entry(construct__get_functor_5_0)
MR_def_extern_entry(construct__get_functor_with_names_internal_6_0)
MR_def_extern_entry(construct__get_functor_with_names_6_0)
MR_def_extern_entry(construct__get_functor_ordinal_3_0)
MR_def_extern_entry(fn__construct__get_functor_ordinal_2_0)
MR_def_extern_entry(fn__construct__get_functor_lex_2_0)
MR_def_extern_entry(construct__find_functor_2_6_0)
MR_def_extern_entry(construct__find_functor_5_0)
MR_def_extern_entry(fn__construct__construct_3_0)
MR_def_extern_entry(fn__construct__construct_tuple_2_3_0)
MR_def_extern_entry(fn__construct__construct_tuple_1_0)
MR_def_extern_entry(construct__null_1_0)
MR_def_extern_entry(fn__construct__null_to_no_1_0)
MR_def_extern_entry(__Unify___construct__functor_number_lex_0_0)
MR_def_extern_entry(__Compare___construct__functor_number_lex_0_0)
MR_def_extern_entry(__Unify___construct__functor_number_ordinal_0_0)
MR_def_extern_entry(__Compare___construct__functor_number_ordinal_0_0)
MR_decl_static(fn__construct__list__map__ho5_2_0)
MR_decl_static(fn__construct__list__map__ho6_2_0)
MR_decl_static(fn__construct__list__map__ho7_2_0)
MR_decl_static(fn__f_99_111_110_115_116_114_117_99_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_construct__type_ctor_info_functor_number_lex_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___construct__functor_number_lex_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___construct__functor_number_lex_0_0)),
	"construct",
	"functor_number_lex",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_construct__type_ctor_info_functor_number_ordinal_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___construct__functor_number_ordinal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___construct__functor_number_ordinal_0_0)),
	"construct",
	"functor_number_ordinal",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(construct_module0)
	MR_init_entry1(fn__construct__num_functors_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__construct__num_functors_1_0);
	MR_init_label1(fn__construct__num_functors_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_functors'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__construct__num_functors_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__fn__construct__num_functors_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r1;
{
#line 155 "construct.m"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 251 "construct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__construct__num_functors_1_0_i1);
	MR_r2 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__construct__num_functors_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(construct_module1)
	MR_init_entry1(fn__construct__det_num_functors_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__construct__det_num_functors_1_0);
	MR_init_label1(fn__construct__det_num_functors_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_num_functors'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__construct__det_num_functors_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__fn__construct__det_num_functors_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r1;
{
#line 155 "construct.m"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 303 "construct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__construct__det_num_functors_1_0_i2);
	MR_r1 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__construct__det_num_functors_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("construct.det_num_functors: type does not have functors", 55);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module2)
	MR_init_entry1(construct__get_functor_internal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__construct__get_functor_internal_5_0);
	MR_init_label1(construct__get_functor_internal_5_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_functor_internal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__construct__get_functor_internal_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeDesc;
	MR_Integer	FunctorNumber;
	MR_String	FunctorName;
	MR_Integer	Arity;
	MR_Word	PseudoTypeInfoList;
#define	MR_PROC_LABEL	mercury__construct__get_functor_internal_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeDesc = MR_r1;
	FunctorNumber = MR_r2;
{
#line 207 "construct.m"
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    int                 arity;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

        /*
        ** If type_info is an equivalence type, expand it.
        */
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    MR_restore_transient_registers();

        /*
        ** Get information for this functor number and store in construct_info.
        ** If this is a discriminated union type and if the functor number
        ** is in range, we succeed.
        */
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info,
        &construct_info);
    MR_restore_transient_registers();

        /*
        ** Get the functor name and arity, construct the list
        ** of type_infos for arguments.
        */

    if (success) {
        MR_make_aligned_string(FunctorName, construct_info.functor_name);
        arity = construct_info.arity;
        Arity = arity;

        if (MR_TYPE_CTOR_INFO_IS_TUPLE(
            MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info)))
        {
            MR_save_transient_registers();
            PseudoTypeInfoList = MR_type_params_vector_to_list(Arity,
                MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info));
            MR_restore_transient_registers();
        } else {
            MR_save_transient_registers();
            PseudoTypeInfoList =
                MR_pseudo_type_info_vector_to_pseudo_type_info_list(arity,
                    MR_TYPEINFO_GET_FIXED_ARITY_ARG_VECTOR(type_info),
                    construct_info.arg_pseudo_type_infos);
            MR_restore_transient_registers();
        }
    }
    SUCCESS_INDICATOR = success;
};}
#line 404 "construct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(construct__get_functor_internal_5_0_i1);
	MR_r2 = (MR_Word) FunctorName;
	MR_r3 = Arity;
	MR_r4 = PseudoTypeInfoList;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(construct__get_functor_internal_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module3)
	MR_init_entry1(construct__get_functor_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__construct__get_functor_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_functor'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__construct__get_functor_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(construct__get_functor_internal_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module4)
	MR_init_entry1(construct__get_functor_with_names_internal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__construct__get_functor_with_names_internal_6_0);
	MR_init_label1(construct__get_functor_with_names_internal_6_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_functor_with_names_internal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__construct__get_functor_with_names_internal_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeDesc;
	MR_Integer	FunctorNumber;
	MR_String	FunctorName;
	MR_Integer	Arity;
	MR_Word	PseudoTypeInfoList;
	MR_Word	ArgNameList;
#define	MR_PROC_LABEL	mercury__construct__get_functor_with_names_internal_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeDesc = MR_r1;
	FunctorNumber = MR_r2;
{
#line 290 "construct.m"
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    int                 arity;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

        /*
        ** If type_info is an equivalence type, expand it.
        */
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    MR_restore_transient_registers();

        /*
        ** Get information for this functor number and
        ** store in construct_info. If this is a discriminated union
        ** type and if the functor number is in range, we
        ** succeed.
        */
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info,
        &construct_info);
    MR_restore_transient_registers();

        /*
        ** Get the functor name and arity, construct the list
        ** of type_infos for arguments.
        */

    if (success) {
        MR_make_aligned_string(FunctorName, construct_info.functor_name);
        arity = construct_info.arity;
        Arity = arity;

        if (MR_TYPE_CTOR_INFO_IS_TUPLE(
            MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info)))
        {
            int i;

            MR_save_transient_registers();
            PseudoTypeInfoList = MR_type_params_vector_to_list(Arity,
                MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info));
            ArgNameList = MR_list_empty();
            for (i = 0; i < Arity; i++) {
                ArgNameList = MR_string_list_cons_msg((MR_Word) NULL,
                    ArgNameList, MR_ALLOC_ID);
            }
            MR_restore_transient_registers();
        } else {
            MR_save_transient_registers();
            PseudoTypeInfoList =
                MR_pseudo_type_info_vector_to_pseudo_type_info_list(arity,
                    MR_TYPEINFO_GET_FIXED_ARITY_ARG_VECTOR(type_info),
                    construct_info.arg_pseudo_type_infos);
            ArgNameList = MR_arg_name_vector_to_list(arity,
                construct_info.arg_names);
            MR_restore_transient_registers();
        }
    }
    SUCCESS_INDICATOR = success;
};}
#line 539 "construct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(construct__get_functor_with_names_internal_6_0_i1);
	MR_r2 = (MR_Word) FunctorName;
	MR_r3 = Arity;
	MR_r4 = PseudoTypeInfoList;
	MR_r5 = ArgNameList;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(construct__get_functor_with_names_internal_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module5)
	MR_init_entry1(construct__get_functor_with_names_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__construct__get_functor_with_names_6_0);
	MR_init_label3(construct__get_functor_with_names_6_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_functor_with_names'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__construct__get_functor_with_names_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(construct__get_functor_with_names_internal_6_0,
		construct__get_functor_with_names_6_0_i2);
MR_def_label(construct__get_functor_with_names_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(construct__get_functor_with_names_6_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(fn__construct__list__map__ho7_2_0,
		construct__get_functor_with_names_6_0_i4);
MR_def_label(construct__get_functor_with_names_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(construct__get_functor_with_names_6_0,1)
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


MR_BEGIN_MODULE(construct_module6)
	MR_init_entry1(construct__get_functor_ordinal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__construct__get_functor_ordinal_3_0);
	MR_init_label1(construct__get_functor_ordinal_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_functor_ordinal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__construct__get_functor_ordinal_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeDesc;
	MR_Integer	FunctorNumber;
	MR_Integer	Ordinal;
#define	MR_PROC_LABEL	mercury__construct__get_functor_ordinal_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeDesc = MR_r1;
	FunctorNumber = MR_r2;
{
#line 407 "construct.m"
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

    /*
    ** Get information for this functor number and store in construct_info.
    ** If this is a discriminated union type and if the functor number is
    ** in range, we succeed.
    */
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info,
        &construct_info);
    MR_restore_transient_registers();

    if (success) {
        switch (construct_info.type_ctor_rep) {

        case MR_TYPECTOR_REP_ENUM:
        case MR_TYPECTOR_REP_ENUM_USEREQ:
            Ordinal = construct_info.functor_info.
                enum_functor_desc->MR_enum_functor_ordinal;
            break;
        
        case MR_TYPECTOR_REP_FOREIGN_ENUM:
        case MR_TYPECTOR_REP_FOREIGN_ENUM_USEREQ:
            Ordinal = construct_info.functor_info.
                foreign_enum_functor_desc->MR_foreign_enum_functor_ordinal;
            break;

        case MR_TYPECTOR_REP_DUMMY:
        case MR_TYPECTOR_REP_NOTAG:
        case MR_TYPECTOR_REP_NOTAG_USEREQ:
        case MR_TYPECTOR_REP_NOTAG_GROUND:
        case MR_TYPECTOR_REP_NOTAG_GROUND_USEREQ:
        case MR_TYPECTOR_REP_TUPLE:
            Ordinal = 0;
            break;

        case MR_TYPECTOR_REP_DU:
        case MR_TYPECTOR_REP_DU_USEREQ:
        case MR_TYPECTOR_REP_RESERVED_ADDR:
        case MR_TYPECTOR_REP_RESERVED_ADDR_USEREQ:
            Ordinal = construct_info.functor_info.
                du_functor_desc->MR_du_functor_ordinal;
            break;

        case MR_TYPECTOR_REP_EQUIV:
        case MR_TYPECTOR_REP_EQUIV_GROUND:
        case MR_TYPECTOR_REP_FUNC:
        case MR_TYPECTOR_REP_PRED:
        case MR_TYPECTOR_REP_INT:
        case MR_TYPECTOR_REP_FLOAT:
        case MR_TYPECTOR_REP_CHAR:
        case MR_TYPECTOR_REP_STRING:
        case MR_TYPECTOR_REP_BITMAP:
        case MR_TYPECTOR_REP_SUBGOAL:
        case MR_TYPECTOR_REP_VOID:
        case MR_TYPECTOR_REP_C_POINTER:
        case MR_TYPECTOR_REP_STABLE_C_POINTER:
        case MR_TYPECTOR_REP_TYPEINFO:
        case MR_TYPECTOR_REP_TYPECTORINFO:
        case MR_TYPECTOR_REP_TYPECLASSINFO:
        case MR_TYPECTOR_REP_BASETYPECLASSINFO:
        case MR_TYPECTOR_REP_TYPEDESC:
        case MR_TYPECTOR_REP_TYPECTORDESC:
        case MR_TYPECTOR_REP_PSEUDOTYPEDESC:
        case MR_TYPECTOR_REP_ARRAY:
        case MR_TYPECTOR_REP_REFERENCE:
        case MR_TYPECTOR_REP_SUCCIP:
        case MR_TYPECTOR_REP_HP:
        case MR_TYPECTOR_REP_CURFR:
        case MR_TYPECTOR_REP_MAXFR:
        case MR_TYPECTOR_REP_REDOFR:
        case MR_TYPECTOR_REP_REDOIP:
        case MR_TYPECTOR_REP_TRAIL_PTR:
        case MR_TYPECTOR_REP_TICKET:
        case MR_TYPECTOR_REP_FOREIGN:
        case MR_TYPECTOR_REP_STABLE_FOREIGN:
        case MR_TYPECTOR_REP_UNKNOWN:
            success = MR_FALSE;

        }
    }
    SUCCESS_INDICATOR = success;
};}
#line 728 "construct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(construct__get_functor_ordinal_3_0_i1);
	MR_r2 = Ordinal;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(construct__get_functor_ordinal_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module7)
	MR_init_entry1(fn__construct__get_functor_ordinal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__construct__get_functor_ordinal_2_0);
	MR_init_label1(fn__construct__get_functor_ordinal_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_functor_ordinal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__construct__get_functor_ordinal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeDesc;
	MR_Integer	FunctorNumber;
	MR_Integer	Ordinal;
#define	MR_PROC_LABEL	mercury__fn__construct__get_functor_ordinal_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeDesc = MR_r1;
	FunctorNumber = MR_r2;
{
#line 407 "construct.m"
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

    /*
    ** Get information for this functor number and store in construct_info.
    ** If this is a discriminated union type and if the functor number is
    ** in range, we succeed.
    */
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info,
        &construct_info);
    MR_restore_transient_registers();

    if (success) {
        switch (construct_info.type_ctor_rep) {

        case MR_TYPECTOR_REP_ENUM:
        case MR_TYPECTOR_REP_ENUM_USEREQ:
            Ordinal = construct_info.functor_info.
                enum_functor_desc->MR_enum_functor_ordinal;
            break;
        
        case MR_TYPECTOR_REP_FOREIGN_ENUM:
        case MR_TYPECTOR_REP_FOREIGN_ENUM_USEREQ:
            Ordinal = construct_info.functor_info.
                foreign_enum_functor_desc->MR_foreign_enum_functor_ordinal;
            break;

        case MR_TYPECTOR_REP_DUMMY:
        case MR_TYPECTOR_REP_NOTAG:
        case MR_TYPECTOR_REP_NOTAG_USEREQ:
        case MR_TYPECTOR_REP_NOTAG_GROUND:
        case MR_TYPECTOR_REP_NOTAG_GROUND_USEREQ:
        case MR_TYPECTOR_REP_TUPLE:
            Ordinal = 0;
            break;

        case MR_TYPECTOR_REP_DU:
        case MR_TYPECTOR_REP_DU_USEREQ:
        case MR_TYPECTOR_REP_RESERVED_ADDR:
        case MR_TYPECTOR_REP_RESERVED_ADDR_USEREQ:
            Ordinal = construct_info.functor_info.
                du_functor_desc->MR_du_functor_ordinal;
            break;

        case MR_TYPECTOR_REP_EQUIV:
        case MR_TYPECTOR_REP_EQUIV_GROUND:
        case MR_TYPECTOR_REP_FUNC:
        case MR_TYPECTOR_REP_PRED:
        case MR_TYPECTOR_REP_INT:
        case MR_TYPECTOR_REP_FLOAT:
        case MR_TYPECTOR_REP_CHAR:
        case MR_TYPECTOR_REP_STRING:
        case MR_TYPECTOR_REP_BITMAP:
        case MR_TYPECTOR_REP_SUBGOAL:
        case MR_TYPECTOR_REP_VOID:
        case MR_TYPECTOR_REP_C_POINTER:
        case MR_TYPECTOR_REP_STABLE_C_POINTER:
        case MR_TYPECTOR_REP_TYPEINFO:
        case MR_TYPECTOR_REP_TYPECTORINFO:
        case MR_TYPECTOR_REP_TYPECLASSINFO:
        case MR_TYPECTOR_REP_BASETYPECLASSINFO:
        case MR_TYPECTOR_REP_TYPEDESC:
        case MR_TYPECTOR_REP_TYPECTORDESC:
        case MR_TYPECTOR_REP_PSEUDOTYPEDESC:
        case MR_TYPECTOR_REP_ARRAY:
        case MR_TYPECTOR_REP_REFERENCE:
        case MR_TYPECTOR_REP_SUCCIP:
        case MR_TYPECTOR_REP_HP:
        case MR_TYPECTOR_REP_CURFR:
        case MR_TYPECTOR_REP_MAXFR:
        case MR_TYPECTOR_REP_REDOFR:
        case MR_TYPECTOR_REP_REDOIP:
        case MR_TYPECTOR_REP_TRAIL_PTR:
        case MR_TYPECTOR_REP_TICKET:
        case MR_TYPECTOR_REP_FOREIGN:
        case MR_TYPECTOR_REP_STABLE_FOREIGN:
        case MR_TYPECTOR_REP_UNKNOWN:
            success = MR_FALSE;

        }
    }
    SUCCESS_INDICATOR = success;
};}
#line 862 "construct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__construct__get_functor_ordinal_2_0_i1);
	MR_r2 = Ordinal;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__construct__get_functor_ordinal_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module8)
	MR_init_entry1(fn__construct__get_functor_lex_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__construct__get_functor_lex_2_0);
	MR_init_label1(fn__construct__get_functor_lex_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_functor_lex'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__construct__get_functor_lex_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeDesc;
	MR_Integer	Ordinal;
	MR_Integer	FunctorNumber;
#define	MR_PROC_LABEL	mercury__fn__construct__get_functor_lex_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeDesc = MR_r1;
	Ordinal = MR_r2;
{
#line 509 "construct.m"
{
    MR_TypeInfo         type_info;
    MR_TypeCtorInfo     type_ctor_info;
    MR_Construct_Info   construct_info;
    MR_bool             success;
    int                 num_functors;

    type_info = (MR_TypeInfo) TypeDesc;

    /*
    ** Get information for this functor number and store in construct_info.
    ** If this is a discriminated union type and if the functor number is
    ** in range, we succeed.
    */
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    num_functors = MR_get_num_functors(type_info);
    MR_restore_transient_registers();
    type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);
    if (Ordinal < 0 || Ordinal >= num_functors
            || type_ctor_info->MR_type_ctor_version
                < MR_RTTI_VERSION__FUNCTOR_NUMBERS
            || !type_ctor_info->MR_type_ctor_functor_number_map)
    {
        SUCCESS_INDICATOR = MR_FALSE; 
    } else {
        FunctorNumber =
            type_ctor_info->MR_type_ctor_functor_number_map[Ordinal];
        SUCCESS_INDICATOR = MR_TRUE; 
    }
};}
#line 939 "construct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__construct__get_functor_lex_2_0_i1);
	MR_r2 = FunctorNumber;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__construct__get_functor_lex_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module9)
	MR_init_entry1(construct__find_functor_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__construct__find_functor_2_6_0);
	MR_init_label5(construct__find_functor_2_6_0,27,3,5,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_functor_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__construct__find_functor_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(construct__find_functor_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r4,0)) {
		MR_GOTO_LAB(construct__find_functor_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(construct__get_functor_internal_5_0,
		construct__find_functor_2_6_0_i3);
MR_def_label(construct__find_functor_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(construct__find_functor_2_6_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(construct__find_functor_2_6_0_i2);
	}
	if ((MR_sv(3) != MR_r3)) {
		MR_GOTO_LAB(construct__find_functor_2_6_0_i2);
	}
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__construct__list__map__ho5_2_0,
		construct__find_functor_2_6_0_i5);
MR_def_label(construct__find_functor_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(construct__find_functor_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(construct__find_functor_2_6_0_i27);
MR_def_label(construct__find_functor_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module10)
	MR_init_entry1(construct__find_functor_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__construct__find_functor_5_0);
	MR_init_label1(construct__find_functor_5_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_functor'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__construct__find_functor_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__construct__find_functor_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r1;
{
#line 155 "construct.m"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 1060 "construct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(construct__find_functor_5_0_i1);
	MR_r4 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(construct__find_functor_2_6_0);
MR_def_label(construct__find_functor_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module11)
	MR_init_entry1(fn__construct__construct_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__construct__construct_3_0);
	MR_init_label1(fn__construct__construct_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__construct__construct_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeDesc;
	MR_Integer	FunctorNumber;
	MR_Word	ArgList;
	MR_Word	Term;
#define	MR_PROC_LABEL	mercury__fn__construct__construct_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeDesc = MR_r1;
	FunctorNumber = MR_r2;
	ArgList = MR_r3;
{
#line 563 "construct.m"
{
    MR_TypeInfo         type_info;
    MR_TypeCtorInfo     type_ctor_info;
    MR_Word             new_data;
    MR_Construct_Info   construct_info;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

    /* If type_info is an equivalence type, expand it. */
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    MR_restore_transient_registers();

    /* Check range of FunctorNum, get info for this functor. */
    MR_save_transient_registers();
    success =
        MR_get_functors_check_range(FunctorNumber, type_info, &construct_info)
        && MR_typecheck_arguments(type_info, construct_info.arity, ArgList,
            construct_info.arg_pseudo_type_infos);
    MR_restore_transient_registers();

    /* Build the new term in `new_data'. */
    if (success) {
        type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);

        if (MR_type_ctor_rep(type_ctor_info) != construct_info.type_ctor_rep) {
            MR_fatal_error("construct.construct: type_ctor_rep mismatch");
        }

        switch (MR_type_ctor_rep(type_ctor_info)) {

        case MR_TYPECTOR_REP_ENUM:
        case MR_TYPECTOR_REP_ENUM_USEREQ:
            new_data = construct_info.functor_info.enum_functor_desc->
                MR_enum_functor_ordinal;
            break;
        
        case MR_TYPECTOR_REP_FOREIGN_ENUM:
        case MR_TYPECTOR_REP_FOREIGN_ENUM_USEREQ:
            new_data = construct_info.functor_info.foreign_enum_functor_desc->
                MR_foreign_enum_functor_value;
            break;

        case MR_TYPECTOR_REP_NOTAG:
        case MR_TYPECTOR_REP_NOTAG_USEREQ:
        case MR_TYPECTOR_REP_NOTAG_GROUND:
        case MR_TYPECTOR_REP_NOTAG_GROUND_USEREQ:
            if (MR_list_is_empty(ArgList)) {
                MR_fatal_error("notag arg list is empty");
            }

            if (! MR_list_is_empty(MR_list_tail(ArgList))) {
                MR_fatal_error("notag arg list is too long");
            }

            new_data = MR_field(MR_UNIV_TAG, MR_list_head(ArgList),
                MR_UNIV_OFFSET_FOR_DATA);
            break;

        case MR_TYPECTOR_REP_RESERVED_ADDR:
        case MR_TYPECTOR_REP_RESERVED_ADDR_USEREQ:
        /*
        ** First check whether the functor we want is one of the
        ** reserved addresses.
        */
        {
            int                                 i;
            MR_ReservedAddrTypeLayout           ra_layout;
            int                                 total_reserved_addrs;
            const MR_ReservedAddrFunctorDesc    *functor_desc;

            ra_layout = MR_type_ctor_layout(type_ctor_info).
                MR_layout_reserved_addr;
            total_reserved_addrs = ra_layout->MR_ra_num_res_numeric_addrs
                + ra_layout->MR_ra_num_res_symbolic_addrs;

            for (i = 0; i < total_reserved_addrs; i++) {
                functor_desc = ra_layout->MR_ra_constants[i];
                if (functor_desc->MR_ra_functor_ordinal == FunctorNumber) {
                    new_data = (MR_Word)
                    functor_desc->MR_ra_functor_reserved_addr;

                    /* `break' here would just exit the `for' loop */
                    goto end_of_main_switch;
                }
            }
        }

        /*
        ** Otherwise, it is not one of the reserved addresses,
        ** so handle it like a normal DU type.
        */

        /* fall through */

        case MR_TYPECTOR_REP_DU:
        case MR_TYPECTOR_REP_DU_USEREQ:
            {
                const MR_DuFunctorDesc  *functor_desc;
                MR_Word                 arg_list;
                MR_Word                 ptag;
                MR_Word                 arity;
                MR_Word                 arg_data;
                MR_TypeInfo             arg_type_info;
                int                     size;
                int                     i;

                functor_desc = construct_info.functor_info.du_functor_desc;
                if (functor_desc->MR_du_functor_exist_info != NULL) {
                    MR_fatal_error("not yet implemented: construction "
                        "of terms containing existential types");
                }

                arg_list = ArgList;
                ptag = functor_desc->MR_du_functor_primary;
                switch (functor_desc->MR_du_functor_sectag_locn) {

                case MR_SECTAG_LOCAL:
                    new_data = (MR_Word) MR_mkword(ptag,
                        MR_mkbody((MR_Word)
                            functor_desc->MR_du_functor_secondary));
                    break;

                case MR_SECTAG_REMOTE:
                    arity = functor_desc->MR_du_functor_orig_arity;

                    MR_tag_offset_incr_hp_msg(new_data, ptag,
                        MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1 + arity,
                        MR_ALLOC_ID, "<created by construct.construct/3>");

                    size = MR_cell_size(arity);
                    MR_field(ptag, new_data, 0) =
                        functor_desc->MR_du_functor_secondary;
                    for (i = 0; i < arity; i++) {
                        arg_data = MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_DATA);
                        arg_type_info = (MR_TypeInfo) MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_TYPEINFO);
                        MR_field(ptag, new_data, i + 1) = arg_data;
                        size += MR_term_size(arg_type_info, arg_data);
                        arg_list = MR_list_tail(arg_list);
                    }

                    MR_define_size_slot(ptag, new_data, size);
                    break;

                case MR_SECTAG_NONE:
                    arity = functor_desc->MR_du_functor_orig_arity;

                    MR_tag_offset_incr_hp_msg(new_data, ptag,
                        MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + arity,
                        MR_ALLOC_ID, "<created by construct.construct/3>");

                    size = MR_cell_size(arity);
                    for (i = 0; i < arity; i++) {
                        arg_data = MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_DATA);
                        arg_type_info = (MR_TypeInfo) MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_TYPEINFO);
                        MR_field(ptag, new_data, i) = arg_data;
                        size += MR_term_size(arg_type_info, arg_data);
                        arg_list = MR_list_tail(arg_list);
                    }

                    MR_define_size_slot(ptag, new_data, size);
                    break;

                case MR_SECTAG_VARIABLE:
                    new_data = (MR_Word) 0;     /* avoid a warning */
                    MR_fatal_error("construct(): cannot construct variable");

#ifdef MR_INCLUDE_SWITCH_DEFAULTS
                default:
                    new_data = (MR_Word) 0;     /* avoid a warning */
                    MR_fatal_error("construct(): unrecognised sectag locn");
#endif

                }

                if (! MR_list_is_empty(arg_list)) {
                    MR_fatal_error("excess arguments in construct.construct");
                }
            }
            break;

        case MR_TYPECTOR_REP_TUPLE:
            {
                int         arity;
                int         i;
                int         size;
                MR_Word     arg_list;
                MR_Word     arg_data;
                MR_TypeInfo arg_type_info;

                arity = MR_TYPEINFO_GET_VAR_ARITY_ARITY(type_info);

                if (arity == 0) {
                    new_data = (MR_Word) NULL;
                } else {
                    MR_offset_incr_hp_msg(new_data, MR_SIZE_SLOT_SIZE,
                        MR_SIZE_SLOT_SIZE + arity, MR_ALLOC_ID,
                        "<created by construct.construct/3>");

                    size = MR_cell_size(arity);
                    arg_list = ArgList;
                    for (i = 0; i < arity; i++) {
                        arg_data = MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_DATA);
                        arg_type_info = (MR_TypeInfo) MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_TYPEINFO);
                        MR_field(MR_mktag(0), new_data, i) = arg_data;
                        size += MR_term_size(arg_type_info, arg_data);
                        arg_list = MR_list_tail(arg_list);
                    }

                    MR_define_size_slot(MR_mktag(0), new_data, size);
                    if (! MR_list_is_empty(arg_list)) {
                        MR_fatal_error(
                            "excess arguments in construct.construct");
                    }
                }
            }
            break;

        case MR_TYPECTOR_REP_DUMMY:
            /*
            ** The value of the dummy type will never be looked at,
            ** so it doesn't matter what new_data is set to.
            */
            new_data = (MR_Word) 0;
            break;

        case MR_TYPECTOR_REP_INT:
            /* ints don't have functor ordinals. */
            MR_fatal_error(
                "cannot construct int with construct.construct");
            break;

        case MR_TYPECTOR_REP_FLOAT:
            /* floats don't have functor ordinals. */
            MR_fatal_error(
                "cannot construct floats with construct.construct");
            break;

        case MR_TYPECTOR_REP_CHAR:
            /* chars don't have functor ordinals. */
            MR_fatal_error(
                "cannot construct chars with construct.construct");
            break;

        case MR_TYPECTOR_REP_STRING:
            /* strings don't have functor ordinals. */
            MR_fatal_error(
                "cannot construct strings with construct.construct");
            break;

        case MR_TYPECTOR_REP_BITMAP:
            /* bitmaps don't have functor ordinals. */
            MR_fatal_error(
                "cannot construct bitmaps with construct.construct");
            break;

        case MR_TYPECTOR_REP_EQUIV:
        case MR_TYPECTOR_REP_EQUIV_GROUND:
            /* These should be eliminated by MR_collapse_equivalences above. */
            MR_fatal_error("equiv type in construct.construct");
            break;

        case MR_TYPECTOR_REP_VOID:
            MR_fatal_error(
                "cannot construct void values with construct.construct");
            break;

        case MR_TYPECTOR_REP_FUNC:
            MR_fatal_error(
                "cannot construct functions with construct.construct");
            break;

        case MR_TYPECTOR_REP_PRED:
            MR_fatal_error(
                "cannot construct predicates with construct.construct");
            break;

        case MR_TYPECTOR_REP_SUBGOAL:
            MR_fatal_error(
                "cannot construct subgoals with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPEDESC:
            MR_fatal_error(
                "cannot construct type_descs with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPECTORDESC:
            MR_fatal_error(
                "cannot construct type_descs with construct.construct");
            break;

        case MR_TYPECTOR_REP_PSEUDOTYPEDESC:
            MR_fatal_error(
                "cannot construct pseudotype_descs with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPEINFO:
            MR_fatal_error(
                "cannot construct type_infos with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPECTORINFO:
            MR_fatal_error(
                "cannot construct type_ctor_infos with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPECLASSINFO:
            MR_fatal_error(
                "cannot construct type_class_infos with construct.construct");
            break;

        case MR_TYPECTOR_REP_BASETYPECLASSINFO:
            MR_fatal_error(
                "cannot construct base_type_class_infos "
                "with construct.construct");
            break;

        case MR_TYPECTOR_REP_SUCCIP:
            MR_fatal_error(
                "cannot construct succips with construct.construct");
            break;

        case MR_TYPECTOR_REP_HP:
            MR_fatal_error(
                "cannot construct hps with construct.construct");
            break;

        case MR_TYPECTOR_REP_CURFR:
            MR_fatal_error(
                "cannot construct curfrs with construct.construct");
            break;

        case MR_TYPECTOR_REP_MAXFR:
            MR_fatal_error(
                "cannot construct maxfrs with construct.construct");
            break;

        case MR_TYPECTOR_REP_REDOFR:
            MR_fatal_error(
                "cannot construct redofrs with construct.construct");
            break;

        case MR_TYPECTOR_REP_REDOIP:
            MR_fatal_error(
                "cannot construct redoips with construct.construct");
            break;

        case MR_TYPECTOR_REP_TRAIL_PTR:
            MR_fatal_error(
                "cannot construct trail_ptrs with construct.construct");
            break;

        case MR_TYPECTOR_REP_TICKET:
            MR_fatal_error(
                "cannot construct tickets with construct.construct");
            break;

        case MR_TYPECTOR_REP_C_POINTER:
        case MR_TYPECTOR_REP_STABLE_C_POINTER:
            MR_fatal_error(
                "cannot construct c_pointers with construct.construct");
            break;

        case MR_TYPECTOR_REP_ARRAY:
            MR_fatal_error(
                "cannot construct arrays with construct.construct");
            break;

        case MR_TYPECTOR_REP_REFERENCE:
            MR_fatal_error(
                "cannot construct references with construct.construct");
            break;

        case MR_TYPECTOR_REP_FOREIGN:
        case MR_TYPECTOR_REP_STABLE_FOREIGN:
            MR_fatal_error(
                "cannot construct values of foreign types "
                "with construct.construct");
            break;

        case MR_TYPECTOR_REP_UNKNOWN:
            MR_fatal_error(
                "cannot construct values of unknown types "
                "with construct.construct");
            break;

#ifdef MR_INCLUDE_SWITCH_DEFAULTS

        default:
            new_data = (MR_Word) 0;     /* avoid a warning */
            MR_fatal_error("bad type_ctor_rep in construct.construct");

#endif
        }

    end_of_main_switch:

        /*
        ** Create a univ.
        */

        MR_new_univ_on_hp(Term, type_info, new_data);
    }

    SUCCESS_INDICATOR = success;
};}
#line 1527 "construct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__construct__construct_3_0_i1);
	MR_r2 = Term;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__construct__construct_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module12)
	MR_init_entry1(fn__construct__construct_tuple_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__construct__construct_tuple_2_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_tuple_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__construct__construct_tuple_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Args;
	MR_Word	ArgTypes;
	MR_Integer	Arity;
	MR_Word	Term;
#define	MR_PROC_LABEL	mercury__fn__construct__construct_tuple_2_3_0
	Args = MR_r1;
	ArgTypes = MR_r2;
	Arity = MR_r3;
{
#line 1000 "construct.m"
{
    MR_TypeInfo type_info;
    MR_Word     new_data;
    int         i;
    MR_Word     arg_data;
    MR_TypeInfo arg_type_info;
    int         size;

    /*
    ** Construct a type_info for the tuple.
    */
    MR_save_transient_registers();
    type_info = MR_make_type(Arity, MR_TYPECTOR_DESC_MAKE_TUPLE(Arity),
        ArgTypes);
    MR_restore_transient_registers();

    /*
    ** Create the tuple.
    */
    if (Arity == 0) {
        new_data = (MR_Word) NULL;
    } else {
        MR_offset_incr_hp_msg(new_data, MR_SIZE_SLOT_SIZE,
            MR_SIZE_SLOT_SIZE + Arity, MR_ALLOC_ID,
            "<created by construct.construct_tuple/1>");

        size = MR_cell_size(Arity);
        for (i = 0; i < Arity; i++) {
            arg_data = MR_field(MR_UNIV_TAG, MR_list_head(Args),
                MR_UNIV_OFFSET_FOR_DATA);
            arg_type_info = (MR_TypeInfo) MR_field(MR_UNIV_TAG,
                MR_list_head(Args), MR_UNIV_OFFSET_FOR_TYPEINFO);
            MR_field(MR_mktag(0), new_data, i) = arg_data;
            size += MR_term_size(arg_type_info, arg_data);
            Args = MR_list_tail(Args);
        }

        MR_define_size_slot(MR_mktag(0), new_data, size);
    }

    /*
    ** Create a univ.
    */
    MR_new_univ_on_hp(Term, type_info, new_data);
};}
#line 1616 "construct.c"
	MR_r1 = Term;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
MR_decl_entry(list__length_2_3_0);

MR_BEGIN_MODULE(construct_module13)
	MR_init_entry1(fn__construct__construct_tuple_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__construct__construct_tuple_1_0);
	MR_init_label2(fn__construct__construct_tuple_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_tuple'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__construct__construct_tuple_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__construct__list__map__ho6_2_0,
		fn__construct__construct_tuple_1_0_i2);
MR_def_label(fn__construct__construct_tuple_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__construct__construct_tuple_1_0_i3);
MR_def_label(fn__construct__construct_tuple_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__construct__construct_tuple_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module14)
	MR_init_entry1(construct__null_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__construct__null_1_0);
	MR_init_label1(construct__null_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'null'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__construct__null_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	S;
#define	MR_PROC_LABEL	mercury__construct__null_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	S = (MR_String) MR_r1;
{
#line 363 "construct.m"

    SUCCESS_INDICATOR = (S == NULL);
;}
#line 1702 "construct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(construct__null_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(construct__null_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module15)
	MR_init_entry1(fn__construct__null_to_no_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__construct__null_to_no_1_0);
	MR_init_label1(fn__construct__null_to_no_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'null_to_no'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__construct__null_to_no_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	{
	MR_String	S;
#define	MR_PROC_LABEL	mercury__fn__construct__null_to_no_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	S = (MR_String) MR_r1;
{
#line 363 "construct.m"

    SUCCESS_INDICATOR = (S == NULL);
;}
#line 1748 "construct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__construct__null_to_no_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp(1);
	MR_proceed();
MR_def_label(fn__construct__null_to_no_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module16)
	MR_init_entry1(__Unify___construct__functor_number_lex_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___construct__functor_number_lex_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___construct__functor_number_lex_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module17)
	MR_init_entry1(__Compare___construct__functor_number_lex_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___construct__functor_number_lex_0_0);
	MR_init_label2(__Compare___construct__functor_number_lex_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___construct__functor_number_lex_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___construct__functor_number_lex_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___construct__functor_number_lex_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___construct__functor_number_lex_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___construct__functor_number_lex_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module18)
	MR_init_entry1(__Unify___construct__functor_number_ordinal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___construct__functor_number_ordinal_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___construct__functor_number_ordinal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module19)
	MR_init_entry1(__Compare___construct__functor_number_ordinal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___construct__functor_number_ordinal_0_0);
	MR_init_label2(__Compare___construct__functor_number_ordinal_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___construct__functor_number_ordinal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___construct__functor_number_ordinal_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___construct__functor_number_ordinal_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___construct__functor_number_ordinal_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___construct__functor_number_ordinal_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0);

MR_BEGIN_MODULE(construct_module20)
	MR_init_entry1(fn__construct__list__map__ho5_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__construct__list__map__ho5_2_0);
	MR_init_label3(fn__construct__list__map__ho5_2_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map__ho5'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__construct__list__map__ho5_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__construct__list__map__ho5_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__construct__list__map__ho5_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_0,
		fn__construct__list__map__ho5_2_0_i4);
MR_def_label(fn__construct__list__map__ho5_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__construct__list__map__ho5_2_0,
		fn__construct__list__map__ho5_2_0_i5);
MR_def_label(fn__construct__list__map__ho5_2_0,5)
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


MR_BEGIN_MODULE(construct_module21)
	MR_init_entry1(fn__construct__list__map__ho6_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__construct__list__map__ho6_2_0);
	MR_init_label2(fn__construct__list__map__ho6_2_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map__ho6'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__construct__list__map__ho6_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__construct__list__map__ho6_2_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__construct__list__map__ho6_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__construct__list__map__ho6_2_0
	TypeInfo_for_T = MR_r2;
{
#line 57 "type_desc.opt"
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
#line 1989 "construct.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__construct__list__map__ho6_2_0,
		fn__construct__list__map__ho6_2_0_i4);
MR_def_label(fn__construct__list__map__ho6_2_0,4)
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


MR_BEGIN_MODULE(construct_module22)
	MR_init_entry1(fn__construct__list__map__ho7_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__construct__list__map__ho7_2_0);
	MR_init_label3(fn__construct__list__map__ho7_2_0,28,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map__ho7'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__construct__list__map__ho7_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__construct__list__map__ho7_2_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__construct__list__map__ho7_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	{
	MR_String	S;
#define	MR_PROC_LABEL	mercury__fn__construct__list__map__ho7_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	S = (MR_String) MR_sv(1);
{
#line 363 "construct.m"

    SUCCESS_INDICATOR = (S == NULL);
;}
#line 2048 "construct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__construct__list__map__ho7_2_0_i5);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(fn__construct__list__map__ho7_2_0,
		fn__construct__list__map__ho7_2_0_i10);
MR_def_label(fn__construct__list__map__ho7_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__construct__list__map__ho7_2_0,
		fn__construct__list__map__ho7_2_0_i10);
MR_def_label(fn__construct__list__map__ho7_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(construct_module23)
	MR_init_entry1(fn__f_99_111_110_115_116_114_117_99_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_99_111_110_115_116_114_117_99_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_99_111_110_115_116_114_117_99_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__construct_maybe_bunch_0(void)
{
	construct_module0();
	construct_module1();
	construct_module2();
	construct_module3();
	construct_module4();
	construct_module5();
	construct_module6();
	construct_module7();
	construct_module8();
	construct_module9();
	construct_module10();
	construct_module11();
	construct_module12();
	construct_module13();
	construct_module14();
	construct_module15();
	construct_module16();
	construct_module17();
	construct_module18();
	construct_module19();
	construct_module20();
	construct_module21();
	construct_module22();
	construct_module23();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__construct__init(void);
void mercury__construct__init_type_tables(void);
void mercury__construct__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__construct__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__construct__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__construct__init_threadscope_string_table(void);
#endif

void mercury__construct__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__construct_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_construct__type_ctor_info_functor_number_lex_0,
		construct__functor_number_lex_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_construct__type_ctor_info_functor_number_ordinal_0,
		construct__functor_number_ordinal_0_0);
	mercury__construct__init_debugger();
}

void mercury__construct__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_construct__type_ctor_info_functor_number_lex_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_construct__type_ctor_info_functor_number_ordinal_0);
	}
}


void mercury__construct__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__construct__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__construct);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__construct__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__construct__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
