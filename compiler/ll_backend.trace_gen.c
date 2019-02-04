/*
** Automatically generated from `trace_gen.m'
** by the Mercury compiler,
** version rotd-2011-09-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__trace_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.trace_gen.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.trace_gen.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ll_backend.trace_gen.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ll_backend.trace_gen.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.trace_gen.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ll_backend.trace_gen.c"
#line 49 "ll_backend.trace_gen.c"
#include "ll_backend.trace_gen.mh"

#line 52 "ll_backend.trace_gen.c"
#line 53 "ll_backend.trace_gen.c"
#ifndef LL_BACKEND__TRACE_GEN_DECL_GUARD
#define LL_BACKEND__TRACE_GEN_DECL_GUARD

#line 57 "ll_backend.trace_gen.c"
#line 58 "ll_backend.trace_gen.c"

#endif
#line 61 "ll_backend.trace_gen.c"

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
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
	mercury_data_ll_backend__trace_gen__type_ctor_info_external_event_info_0,
	mercury_data_ll_backend__trace_gen__type_ctor_info_external_trace_port_0,
	mercury_data_ll_backend__trace_gen__type_ctor_info_negation_end_port_0,
	mercury_data_ll_backend__trace_gen__type_ctor_info_trace_info_0,
	mercury_data_ll_backend__trace_gen__type_ctor_info_trace_port_info_0,
	mercury_data_ll_backend__trace_gen__type_ctor_info_trace_slot_info_0;
MR_decl_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0, 4,3,6,7,8,11,10,12,13,15)
MR_decl_label5(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0, 14,24,26,28,29)
MR_decl_label9(ll_backend__trace_gen__build_fail_vars_6_0, 83,8,15,18,19,10,2,84,1)
MR_decl_label1(ll_backend__trace_gen__call_depth_slot_2_0, 3)
MR_decl_label1(ll_backend__trace_gen__call_num_slot_2_0, 3)
MR_decl_label6(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0, 2,3,5,9,10,4)
MR_decl_label1(ll_backend__trace_gen__event_num_slot_2_0, 3)
MR_decl_label5(ll_backend__trace_gen__find_output_vars_3_0, 8,4,5,3,2)
MR_decl_label10(ll_backend__trace_gen__generate_event_code_11_0, 2,3,5,8,9,10,12,7,15,17)
MR_decl_label10(ll_backend__trace_gen__generate_event_code_11_0, 20,19,14,22,24,4,25,26,27,29)
MR_decl_label10(ll_backend__trace_gen__generate_event_code_11_0, 30,31,32,33,35,36,37,38,39,41)
MR_decl_label10(ll_backend__trace_gen__generate_event_code_11_0, 43,44,45,47,48,49,50,53,52,54)
MR_decl_label10(ll_backend__trace_gen__generate_event_code_11_0, 55,56,57,58,59,60,61,62,63,68)
MR_decl_label4(ll_backend__trace_gen__generate_event_code_11_0, 64,90,91,92)
MR_decl_label10(ll_backend__trace_gen__generate_external_event_code_6_0, 3,4,5,2,6,7,8,9,11,13)
MR_decl_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0, 12,13,14,16,17,18,19,20,21,15)
MR_decl_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0, 23,24,25,26,27,22,29,30,31,32)
MR_decl_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0, 33,34,35,36,37,28,39,40,41,42)
MR_decl_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0, 43,44,45,46,47,48,38,49,55,57)
MR_decl_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0, 62,64,66,67,68,69,70,71,72,73)
MR_decl_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0, 74,75,81,83,85,86,87,88,94,95)
MR_decl_label1(ll_backend__trace_gen__generate_slot_fill_code_3_0, 96)
MR_decl_label4(ll_backend__trace_gen__generate_tailrec_event_code_8_0, 2,3,6,8)
MR_decl_label10(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0, 12,13,14,16,18,20,21,22,23,19)
MR_decl_label10(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0, 25,26,27,28,29,30,31,32,24,34)
MR_decl_label10(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0, 39,48,41,40,51,52,53,54,55,56)
MR_decl_label5(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0, 57,58,64,65,66)
MR_decl_label5(ll_backend__trace_gen__generate_user_event_code_5_0, 2,3,4,5,8)
MR_decl_label10(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0, 2,4,6,7,8,13,14,15,16,18)
MR_decl_label10(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0, 17,12,10,23,25,26,27,28,30,31)
MR_decl_label6(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0, 33,32,36,38,24,39)
MR_decl_label10(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0, 2,7,6,8,9,10,11,13,14,16)
MR_decl_label7(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0, 15,18,19,20,22,4,23)
MR_decl_label3(ll_backend__trace_gen__maybe_setup_redo_event_2_0, 3,38,14)
MR_decl_label1(ll_backend__trace_gen__redo_layout_slot_2_0, 3)
MR_decl_label6(ll_backend__trace_gen__stackref_to_string_2_0, 4,5,2,9,10,7)
MR_decl_label7(ll_backend__trace_gen__trace_fail_vars_3_0, 2,3,4,5,6,8,7)
MR_decl_label10(ll_backend__trace_gen__trace_prepare_for_call_2_0, 2,3,5,8,11,13,14,15,16,17)
MR_decl_label10(ll_backend__trace_gen__trace_reserved_slots_6_0, 2,3,4,5,7,9,11,8,13,15)
MR_decl_label10(ll_backend__trace_gen__trace_reserved_slots_6_0, 14,17,19,20,22,21,23,25,24,26)
MR_decl_label3(ll_backend__trace_gen__trace_reserved_slots_6_0, 28,29,31)
MR_decl_label10(ll_backend__trace_gen__trace_setup_9_0, 2,3,4,5,6,10,7,12,13,14)
MR_decl_label10(ll_backend__trace_gen__trace_setup_9_0, 16,18,15,21,23,25,27,29,30,26)
MR_decl_label9(ll_backend__trace_gen__trace_setup_9_0, 33,35,37,34,40,42,46,49,45)
MR_decl_label4(__Unify___ll_backend__trace_gen__external_event_info_0_0, 4,8,12,1)
MR_decl_label10(__Unify___ll_backend__trace_gen__trace_info_0_0, 4,6,8,10,13,15,17,20,24,1)
MR_decl_label8(__Unify___ll_backend__trace_gen__trace_port_info_0_0, 5,8,6,15,13,42,21,1)
MR_decl_label7(__Unify___ll_backend__trace_gen__trace_slot_info_0_0, 4,6,8,10,12,16,1)
MR_decl_label5(__Compare___ll_backend__trace_gen__external_event_info_0_0, 3,2,5,11,40)
MR_decl_label10(__Compare___ll_backend__trace_gen__trace_info_0_0, 3,2,5,9,13,17,22,26,30,35)
MR_decl_label1(__Compare___ll_backend__trace_gen__trace_info_0_0, 106)
MR_decl_label10(__Compare___ll_backend__trace_gen__trace_port_info_0_0, 81,7,8,9,5,13,16,14,22,11)
MR_decl_label10(__Compare___ll_backend__trace_gen__trace_port_info_0_0, 26,143,27,30,24,40,41,42,101,38)
MR_decl_label4(__Compare___ll_backend__trace_gen__trace_port_info_0_0, 46,47,48,51)
MR_decl_label8(__Compare___ll_backend__trace_gen__trace_slot_info_0_0, 3,2,5,9,13,17,21,53)
MR_def_extern_entry(ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_0)
MR_decl_static(ll_backend__trace_gen__build_fail_vars_6_0)
MR_def_extern_entry(ll_backend__trace_gen__trace_fail_vars_3_0)
MR_def_extern_entry(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0)
MR_def_extern_entry(ll_backend__trace_gen__trace_reserved_slots_6_0)
MR_def_extern_entry(ll_backend__trace_gen__trace_setup_9_0)
MR_decl_static(ll_backend__trace_gen__stackref_to_string_2_0)
MR_decl_static(ll_backend__trace_gen__event_num_slot_2_0)
MR_decl_static(ll_backend__trace_gen__call_num_slot_2_0)
MR_decl_static(ll_backend__trace_gen__call_depth_slot_2_0)
MR_decl_static(ll_backend__trace_gen__redo_layout_slot_2_0)
MR_def_extern_entry(ll_backend__trace_gen__generate_slot_fill_code_3_0)
MR_def_extern_entry(ll_backend__trace_gen__trace_prepare_for_call_2_0)
MR_decl_static(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0)
MR_decl_static(ll_backend__trace_gen__find_output_vars_3_0)
MR_decl_static(ll_backend__trace_gen__generate_event_code_11_0)
MR_def_extern_entry(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0)
MR_def_extern_entry(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0)
MR_def_extern_entry(ll_backend__trace_gen__generate_user_event_code_5_0)
MR_def_extern_entry(ll_backend__trace_gen__generate_tailrec_event_code_8_0)
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
MR_def_extern_entry(__Unify___ll_backend__trace_gen__trace_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__trace_gen__trace_info_0_0)
MR_decl_static(__Unify___ll_backend__trace_gen__trace_port_info_0_0)
MR_decl_static(__Compare___ll_backend__trace_gen__trace_port_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__trace_gen__trace_slot_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__trace_gen__trace_slot_info_0_0)
MR_decl_static(ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1168__1_2_0)
MR_decl_static(ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__931__1_2_0)
MR_decl_static(ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__937__1_2_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, lval)
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, layout_locn)
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
MR_tbmkword(0, 1)
},
{
MR_tbmkword(0, 4)
},
{
MR_tbmkword(0, 3)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__generate_event_code_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__generate_event_code_11_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__maybe_setup_redo_event_2_0_1;
static const struct mercury_type_3 mercury_common_3[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,2),
MR_COMMON(0,2)
},
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

static const struct mercury_type_4 mercury_common_4[1] =
{
{
1
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
0,
MR_TAG_COMMON(1,4,0)
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
MR_COMMON(3,2),
MR_ENTRY_AP(fn__ll_backend__trace_gen__find_lval_in_var_info_1_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(fn__ll_backend__trace_gen__find_lval_in_layout_locn_1_0),
0
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
4,
MR_TAG_COMMON(0,4,0),
MR_TAG_COMMON(1,2,1)
},
{
4,
MR_TAG_COMMON(0,4,0),
MR_TAG_COMMON(1,2,2)
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
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
static const struct mercury_type_9 mercury_common_9[3] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(hlds__hlds_pred, arg_info)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_cord__type_ctor_info_cord_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__trace_gen__field_types_external_event_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
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
	15,
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

static const MR_EnumFunctorDesc mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3 = {
	"external_port_tailrec_call",
	3
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__trace_gen__enum_value_ordered_external_trace_port_0[] = {
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__trace_gen__enum_name_ordered_external_trace_port_0[] = {
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2,
	&mercury_data_ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3
};

const MR_Integer mercury_data_ll_backend__trace_gen__functor_number_map_external_trace_port_0[] = {
	0,
	1,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__trace_gen__type_ctor_info_external_trace_port_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__trace_gen__external_trace_port_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__trace_gen__external_trace_port_0_0)),
	"ll_backend.trace_gen",
	"external_trace_port",
	{ (void *)mercury_data_ll_backend__trace_gen__enum_name_ordered_external_trace_port_0 },
	{ (void *)mercury_data_ll_backend__trace_gen__enum_value_ordered_external_trace_port_0 },
	4,
	4,
	mercury_data_ll_backend__trace_gen__functor_number_map_external_trace_port_0
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
	15,
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
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0
}};

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

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__trace_gen__field_types_trace_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_level_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0
};

const MR_ConstString mercury_data_ll_backend__trace_gen__field_names_trace_info_0_0[] = {
	"ti_trace_level",
	"ti_trace_suppress_items",
	"ti_from_full_lval",
	"ti_io_seq_lval",
	"ti_trail_lvals",
	"ti_maxfr_lval",
	"ti_call_table_tip_lval",
	"ti_tail_rec_info",
	"ti_redo_label"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_info_0_0 = {
	"trace_info",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__trace_gen__field_types_trace_info_0_0,
	mercury_data_ll_backend__trace_gen__field_names_trace_info_0_0,
	NULL,
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
	15,
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
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1 = {
	"port_info_tailrec_call",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_1,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree_bitset__type_ctor_info_tree_bitset_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2 = {
	"port_info_internal",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3 = {
	"port_info_negation_end",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4 = {
	"port_info_user",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__trace_gen__field_types_trace_port_info_0_4,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3,
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4

};

const MR_DuPtagLayout mercury_data_ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__trace_gen__du_name_ordered_trace_port_info_0[] = {
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0,
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2,
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3,
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1,
	&mercury_data_ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4
};

const MR_Integer mercury_data_ll_backend__trace_gen__functor_number_map_trace_port_info_0[] = {
	0,
	3,
	1,
	2,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__trace_gen__type_ctor_info_trace_port_info_0 = {
	0,
	15,
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
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__trace_gen__field_names_trace_slot_info_0_0[] = {
	"slot_from_full",
	"slot_io",
	"slot_trail",
	"slot_maxfr",
	"slot_call_table",
	"slot_tail_rec"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0 = {
	"trace_slot_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__trace_gen__field_types_trace_slot_info_0_0,
	mercury_data_ll_backend__trace_gen__field_names_trace_slot_info_0_0,
	NULL,
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
	15,
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


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__maybe_setup_redo_event_2_0_1 = {
{
MR_PREDICATE,
"ll_backend.trace_gen",
"ll_backend.trace_gen",
"lambda_trace_gen_m_1168",
2,
0
},
"ll_backend.trace_gen",
"trace_gen.m",
1168,
"12"
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
1076,
"79"
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
1072,
"74"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_2 = {
{
MR_PREDICATE,
"ll_backend.trace_gen",
"ll_backend.trace_gen",
"lambda_trace_gen_m_937",
2,
0
},
"ll_backend.trace_gen",
"trace_gen.m",
937,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.trace_gen",
"ll_backend.trace_gen",
"lambda_trace_gen_m_931",
2,
0
},
"ll_backend.trace_gen",
"trace_gen.m",
931,
"24"
};



MR_BEGIN_MODULE(ll_backend__trace_gen_module0)
	MR_init_entry1(ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_trace_maybe_tail_rec_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_clobbered_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__check_hlds__type_util__check_dummy_type_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module1)
	MR_init_entry1(ll_backend__trace_gen__build_fail_vars_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__build_fail_vars_6_0);
	MR_init_label9(ll_backend__trace_gen__build_fail_vars_6_0,83,8,15,18,19,10,2,84,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_fail_vars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__build_fail_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i83);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i84);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i84);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,83)
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
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(ll_backend__trace_gen__build_fail_vars_6_0,
		ll_backend__trace_gen__build_fail_vars_6_0_i8);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i2);
	}
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_clobbered_2_0,
		ll_backend__trace_gen__build_fail_vars_6_0_i15);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i10);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__trace_gen__build_fail_vars_6_0_i18);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ll_backend__trace_gen__build_fail_vars_6_0_i19);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__build_fail_vars_6_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__trace_gen__build_fail_vars_6_0,84)
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

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_arg_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(check_hlds__mode_util__mode_list_get_final_insts_3_0);
MR_decl_entry(parse_tree__set_of_var__list_to_set_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module2)
	MR_init_entry1(ll_backend__trace_gen__trace_fail_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__trace_fail_vars_3_0);
	MR_init_label7(ll_backend__trace_gen__trace_fail_vars_3_0,2,3,4,5,6,8,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_fail_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__trace_fail_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ll_backend__trace_gen__trace_fail_vars_3_0_i2);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ll_backend__trace_gen__trace_fail_vars_3_0_i3);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		ll_backend__trace_gen__trace_fail_vars_3_0_i4);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__trace_gen__trace_fail_vars_3_0_i5);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		ll_backend__trace_gen__trace_fail_vars_3_0_i6);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__build_fail_vars_6_0,
		ll_backend__trace_gen__trace_fail_vars_3_0_i8);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_fail_vars_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__set_of_var__list_to_set_2_0);
MR_def_label(ll_backend__trace_gen__trace_fail_vars_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.trace_gen", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.trace_gen.trace_fail_vars\'/3", 50);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_trace_level_2_0);
MR_decl_entry(fn__hlds__code_model__proc_info_interface_code_model_1_0);
MR_decl_entry(fn__libs__trace_params__eff_trace_level_is_none_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(ll_backend__code_util__goal_may_alloc_temp_frame_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_need_maxfr_slot_3_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module3)
	MR_init_entry1(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__do_we_need_maxfr_slot_5_0);
	MR_init_label6(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0,2,3,5,9,10,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_we_need_maxfr_slot'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__do_we_need_maxfr_slot_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		ll_backend__trace_gen__do_we_need_maxfr_slot_5_0_i2);
MR_def_label(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		ll_backend__trace_gen__do_we_need_maxfr_slot_5_0_i3);
MR_def_label(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_is_none_4_0,
		ll_backend__trace_gen__do_we_need_maxfr_slot_5_0_i5);
MR_def_label(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0_i4);
	}
	if (MR_INT_EQ(MR_sv(3),2)) {
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
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_tail_call_events_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_call_table_tip_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module4)
	MR_init_entry1(ll_backend__trace_gen__trace_reserved_slots_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__trace_reserved_slots_6_0);
	MR_init_label10(ll_backend__trace_gen__trace_reserved_slots_6_0,2,3,4,5,7,9,11,8,13,15)
	MR_init_label10(ll_backend__trace_gen__trace_reserved_slots_6_0,14,17,19,20,22,21,23,25,24,26)
	MR_init_label3(ll_backend__trace_gen__trace_reserved_slots_6_0,28,29,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_reserved_slots'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__trace_reserved_slots_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
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
	MR_r2 = (MR_Integer) 111;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i4);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
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
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i9);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i8);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_needs_port_6_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i11);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i8);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_sv(7) = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i13);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_sv(7) = (MR_Integer) 0;
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i15);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i14);
	}
	MR_r1 = MR_sv(4);
	MR_sv(3) = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i17);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(3) = (MR_Integer) 0;
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i19);
	}
	MR_sv(4) = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 206;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i20);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 206;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i20);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_sv(5) = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i21);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(5) = (MR_Integer) 2;
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_need_maxfr_slot_2_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i23);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_sv(6) = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i24);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(6) = (MR_Integer) 1;
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_tail_call_events_2_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i26);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_sv(7) = (((((((MR_Integer) 3 + (MR_Integer) MR_sv(7)) + (MR_Integer) MR_sv(3)) + (MR_Integer) MR_sv(4)) + (MR_Integer) MR_sv(5)) + (MR_Integer) MR_sv(6)) + (MR_Integer) 0);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_call_table_tip_2_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i29);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(7) = (((((((MR_Integer) 3 + (MR_Integer) MR_sv(7)) + (MR_Integer) MR_sv(3)) + (MR_Integer) MR_sv(4)) + (MR_Integer) MR_sv(5)) + (MR_Integer) MR_sv(6)) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_call_table_tip_2_0,
		ll_backend__trace_gen__trace_reserved_slots_6_0_i29);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_reserved_slots_6_0_i31);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__trace_gen__trace_reserved_slots_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_sv(7) + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__code_info__get_proc_model_1_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(fn__ll_backend__llds__code_model_to_main_stack_1_0);
MR_decl_entry(fn__ll_backend__llds__stack_slot_num_to_lval_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module5)
	MR_init_entry1(ll_backend__trace_gen__trace_setup_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__trace_setup_9_0);
	MR_init_label10(ll_backend__trace_gen__trace_setup_9_0,2,3,4,5,6,10,7,12,13,14)
	MR_init_label10(ll_backend__trace_gen__trace_setup_9_0,16,18,15,21,23,25,27,29,30,26)
	MR_init_label9(ll_backend__trace_gen__trace_setup_9_0,33,35,37,34,40,42,46,49,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_setup'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__trace_setup_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(11) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_proc_model_1_0,
		ll_backend__trace_gen__trace_setup_9_0_i2);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		ll_backend__trace_gen__trace_setup_9_0_i3);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(libs__globals__get_trace_suppress_2_0,
		ll_backend__trace_gen__trace_setup_9_0_i4);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 111;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__trace_gen__trace_setup_9_0_i5);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_needs_port_6_0,
		ll_backend__trace_gen__trace_setup_9_0_i6);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_9_0_i7);
	}
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_9_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__trace_gen__trace_setup_9_0_i10);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(16) = MR_r2;
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(2);
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = (MR_Integer) 5;
	MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_9_0_i12);
	}
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(2);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(16) = MR_sv(1);
	MR_sv(1) = (MR_Integer) 4;
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0,
		ll_backend__trace_gen__trace_setup_9_0_i13);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__llds__code_model_to_main_stack_1_0,
		ll_backend__trace_gen__trace_setup_9_0_i14);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(15),0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_9_0_i16);
	}
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_sv(1);
	MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_9_0_i15);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(1, MR_sv(5), 0) = MR_tempr1;
	MR_sv(15) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_9_0_i18);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_sv(9) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	}
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_9_0_i21);
	}
	MR_sv(6) = MR_r2;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = MR_sv(9);
	MR_r2 = (MR_Integer) 206;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__trace_gen__trace_setup_9_0_i25);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_9_0_i23);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_sv(10) = ((MR_Integer) MR_sv(9) + (MR_Integer) 1);
	MR_r2 = (MR_Integer) 206;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__trace_gen__trace_setup_9_0_i25);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_9_0_i27);
	}
	MR_r1 = MR_sv(14);
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(10);
	MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_9_0_i26);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(8), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_tfield(1, MR_sv(8), 0) = MR_tempr1;
	MR_sv(9) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_9_0_i29);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_9_0_i30);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(9), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(9), 0) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_sv(12) = ((MR_Integer) MR_sv(10) + (MR_Integer) 2);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_need_maxfr_slot_2_0,
		ll_backend__trace_gen__trace_setup_9_0_i33);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_9_0_i35);
	}
	MR_r1 = MR_sv(14);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(17) = MR_sv(12);
	MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_9_0_i34);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(10), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_tfield(1, MR_sv(10), 0) = MR_tempr1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_9_0_i37);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_sv(17) = ((MR_Integer) MR_sv(12) + (MR_Integer) 1);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(11),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_9_0_i40);
	}
	MR_sv(11) = MR_r2;
	MR_sv(13) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(14) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_call_table_tip_2_0,
		ll_backend__trace_gen__trace_setup_9_0_i46);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(13), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(17);
	MR_tfield(1, MR_sv(13), 0) = MR_tempr2;
	MR_sv(14) = MR_r1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_9_0_i42);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(12);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_sv(14) = MR_tempr1;
	MR_sv(12) = ((MR_Integer) MR_sv(17) + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_call_table_tip_2_0,
		ll_backend__trace_gen__trace_setup_9_0_i46);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_setup_9_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr3 = MR_sv(12);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tempr2 = MR_sv(15);
	MR_sv(15) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__trace_gen__trace_setup_9_0_i49);
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_sv(8);
	MR_tfield(0, MR_r1, 3) = MR_sv(10);
	MR_tfield(0, MR_r1, 4) = MR_sv(15);
	MR_tfield(0, MR_r1, 5) = MR_sv(13);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 9);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(9);
	MR_tfield(0, MR_r2, 5) = MR_sv(11);
	MR_tfield(0, MR_r2, 6) = MR_tempr1;
	MR_tfield(0, MR_r2, 7) = MR_sv(14);
	MR_tfield(0, MR_r2, 8) = MR_sv(4);
	MR_r3 = MR_sv(16);
	MR_decr_sp_and_return(18);
	}
MR_def_label(ll_backend__trace_gen__trace_setup_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_sv(8);
	MR_tfield(0, MR_r1, 3) = MR_sv(10);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 5) = MR_sv(13);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 9);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(9);
	MR_tfield(0, MR_r2, 5) = MR_sv(11);
	MR_tfield(0, MR_r2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 7) = MR_sv(14);
	MR_tfield(0, MR_r2, 8) = MR_sv(4);
	MR_r3 = MR_sv(16);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module6)
	MR_init_entry1(ll_backend__trace_gen__stackref_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__stackref_to_string_2_0);
	MR_init_label6(ll_backend__trace_gen__stackref_to_string_2_0,4,5,2,9,10,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stackref_to_string'/2 mode 0 */
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
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__trace_gen__stackref_to_string_2_0_i4);
MR_def_label(ll_backend__trace_gen__stackref_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__stackref_to_string_2_0_i5);
MR_def_label(ll_backend__trace_gen__stackref_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_sv(", 6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(ll_backend__trace_gen__stackref_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__stackref_to_string_2_0_i7);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__trace_gen__stackref_to_string_2_0_i9);
MR_def_label(ll_backend__trace_gen__stackref_to_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__stackref_to_string_2_0_i10);
MR_def_label(ll_backend__trace_gen__stackref_to_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_fv(", 6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(ll_backend__trace_gen__stackref_to_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.trace_gen", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.trace_gen.stackref_to_string\'/2", 53);
	MR_r3 = (MR_Word) MR_string_const("non-stack lval", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module7)
	MR_init_entry1(ll_backend__trace_gen__event_num_slot_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__event_num_slot_2_0);
	MR_init_label1(ll_backend__trace_gen__event_num_slot_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'event_num_slot'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__event_num_slot_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__event_num_slot_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_proceed();
MR_def_label(ll_backend__trace_gen__event_num_slot_2_0,3)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__call_num_slot_2_0);
	MR_init_label1(ll_backend__trace_gen__call_num_slot_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_num_slot'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__call_num_slot_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__call_num_slot_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_proceed();
MR_def_label(ll_backend__trace_gen__call_num_slot_2_0,3)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__call_depth_slot_2_0);
	MR_init_label1(ll_backend__trace_gen__call_depth_slot_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_depth_slot'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__call_depth_slot_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__call_depth_slot_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,4);
	MR_proceed();
MR_def_label(ll_backend__trace_gen__call_depth_slot_2_0,3)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__redo_layout_slot_2_0);
	MR_init_label1(ll_backend__trace_gen__redo_layout_slot_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'redo_layout_slot'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__redo_layout_slot_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__redo_layout_slot_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,6);
	MR_proceed();
MR_def_label(ll_backend__trace_gen__redo_layout_slot_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.trace_gen", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.trace_gen.redo_layout_slot\'/2", 51);
	MR_r3 = (MR_Word) MR_string_const("attempt to access redo layout slot for det or semi procedure", 60);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module11)
	MR_init_entry1(ll_backend__trace_gen__generate_slot_fill_code_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__generate_slot_fill_code_3_0);
	MR_init_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0,12,13,14,16,17,18,19,20,21,15)
	MR_init_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0,23,24,25,26,27,22,29,30,31,32)
	MR_init_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0,33,34,35,36,37,28,39,40,41,42)
	MR_init_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0,43,44,45,46,47,48,38,49,55,57)
	MR_init_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0,62,64,66,67,68,69,70,71,72,73)
	MR_init_label10(ll_backend__trace_gen__generate_slot_fill_code_3_0,74,75,81,83,85,86,87,88,94,95)
	MR_init_label1(ll_backend__trace_gen__generate_slot_fill_code_3_0,96)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_slot_fill_code'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__generate_slot_fill_code_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_proc_model_1_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i2);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_r2, 2);
	MR_sv(8) = MR_tfield(0, MR_r2, 3);
	MR_sv(9) = MR_tfield(0, MR_r2, 4);
	MR_sv(1) = MR_tfield(0, MR_r2, 5);
	MR_sv(2) = MR_tfield(0, MR_r2, 6);
	MR_sv(3) = MR_tfield(0, MR_r2, 7);
	MR_sv(11) = MR_tfield(0, MR_r2, 8);
	MR_np_call_localret_ent(ll_backend__trace_gen__event_num_slot_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i3);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__trace_gen__call_num_slot_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i4);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__trace_gen__call_depth_slot_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i5);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i6);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i7);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i8);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i9);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i10);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i11);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i12);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i13);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_trace_fill_std_slots(", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i14);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(11),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i16);
	}
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i15);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__trace_gen__redo_layout_slot_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i17);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i18);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" = (MR_Word) (const MR_Word *) MR_HASH_DEF_LABEL_LAYOUT;\n", 57);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i19);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i20);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i21);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(11) = MR_r2;
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i23);
	}
	MR_sv(8) = MR_r1;
	MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i22);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i24);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" = MR_io_tabling_counter;\n", 26);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i25);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i26);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i27);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i29);
	}
	MR_sv(9) = MR_sv(11);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i28);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i30);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i31);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i32);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_store_ticket(", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i33);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i34);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i35);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_mark_ticket_stack(", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i36);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i37);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i39);
	}
	MR_sv(7) = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i38);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(7), 0);
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i40);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const(" = MR_trace_call_depth;\n\t\t}\n", 28);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i41);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t\t", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i42);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t} else {\n", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i43);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i44);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tif (MR_trace_from_full) {\n", 28);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i45);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = MR_trace_from_full;\n", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i46);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i47);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i48);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i49);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,49)
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
	MR_tfield(3, MR_tempr2, 4) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 6) = MR_sv(10);
	MR_tfield(3, MR_tempr2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 8) = MR_sv(8);
	MR_tfield(3, MR_tempr2, 9) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 10) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i55);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i57);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i62);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_sv(1), 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("save initial maxfr", 18);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i62);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i64);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i81);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_sv(3), 0), 0);
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i66);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(" = 0;\n\t\t}", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i67);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t\t", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i68);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t} else {", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i69);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t\tMR_trace_tailrec_have_reused_frames = MR_FALSE;\n", 51);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i70);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = MR_trace_tailrec_num_reused_frames;\n", 39);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i71);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i72);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t\t", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i73);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tif (MR_trace_tailrec_have_reused_frames) {\n", 45);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i74);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i75);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,75)
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
	MR_tfield(3, MR_tempr2, 4) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 9) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 10) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("initialize tail recursion count", 31);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i81);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_slot_fill_code_3_0_i83);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i94);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i85);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" = 0;\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i86);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i87);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i88);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,88)
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
	MR_tfield(3, MR_tempr2, 4) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 9) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 10) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i94);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i95);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_slot_fill_code_3_0_i96);
MR_def_label(ll_backend__trace_gen__generate_slot_fill_code_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_maybe_trace_info_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module12)
	MR_init_entry1(ll_backend__trace_gen__trace_prepare_for_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__trace_prepare_for_call_2_0);
	MR_init_label10(ll_backend__trace_gen__trace_prepare_for_call_2_0,2,3,5,8,11,13,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_prepare_for_call'/2 mode 0 */
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_proc_model_1_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i3);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_prepare_for_call_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__cord__empty_0_0);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_prepare_for_call_2_0_i8);
	}
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_sv(1), 0), 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,4);
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i11);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_sv(1), 0), 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i11);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__trace_prepare_for_call_2_0_i13);
	}
	MR_sv(1) = (MR_Word) MR_string_const("MR_trace_reset_depth_from_full", 30);
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i14);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("MR_trace_reset_depth_from_shallow", 33);
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i14);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i15);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i16);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__trace_gen__trace_prepare_for_call_2_0_i17);
MR_def_label(ll_backend__trace_gen__trace_prepare_for_call_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__expect_4_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module13)
	MR_init_entry1(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0);
	MR_init_label10(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,12,13,14,16,18,20,21,22,23,19)
	MR_init_label10(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,25,26,27,28,29,30,31,32,24,34)
	MR_init_label10(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,39,48,41,40,51,52,53,54,55,56)
	MR_init_label5(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,57,58,64,65,66)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_tailrec_reset_slots_code'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_proc_model_1_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i2);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__trace_gen__event_num_slot_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i3);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__trace_gen__call_num_slot_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i4);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__trace_gen__call_depth_slot_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i5);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i6);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i7);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i8);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i9);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i10);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i11);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i12);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i13);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_trace_tailrec_std_slots(", 29);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i14);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__931__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(6), 8);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.trace_gen", 20);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", 68);
	MR_r4 = (MR_Word) MR_string_const("redo label in procedure with TAIL event", 39);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i16);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__937__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_sv(6), 2);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_string_const("ll_backend.trace_gen", 20);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", 68);
	MR_r4 = (MR_Word) MR_string_const("from_full slot in procedure with TAIL event", 43);
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i18);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i20);
	}
	MR_r2 = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_sv(3) = MR_tfield(0, MR_r2, 5);
	MR_sv(4) = MR_tfield(0, MR_r2, 7);
	MR_sv(5) = MR_tfield(0, MR_r2, 6);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i19);
	}
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i21);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" = MR_io_tabling_counter;\n", 26);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i22);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i23);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i25);
	}
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i24);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i26);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i27);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i28);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_store_ticket(", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i29);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i30);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i31);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_mark_ticket_stack(", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i32);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i34);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i39);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_sv(3), 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("save initial maxfr", 18);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i39);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i41);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tfield(1, MR_sv(4), 0), 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Word) MR_TAG_COMMON(3,5,0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("increment tail recursion counter", 32);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i48);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i40);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.trace_gen", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", 68);
	MR_r3 = (MR_Word) MR_string_const("no tail rec lval", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i40);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i51);
	}
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i55);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(ll_backend__trace_gen__stackref_to_string_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i52);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" = 0;\n", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i53);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i54);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i55);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i56);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i57);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i58);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,58)
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
	MR_tfield(3, MR_tempr2, 4) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 9) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 10) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i64);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i65);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0_i66);
MR_def_label(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module14)
	MR_init_entry1(ll_backend__trace_gen__find_output_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__find_output_vars_3_0);
	MR_init_label5(ll_backend__trace_gen__find_output_vars_3_0,8,4,5,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_output_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__find_output_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__find_output_vars_3_0_i2);
	}
MR_def_label(ll_backend__trace_gen__find_output_vars_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_r4, 1), 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__find_output_vars_3_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_GOTO_LAB(ll_backend__trace_gen__find_output_vars_3_0_i3);
MR_def_label(ll_backend__trace_gen__find_output_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__find_output_vars_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r4, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__trace_gen__find_output_vars_3_0_i3);
	}
MR_def_label(ll_backend__trace_gen__find_output_vars_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
MR_def_label(ll_backend__trace_gen__find_output_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__find_output_vars_3_0_i8);
	}
MR_def_label(ll_backend__trace_gen__find_output_vars_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_known_variables_2_0);
MR_decl_entry(fn__ll_backend__code_info__current_resume_point_vars_1_0);
MR_decl_entry(parse_tree__set_of_var__difference_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__to_sorted_list_1_0);
MR_decl_entry(list__delete_elems_3_0);
MR_decl_entry(fn__ll_backend__code_info__get_var_types_1_0);
MR_decl_entry(ll_backend__code_info__get_varset_2_0);
MR_decl_entry(ll_backend__code_info__get_instmap_2_0);
MR_decl_entry(ll_backend__code_info__max_reg_in_use_2_0);
MR_decl_entry(ll_backend__code_info__get_max_reg_in_use_at_trace_2_0);
MR_decl_entry(ll_backend__code_info__set_max_reg_in_use_at_trace_3_0);
MR_decl_entry(ll_backend__code_info__variable_locations_2_0);
MR_decl_entry(ll_backend__code_info__get_proc_info_2_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(map__values_2_0);
MR_decl_entry(fn__set__union_list_1_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(fn__set__list_to_set_1_0);
MR_decl_entry(set__list_to_set_2_0);
MR_decl_entry(fn__ll_backend__layout_out__trace_port_to_string_1_0);
MR_decl_entry(fn__mdbcomp__goal_path__goal_path_to_string_1_0);
MR_decl_entry(ll_backend__code_info__add_trace_layout_for_label_9_0);
MR_decl_entry(ll_backend__code_info__set_proc_trace_events_3_0);
MR_decl_entry(fn__cord__from_list_1_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module15)
	MR_init_entry1(ll_backend__trace_gen__generate_event_code_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__generate_event_code_11_0);
	MR_init_label10(ll_backend__trace_gen__generate_event_code_11_0,2,3,5,8,9,10,12,7,15,17)
	MR_init_label10(ll_backend__trace_gen__generate_event_code_11_0,20,19,14,22,24,4,25,26,27,29)
	MR_init_label10(ll_backend__trace_gen__generate_event_code_11_0,30,31,32,33,35,36,37,38,39,41)
	MR_init_label10(ll_backend__trace_gen__generate_event_code_11_0,43,44,45,47,48,49,50,53,52,54)
	MR_init_label10(ll_backend__trace_gen__generate_event_code_11_0,55,56,57,58,59,60,61,62,63,68)
	MR_init_label4(ll_backend__trace_gen__generate_event_code_11_0,64,90,91,92)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_event_code'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__generate_event_code_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(12) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_r1 = MR_r7;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i2);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_known_variables_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i3);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i5);
	}
	MR_sv(8) = MR_r1;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__trace_gen__generate_event_code_11_0_i24);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i7);
	}
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_tfield(2, MR_r2, 0);
	MR_sv(6) = MR_tfield(2, MR_r2, 1);
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ll_backend__code_info__current_resume_point_vars_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i8);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i9);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i10);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__delete_elems_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i12);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__trace_gen__generate_event_code_11_0_i24);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__find_output_vars_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i15);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__delete_elems_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i17);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i19);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_0,
		ll_backend__trace_gen__generate_event_code_11_0_i20);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i4);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.trace_gen", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.trace_gen.generate_event_code\'/11", 55);
	MR_r3 = (MR_Word) MR_string_const("tailrec call without TraceInfo", 30);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i4);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i22);
	}
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__trace_gen__generate_event_code_11_0_i24);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__trace_gen__generate_event_code_11_0_i24);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_var_types_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i25);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__get_varset_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i26);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__get_instmap_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i27);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__trace_gen__generate_event_code_11_0_i29);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(9);
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,
		ll_backend__trace_gen__generate_event_code_11_0_i30);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__max_reg_in_use_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i31);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__get_max_reg_in_use_at_trace_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i32);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i33);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__set_max_reg_in_use_at_trace_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i35);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__variable_locations_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i36);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i37);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i38);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__continuation_info__find_typeinfos_for_tvars_4_0,
		ll_backend__trace_gen__generate_event_code_11_0_i39);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, layout_var_info);
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(16);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i41);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, layout_locn);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__values_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i43);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i44);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i45);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i47);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__trace_gen__generate_event_code_11_0_i48);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i49);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i50);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	if (MR_LTAGS_TESTR(MR_sv(11),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i53);
	}
	MR_r1 = MR_sv(12);
	MR_sv(10) = (MR_Word) MR_string_const("\t\tMR_EVENT_SYS\n", 15);
	MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i52);
	}
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_sv(10) = (MR_Word) MR_string_const("\t\tMR_EVENT_USER\n", 16);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__layout_out__trace_port_to_string_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i54);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_path_to_string_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i55);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("> */\n", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i56);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i57);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("path <", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i58);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i59);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i60);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\t/* port ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i61);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(14);
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_trace_layout_for_label_9_0,
		ll_backend__trace_gen__generate_event_code_11_0_i62);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__set_proc_trace_events_3_0,
		ll_backend__trace_gen__generate_event_code_11_0_i63);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),3)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i64);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i64);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_sv(1), 0), 8);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_event_code_11_0_i64);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__code_info__add_trace_layout_for_label_9_0,
		ll_backend__trace_gen__generate_event_code_11_0_i68);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tempr6 = MR_sv(4);
	MR_tfield(3, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("A label to hang trace liveness on", 33);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr5, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr5, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 6) = MR_tempr4;
	MR_tfield(3, MR_tempr5, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 8) = MR_tempr4;
	MR_tfield(3, MR_tempr5, 9) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 10) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = MR_tempr5;
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i90);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tempr6 = MR_sv(4);
	MR_tfield(3, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("A label to hang trace liveness on", 33);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr5, 3) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr5, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 6) = MR_tempr4;
	MR_tfield(3, MR_tempr5, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 8) = MR_tempr4;
	MR_tfield(3, MR_tempr5, 9) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 10) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = MR_tempr5;
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__trace_gen__generate_event_code_11_0_i90);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i91);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__trace_gen__generate_event_code_11_0_i92);
MR_def_label(ll_backend__trace_gen__generate_event_code_11_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(12);
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0);
MR_decl_entry(ll_backend__code_info__get_containing_goal_map_det_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(ll_backend__code_info__get_pred_info_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_pre_deaths_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module16)
	MR_init_entry1(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
	MR_init_label10(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,2,4,6,7,8,13,14,15,16,18)
	MR_init_label10(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,17,12,10,23,25,26,27,28,30,31)
	MR_init_label6(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,33,32,36,38,24,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_generate_internal_event_code'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_maybe_trace_info_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i2);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i39);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_sv(9) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i6);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__get_containing_goal_map_det_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i7);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i8);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i10);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i13);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i12);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i14);
	}
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i12);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i15);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i12);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i16);
	}
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i12);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i17);
	}
	MR_r3 = MR_tfield(2, MR_r2, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i18);
	}
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i12);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i12);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i10);
	}
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_sv(10);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i23);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.trace_gen", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.trace_gen.maybe_generate_internal_event_code\'/5", 69);
	MR_r3 = (MR_Word) MR_string_const("bad path", 8);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i23);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i25);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_info_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i26);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i27);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(7);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_needs_port_6_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i28);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i24);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i30);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i31);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i33);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i32);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_sv(9) = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i36);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_sv(9) = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i36);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_sv(7);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_event_code_11_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i38);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__trace_gen__maybe_generate_internal_event_code_5_0_i39);
MR_def_label(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module17)
	MR_init_entry1(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__maybe_generate_negated_event_code_6_0);
	MR_init_label10(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,2,7,6,8,9,10,11,13,14,16)
	MR_init_label7(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,15,18,19,20,22,4,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_generate_negated_event_code'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__maybe_generate_negated_event_code_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_r3;
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
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = (MR_Integer) 11;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i6);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = (MR_Integer) 10;
	MR_r1 = MR_sv(8);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i8);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_info_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i9);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i10);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(7);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_needs_port_6_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i11);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i4);
	}
	MR_sv(5) = MR_tfield(0, MR_sv(5), 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i13);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i14);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i16);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i15);
	}
	MR_sv(7) = (MR_Integer) 1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i18);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Integer) 0;
	MR_r1 = MR_sv(8);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_containing_goal_map_det_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i19);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i20);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_event_code_11_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i22);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__trace_gen__maybe_generate_negated_event_code_6_0_i23);
MR_def_label(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module18)
	MR_init_entry1(ll_backend__trace_gen__generate_user_event_code_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__generate_user_event_code_5_0);
	MR_init_label5(ll_backend__trace_gen__generate_user_event_code_5_0,2,3,4,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_user_event_code'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__generate_user_event_code_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		ll_backend__trace_gen__generate_user_event_code_5_0_i2);
MR_def_label(ll_backend__trace_gen__generate_user_event_code_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_info__get_containing_goal_map_det_2_0,
		ll_backend__trace_gen__generate_user_event_code_5_0_i3);
MR_def_label(ll_backend__trace_gen__generate_user_event_code_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0,
		ll_backend__trace_gen__generate_user_event_code_5_0_i4);
MR_def_label(ll_backend__trace_gen__generate_user_event_code_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ll_backend__trace_gen__generate_user_event_code_5_0_i5);
MR_def_label(ll_backend__trace_gen__generate_user_event_code_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 17;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_event_code_11_0,
		ll_backend__trace_gen__generate_user_event_code_5_0_i8);
MR_def_label(ll_backend__trace_gen__generate_user_event_code_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module19)
	MR_init_entry1(ll_backend__trace_gen__generate_tailrec_event_code_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__generate_tailrec_event_code_8_0);
	MR_init_label4(ll_backend__trace_gen__generate_tailrec_event_code_8_0,2,3,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_tailrec_event_code'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__generate_tailrec_event_code_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_containing_goal_map_det_2_0,
		ll_backend__trace_gen__generate_tailrec_event_code_8_0_i2);
MR_def_label(ll_backend__trace_gen__generate_tailrec_event_code_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_id_to_forward_path_2_0,
		ll_backend__trace_gen__generate_tailrec_event_code_8_0_i3);
MR_def_label(ll_backend__trace_gen__generate_tailrec_event_code_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(1);
	MR_r1 = (MR_Integer) 4;
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__trace_gen__generate_event_code_11_0,
		ll_backend__trace_gen__generate_tailrec_event_code_8_0_i6);
MR_def_label(ll_backend__trace_gen__generate_tailrec_event_code_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 7);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_tailrec_event_code_8_0_i8);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 1);
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__trace_gen__generate_tailrec_event_code_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.trace_gen", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.trace_gen.generate_tailrec_event_code\'/8", 62);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("no tail rec label", 17);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module20)
	MR_init_entry1(ll_backend__trace_gen__generate_external_event_code_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__generate_external_event_code_6_0);
	MR_init_label10(ll_backend__trace_gen__generate_external_event_code_6_0,3,4,5,2,6,7,8,9,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_external_event_code'/6 mode 0 */
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
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_external_event_code_6_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Integer) 3;
	MR_r1 = MR_r4;
	MR_GOTO_LAB(ll_backend__trace_gen__generate_external_event_code_6_0_i2);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Integer) 4;
	MR_r1 = MR_r4;
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__trace_gen__generate_external_event_code_6_0_i6);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_info_2_0,
		ll_backend__trace_gen__generate_external_event_code_6_0_i7);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		ll_backend__trace_gen__generate_external_event_code_6_0_i8);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_needs_port_6_0,
		ll_backend__trace_gen__generate_external_event_code_6_0_i9);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__generate_external_event_code_6_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,11)
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
		ll_backend__trace_gen__generate_external_event_code_6_0_i13);
MR_def_label(ll_backend__trace_gen__generate_external_event_code_6_0,13)
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


MR_BEGIN_MODULE(ll_backend__trace_gen_module21)
	MR_init_entry1(ll_backend__trace_gen__maybe_setup_redo_event_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__maybe_setup_redo_event_2_0);
	MR_init_label3(ll_backend__trace_gen__maybe_setup_redo_event_2_0,3,38,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_setup_redo_event'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__trace_gen__maybe_setup_redo_event_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 8);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_setup_redo_event_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_tailcall_ent(fn__cord__empty_0_0);
MR_def_label(ll_backend__trace_gen__maybe_setup_redo_event_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__trace_gen__maybe_setup_redo_event_2_0_i38);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
MR_def_label(ll_backend__trace_gen__maybe_setup_redo_event_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1168__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_tfield(1, MR_r3, 0);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_TAG_COMMON(3,1,7);
	MR_r2 = (MR_Word) MR_string_const("ll_backend.trace_gen", 20);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.trace_gen.maybe_setup_redo_event\'/2", 57);
	MR_r4 = (MR_Word) MR_string_const("from-full flag not stored in expected slot", 42);
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__trace_gen__maybe_setup_redo_event_2_0_i14);
MR_def_label(ll_backend__trace_gen__maybe_setup_redo_event_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,8,1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module22)
	MR_init_entry1(fn__ll_backend__trace_gen__find_lval_in_layout_locn_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__trace_gen__find_lval_in_layout_locn_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_lval_in_layout_locn'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__trace_gen__find_lval_in_layout_locn_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module23)
	MR_init_entry1(fn__ll_backend__trace_gen__find_lval_in_var_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__trace_gen__find_lval_in_var_info_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_lval_in_var_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__trace_gen__find_lval_in_var_info_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_mask_field(MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__label_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___cord__cord_1_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module24)
	MR_init_entry1(__Unify___ll_backend__trace_gen__external_event_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__trace_gen__external_event_info_0_0);
	MR_init_label4(__Unify___ll_backend__trace_gen__external_event_info_0_0,4,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__trace_gen__external_event_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__external_event_info_0_0_i12);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
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
		__Unify___ll_backend__trace_gen__external_event_info_0_0_i8);
MR_def_label(__Unify___ll_backend__trace_gen__external_event_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__external_event_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___cord__cord_1_0);
MR_def_label(__Unify___ll_backend__trace_gen__external_event_info_0_0,12)
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
MR_decl_entry(__Compare___cord__cord_1_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module25)
	MR_init_entry1(__Compare___ll_backend__trace_gen__external_event_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__trace_gen__external_event_info_0_0);
	MR_init_label5(__Compare___ll_backend__trace_gen__external_event_info_0_0,3,2,5,11,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__trace_gen__external_event_info_0_0_i5);
MR_def_label(__Compare___ll_backend__trace_gen__external_event_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__external_event_info_0_0_i40);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__trace_gen__external_event_info_0_0_i11);
MR_def_label(__Compare___ll_backend__trace_gen__external_event_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__external_event_info_0_0_i40);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___cord__cord_1_0);
MR_def_label(__Compare___ll_backend__trace_gen__external_event_info_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module26)
	MR_init_entry1(__Unify___ll_backend__trace_gen__external_trace_port_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__trace_gen__external_trace_port_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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

MR_BEGIN_MODULE(ll_backend__trace_gen_module27)
	MR_init_entry1(__Compare___ll_backend__trace_gen__external_trace_port_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__trace_gen__external_trace_port_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(ll_backend__trace_gen_module28)
	MR_init_entry1(__Unify___ll_backend__trace_gen__negation_end_port_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__trace_gen__negation_end_port_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(ll_backend__trace_gen_module29)
	MR_init_entry1(__Compare___ll_backend__trace_gen__negation_end_port_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__trace_gen__negation_end_port_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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

MR_decl_entry(__Unify___libs__trace_params__trace_level_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_items_0;
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module30)
	MR_init_entry1(__Unify___ll_backend__trace_gen__trace_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__trace_gen__trace_info_0_0);
	MR_init_label10(__Unify___ll_backend__trace_gen__trace_info_0_0,4,6,8,10,13,15,17,20,24,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__trace_gen__trace_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i24);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(16) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(16);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 8);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___libs__trace_params__trace_level_0_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i4);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_items);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i6);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i8);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i10);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i13);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i15);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i17);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_info_0_0_i20);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(15);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__trace_gen__trace_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(17);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__trace_gen__trace_info_0_0);
	MR_init_label10(__Compare___ll_backend__trace_gen__trace_info_0_0,3,2,5,9,13,17,22,26,30,35)
	MR_init_label1(__Compare___ll_backend__trace_gen__trace_info_0_0,106)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__trace_gen__trace_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
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
	MR_sv(16) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___libs__trace_params__trace_level_0_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i5);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_items);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i9);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i13);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i17);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i22);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i26);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i30);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_info_0_0_i35);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_info_0_0_i106);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__trace_gen__trace_info_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__goal_path__forward_goal_path_0_0);
MR_decl_entry(__Unify___tree_bitset__tree_bitset_1_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module32)
	MR_init_entry1(__Unify___ll_backend__trace_gen__trace_port_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__trace_gen__trace_port_info_0_0);
	MR_init_label8(__Unify___ll_backend__trace_gen__trace_port_info_0_0,5,8,6,15,13,42,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__trace_gen__trace_port_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i42);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__goal_path__forward_goal_path_0_0,
		__Unify___ll_backend__trace_gen__trace_port_info_0_0_i8);
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree_bitset__tree_bitset_1_0);
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__goal_path__forward_goal_path_0_0,
		__Unify___ll_backend__trace_gen__trace_port_info_0_0_i15);
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__goal_path__forward_goal_path_0_0);
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_port_info_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__goal_path__forward_goal_path_0_0);
MR_def_label(__Unify___ll_backend__trace_gen__trace_port_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__goal_path__forward_goal_path_0_0);
MR_decl_entry(__Compare___tree_bitset__tree_bitset_1_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module33)
	MR_init_entry1(__Compare___ll_backend__trace_gen__trace_port_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__trace_gen__trace_port_info_0_0);
	MR_init_label10(__Compare___ll_backend__trace_gen__trace_port_info_0_0,81,7,8,9,5,13,16,14,22,11)
	MR_init_label10(__Compare___ll_backend__trace_gen__trace_port_info_0_0,26,143,27,30,24,40,41,42,101,38)
	MR_init_label4(__Compare___ll_backend__trace_gen__trace_port_info_0_0,46,47,48,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__trace_gen__trace_port_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i81);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i143);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__goal_path__forward_goal_path_0_0,
		__Compare___ll_backend__trace_gen__trace_port_info_0_0_i16);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i51);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree_bitset__tree_bitset_1_0);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i143);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i24);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i27);
	}
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i143);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__goal_path__forward_goal_path_0_0,
		__Compare___ll_backend__trace_gen__trace_port_info_0_0_i30);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i51);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i38);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i42);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i143);
	}
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__goal_path__forward_goal_path_0_0);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i46);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i47);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i48);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_port_info_0_0_i101);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__trace_gen__trace_port_info_0_0,51)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__trace_gen__trace_slot_info_0_0);
	MR_init_label7(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,4,6,8,10,12,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__trace_gen__trace_slot_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i16);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(11) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i4);
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i6);
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i8);
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i10);
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i12);
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__trace_gen__trace_slot_info_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__trace_gen__trace_slot_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module35)
	MR_init_entry1(__Compare___ll_backend__trace_gen__trace_slot_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__trace_gen__trace_slot_info_0_0);
	MR_init_label8(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__trace_gen__trace_slot_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
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
	MR_sv(10) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i5);
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i9);
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i13);
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i17);
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i21);
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__trace_gen__trace_slot_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__trace_gen__trace_slot_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module36)
	MR_init_entry1(ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1168__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1168__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__maybe_setup_redo_event__1168__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1168__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module37)
	MR_init_entry1(ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__931__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__931__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_tailrec_reset_slots_code__931__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__931__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__trace_gen_module38)
	MR_init_entry1(ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__937__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__937__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_tailrec_reset_slots_code__937__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__937__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__produce_variable_in_reg_or_stack_5_0);
MR_decl_entry(fn__ll_backend__code_info__variable_type_2_0);
MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(parse_tree__prog_type__type_vars_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__trace_gen_module39)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0);
	MR_init_label10(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,4,3,6,7,8,11,10,12,13,15)
	MR_init_label5(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,14,24,26,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__trace_produce_vars__[4, 5]_0'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i3);
	}
	MR_sv(4) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i4);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(11);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i11);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_r5 = MR_sv(2);
	}
	MR_np_localcall_lab(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i28);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_in_reg_or_stack_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i12);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(varset__search_name_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i15);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tempr3 = MR_sv(10);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("trace", 5);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i24);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(10);
	MR_tfield(1, MR_r2, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_string_const("trace", 5);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i24);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i26);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r6 = MR_sv(8);
	}
	MR_np_localcall_lab(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i28);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0_i29);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_116_114_97_99_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(11);
	}
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
	ll_backend__trace_gen_module38();
	ll_backend__trace_gen_module39();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__trace_gen__init(void);
void mercury__ll_backend__trace_gen__init_type_tables(void);
void mercury__ll_backend__trace_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__trace_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__trace_gen__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__trace_gen__init_threadscope_string_table(void);
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
		mercury_data_ll_backend__trace_gen__type_ctor_info_external_event_info_0,
		ll_backend__trace_gen__external_event_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__trace_gen__type_ctor_info_external_trace_port_0,
		ll_backend__trace_gen__external_trace_port_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__trace_gen__type_ctor_info_negation_end_port_0,
		ll_backend__trace_gen__negation_end_port_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__trace_gen__type_ctor_info_trace_info_0,
		ll_backend__trace_gen__trace_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__trace_gen__type_ctor_info_trace_port_info_0,
		ll_backend__trace_gen__trace_port_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__trace_gen__type_ctor_info_trace_slot_info_0,
		ll_backend__trace_gen__trace_slot_info_0_0);
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
		&mercury_data_ll_backend__trace_gen__type_ctor_info_external_event_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__trace_gen__type_ctor_info_external_trace_port_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__trace_gen__type_ctor_info_negation_end_port_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__trace_gen__type_ctor_info_trace_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__trace_gen__type_ctor_info_trace_port_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__trace_gen__type_ctor_info_trace_slot_info_0);
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

void mercury__ll_backend__trace_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__trace_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__trace_gen__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__trace_gen__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
