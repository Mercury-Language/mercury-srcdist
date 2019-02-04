/*
** Automatically generated from `trace_gen.m'
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
INIT mercury__ll_backend__trace_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.trace_gen.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.trace_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.trace_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.trace_gen.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "ll_backend.trace_gen.c"
#line 44 "ll_backend.trace_gen.c"
#include "ll_backend.trace_gen.mh"

#line 47 "ll_backend.trace_gen.c"
#line 48 "ll_backend.trace_gen.c"
#ifndef LL_BACKEND__TRACE_GEN_DECL_GUARD
#define LL_BACKEND__TRACE_GEN_DECL_GUARD

#line 52 "ll_backend.trace_gen.c"
#line 53 "ll_backend.trace_gen.c"

#endif
#line 56 "ll_backend.trace_gen.c"

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
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__trace_gen__type_ctor_info_trace_slot_info_0,
	mercury_data_ll_backend__trace_gen__type_ctor_info_trace_port_info_0,
	mercury_data_ll_backend__trace_gen__type_ctor_info_trace_info_0,
	mercury_data_ll_backend__trace_gen__type_ctor_info_nondet_foreign_proc_trace_port_0,
	mercury_data_ll_backend__trace_gen__type_ctor_info_negation_end_port_0,
	mercury_data_ll_backend__trace_gen__type_ctor_info_external_trace_port_0,
	mercury_data_ll_backend__trace_gen__type_ctor_info_external_event_info_0;
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0, 4,5,8,7,10,11,12,14)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0, 13,16,17,20,18,23,24,26)
MR_decl_label1(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0, 3)
MR_decl_label8(ll_backend__trace_gen__build_fail_vars_6_0, 56,8,15,17,20,10,2,57)
MR_decl_label1(ll_backend__trace_gen__build_fail_vars_6_0, 1)
MR_decl_label1(ll_backend__trace_gen__call_depth_slot_2_0, 2)
MR_decl_label1(ll_backend__trace_gen__call_num_slot_2_0, 2)
MR_decl_label6(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0, 2,3,5,9,10,4)
MR_decl_label1(ll_backend__trace_gen__event_num_slot_2_0, 2)
MR_decl_label8(ll_backend__trace_gen__generate_event_code_11_0, 2,3,6,7,8,10,12,16)
MR_decl_label8(ll_backend__trace_gen__generate_event_code_11_0, 17,18,19,20,22,4,23,24)
MR_decl_label8(ll_backend__trace_gen__generate_event_code_11_0, 25,26,27,28,29,30,32,33)
MR_decl_label8(ll_backend__trace_gen__generate_event_code_11_0, 34,35,36,37,38,39,40,41)
MR_decl_label8(ll_backend__trace_gen__generate_event_code_11_0, 42,43,44,45,48,47,50,51)
MR_decl_label8(ll_backend__trace_gen__generate_event_code_11_0, 52,53,54,55,56,57,58,59)
MR_decl_label3(ll_backend__trace_gen__generate_event_code_11_0, 60,61,62)
MR_decl_label8(ll_backend__trace_gen__generate_external_event_code_6_0, 3,4,2,5,6,7,8,10)
MR_decl_label1(ll_backend__trace_gen__generate_external_event_code_6_0, 11)
MR_decl_label8(ll_backend__trace_gen__generate_slot_fill_code_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__trace_gen__generate_slot_fill_code_3_0, 12,10,15,16,17,18,19,14)
MR_decl_label8(ll_backend__trace_gen__generate_slot_fill_code_3_0, 22,23,24,20,26,27,28,29)
MR_decl_label8(ll_backend__trace_gen__generate_slot_fill_code_3_0, 30,31,32,33,34,35,36,38)
MR_decl_label6(ll_backend__trace_gen__generate_slot_fill_code_3_0, 37,40,41,42,43,44)
MR_decl_label3(ll_backend__trace_gen__generate_user_event_code_5_0, 2,3,4)
MR_decl_label8(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0, 2,7,6,8,9,10,11,13)
MR_decl_label1(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0, 4)
MR_decl_label8(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0, 2,38,4,5,19,16,11,12)
MR_decl_label8(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0, 13,14,15,9,7,23,25,26)
MR_decl_label7(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0, 27,28,30,31,33,32,36)
MR_decl_label8(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0, 2,7,6,8,9,10,11,13)
MR_decl_label5(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0, 14,16,15,19,4)
MR_decl_label3(ll_backend__trace_gen__maybe_setup_redo_event_2_0, 3,19,6)
MR_decl_label1(ll_backend__trace_gen__redo_layout_slot_2_0, 2)
MR_decl_label6(ll_backend__trace_gen__stackref_to_string_2_0, 4,5,2,9,10,7)
MR_decl_label7(ll_backend__trace_gen__trace_fail_vars_3_0, 2,3,4,5,6,8,7)
MR_decl_label8(ll_backend__trace_gen__trace_prepare_for_call_2_0, 2,3,5,6,9,11,12,13)
MR_decl_label2(ll_backend__trace_gen__trace_prepare_for_call_2_0, 14,15)
MR_decl_label8(ll_backend__trace_gen__trace_reserved_slots_6_0, 2,3,4,5,7,9,10,8)
MR_decl_label8(ll_backend__trace_gen__trace_reserved_slots_6_0, 12,14,13,16,18,19,21,20)
MR_decl_label4(ll_backend__trace_gen__trace_reserved_slots_6_0, 22,24,25,27)
MR_decl_label8(ll_backend__trace_gen__trace_setup_8_0, 2,3,4,5,6,10,7,11)
MR_decl_label8(ll_backend__trace_gen__trace_setup_8_0, 12,14,15,13,17,18,19,21)
MR_decl_label8(ll_backend__trace_gen__trace_setup_8_0, 22,23,20,24,26,27,29,31)
MR_decl_label1(ll_backend__trace_gen__trace_setup_8_0, 28)
MR_decl_label4(__Unify___ll_backend__trace_gen__external_event_info_0_0, 4,6,10,1)
MR_decl_label8(__Unify___ll_backend__trace_gen__trace_info_0_0, 4,6,8,10,12,14,16,20)
MR_decl_label1(__Unify___ll_backend__trace_gen__trace_info_0_0, 1)
MR_decl_label7(__Unify___ll_backend__trace_gen__trace_port_info_0_0, 6,8,10,14,18,33,1)
MR_decl_label6(__Unify___ll_backend__trace_gen__trace_slot_info_0_0, 4,6,8,10,14,1)
MR_decl_label5(__Compare___ll_backend__trace_gen__external_event_info_0_0, 3,2,5,9,29)
MR_decl_label8(__Compare___ll_backend__trace_gen__trace_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label2(__Compare___ll_backend__trace_gen__trace_info_0_0, 29,69)
MR_decl_label8(__Compare___ll_backend__trace_gen__trace_port_info_0_0, 6,57,7,22,25,27,29,36)
MR_decl_label7(__Compare___ll_backend__trace_gen__trace_port_info_0_0, 39,45,48,62,49,52,54)
MR_decl_label7(__Compare___ll_backend__trace_gen__trace_slot_info_0_0, 3,2,5,9,13,17,45)
MR_decl_static(ll_backend__trace_gen__build_fail_vars_6_0)
MR_decl_static(fn__ll_backend__trace_gen__this_file_0_0)
MR_def_extern_entry(ll_backend__trace_gen__trace_fail_vars_3_0)
MR_def_extern_entry(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0)
MR_def_extern_entry(ll_backend__trace_gen__trace_reserved_slots_6_0)
MR_def_extern_entry(ll_backend__trace_gen__trace_setup_8_0)
MR_decl_static(ll_backend__trace_gen__stackref_to_string_2_0)
MR_decl_static(ll_backend__trace_gen__event_num_slot_2_0)
MR_decl_static(ll_backend__trace_gen__call_num_slot_2_0)
MR_decl_static(ll_backend__trace_gen__call_depth_slot_2_0)
MR_decl_static(ll_backend__trace_gen__redo_layout_slot_2_0)
MR_def_extern_entry(ll_backend__trace_gen__generate_slot_fill_code_3_0)
MR_def_extern_entry(ll_backend__trace_gen__trace_prepare_for_call_2_0)
MR_decl_static(ll_backend__trace_gen__generate_event_code_11_0)
MR_def_extern_entry(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0)
MR_def_extern_entry(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0)
MR_def_extern_entry(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0)
MR_def_extern_entry(ll_backend__trace_gen__generate_user_event_code_5_0)
MR_def_extern_entry(ll_backend__trace_gen__generate_external_event_code_6_0)
MR_def_extern_entry(ll_backend__trace_gen__maybe_setup_redo_event_2_0)
MR_decl_static(fn__ll_backend__trace_gen__find_lval_in_layout_locn_1_0)
MR_decl_static(fn__ll_backend__trace_gen__find_lval_in_var_info_1_0)
MR_def_extern_entry(__Unify___ll_backend__trace_gen__external_event_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__trace_gen__external_event_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__trace_gen__external_trace_port_0_0)
MR_def_extern_entry(__Compare___ll_backend__trace_gen__external_trace_port_0_0)
MR_def_extern_entry(__Unify___ll_backend__trace_gen__negation_end_port_0_0)
MR_def_extern_entry(__Compare___ll_backend__trace_gen__negation_end_port_0_0)
MR_def_extern_entry(__Unify___ll_backend__trace_gen__nondet_foreign_proc_trace_port_0_0)
MR_def_extern_entry(__Compare___ll_backend__trace_gen__nondet_foreign_proc_trace_port_0_0)
MR_def_extern_entry(__Unify___ll_backend__trace_gen__trace_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__trace_gen__trace_info_0_0)
MR_decl_static(__Unify___ll_backend__trace_gen__trace_port_info_0_0)
MR_decl_static(__Compare___ll_backend__trace_gen__trace_port_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__trace_gen__trace_slot_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__trace_gen__trace_slot_info_0_0)
MR_decl_static(ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__967__1_2_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_tbmkword(0, 4),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 5),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, layout_locn)
}
},
{
{
MR_TAG_COMMON(0,8,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,8,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
};

static const struct mercury_type_1 mercury_common_1[8] =
{
{
{
2,
1
}
},
{
{
0,
1
}
},
{
{
2,
2
}
},
{
{
0,
2
}
},
{
{
2,
3
}
},
{
{
0,
3
}
},
{
{
2,
4
}
},
{
{
2,
5
}
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
MR_string_const(");\n", 3),
MR_tbmkword(0, 0)
},
{
MR_string_const(" = MR_io_tabling_counter;\n", 26),
MR_tbmkword(0, 0)
},
{
MR_string_const(";\n", 2),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_3 mercury_common_3[5] =
{
{
MR_tbmkword(0, 1)
},
{
MR_tbmkword(0, 4)
},
{
MR_TAG_COMMON(1,0,5)
},
{
MR_tbmkword(0, 3)
},
{
MR_TAG_COMMON(1,0,6)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__generate_event_code_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__generate_event_code_11_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__maybe_setup_redo_event_2_0_1;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__trace_gen__generate_event_code_11_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info),
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__trace_gen__generate_event_code_11_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, layout_locn),
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__trace_gen__maybe_setup_redo_event_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(fn__ll_backend__trace_gen__find_lval_in_var_info_1_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(fn__ll_backend__trace_gen__find_lval_in_layout_locn_1_0),
0
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
1
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
3,
MR_TAG_COMMON(0,6,0),
MR_TAG_COMMON(1,3,1)
},
{
3,
MR_TAG_COMMON(0,6,0),
MR_TAG_COMMON(1,3,3)
},
};

static const struct mercury_type_8 mercury_common_8[2] =
{
{
MR_TAG_COMMON(3,7,0),
MR_string_const("set up deep redo event", 22)
},
{
MR_TAG_COMMON(3,7,1),
MR_string_const("set up shallow redo event", 25)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__trace_gen__field_types_trace_slot_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__trace_gen__field_names_trace_slot_info_0_0[] = {
	"slot_from_full",
	"slot_io",
	"slot_trail",
	"slot_maxfr",
	"slot_call_table"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0 = {
	"trace_slot_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__trace_gen__field_types_trace_slot_info_0_0,
	mercury_data_ll_backend__trace_gen__field_names_trace_slot_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_name_ordered_trace_slot_info_0[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0
};

const MR_Integer mercury_data_ll_backend__trace_gen__functor_number_map_trace_slot_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__trace_gen__type_ctor_info_trace_slot_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__trace_gen__trace_slot_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__trace_gen__trace_slot_info_0_0)),
	"ll_backend.trace_gen",
	"trace_slot_info",
	{ (void *)mercury_data_ll_backend__trace_gen__du_name_ordered_trace_slot_info_0 },
	{ (void *)mercury_data_ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0 },
	1,
	4,
	mercury_data_ll_backend__trace_gen__functor_number_map_trace_slot_info_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0 = {
	"port_info_external",
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
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1 = {
	"port_info_internal",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2 = {
	"port_info_negation_end",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3 = {
	"port_info_user",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_3,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4 = {
	"port_info_nondet_foreign_proc",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0,
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3

};

const MR_DuPtagLayout mercury_data_ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_name_ordered_trace_port_info_0[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0,
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1,
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2,
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4,
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3
};

const MR_Integer mercury_data_ll_backend__trace_gen__functor_number_map_trace_port_info_0[] = {
	0,
	1,
	2,
	4,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__trace_gen__type_ctor_info_trace_port_info_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__trace_gen__trace_port_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0)),
	"ll_backend.trace_gen",
	"trace_port_info",
	{ (void *)mercury_data_ll_backend__trace_gen__du_name_ordered_trace_port_info_0 },
	{ (void *)mercury_data_ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0 },
	5,
	4,
	mercury_data_ll_backend__trace_gen__functor_number_map_trace_port_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__trace_gen__field_types_trace_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_level_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1libs__trace_params__type_ctor_info_trace_suppress_item_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0
};

const MR_ConstString mercury_data_ll_backend__trace_gen__field_names_trace_info_0_0[] = {
	"trace_level",
	"trace_suppress_items",
	"from_full_lval",
	"io_seq_lval",
	"trail_lvals",
	"maxfr_lval",
	"call_table_tip_lval",
	"redo_label"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_info_0_0 = {
	"trace_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__trace_gen__field_types_trace_info_0_0,
	mercury_data_ll_backend__trace_gen__field_names_trace_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_info_0_0[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__trace_gen__du_ptag_ordered_trace_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_name_ordered_trace_info_0[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_info_0_0
};

const MR_Integer mercury_data_ll_backend__trace_gen__functor_number_map_trace_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__trace_gen__type_ctor_info_trace_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__trace_gen__trace_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__trace_gen__trace_info_0_0)),
	"ll_backend.trace_gen",
	"trace_info",
	{ (void *)mercury_data_ll_backend__trace_gen__du_name_ordered_trace_info_0 },
	{ (void *)mercury_data_ll_backend__trace_gen__du_ptag_ordered_trace_info_0 },
	1,
	4,
	mercury_data_ll_backend__trace_gen__functor_number_map_trace_info_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__trace_gen__enum_functor_desc_nondet_foreign_proc_trace_port_0_0 = {
	"nondet_foreign_proc_first",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__trace_gen__enum_functor_desc_nondet_foreign_proc_trace_port_0_1 = {
	"nondet_foreign_proc_later",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__trace_gen__enum_value_ordered_nondet_foreign_proc_trace_port_0[] = {
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_nondet_foreign_proc_trace_port_0_0,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_nondet_foreign_proc_trace_port_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__trace_gen__enum_name_ordered_nondet_foreign_proc_trace_port_0[] = {
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_nondet_foreign_proc_trace_port_0_0,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_nondet_foreign_proc_trace_port_0_1
};

const MR_Integer mercury_data_ll_backend__trace_gen__functor_number_map_nondet_foreign_proc_trace_port_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__trace_gen__type_ctor_info_nondet_foreign_proc_trace_port_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__trace_gen__nondet_foreign_proc_trace_port_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__trace_gen__nondet_foreign_proc_trace_port_0_0)),
	"ll_backend.trace_gen",
	"nondet_foreign_proc_trace_port",
	{ (void *)mercury_data_ll_backend__trace_gen__enum_name_ordered_nondet_foreign_proc_trace_port_0 },
	{ (void *)mercury_data_ll_backend__trace_gen__enum_value_ordered_nondet_foreign_proc_trace_port_0 },
	2,
	4,
	mercury_data_ll_backend__trace_gen__functor_number_map_nondet_foreign_proc_trace_port_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0 = {
	"neg_success",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1 = {
	"neg_failure",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__trace_gen__enum_value_ordered_negation_end_port_0[] = {
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__trace_gen__enum_name_ordered_negation_end_port_0[] = {
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0
};

const MR_Integer mercury_data_ll_backend__trace_gen__functor_number_map_negation_end_port_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__trace_gen__type_ctor_info_negation_end_port_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__trace_gen__negation_end_port_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__trace_gen__negation_end_port_0_0)),
	"ll_backend.trace_gen",
	"negation_end_port",
	{ (void *)mercury_data_ll_backend__trace_gen__enum_name_ordered_negation_end_port_0 },
	{ (void *)mercury_data_ll_backend__trace_gen__enum_value_ordered_negation_end_port_0 },
	2,
	4,
	mercury_data_ll_backend__trace_gen__functor_number_map_negation_end_port_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0 = {
	"external_port_call",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1 = {
	"external_port_exit",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2 = {
	"external_port_fail",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__trace_gen__enum_value_ordered_external_trace_port_0[] = {
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__trace_gen__enum_name_ordered_external_trace_port_0[] = {
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2
};

const MR_Integer mercury_data_ll_backend__trace_gen__functor_number_map_external_trace_port_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__trace_gen__type_ctor_info_external_trace_port_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__trace_gen__external_trace_port_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__trace_gen__external_trace_port_0_0)),
	"ll_backend.trace_gen",
	"external_trace_port",
	{ (void *)mercury_data_ll_backend__trace_gen__enum_name_ordered_external_trace_port_0 },
	{ (void *)mercury_data_ll_backend__trace_gen__enum_value_ordered_external_trace_port_0 },
	3,
	4,
	mercury_data_ll_backend__trace_gen__functor_number_map_external_trace_port_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0list__ti_list_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_layout_locn_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__tree__type_ctor_info_tree_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_libs__tree__ti_tree_1list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_libs__tree__type_ctor_info_tree_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__trace_gen__field_types_external_event_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0list__ti_list_1ll_backend__llds__type_ctor_info_layout_locn_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__tree__ti_tree_1list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_external_event_info_0_0 = {
	"external_event_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__trace_gen__field_types_external_event_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_external_event_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__trace_gen__du_ptag_ordered_external_event_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_name_ordered_external_event_info_0[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_external_event_info_0_0
};

const MR_Integer mercury_data_ll_backend__trace_gen__functor_number_map_external_event_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__trace_gen__type_ctor_info_external_event_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__trace_gen__external_event_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__trace_gen__external_event_info_0_0)),
	"ll_backend.trace_gen",
	"external_event_info",
	{ (void *)mercury_data_ll_backend__trace_gen__du_name_ordered_external_event_info_0 },
	{ (void *)mercury_data_ll_backend__trace_gen__du_ptag_ordered_external_event_info_0 },
	1,
	4,
	mercury_data_ll_backend__trace_gen__functor_number_map_external_event_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__generate_event_code_11_0_1 = {
{
MR_FUNCTION,
"ll_backend.trace_gen",
"ll_backend.trace_gen",
"find_lval_in_var_info",
2,
0
},
"ll_backend.trace_gen",
"trace_gen.m",
885,
"d1;c29;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__generate_event_code_11_0_2 = {
{
MR_FUNCTION,
"ll_backend.trace_gen",
"ll_backend.trace_gen",
"find_lval_in_layout_locn",
2,
0
},
"ll_backend.trace_gen",
"trace_gen.m",
889,
"d1;c34;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__maybe_setup_redo_event_2_0_1 = {
{
MR_PREDICATE,
"ll_backend.trace_gen",
"ll_backend.trace_gen",
"lambda_trace_gen_m_967",
2,
0
},
"ll_backend.trace_gen",
"trace_gen.m",
967,
"d1;c4;d1;c3;d1;c2;"
};

MR_decl_entry(check_hlds__inst_match__inst_is_clobbered_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__type_util__is_dummy_argument_type_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module0)
	MR_init_entry1(ll_backend__trace_gen__build_fail_vars_6_0);
	MR_init_label8(ll_backend__trace_gen__build_fail_vars_6_0,56,8,15,17,20,10,2,57)
	MR_init_label1(ll_backend__trace_gen__build_fail_vars_6_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__build_fail_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i56);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i57);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i57);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i1);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r2, 0);
	MR_sv(5) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_localcall_lab(ll_backend__trace_gen__build_fail_vars_6_0,
		ll_backend__trace_gen__build_fail_vars_6_0_i8);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(5), 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i2);
	}
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_clobbered_2_0,
		ll_backend__trace_gen__build_fail_vars_6_0_i15);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i10);
	}
	MR_r2 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__trace_gen__build_fail_vars_6_0_i17);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ll_backend__trace_gen__build_fail_vars_6_0_i20);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module1)
	MR_init_entry1(fn__ll_backend__trace_gen__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__trace_gen__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("trace.m", 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_arg_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(check_hlds__mode_util__mode_list_get_final_insts_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module2)
	MR_init_entry1(ll_backend__trace_gen__trace_fail_vars_3_0);
	MR_init_label7(ll_backend__trace_gen__trace_fail_vars_3_0,2,3,4,5,6,8,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__trace_fail_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ll_backend__trace_gen__trace_fail_vars_3_0_i2);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ll_backend__trace_gen__trace_fail_vars_3_0_i3);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		ll_backend__trace_gen__trace_fail_vars_3_0_i4);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__trace_gen__trace_fail_vars_3_0_i5);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		ll_backend__trace_gen__trace_fail_vars_3_0_i6);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__trace_gen__build_fail_vars_6_0,
		ll_backend__trace_gen__trace_fail_vars_3_0_i8);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_fail_vars_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("trace.m", 7);
	MR_r2 = (MR_Word) MR_string_const("length mismatch in trace.fail_vars", 34);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_trace_level_2_0);
MR_decl_entry(hlds__code_model__proc_info_interface_code_model_2_0);
MR_decl_entry(fn__libs__trace_params__eff_trace_level_is_none_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(ll_backend__code_util__goal_may_alloc_temp_frame_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_need_maxfr_slot_3_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module3)
	MR_init_entry1(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0);
	MR_init_label6(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0,2,3,5,9,10,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__do_we_need_maxfr_slot_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		ll_backend__trace_gen__do_we_need_maxfr_slot_5_0_i2);
MR_def_label(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__code_model__proc_info_interface_code_model_2_0,
		ll_backend__trace_gen__do_we_need_maxfr_slot_5_0_i3);
MR_def_label(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_is_none_4_0,
		ll_backend__trace_gen__do_we_need_maxfr_slot_5_0_i5);
MR_def_label(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0_i4);
	}
	if (MR_INT_EQ(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__trace_gen__do_we_need_maxfr_slot_5_0_i9);
MR_def_label(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_util__goal_may_alloc_temp_frame_2_0,
		ll_backend__trace_gen__do_we_need_maxfr_slot_5_0_i10);
MR_def_label(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_need_maxfr_slot_3_0);
MR_def_label(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_need_maxfr_slot_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_trace_suppress_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0);
MR_decl_entry(fn__libs__trace_params__eff_trace_needs_port_6_0);
MR_decl_entry(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_need_maxfr_slot_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_call_table_tip_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module4)
	MR_init_entry1(ll_backend__trace_gen__trace_reserved_slots_6_0);
	MR_init_label8(ll_backend__trace_gen__trace_reserved_slots_6_0,2,3,4,5,7,9,10,8)
	MR_init_label8(ll_backend__trace_gen__trace_reserved_slots_6_0,12,14,13,16,18,19,21,20)
	MR_init_label4(ll_backend__trace_gen__trace_reserved_slots_6_0,22,24,25,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__trace_reserved_slots_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i2);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__globals__get_trace_suppress_2_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i3);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 95;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i4);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i5);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__code_model__proc_info_interface_code_model_2_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i9);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_needs_port_6_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i10);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i12);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(1) = (MR_Integer) 0;
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i14);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i13);
	}
	MR_r1 = MR_sv(4);
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i16);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(2) = (MR_Integer) 0;
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i18);
	}
	MR_sv(4) = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 170;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i19);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 170;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i19);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_sv(5) = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i20);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(5) = (MR_Integer) 2;
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_need_maxfr_slot_2_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i22);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i24);
	}
	MR_r1 = MR_sv(3);
	MR_sv(1) = ((((((MR_Integer) 3 + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_sv(2)) + (MR_Integer) MR_sv(4)) + (MR_Integer) MR_sv(5)) + (MR_Integer) 0);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_call_table_tip_2_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i25);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(1) = ((((((MR_Integer) 3 + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_sv(2)) + (MR_Integer) MR_sv(4)) + (MR_Integer) MR_sv(5)) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_call_table_tip_2_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i25);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__code_info__get_proc_model_1_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(fn__ll_backend__llds__stack_slot_num_to_lval_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module5)
	MR_init_entry1(ll_backend__trace_gen__trace_setup_8_0);
	MR_init_label8(ll_backend__trace_gen__trace_setup_8_0,2,3,4,5,6,10,7,11)
	MR_init_label8(ll_backend__trace_gen__trace_setup_8_0,12,14,15,13,17,18,19,21)
	MR_init_label8(ll_backend__trace_gen__trace_setup_8_0,22,23,20,24,26,27,29,31)
	MR_init_label1(ll_backend__trace_gen__trace_setup_8_0,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__trace_setup_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_proc_model_1_0,
		ll_backend__trace_gen__trace_setup_8_0_i2);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		ll_backend__trace_gen__trace_setup_8_0_i3);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__globals__get_trace_suppress_2_0,
		ll_backend__trace_gen__trace_setup_8_0_i4);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 95;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__trace_gen__trace_setup_8_0_i5);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_needs_port_6_0,
		ll_backend__trace_gen__trace_setup_8_0_i6);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_8_0_i7);
	}
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_8_0_i7);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__trace_gen__trace_setup_8_0_i10);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(14) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Integer) 5;
	MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_8_0_i11);
	}
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = (MR_Integer) 4;
	MR_sv(14) = MR_sv(9);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0,
		ll_backend__trace_gen__trace_setup_8_0_i12);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_8_0_i14);
	}
	MR_r1 = MR_sv(4);
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_8_0_i13);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(9), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(1, MR_sv(9), 0) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_8_0_i15);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(2) = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_ctfield(1, MR_sv(9), 0) + (MR_Integer) 1);
	}
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_8_0_i17);
	}
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_r2;
	MR_r2 = (MR_Integer) 170;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__trace_gen__trace_setup_8_0_i19);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(10), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_tfield(1, MR_sv(10), 0) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_8_0_i18);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(8) = ((MR_Integer) MR_sv(8) + (MR_Integer) 1);
	MR_r2 = (MR_Integer) 170;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__trace_gen__trace_setup_8_0_i19);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_8_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_sv(11) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_8_0_i20);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(11), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_tfield(1, MR_sv(11), 0) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_8_0_i22);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(8) + (MR_Integer) 1);
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_8_0_i23);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_sv(8) = MR_tempr2;
	MR_sv(12) = ((MR_Integer) MR_ctfield(1, MR_sv(11), 0) + (MR_Integer) 2);
	}
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_need_maxfr_slot_2_0,
		ll_backend__trace_gen__trace_setup_8_0_i24);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_8_0_i26);
	}
	MR_r1 = MR_sv(3);
	MR_sv(13) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_call_table_tip_2_0,
		ll_backend__trace_gen__trace_setup_8_0_i29);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(13), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_tfield(1, MR_sv(13), 0) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_8_0_i27);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(12) = ((MR_Integer) MR_sv(12) + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_call_table_tip_2_0,
		ll_backend__trace_gen__trace_setup_8_0_i29);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_8_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_sv(12);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_8_0_i31);
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(9);
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	MR_tfield(0, MR_r1, 2) = MR_sv(11);
	MR_tfield(0, MR_r1, 3) = MR_sv(13);
	MR_tfield(0, MR_r1, 4) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 7) = MR_sv(1);
	MR_r3 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(ll_backend__trace_gen__trace_setup_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(9);
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	MR_tfield(0, MR_r1, 2) = MR_sv(11);
	MR_tfield(0, MR_r1, 3) = MR_sv(13);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(1);
	MR_r3 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module6)
	MR_init_entry1(ll_backend__trace_gen__stackref_to_string_2_0);
	MR_init_label6(ll_backend__trace_gen__stackref_to_string_2_0,4,5,2,9,10,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__stackref_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__stackref_to_string_2_0_i2);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__trace_gen__stackref_to_string_2_0_i4);
MR_def_label(ll_backend__trace_gen__stackref_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__stackref_to_string_2_0_i5);
MR_def_label(ll_backend__trace_gen__stackref_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_sv(", 6);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(ll_backend__trace_gen__stackref_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__stackref_to_string_2_0_i7);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__trace_gen__stackref_to_string_2_0_i9);
MR_def_label(ll_backend__trace_gen__stackref_to_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__stackref_to_string_2_0_i10);
MR_def_label(ll_backend__trace_gen__stackref_to_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_fv(", 6);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(ll_backend__trace_gen__stackref_to_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("trace.m", 7);
	MR_r2 = (MR_Word) MR_string_const("non-stack lval in stackref_to_string", 36);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module7)
	MR_init_entry1(ll_backend__trace_gen__event_num_slot_2_0);
	MR_init_label1(ll_backend__trace_gen__event_num_slot_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__event_num_slot_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__event_num_slot_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_proceed();
MR_def_label(ll_backend__trace_gen__event_num_slot_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module8)
	MR_init_entry1(ll_backend__trace_gen__call_num_slot_2_0);
	MR_init_label1(ll_backend__trace_gen__call_num_slot_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__call_num_slot_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__call_num_slot_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_proceed();
MR_def_label(ll_backend__trace_gen__call_num_slot_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module9)
	MR_init_entry1(ll_backend__trace_gen__call_depth_slot_2_0);
	MR_init_label1(ll_backend__trace_gen__call_depth_slot_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__call_depth_slot_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__call_depth_slot_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,4);
	MR_proceed();
MR_def_label(ll_backend__trace_gen__call_depth_slot_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module10)
	MR_init_entry1(ll_backend__trace_gen__redo_layout_slot_2_0);
	MR_init_label1(ll_backend__trace_gen__redo_layout_slot_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__redo_layout_slot_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__redo_layout_slot_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,6);
	MR_proceed();
MR_def_label(ll_backend__trace_gen__redo_layout_slot_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("trace.m", 7);
	MR_r2 = (MR_Word) MR_string_const("attempt to access redo layout slot for det or semi procedure", 60);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);
MR_decl_entry(fn__ll_backend__layout_out__make_label_layout_name_1_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module11)
	MR_init_entry1(ll_backend__trace_gen__generate_slot_fill_code_3_0);
	MR_init_label8(ll_backend__trace_gen__generate_slot_fill_code_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__trace_gen__generate_slot_fill_code_3_0,12,10,15,16,17,18,19,14)
	MR_init_label8(ll_backend__trace_gen__generate_slot_fill_code_3_0,22,23,24,20,26,27,28,29)
	MR_init_label8(ll_backend__trace_gen__generate_slot_fill_code_3_0,30,31,32,33,34,35,36,38)
	MR_init_label6(ll_backend__trace_gen__generate_slot_fill_code_3_0,37,40,41,42,43,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__generate_slot_fill_code_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_proc_model_1_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i2);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__event_num_slot_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i3);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__trace_gen__call_num_slot_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i4);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__trace_gen__call_depth_slot_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i5);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i6);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i7);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i8);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\t\tMR_trace_fill_std_slots(", 26);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i9);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i12);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\t\t", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i10);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i14);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_sv(7), 0);
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__redo_layout_slot_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i16);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i17);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__layout_out__make_label_layout_name_1_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i18);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" = (MR_Word) (const MR_Word *) &", 32);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\t\t", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i19);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_sv(7);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i22);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i23);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\t\tMR_store_ticket(", 18);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(");\n", 3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\t\tMR_mark_ticket_stack(", 23);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i24);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i26);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i36);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i27);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const(" = MR_trace_call_depth;\n\t\t}\n", 28);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i28);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t\t", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i29);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t} else {\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i30);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i31);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tif (MR_trace_from_full) {\n", 28);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i32);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = MR_trace_from_full;\n", 23);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i33);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i34);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i35);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i36);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_r3 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 10);
	MR_r3 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr4, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr4, 6) = MR_sv(3);
	MR_tfield(3, MR_tempr4, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr4, 8) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 9) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tempr6;
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i38);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i37);
	}
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(5), 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("save initial maxfr", 18);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tempr1;
	MR_sv(1) = (MR_Integer) 1;
	}
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(6), 0);
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i41);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" = 0;\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i42);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i43);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i44);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 10);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 8) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 9) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_maybe_trace_info_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module12)
	MR_init_entry1(ll_backend__trace_gen__trace_prepare_for_call_2_0);
	MR_init_label8(ll_backend__trace_gen__trace_prepare_for_call_2_0,2,3,5,6,9,11,12,13)
	MR_init_label2(ll_backend__trace_gen__trace_prepare_for_call_2_0,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__trace_prepare_for_call_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_maybe_trace_info_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i2);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_proc_model_1_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i3);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_prepare_for_call_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_sv(1), 0), 2);
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_prepare_for_call_2_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,4);
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i9);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i9);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_prepare_for_call_2_0_i11);
	}
	MR_sv(1) = (MR_Word) MR_string_const("MR_trace_reset_depth_from_full", 30);
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i12);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("MR_trace_reset_depth_from_shallow", 33);
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i12);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i13);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i14);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i15);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_known_variables_2_0);
MR_decl_entry(fn__ll_backend__code_info__current_resume_point_vars_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(list__delete_elems_3_0);
MR_decl_entry(fn__ll_backend__code_info__get_var_types_1_0);
MR_decl_entry(ll_backend__code_info__get_varset_2_0);
MR_decl_entry(ll_backend__code_info__get_instmap_2_0);
MR_decl_entry(ll_backend__code_info__max_reg_in_use_2_0);
MR_decl_entry(ll_backend__code_info__get_max_reg_in_use_at_trace_2_0);
MR_decl_entry(ll_backend__code_info__set_max_reg_in_use_at_trace_3_0);
MR_decl_entry(ll_backend__code_info__variable_locations_2_0);
MR_decl_entry(ll_backend__code_info__get_proc_info_2_0);
MR_decl_entry(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(map__values_2_0);
MR_decl_entry(fn__set__union_list_1_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(fn__set__list_to_set_1_0);
MR_decl_entry(set__list_to_set_2_0);
MR_decl_entry(fn__ll_backend__llds_out__label_to_c_string_2_0);
MR_decl_entry(fn__ll_backend__layout_out__trace_port_to_string_1_0);
MR_decl_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0);
MR_decl_entry(ll_backend__code_info__add_trace_layout_for_label_9_0);
MR_decl_entry(ll_backend__code_info__set_proc_trace_events_3_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module13)
	MR_init_entry1(ll_backend__trace_gen__generate_event_code_11_0);
	MR_init_label8(ll_backend__trace_gen__generate_event_code_11_0,2,3,6,7,8,10,12,16)
	MR_init_label8(ll_backend__trace_gen__generate_event_code_11_0,17,18,19,20,22,4,23,24)
	MR_init_label8(ll_backend__trace_gen__generate_event_code_11_0,25,26,27,28,29,30,32,33)
	MR_init_label8(ll_backend__trace_gen__generate_event_code_11_0,34,35,36,37,38,39,40,41)
	MR_init_label8(ll_backend__trace_gen__generate_event_code_11_0,42,43,44,45,48,47,50,51)
	MR_init_label8(ll_backend__trace_gen__generate_event_code_11_0,52,53,54,55,56,57,58,59)
	MR_init_label3(ll_backend__trace_gen__generate_event_code_11_0,60,61,62)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__generate_event_code_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_r7;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i2);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_known_variables_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i3);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__trace_gen__generate_event_code_11_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__trace_gen__generate_event_code_11_0_i16) MR_AND
		MR_LABEL_AP(ll_backend__trace_gen__generate_event_code_11_0_i22) MR_AND
		MR_LABEL_AP(ll_backend__trace_gen__generate_event_code_11_0_i22));
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i7);
	}
	MR_sv(2) = MR_r1;
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i4);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),14)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i8);
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i4);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),15)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i10);
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i4);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__trace_gen__this_file_0_0,
		ll_backend__trace_gen__generate_event_code_11_0_i12);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("generate_event_code: bad nondet foreign_proc port", 49);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i4);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__current_resume_point_vars_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i17);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i18);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i19);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__delete_elems_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i20);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i4);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_const_mask_field(MR_r2, 0);
	MR_r1 = MR_sv(12);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_var_types_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i23);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__get_varset_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i24);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__get_instmap_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i25);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__trace_gen__generate_event_code_11_0_i26);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(11);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(12);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,
		ll_backend__trace_gen__generate_event_code_11_0_i27);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__max_reg_in_use_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i28);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__get_max_reg_in_use_at_trace_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i29);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(11))) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i30);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__set_max_reg_in_use_at_trace_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i32);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__variable_locations_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i33);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i34);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i35);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0,
		ll_backend__trace_gen__generate_event_code_11_0_i36);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i37);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__values_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i38);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, layout_locn);
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i39);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, layout_locn);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i40);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, layout_locn);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i41);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__trace_gen__generate_event_code_11_0_i42);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i43);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i44);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(11) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds_out__label_to_c_string_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i45);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i47);
	}
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i48);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_EVENT(", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i51);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i50);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_USER_EVENT(", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i51);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__layout_out__trace_port_to_string_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i52);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i53);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("> */\n", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i54);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i55);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("path <", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i56);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i57);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i58);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t/* port ", 10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i59);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(8);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__code_info__add_trace_layout_for_label_9_0,
		ll_backend__trace_gen__generate_event_code_11_0_i60);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__code_info__set_proc_trace_events_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i61);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i62);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i62);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_sv(3), 0), 7);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i62);
	}
	MR_r8 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(8);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(11);
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_trace_layout_for_label_9_0,
		ll_backend__trace_gen__generate_event_code_11_0_i62);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tempr7 = MR_sv(7);
	MR_tfield(3, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("A label to hang trace liveness on", 33);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 10);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr5, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr5, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 6) = MR_tempr4;
	MR_tfield(3, MR_tempr5, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 8) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 9) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr6, 2, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(2, MR_tempr6, 0) = MR_sv(10);
	MR_tfield(2, MR_tempr6, 1) = MR_tempr3;
	MR_r4 = MR_r1;
	MR_r1 = MR_tempr7;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_goal_path_2_0);
MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(ll_backend__code_info__get_pred_info_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_pre_deaths_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module14)
	MR_init_entry1(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
	MR_init_label8(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,2,38,4,5,19,16,11,12)
	MR_init_label8(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,13,14,15,9,7,23,25,26)
	MR_init_label7(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,27,28,30,31,33,32,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_maybe_trace_info_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i2);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i4);
	}
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_path_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i5);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i11);
	}
	if (MR_PTAG_TEST(MR_tempr1,3)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i16);
	}
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i7);
	}
	MR_r3 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i19);
	}
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i9);
	}
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i9);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i7);
	}
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i9);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i7));
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i9);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i9);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i9);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_sv(9);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i23);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("trace.m", 7);
	MR_r2 = (MR_Word) MR_string_const("generate_internal_event_code: bad path", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i23);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i25);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_info_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i26);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i27);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_needs_port_6_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i28);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i38);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i30);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i31);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i33);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r7 = MR_sv(9);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_event_code_11_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i36);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_sv(9);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_event_code_11_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i36);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module15)
	MR_init_entry1(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0);
	MR_init_label8(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,2,7,6,8,9,10,11,13)
	MR_init_label5(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,14,16,15,19,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__maybe_generate_negated_event_code_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_maybe_trace_info_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i2);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i4);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i7);
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = (MR_Integer) 9;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i6);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = (MR_Integer) 10;
	MR_r1 = MR_sv(8);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i8);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_info_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i9);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i10);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_needs_port_6_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i11);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i4);
	}
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_path_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i13);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i14);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i16);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i15);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r7 = MR_sv(8);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_event_code_11_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i19);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_sv(8);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_event_code_11_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i19);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module16)
	MR_init_entry1(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0);
	MR_init_label8(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0,2,7,6,8,9,10,11,13)
	MR_init_label1(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_maybe_trace_info_2_0,
		ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0_i2);
MR_def_label(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0_i4);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = (MR_Integer) 14;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0_i6);
MR_def_label(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = (MR_Integer) 15;
	MR_r1 = MR_sv(7);
MR_def_label(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0_i8);
MR_def_label(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_info_2_0,
		ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0_i9);
MR_def_label(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0_i10);
MR_def_label(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_needs_port_6_0,
		ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0_i11);
MR_def_label(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_event_code_11_0,
		ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0_i13);
MR_def_label(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__trace_gen__maybe_generate_foreign_proc_event_code_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module17)
	MR_init_entry1(ll_backend__trace_gen__generate_user_event_code_5_0);
	MR_init_label3(ll_backend__trace_gen__generate_user_event_code_5_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__generate_user_event_code_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_path_2_0,
		ll_backend__trace_gen__generate_user_event_code_5_0_i2);
MR_def_label(ll_backend__trace_gen__generate_user_event_code_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		ll_backend__trace_gen__generate_user_event_code_5_0_i3);
MR_def_label(ll_backend__trace_gen__generate_user_event_code_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 16;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_event_code_11_0,
		ll_backend__trace_gen__generate_user_event_code_5_0_i4);
MR_def_label(ll_backend__trace_gen__generate_user_event_code_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module18)
	MR_init_entry1(ll_backend__trace_gen__generate_external_event_code_6_0);
	MR_init_label8(ll_backend__trace_gen__generate_external_event_code_6_0,3,4,2,5,6,7,8,10)
	MR_init_label1(ll_backend__trace_gen__generate_external_event_code_6_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__generate_external_event_code_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_external_event_code_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Integer) 0;
	MR_r1 = MR_r4;
	MR_GOTO_LAB(ll_backend__trace_gen__generate_external_event_code_6_0_i2);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_external_event_code_6_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Integer) 1;
	MR_r1 = MR_r4;
	MR_GOTO_LAB(ll_backend__trace_gen__generate_external_event_code_6_0_i2);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Integer) 3;
	MR_r1 = MR_r4;
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__trace_gen__generate_external_event_code_6_0_i5);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_info_2_0,
		ll_backend__trace_gen__generate_external_event_code_6_0_i6);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		ll_backend__trace_gen__generate_external_event_code_6_0_i7);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_needs_port_6_0,
		ll_backend__trace_gen__generate_external_event_code_6_0_i8);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_external_event_code_6_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_event_code_11_0,
		ll_backend__trace_gen__generate_external_event_code_6_0_i11);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module19)
	MR_init_entry1(ll_backend__trace_gen__maybe_setup_redo_event_2_0);
	MR_init_label3(ll_backend__trace_gen__maybe_setup_redo_event_2_0,3,19,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__maybe_setup_redo_event_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 7);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_setup_redo_event_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(ll_backend__trace_gen__maybe_setup_redo_event_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_setup_redo_event_2_0_i19);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_proceed();
MR_def_label(ll_backend__trace_gen__maybe_setup_redo_event_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__967__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_TAG_COMMON(3,1,7);
	MR_r2 = (MR_Word) MR_string_const("trace.m", 7);
	MR_r3 = (MR_Word) MR_string_const("from-full flag not stored in expected slot", 42);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__trace_gen__maybe_setup_redo_event_2_0_i6);
MR_def_label(ll_backend__trace_gen__maybe_setup_redo_event_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module20)
	MR_init_entry1(fn__ll_backend__trace_gen__find_lval_in_layout_locn_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__trace_gen__find_lval_in_layout_locn_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module21)
	MR_init_entry1(fn__ll_backend__trace_gen__find_lval_in_var_info_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__trace_gen__find_lval_in_var_info_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_const_mask_field(MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__label_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___libs__tree__tree_1_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module22)
	MR_init_entry1(__Unify___ll_backend__trace_gen__external_event_info_0_0);
	MR_init_label4(__Unify___ll_backend__trace_gen__external_event_info_0_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__trace_gen__external_event_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__external_event_info_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__trace_gen__external_event_info_0_0_i4);
MR_def_label(__Unify___ll_backend__trace_gen__external_event_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__external_event_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__trace_gen__external_event_info_0_0_i6);
MR_def_label(__Unify___ll_backend__trace_gen__external_event_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__external_event_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___libs__tree__tree_1_0);
MR_def_label(__Unify___ll_backend__trace_gen__external_event_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__trace_gen__external_event_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__label_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___libs__tree__tree_1_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module23)
	MR_init_entry1(__Compare___ll_backend__trace_gen__external_event_info_0_0);
	MR_init_label5(__Compare___ll_backend__trace_gen__external_event_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__trace_gen__external_event_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__external_event_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__trace_gen__external_event_info_0_0_i2);
MR_def_label(__Compare___ll_backend__trace_gen__external_event_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__trace_gen__external_event_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__trace_gen__external_event_info_0_0_i5);
MR_def_label(__Compare___ll_backend__trace_gen__external_event_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__external_event_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__trace_gen__external_event_info_0_0_i9);
MR_def_label(__Compare___ll_backend__trace_gen__external_event_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__external_event_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___libs__tree__tree_1_0);
MR_def_label(__Compare___ll_backend__trace_gen__external_event_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module24)
	MR_init_entry1(__Unify___ll_backend__trace_gen__external_trace_port_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__trace_gen__external_trace_port_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module25)
	MR_init_entry1(__Compare___ll_backend__trace_gen__external_trace_port_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__trace_gen__external_trace_port_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module26)
	MR_init_entry1(__Unify___ll_backend__trace_gen__negation_end_port_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__trace_gen__negation_end_port_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module27)
	MR_init_entry1(__Compare___ll_backend__trace_gen__negation_end_port_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__trace_gen__negation_end_port_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module28)
	MR_init_entry1(__Unify___ll_backend__trace_gen__nondet_foreign_proc_trace_port_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__trace_gen__nondet_foreign_proc_trace_port_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module29)
	MR_init_entry1(__Compare___ll_backend__trace_gen__nondet_foreign_proc_trace_port_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__trace_gen__nondet_foreign_proc_trace_port_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___libs__trace_params__trace_level_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_items_0;
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module30)
	MR_init_entry1(__Unify___ll_backend__trace_gen__trace_info_0_0);
	MR_init_label8(__Unify___ll_backend__trace_gen__trace_info_0_0,4,6,8,10,12,14,16,20)
	MR_init_label1(__Unify___ll_backend__trace_gen__trace_info_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__trace_gen__trace_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i20);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___libs__trace_params__trace_level_0_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i4);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_items);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i6);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i8);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i10);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i12);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i14);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i16);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___libs__trace_params__trace_level_0_0);
MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module31)
	MR_init_entry1(__Compare___ll_backend__trace_gen__trace_info_0_0);
	MR_init_label8(__Compare___ll_backend__trace_gen__trace_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label2(__Compare___ll_backend__trace_gen__trace_info_0_0,29,69)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__trace_gen__trace_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i2);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___libs__trace_params__trace_level_0_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i5);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_items);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i9);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i13);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i17);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i21);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i25);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i29);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module32)
	MR_init_entry1(__Unify___ll_backend__trace_gen__trace_port_info_0_0);
	MR_init_label7(__Unify___ll_backend__trace_gen__trace_port_info_0_0,6,8,10,14,18,33,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__trace_gen__trace_port_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i33);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i8) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i14) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i18));
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__trace_gen__trace_port_info_0_0_i10);
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_ctfield(3, MR_sv(1), 0);
	MR_r3 = MR_ctfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module33)
	MR_init_entry1(__Compare___ll_backend__trace_gen__trace_port_info_0_0);
	MR_init_label8(__Compare___ll_backend__trace_gen__trace_port_info_0_0,6,57,7,22,25,27,29,36)
	MR_init_label7(__Compare___ll_backend__trace_gen__trace_port_info_0_0,39,45,48,62,49,52,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__trace_gen__trace_port_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i57);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i36) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i45));
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i49);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i49);
	}
	}
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i62);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i57);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i25) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i27) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i49));
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r2, 1);
	MR_tempr2 = MR_ctfield(1, MR_r3, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__trace_gen__trace_port_info_0_0_i29);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i39) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i62) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i52) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i49));
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i48) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i62) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i62) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i52));
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i49);
	}
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_const_mask_field(MR_r2, 0);
	MR_r3 = MR_const_mask_field(MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(ll_backend__trace_gen_module34)
	MR_init_entry1(__Unify___ll_backend__trace_gen__trace_slot_info_0_0);
	MR_init_label6(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,4,6,8,10,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__trace_gen__trace_slot_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i14);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(9) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i4);
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i6);
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i8);
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i10);
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module35)
	MR_init_entry1(__Compare___ll_backend__trace_gen__trace_slot_info_0_0);
	MR_init_label7(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__trace_gen__trace_slot_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i2);
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i5);
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i9);
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i13);
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i17);
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module36)
	MR_init_entry1(ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__967__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__967__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__produce_variable_in_reg_or_stack_5_0);
MR_decl_entry(fn__ll_backend__code_info__variable_type_2_0);
MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(hlds__instmap__lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);
MR_decl_entry(parse_tree__prog_type__type_vars_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module37)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0);
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,4,5,8,7,10,11,12,14)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,13,16,17,20,18,23,24,26)
	MR_init_label1(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i3);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_ctfield(1, MR_r1, 0);
	MR_sv(8) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i5);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i7);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(8);
	MR_r7 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_np_localcall_lab(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i26);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_in_reg_or_stack_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i10);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i11);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i12);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(varset__search_name_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i14);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i13);
	}
	MR_r1 = MR_sv(3);
	MR_sv(13) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i16);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_sv(13) = (MR_Word) MR_string_const("", 0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i17);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i20);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(13);
	MR_tempr4 = MR_sv(11);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(7) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("trace", 5);
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i23);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(13);
	MR_tempr4 = MR_sv(11);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(7) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_string_const("trace", 5);
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i23);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i24);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r7 = MR_sv(9);
	}
	MR_np_localcall_lab(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0_i26);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_53_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r7;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__trace_gen_maybe_bunch_0(void)
{
	ll_backend__trace_gen_module0();
	ll_backend__trace_gen_module1();
	ll_backend__trace_gen_module2();
	ll_backend__trace_gen_module3();
	ll_backend__trace_gen_module4();
	ll_backend__trace_gen_module5();
	ll_backend__trace_gen_module6();
	ll_backend__trace_gen_module7();
	ll_backend__trace_gen_module8();
	ll_backend__trace_gen_module9();
	ll_backend__trace_gen_module10();
	ll_backend__trace_gen_module11();
	ll_backend__trace_gen_module12();
	ll_backend__trace_gen_module13();
	ll_backend__trace_gen_module14();
	ll_backend__trace_gen_module15();
	ll_backend__trace_gen_module16();
	ll_backend__trace_gen_module17();
	ll_backend__trace_gen_module18();
	ll_backend__trace_gen_module19();
	ll_backend__trace_gen_module20();
	ll_backend__trace_gen_module21();
	ll_backend__trace_gen_module22();
	ll_backend__trace_gen_module23();
	ll_backend__trace_gen_module24();
	ll_backend__trace_gen_module25();
	ll_backend__trace_gen_module26();
	ll_backend__trace_gen_module27();
	ll_backend__trace_gen_module28();
	ll_backend__trace_gen_module29();
	ll_backend__trace_gen_module30();
	ll_backend__trace_gen_module31();
	ll_backend__trace_gen_module32();
	ll_backend__trace_gen_module33();
	ll_backend__trace_gen_module34();
	ll_backend__trace_gen_module35();
	ll_backend__trace_gen_module36();
	ll_backend__trace_gen_module37();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__trace_gen__init(void);
void mercury__ll_backend__trace_gen__init_type_tables(void);
void mercury__ll_backend__trace_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__trace_gen__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__trace_gen__init_complexity_procs(void);
#endif

void mercury__ll_backend__trace_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__trace_gen_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__trace_gen__type_ctor_info_trace_slot_info_0,
		ll_backend__trace_gen__trace_slot_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__trace_gen__type_ctor_info_trace_port_info_0,
		ll_backend__trace_gen__trace_port_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__trace_gen__type_ctor_info_trace_info_0,
		ll_backend__trace_gen__trace_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__trace_gen__type_ctor_info_nondet_foreign_proc_trace_port_0,
		ll_backend__trace_gen__nondet_foreign_proc_trace_port_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__trace_gen__type_ctor_info_negation_end_port_0,
		ll_backend__trace_gen__negation_end_port_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__trace_gen__type_ctor_info_external_trace_port_0,
		ll_backend__trace_gen__external_trace_port_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__trace_gen__type_ctor_info_external_event_info_0,
		ll_backend__trace_gen__external_event_info_0_0);
	mercury__ll_backend__trace_gen__init_debugger();
}

void mercury__ll_backend__trace_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__trace_gen__type_ctor_info_trace_slot_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__trace_gen__type_ctor_info_trace_port_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__trace_gen__type_ctor_info_trace_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__trace_gen__type_ctor_info_nondet_foreign_proc_trace_port_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__trace_gen__type_ctor_info_negation_end_port_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__trace_gen__type_ctor_info_external_trace_port_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__trace_gen__type_ctor_info_external_event_info_0);
	}
}


void mercury__ll_backend__trace_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__trace_gen__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__trace_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
