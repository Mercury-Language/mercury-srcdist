/*
** Automatically generated from `varset.m'
** by the Mercury compiler,
** version rotd-2011-09-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__varset__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "varset.c"
#line 150 "io.int2"
#include "string.mh"

#line 32 "varset.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "varset.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "varset.c"
#line 33 "array.int2"
#include "array.mh"

#line 44 "varset.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 48 "varset.c"
#line 55 "array.opt"
#include "stm_builtin.mh"

#line 52 "varset.c"
#line 57 "array.opt"
#include "store.mh"

#line 56 "varset.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "varset.c"
#line 156 "io.opt"
#include "dir.mh"

#line 64 "varset.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 68 "varset.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "varset.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "varset.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "varset.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "varset.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "varset.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "varset.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "varset.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 100 "varset.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 104 "varset.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "varset.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "varset.c"
#line 113 "varset.c"
#include "varset.mh"

#line 116 "varset.c"
#line 117 "varset.c"
#ifndef VARSET_DECL_GUARD
#define VARSET_DECL_GUARD

#line 121 "varset.c"
#line 122 "varset.c"

#endif
#line 125 "varset.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_varset__type_ctor_info_varset_1,
	mercury_data_varset__type_ctor_info_varset_0;
MR_decl_label4(varset__append_suffix_until_unique_4_0, 13,3,5,2)
MR_decl_label1(varset__bind_var_4_0, 4)
MR_decl_label1(varset__bind_vars_3_0, 4)
MR_decl_label3(varset__bind_vars_2_3_0, 10,3,4)
MR_decl_label5(varset__copy_var_names_4_0, 20,3,6,8,4)
MR_decl_label3(varset__create_name_var_map_2_0, 3,4,5)
MR_decl_label2(varset__delete_var_3_0, 3,5)
MR_decl_label3(varset__delete_vars_3_0, 10,3,4)
MR_decl_label1(varset__ensure_unique_names_4_0, 2)
MR_decl_label10(varset__ensure_unique_names_2_6_0, 36,3,6,9,11,12,8,4,15,16)
MR_decl_label4(varset__ensure_unique_names_2_6_0, 17,18,19,21)
MR_decl_label1(varset__is_empty_1_0, 1)
MR_decl_label3(varset__lookup_name_3_0, 4,2,6)
MR_decl_label3(varset__lookup_name_4_0, 4,2,6)
MR_decl_label2(varset__merge_5_0, 2,3)
MR_decl_label1(varset__merge_renaming_4_0, 2)
MR_decl_label7(varset__merge_renaming_2_9_0, 20,2,5,7,3,9,10)
MR_decl_label1(varset__merge_renaming_without_names_4_0, 2)
MR_decl_label3(varset__merge_renaming_without_names_2_6_0, 11,2,4)
MR_decl_label1(varset__merge_subst_4_0, 2)
MR_decl_label7(varset__merge_subst_2_9_0, 32,2,5,7,3,15,16)
MR_decl_label1(varset__merge_subst_without_names_4_0, 2)
MR_decl_label3(varset__merge_subst_without_names_2_6_0, 17,2,7)
MR_decl_label2(varset__merge_without_names_5_0, 2,3)
MR_decl_label1(varset__name_var_4_0, 3)
MR_decl_label2(varset__new_maybe_named_var_4_0, 15,6)
MR_decl_label1(varset__new_named_var_4_0, 3)
MR_decl_label4(varset__new_uniquely_named_var_4_0, 2,3,4,6)
MR_decl_label2(varset__new_vars_4_0, 2,4)
MR_decl_label2(varset__new_vars_2_5_0, 2,6)
MR_decl_label2(varset__select_3_0, 3,5)
MR_decl_label9(varset__squash_4_0, 3,5,6,7,8,9,10,11,12)
MR_decl_label1(varset__vars_2_0, 2)
MR_decl_label1(fn__varset__bind_vars_2_0, 4)
MR_decl_label1(fn__varset__vars_2_3_0, 2)
MR_decl_label3(__Unify___varset__varset_1_0, 5,10,1)
MR_decl_label7(__Compare___varset__varset_1_0, 3,2,6,7,9,14,42)
MR_def_extern_entry(varset__init_1_0)
MR_def_extern_entry(fn__varset__init_0_0)
MR_def_extern_entry(varset__is_empty_1_0)
MR_def_extern_entry(varset__new_var_3_0)
MR_def_extern_entry(varset__new_named_var_4_0)
MR_def_extern_entry(varset__new_uniquely_named_var_4_0)
MR_def_extern_entry(varset__new_maybe_named_var_4_0)
MR_def_extern_entry(varset__new_vars_2_5_0)
MR_def_extern_entry(varset__new_vars_4_0)
MR_def_extern_entry(varset__delete_var_3_0)
MR_def_extern_entry(fn__varset__delete_var_2_0)
MR_def_extern_entry(varset__delete_vars_3_0)
MR_def_extern_entry(fn__varset__delete_vars_2_0)
MR_def_extern_entry(fn__varset__vars_2_3_0)
MR_def_extern_entry(varset__vars_2_0)
MR_def_extern_entry(fn__varset__vars_1_0)
MR_def_extern_entry(varset__name_var_4_0)
MR_def_extern_entry(fn__varset__name_var_3_0)
MR_def_extern_entry(varset__search_name_3_0)
MR_def_extern_entry(varset__lookup_name_3_0)
MR_def_extern_entry(fn__varset__lookup_name_2_0)
MR_def_extern_entry(varset__lookup_name_4_0)
MR_def_extern_entry(fn__varset__lookup_name_3_0)
MR_def_extern_entry(varset__bind_var_4_0)
MR_def_extern_entry(fn__varset__bind_var_3_0)
MR_def_extern_entry(varset__bind_vars_2_3_0)
MR_def_extern_entry(varset__bind_vars_3_0)
MR_def_extern_entry(fn__varset__bind_vars_2_0)
MR_def_extern_entry(varset__search_var_3_0)
MR_def_extern_entry(varset__lookup_vars_2_0)
MR_def_extern_entry(fn__varset__lookup_vars_1_0)
MR_def_extern_entry(varset__merge_renaming_2_9_0)
MR_def_extern_entry(varset__merge_renaming_4_0)
MR_def_extern_entry(varset__merge_subst_2_9_0)
MR_def_extern_entry(varset__merge_subst_4_0)
MR_def_extern_entry(varset__merge_5_0)
MR_def_extern_entry(varset__merge_renaming_without_names_2_6_0)
MR_def_extern_entry(varset__merge_renaming_without_names_4_0)
MR_def_extern_entry(varset__merge_subst_without_names_2_6_0)
MR_def_extern_entry(varset__merge_subst_without_names_4_0)
MR_def_extern_entry(varset__merge_without_names_5_0)
MR_def_extern_entry(varset__get_bindings_2_0)
MR_def_extern_entry(fn__varset__get_bindings_1_0)
MR_def_extern_entry(varset__set_bindings_3_0)
MR_def_extern_entry(fn__varset__set_bindings_2_0)
MR_def_extern_entry(varset__create_name_var_map_2_0)
MR_def_extern_entry(fn__varset__create_name_var_map_1_0)
MR_def_extern_entry(varset__var_name_list_2_0)
MR_def_extern_entry(fn__varset__var_name_list_1_0)
MR_decl_static(varset__append_suffix_until_unique_4_0)
MR_def_extern_entry(varset__ensure_unique_names_2_6_0)
MR_def_extern_entry(varset__ensure_unique_names_4_0)
MR_def_extern_entry(fn__varset__ensure_unique_names_3_0)
MR_def_extern_entry(varset__select_3_0)
MR_def_extern_entry(fn__varset__select_2_0)
MR_def_extern_entry(varset__copy_var_names_4_0)
MR_def_extern_entry(varset__squash_4_0)
MR_def_extern_entry(varset__coerce_2_0)
MR_def_extern_entry(fn__varset__coerce_1_0)
MR_def_extern_entry(fn__varset__max_var_1_0)
MR_def_extern_entry(fn__varset__num_allocated_1_0)
MR_def_extern_entry(__Unify___varset__varset_0_0)
MR_def_extern_entry(__Compare___varset__varset_0_0)
MR_def_extern_entry(__Unify___varset__varset_1_0)
MR_def_extern_entry(__Compare___varset__varset_1_0)
MR_decl_static(fn__f_118_97_114_115_101_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0,
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_string_const("", 0),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_supply_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_var_supply_1__pseudo_1 = {
	&mercury_data_term__type_ctor_info_var_supply_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_var_1__pseudo_1 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_term_1__pseudo_1 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_term__pti_term_1__pseudo_1
}};

const MR_PseudoTypeInfo mercury_data_varset__field_types_varset_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_supply_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1
};

const MR_ConstString mercury_data_varset__field_names_varset_1_0[] = {
	"var_supply",
	"var_names",
	"var_values"
};

static const MR_DuFunctorDesc mercury_data_varset__du_functor_desc_varset_1_0 = {
	"varset",
	3,
	7,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_varset__field_types_varset_1_0,
	mercury_data_varset__field_names_varset_1_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_varset__du_stag_ordered_varset_1_0[] = {
	&mercury_data_varset__du_functor_desc_varset_1_0

};

const MR_DuPtagLayout mercury_data_varset__du_ptag_ordered_varset_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_varset__du_stag_ordered_varset_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_varset__du_name_ordered_varset_1[] = {
	&mercury_data_varset__du_functor_desc_varset_1_0
};

const MR_Integer mercury_data_varset__functor_number_map_varset_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1 = {
	1,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___varset__varset_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___varset__varset_1_0)),
	"varset",
	"varset",
	{ (void *)mercury_data_varset__du_name_ordered_varset_1 },
	{ (void *)mercury_data_varset__du_ptag_ordered_varset_1 },
	1,
	4,
	mercury_data_varset__functor_number_map_varset_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1term__type_ctor_info_generic_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___varset__varset_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___varset__varset_0_0)),
	"varset",
	"varset",
	{ 0 },
	{ (void *)&mercury_data_varset__ti_varset_1term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(varset_module0)
	MR_init_entry1(varset__init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module1)
	MR_init_entry1(fn__varset__init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module2)
	MR_init_entry1(varset__is_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__is_empty_1_0);
	MR_init_label1(varset__is_empty_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(varset__is_empty_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(varset__is_empty_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module3)
	MR_init_entry1(varset__new_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__new_var_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__new_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_r2, 0) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(varset_module4)
	MR_init_entry1(varset__new_named_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__new_named_var_4_0);
	MR_init_label1(varset__new_named_var_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_named_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__new_named_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr4 = MR_r3;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 0) + (MR_Integer) 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(3) = MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_tempr4;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__new_named_var_4_0_i3);
MR_def_label(varset__new_named_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_base_string_3_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(varset_module5)
	MR_init_entry1(varset__new_uniquely_named_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__new_uniquely_named_var_4_0);
	MR_init_label4(varset__new_uniquely_named_var_4_0,2,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_uniquely_named_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__new_uniquely_named_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) + (MR_Integer) 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		varset__new_uniquely_named_var_4_0_i2);
MR_def_label(varset__new_uniquely_named_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		varset__new_uniquely_named_var_4_0_i3);
MR_def_label(varset__new_uniquely_named_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		varset__new_uniquely_named_var_4_0_i4);
MR_def_label(varset__new_uniquely_named_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__new_uniquely_named_var_4_0_i6);
MR_def_label(varset__new_uniquely_named_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module6)
	MR_init_entry1(varset__new_maybe_named_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__new_maybe_named_var_4_0);
	MR_init_label2(varset__new_maybe_named_var_4_0,15,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_maybe_named_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__new_maybe_named_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(varset__new_maybe_named_var_4_0_i15);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(varset__new_maybe_named_var_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr4 = MR_r3;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 0) + (MR_Integer) 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(3) = MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_tempr4;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	MR_r6 = MR_tfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__new_maybe_named_var_4_0_i6);
MR_def_label(varset__new_maybe_named_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(varset_module7)
	MR_init_entry1(varset__new_vars_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__new_vars_2_5_0);
	MR_init_label2(varset__new_vars_2_5_0,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_vars_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__new_vars_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(varset__new_vars_2_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 0) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr1;
	MR_np_localtailcall(varset__new_vars_2_5_0);
	}
MR_def_label(varset__new_vars_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(varset__new_vars_2_5_0_i6);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(varset__new_vars_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("varset.new_vars - invalid call", 30);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(varset_module8)
	MR_init_entry1(varset__new_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__new_vars_4_0);
	MR_init_label2(varset__new_vars_4_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__new_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_vars_2_5_0,
		varset__new_vars_4_0_i2);
MR_def_label(varset__new_vars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		varset__new_vars_4_0_i4);
MR_def_label(varset__new_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__delete_2_4_0);

MR_BEGIN_MODULE(varset_module9)
	MR_init_entry1(varset__delete_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__delete_var_3_0);
	MR_init_label2(varset__delete_var_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__delete_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		varset__delete_var_3_0_i3);
MR_def_label(varset__delete_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		varset__delete_var_3_0_i5);
MR_def_label(varset__delete_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module10)
	MR_init_entry1(fn__varset__delete_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__delete_var_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__delete_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(varset__delete_var_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module11)
	MR_init_entry1(varset__delete_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__delete_vars_3_0);
	MR_init_label3(varset__delete_vars_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__delete_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(varset__delete_vars_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(varset__delete_vars_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(varset__delete_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(varset__delete_var_3_0,
		varset__delete_vars_3_0_i4);
MR_def_label(varset__delete_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(varset__delete_vars_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module12)
	MR_init_entry1(fn__varset__delete_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__delete_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__delete_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(varset__delete_vars_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module13)
	MR_init_entry1(fn__varset__vars_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__vars_2_3_0);
	MR_init_label1(fn__varset__vars_2_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'vars_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__vars_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(fn__varset__vars_2_3_0_i2);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(fn__varset__vars_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r2 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_np_localtailcall(fn__varset__vars_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module14)
	MR_init_entry1(varset__vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__vars_2_0);
	MR_init_label1(varset__vars_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__varset__vars_2_3_0,
		varset__vars_2_0_i2);
MR_def_label(varset__vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__reverse_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module15)
	MR_init_entry1(fn__varset__vars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__vars_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__vars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(varset__vars_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module16)
	MR_init_entry1(varset__name_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__name_var_4_0);
	MR_init_label1(varset__name_var_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'name_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__name_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tfield(0, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__name_var_4_0_i3);
MR_def_label(varset__name_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module17)
	MR_init_entry1(fn__varset__name_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__name_var_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'name_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__name_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(varset__name_var_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(varset_module18)
	MR_init_entry1(varset__search_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__search_name_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__search_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module19)
	MR_init_entry1(varset__lookup_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__lookup_name_3_0);
	MR_init_label3(varset__lookup_name_3_0,4,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__lookup_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		varset__lookup_name_3_0_i4);
MR_def_label(varset__lookup_name_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(varset__lookup_name_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(varset__lookup_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		varset__lookup_name_3_0_i6);
MR_def_label(varset__lookup_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("V_", 2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module20)
	MR_init_entry1(fn__varset__lookup_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__lookup_name_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__lookup_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(varset__lookup_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module21)
	MR_init_entry1(varset__lookup_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__lookup_name_4_0);
	MR_init_label3(varset__lookup_name_4_0,4,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__lookup_name_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		varset__lookup_name_4_0_i4);
MR_def_label(varset__lookup_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(varset__lookup_name_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(varset__lookup_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		varset__lookup_name_4_0_i6);
MR_def_label(varset__lookup_name_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__append_3_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module22)
	MR_init_entry1(fn__varset__lookup_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__lookup_name_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__lookup_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(varset__lookup_name_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module23)
	MR_init_entry1(varset__bind_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__bind_var_4_0);
	MR_init_label1(varset__bind_var_4_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bind_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__bind_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tfield(0, MR_sv(1), 2);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__bind_var_4_0_i4);
MR_def_label(varset__bind_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module24)
	MR_init_entry1(fn__varset__bind_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__bind_var_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bind_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__bind_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(varset__bind_var_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module25)
	MR_init_entry1(varset__bind_vars_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__bind_vars_2_3_0);
	MR_init_label3(varset__bind_vars_2_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bind_vars_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__bind_vars_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(varset__bind_vars_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(varset__bind_vars_2_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(varset__bind_vars_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__bind_var_4_0,
		varset__bind_vars_2_3_0_i4);
MR_def_label(varset__bind_vars_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(varset__bind_vars_2_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__tree234_to_assoc_list_2_3_0);

MR_BEGIN_MODULE(varset_module26)
	MR_init_entry1(varset__bind_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__bind_vars_3_0);
	MR_init_label1(varset__bind_vars_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bind_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__bind_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		varset__bind_vars_3_0_i4);
MR_def_label(varset__bind_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(varset__bind_vars_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module27)
	MR_init_entry1(fn__varset__bind_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__bind_vars_2_0);
	MR_init_label1(fn__varset__bind_vars_2_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bind_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__bind_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		fn__varset__bind_vars_2_0_i4);
MR_def_label(fn__varset__bind_vars_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(varset__bind_vars_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module28)
	MR_init_entry1(varset__search_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__search_var_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__search_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_tempr3, 2);
	MR_r5 = MR_tempr4;
	MR_np_tailcall_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module29)
	MR_init_entry1(varset__lookup_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__lookup_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__lookup_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module30)
	MR_init_entry1(fn__varset__lookup_vars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__lookup_vars_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__lookup_vars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(varset_module31)
	MR_init_entry1(varset__merge_renaming_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__merge_renaming_2_9_0);
	MR_init_label7(varset__merge_renaming_2_9_0,20,2,5,7,3,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_renaming_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__merge_renaming_2_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(varset__merge_renaming_2_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(varset__merge_renaming_2_9_0_i2);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(11);
MR_def_label(varset__merge_renaming_2_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_sv(8) = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_sv(6) = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_sv(7) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		varset__merge_renaming_2_9_0_i5);
MR_def_label(varset__merge_renaming_2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(varset__merge_renaming_2_9_0_i3);
	}
	MR_r1 = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__merge_renaming_2_9_0_i7);
MR_def_label(varset__merge_renaming_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(varset__merge_renaming_2_9_0_i9);
MR_def_label(varset__merge_renaming_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_sv(7) = MR_sv(4);
	MR_r1 = MR_tempr1;
	}
MR_def_label(varset__merge_renaming_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__merge_renaming_2_9_0_i10);
MR_def_label(varset__merge_renaming_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(varset__merge_renaming_2_9_0_i20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module32)
	MR_init_entry1(varset__merge_renaming_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__merge_renaming_4_0);
	MR_init_label1(varset__merge_renaming_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_renaming'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__merge_renaming_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(varset__merge_renaming_2_9_0,
		varset__merge_renaming_4_0_i2);
MR_def_label(varset__merge_renaming_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module33)
	MR_init_entry1(varset__merge_subst_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__merge_subst_2_9_0);
	MR_init_label7(varset__merge_subst_2_9_0,32,2,5,7,3,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_subst_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__merge_subst_2_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(varset__merge_subst_2_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(varset__merge_subst_2_9_0_i2);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(11);
MR_def_label(varset__merge_subst_2_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_sv(8) = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_sv(6) = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_sv(7) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		varset__merge_subst_2_9_0_i5);
MR_def_label(varset__merge_subst_2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(varset__merge_subst_2_9_0_i3);
	}
	MR_r1 = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__merge_subst_2_9_0_i7);
MR_def_label(varset__merge_subst_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(varset__merge_subst_2_9_0_i15);
	}
MR_def_label(varset__merge_subst_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_r2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_sv(7) = MR_sv(4);
	MR_r1 = MR_tempr3;
	}
MR_def_label(varset__merge_subst_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__merge_subst_2_9_0_i16);
MR_def_label(varset__merge_subst_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(varset__merge_subst_2_9_0_i32);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module34)
	MR_init_entry1(varset__merge_subst_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__merge_subst_4_0);
	MR_init_label1(varset__merge_subst_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_subst'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__merge_subst_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(varset__merge_subst_2_9_0,
		varset__merge_subst_4_0_i2);
MR_def_label(varset__merge_subst_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__apply_substitution_to_list_3_0);

MR_BEGIN_MODULE(varset_module35)
	MR_init_entry1(varset__merge_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__merge_5_0);
	MR_init_label2(varset__merge_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__merge_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(varset__merge_subst_4_0,
		varset__merge_5_0_i2);
MR_def_label(varset__merge_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(term__apply_substitution_to_list_3_0,
		varset__merge_5_0_i3);
MR_def_label(varset__merge_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module36)
	MR_init_entry1(varset__merge_renaming_without_names_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__merge_renaming_without_names_2_6_0);
	MR_init_label3(varset__merge_renaming_without_names_2_6_0,11,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_renaming_without_names_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__merge_renaming_without_names_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(varset__merge_renaming_without_names_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(varset__merge_renaming_without_names_2_6_0_i2);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(varset__merge_renaming_without_names_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_tempr2 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__merge_renaming_without_names_2_6_0_i4);
MR_def_label(varset__merge_renaming_without_names_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(varset__merge_renaming_without_names_2_6_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module37)
	MR_init_entry1(varset__merge_renaming_without_names_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__merge_renaming_without_names_4_0);
	MR_init_label1(varset__merge_renaming_without_names_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_renaming_without_names'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__merge_renaming_without_names_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(varset__merge_renaming_without_names_2_6_0,
		varset__merge_renaming_without_names_4_0_i2);
MR_def_label(varset__merge_renaming_without_names_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module38)
	MR_init_entry1(varset__merge_subst_without_names_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__merge_subst_without_names_2_6_0);
	MR_init_label3(varset__merge_subst_without_names_2_6_0,17,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_subst_without_names_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__merge_subst_without_names_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(varset__merge_subst_without_names_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(varset__merge_subst_without_names_2_6_0_i2);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(varset__merge_subst_without_names_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr4, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__merge_subst_without_names_2_6_0_i7);
MR_def_label(varset__merge_subst_without_names_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(varset__merge_subst_without_names_2_6_0_i17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module39)
	MR_init_entry1(varset__merge_subst_without_names_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__merge_subst_without_names_4_0);
	MR_init_label1(varset__merge_subst_without_names_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_subst_without_names'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__merge_subst_without_names_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(varset__merge_subst_without_names_2_6_0,
		varset__merge_subst_without_names_4_0_i2);
MR_def_label(varset__merge_subst_without_names_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module40)
	MR_init_entry1(varset__merge_without_names_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__merge_without_names_5_0);
	MR_init_label2(varset__merge_without_names_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_without_names'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__merge_without_names_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(varset__merge_subst_without_names_4_0,
		varset__merge_without_names_5_0_i2);
MR_def_label(varset__merge_without_names_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(term__apply_substitution_to_list_3_0,
		varset__merge_without_names_5_0_i3);
MR_def_label(varset__merge_without_names_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module41)
	MR_init_entry1(varset__get_bindings_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__get_bindings_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_bindings'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__get_bindings_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module42)
	MR_init_entry1(fn__varset__get_bindings_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__get_bindings_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_bindings'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__get_bindings_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module43)
	MR_init_entry1(varset__set_bindings_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__set_bindings_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_bindings'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__set_bindings_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module44)
	MR_init_entry1(fn__varset__set_bindings_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__set_bindings_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_bindings'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__set_bindings_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__keys_2_3_0);
MR_decl_entry(tree234__values_2_3_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(tree234__assoc_list_to_tree234_2_3_0);

MR_BEGIN_MODULE(varset_module45)
	MR_init_entry1(varset__create_name_var_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__create_name_var_map_2_0);
	MR_init_label3(varset__create_name_var_map_2_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_name_var_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__create_name_var_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__keys_2_3_0,
		varset__create_name_var_map_2_0_i3);
MR_def_label(varset__create_name_var_map_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__values_2_3_0,
		varset__create_name_var_map_2_0_i4);
MR_def_label(varset__create_name_var_map_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		varset__create_name_var_map_2_0_i5);
MR_def_label(varset__create_name_var_map_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(tree234__assoc_list_to_tree234_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module46)
	MR_init_entry1(fn__varset__create_name_var_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__create_name_var_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_name_var_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__create_name_var_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(varset__create_name_var_map_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module47)
	MR_init_entry1(varset__var_name_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__var_name_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_name_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__var_name_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__tree234_to_assoc_list_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module48)
	MR_init_entry1(fn__varset__var_name_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__var_name_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_name_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__var_name_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__tree234_to_assoc_list_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(varset_module49)
	MR_init_entry1(varset__append_suffix_until_unique_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__append_suffix_until_unique_4_0);
	MR_init_label4(varset__append_suffix_until_unique_4_0,13,3,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append_suffix_until_unique'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(varset__append_suffix_until_unique_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(varset__append_suffix_until_unique_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__member_2_0,
		varset__append_suffix_until_unique_4_0_i3);
MR_def_label(varset__append_suffix_until_unique_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(varset__append_suffix_until_unique_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(string__append_3_2,
		varset__append_suffix_until_unique_4_0_i5);
MR_def_label(varset__append_suffix_until_unique_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(varset__append_suffix_until_unique_4_0_i13);
MR_def_label(varset__append_suffix_until_unique_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_ordlist__insert_2_3_0);

MR_BEGIN_MODULE(varset_module50)
	MR_init_entry1(varset__ensure_unique_names_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__ensure_unique_names_2_6_0);
	MR_init_label10(varset__ensure_unique_names_2_6_0,36,3,6,9,11,12,8,4,15,16)
	MR_init_label4(varset__ensure_unique_names_2_6_0,17,18,19,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_unique_names_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__ensure_unique_names_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(varset__ensure_unique_names_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(varset__ensure_unique_names_2_6_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(varset__ensure_unique_names_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		varset__ensure_unique_names_2_6_0_i6);
MR_def_label(varset__ensure_unique_names_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(varset__ensure_unique_names_2_6_0_i4);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(set__member_2_0,
		varset__ensure_unique_names_2_6_0_i9);
MR_def_label(varset__ensure_unique_names_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(varset__ensure_unique_names_2_6_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		varset__ensure_unique_names_2_6_0_i11);
MR_def_label(varset__ensure_unique_names_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		varset__ensure_unique_names_2_6_0_i12);
MR_def_label(varset__ensure_unique_names_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		varset__ensure_unique_names_2_6_0_i16);
MR_def_label(varset__ensure_unique_names_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(varset__ensure_unique_names_2_6_0_i17);
MR_def_label(varset__ensure_unique_names_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		varset__ensure_unique_names_2_6_0_i15);
MR_def_label(varset__ensure_unique_names_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Var_", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		varset__ensure_unique_names_2_6_0_i16);
MR_def_label(varset__ensure_unique_names_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
MR_def_label(varset__ensure_unique_names_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_np_call_localret_ent(varset__append_suffix_until_unique_4_0,
		varset__ensure_unique_names_2_6_0_i18);
MR_def_label(varset__ensure_unique_names_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(set_ordlist__insert_2_3_0,
		varset__ensure_unique_names_2_6_0_i19);
MR_def_label(varset__ensure_unique_names_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__ensure_unique_names_2_6_0_i21);
MR_def_label(varset__ensure_unique_names_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(varset__ensure_unique_names_2_6_0_i36);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module51)
	MR_init_entry1(varset__ensure_unique_names_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__ensure_unique_names_4_0);
	MR_init_label1(varset__ensure_unique_names_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_unique_names'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__ensure_unique_names_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tfield(0, MR_sv(1), 1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(varset__ensure_unique_names_2_6_0,
		varset__ensure_unique_names_4_0_i2);
MR_def_label(varset__ensure_unique_names_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module52)
	MR_init_entry1(fn__varset__ensure_unique_names_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__ensure_unique_names_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_unique_names'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__ensure_unique_names_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(varset__ensure_unique_names_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(varset_module53)
	MR_init_entry1(varset__select_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__select_3_0);
	MR_init_label2(varset__select_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__select_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tempr3;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__select_3_0_i3);
MR_def_label(varset__select_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		varset__select_3_0_i5);
MR_def_label(varset__select_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module54)
	MR_init_entry1(fn__varset__select_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__select_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__select_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(varset__select_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module55)
	MR_init_entry1(varset__copy_var_names_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__copy_var_names_4_0);
	MR_init_label5(varset__copy_var_names_4_0,20,3,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_var_names'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__copy_var_names_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(varset__copy_var_names_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(varset__copy_var_names_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(varset__copy_var_names_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		varset__copy_var_names_4_0_i6);
MR_def_label(varset__copy_var_names_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(varset__copy_var_names_4_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(varset__name_var_4_0,
		varset__copy_var_names_4_0_i8);
MR_def_label(varset__copy_var_names_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(varset__copy_var_names_4_0_i20);
MR_def_label(varset__copy_var_names_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(varset__copy_var_names_4_0_i20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(varset_module56)
	MR_init_entry1(varset__squash_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__squash_4_0);
	MR_init_label9(varset__squash_4_0,3,5,6,7,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'squash'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__squash_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		varset__squash_4_0_i3);
MR_def_label(varset__squash_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(varset__new_vars_2_5_0,
		varset__squash_4_0_i5);
MR_def_label(varset__squash_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		varset__squash_4_0_i6);
MR_def_label(varset__squash_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		varset__squash_4_0_i7);
MR_def_label(varset__squash_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		varset__squash_4_0_i8);
MR_def_label(varset__squash_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		varset__squash_4_0_i9);
MR_def_label(varset__squash_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		varset__squash_4_0_i10);
MR_def_label(varset__squash_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__assoc_list_to_tree234_2_3_0,
		varset__squash_4_0_i11);
MR_def_label(varset__squash_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__copy_var_names_4_0,
		varset__squash_4_0_i12);
MR_def_label(varset__squash_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module57)
	MR_init_entry1(varset__coerce_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__varset__coerce_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coerce'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__varset__coerce_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module58)
	MR_init_entry1(fn__varset__coerce_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__coerce_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coerce'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__coerce_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module59)
	MR_init_entry1(fn__varset__max_var_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__max_var_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__max_var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module60)
	MR_init_entry1(fn__varset__num_allocated_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__varset__num_allocated_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_allocated'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__varset__num_allocated_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module61)
	MR_init_entry1(__Unify___varset__varset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___varset__varset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___varset__varset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___varset__varset_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module62)
	MR_init_entry1(__Compare___varset__varset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___varset__varset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___varset__varset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___varset__varset_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(varset_module63)
	MR_init_entry1(__Unify___varset__varset_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___varset__varset_1_0);
	MR_init_label3(__Unify___varset__varset_1_0,5,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___varset__varset_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___varset__varset_1_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___varset__varset_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr3, 1);
	MR_r4 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___varset__varset_1_0_i5);
MR_def_label(__Unify___varset__varset_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___varset__varset_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___varset__varset_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___varset__varset_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(varset_module64)
	MR_init_entry1(__Compare___varset__varset_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___varset__varset_1_0);
	MR_init_label7(__Compare___varset__varset_1_0,3,2,6,7,9,14,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___varset__varset_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___varset__varset_1_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_GOTO_LAB(__Compare___varset__varset_1_0_i2);
MR_def_label(__Compare___varset__varset_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___varset__varset_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___varset__varset_1_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___varset__varset_1_0_i9);
	}
MR_def_label(__Compare___varset__varset_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___varset__varset_1_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___varset__varset_1_0_i9);
MR_def_label(__Compare___varset__varset_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___varset__varset_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___varset__varset_1_0_i42);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___varset__varset_1_0_i14);
MR_def_label(__Compare___varset__varset_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___varset__varset_1_0_i42);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
MR_def_label(__Compare___varset__varset_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(varset_module65)
	MR_init_entry1(fn__f_118_97_114_115_101_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_97_114_115_101_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_97_114_115_101_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__varset_maybe_bunch_0(void)
{
	varset_module0();
	varset_module1();
	varset_module2();
	varset_module3();
	varset_module4();
	varset_module5();
	varset_module6();
	varset_module7();
	varset_module8();
	varset_module9();
	varset_module10();
	varset_module11();
	varset_module12();
	varset_module13();
	varset_module14();
	varset_module15();
	varset_module16();
	varset_module17();
	varset_module18();
	varset_module19();
	varset_module20();
	varset_module21();
	varset_module22();
	varset_module23();
	varset_module24();
	varset_module25();
	varset_module26();
	varset_module27();
	varset_module28();
	varset_module29();
	varset_module30();
	varset_module31();
	varset_module32();
	varset_module33();
	varset_module34();
	varset_module35();
	varset_module36();
	varset_module37();
	varset_module38();
	varset_module39();
}

static void mercury__varset_maybe_bunch_1(void)
{
	varset_module40();
	varset_module41();
	varset_module42();
	varset_module43();
	varset_module44();
	varset_module45();
	varset_module46();
	varset_module47();
	varset_module48();
	varset_module49();
	varset_module50();
	varset_module51();
	varset_module52();
	varset_module53();
	varset_module54();
	varset_module55();
	varset_module56();
	varset_module57();
	varset_module58();
	varset_module59();
	varset_module60();
	varset_module61();
	varset_module62();
	varset_module63();
	varset_module64();
	varset_module65();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__varset__init(void);
void mercury__varset__init_type_tables(void);
void mercury__varset__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__varset__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__varset__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__varset__init_threadscope_string_table(void);
#endif

void mercury__varset__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__varset_maybe_bunch_0();
	mercury__varset_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_varset__type_ctor_info_varset_1,
		varset__varset_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_varset__type_ctor_info_varset_0,
		varset__varset_0_0);
	mercury__varset__init_debugger();
}

void mercury__varset__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_varset__type_ctor_info_varset_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_varset__type_ctor_info_varset_0);
	}
}


void mercury__varset__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__varset__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__varset);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__varset__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__varset__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
