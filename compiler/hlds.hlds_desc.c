/*
** Automatically generated from `hlds_desc.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__hlds__hlds_desc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "hlds.hlds_desc.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "hlds.hlds_desc.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "hlds.hlds_desc.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "hlds.hlds_desc.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "hlds.hlds_desc.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "hlds.hlds_desc.c"
#line 48 "hlds.hlds_desc.c"
#include "hlds.hlds_desc.mh"

#line 51 "hlds.hlds_desc.c"
#line 52 "hlds.hlds_desc.c"
#ifndef HLDS__HLDS_DESC_DECL_GUARD
#define HLDS__HLDS_DESC_DECL_GUARD

#line 56 "hlds.hlds_desc.c"
#line 57 "hlds.hlds_desc.c"

#endif
#line 60 "hlds.hlds_desc.c"

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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label6(fn__hlds__hlds_desc__describe_args_2_0, 19,4,7,8,9,10)
MR_decl_label1(fn__hlds__hlds_desc__describe_comma_var_2_0, 2)
MR_decl_label8(fn__hlds__hlds_desc__describe_goal_3_0, 66,74,75,76,77,78,79,81)
MR_decl_label8(fn__hlds__hlds_desc__describe_goal_3_0, 82,83,84,85,86,68,69,70)
MR_decl_label8(fn__hlds__hlds_desc__describe_goal_3_0, 71,96,89,90,91,73,45,46)
MR_decl_label8(fn__hlds__hlds_desc__describe_goal_3_0, 47,18,35,36,37,23,24,25)
MR_decl_label8(fn__hlds__hlds_desc__describe_goal_3_0, 26,27,28,29,31,32,33,20)
MR_decl_label8(fn__hlds__hlds_desc__describe_goal_3_0, 21,101,3,4,5,8,9,11)
MR_decl_label8(fn__hlds__hlds_desc__describe_goal_3_0, 12,13,14,16,17,43,44,49)
MR_decl_label8(fn__hlds__hlds_desc__describe_goal_3_0, 53,56,55,61,51,52,54,62)
MR_decl_label7(fn__hlds__hlds_desc__describe_goal_3_0, 63,64,65,102,103,104,105)
MR_def_extern_entry(fn__hlds__hlds_desc__describe_var_2_0)
MR_def_extern_entry(fn__hlds__hlds_desc__describe_args_2_0)
MR_def_extern_entry(fn__hlds__hlds_desc__describe_goal_3_0)
MR_decl_static(fn__hlds__hlds_desc__describe_comma_var_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_desc__describe_args_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_desc__describe_args_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_desc__describe_goal_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_desc__describe_goal_3_0_2;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_desc__describe_goal_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_desc__describe_goal_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,2)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_desc__describe_args_2_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_desc",
"hlds.hlds_desc",
"describe_comma_var",
3,
0
},
"hlds.hlds_desc",
"hlds_desc.m",
169,
"d2;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_desc__describe_goal_3_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"hlds.hlds_desc",
"hlds_desc.m",
116,
"d1;c6;d4;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_desc__describe_goal_3_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"hlds.hlds_desc",
"hlds_desc.m",
117,
"d1;c6;d4;c13;"
};

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);

MR_BEGIN_MODULE(hlds__hlds_desc_module0)
	MR_init_entry1(fn__hlds__hlds_desc__describe_var_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'describe_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_desc__describe_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__hlds_desc_module1)
	MR_init_entry1(fn__hlds__hlds_desc__describe_args_2_0);
	MR_init_label6(fn__hlds__hlds_desc__describe_args_2_0,19,4,7,8,9,10)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'describe_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_desc__describe_args_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_desc__describe_args_2_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__hlds__hlds_desc__describe_args_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__hlds__hlds_desc__describe_args_2_0_i4);
MR_def_label(fn__hlds__hlds_desc__describe_args_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_desc__describe_comma_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_desc__describe_args_2_0_i7);
MR_def_label(fn__hlds__hlds_desc__describe_args_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		fn__hlds__hlds_desc__describe_args_2_0_i8);
MR_def_label(fn__hlds__hlds_desc__describe_args_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_args_2_0_i9);
MR_def_label(fn__hlds__hlds_desc__describe_args_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_args_2_0_i10);
MR_def_label(fn__hlds__hlds_desc__describe_args_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_out__cons_id_and_arity_to_string_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(fn__parse_tree__prog_out__simple_call_id_to_string_1_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__term__context_line_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_desc_module2)
	MR_init_entry1(fn__hlds__hlds_desc__describe_goal_3_0);
	MR_init_label8(fn__hlds__hlds_desc__describe_goal_3_0,66,74,75,76,77,78,79,81)
	MR_init_label8(fn__hlds__hlds_desc__describe_goal_3_0,82,83,84,85,86,68,69,70)
	MR_init_label8(fn__hlds__hlds_desc__describe_goal_3_0,71,96,89,90,91,73,45,46)
	MR_init_label8(fn__hlds__hlds_desc__describe_goal_3_0,47,18,35,36,37,23,24,25)
	MR_init_label8(fn__hlds__hlds_desc__describe_goal_3_0,26,27,28,29,31,32,33,20)
	MR_init_label8(fn__hlds__hlds_desc__describe_goal_3_0,21,101,3,4,5,8,9,11)
	MR_init_label8(fn__hlds__hlds_desc__describe_goal_3_0,12,13,14,16,17,43,44,49)
	MR_init_label8(fn__hlds__hlds_desc__describe_goal_3_0,53,56,55,61,51,52,54,62)
	MR_init_label7(fn__hlds__hlds_desc__describe_goal_3_0,63,64,65,102,103,104,105)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'describe_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_desc__describe_goal_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r4 = MR_ctfield(0, MR_r3, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i66) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i45) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i18) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i101));
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r4, 3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i74) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i81) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i68) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i96));
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_var_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i75);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_and_arity_to_string_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i76);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_args_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i77);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i78);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" <= ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i79);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i65);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_var_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i82);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_and_arity_to_string_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i83);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_args_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i84);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i85);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" => ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i86);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i65);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_var_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i69);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_var_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i70);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" := ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i71);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i65);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r5, 0),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_desc__describe_goal_3_0_i73);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_var_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i89);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_var_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i90);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" == ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i91);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i65);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("complicated unify", 17);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = MR_ctfield(1, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i46);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_args_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i47);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i65);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(2, MR_r4, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i35) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i23) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i31) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i20));
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	MR_sv(4) = MR_ctfield(2, MR_r4, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_r5, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_var_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i36);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_args_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i37);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i65);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(2, MR_r4, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__simple_call_id_to_string_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i24);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_var_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i25);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_args_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i26);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i27);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i28);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i29);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i65);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = MR_ctfield(2, MR_r5, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_r4, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_args_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i32);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i33);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("event ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i65);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_r4, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_args_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i21);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cast ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i65);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i3) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i16) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i17) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i63) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i44) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i49) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i43) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i62));
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i4);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i5);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i8);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_args_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i9);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i11);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_args_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i12);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i13);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i14);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("foreign ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i65);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("conj", 4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("disj", 4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("if_then_else", 12);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("negation", 8);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i53) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i56) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i55) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_desc__describe_goal_3_0_i61));
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("scope exist quant", 17);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("scope promise solutions", 23);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("scope promise purity", 20);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_desc__describe_goal_3_0_i52);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_desc__describe_goal_3_0_i51);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_desc__describe_goal_3_0_i54);
	}
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("scope trace goal", 16);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("scope barrier", 13);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("scope commit", 12);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("scope from_ground_term", 22);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_sv(1) = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_desc__describe_var_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i64);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("switch on ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i65);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i102);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i103);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i104);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\100", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_desc__describe_goal_3_0_i105);
MR_def_label(fn__hlds__hlds_desc__describe_goal_3_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_desc_module3)
	MR_init_entry1(fn__hlds__hlds_desc__describe_comma_var_2_0);
	MR_init_label1(fn__hlds__hlds_desc__describe_comma_var_2_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'describe_comma_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_desc__describe_comma_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__hlds__hlds_desc__describe_comma_var_2_0_i2);
MR_def_label(fn__hlds__hlds_desc__describe_comma_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_desc_maybe_bunch_0(void)
{
	hlds__hlds_desc_module0();
	hlds__hlds_desc_module1();
	hlds__hlds_desc_module2();
	hlds__hlds_desc_module3();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_desc__init(void);
void mercury__hlds__hlds_desc__init_type_tables(void);
void mercury__hlds__hlds_desc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_desc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_desc__init_complexity_procs(void);
#endif

void mercury__hlds__hlds_desc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_desc_maybe_bunch_0();
	mercury__hlds__hlds_desc__init_debugger();
}

void mercury__hlds__hlds_desc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__hlds_desc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_desc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__hlds_desc);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_desc__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
