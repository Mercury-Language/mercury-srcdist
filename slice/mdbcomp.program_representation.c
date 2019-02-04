/*
** Automatically generated from `mdbcomp.program_representation.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__mdbcomp__program_representation__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "mdbcomp.program_representation.c"
#include "mdbcomp.program_representation.mh"

#line 27 "mdbcomp.program_representation.c"
#line 3 "mdbcomp.int0"
#include "mdbcomp.mh"

#line 31 "mdbcomp.program_representation.c"
#line 29 "mdbcomp.rtti_access.int"
#include "mdbcomp.rtti_access.mh"

#line 35 "mdbcomp.program_representation.c"
#line 134 "../library/io.int2"
#include "io.mh"

#line 39 "mdbcomp.program_representation.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 43 "mdbcomp.program_representation.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "mdbcomp.program_representation.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "mdbcomp.program_representation.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 55 "mdbcomp.program_representation.c"
#line 56 "mdbcomp.program_representation.c"
#ifndef MDBCOMP__PROGRAM_REPRESENTATION_DECL_GUARD
#define MDBCOMP__PROGRAM_REPRESENTATION_DECL_GUARD

#line 60 "mdbcomp.program_representation.c"
#line 61 "mdbcomp.program_representation.c"

#endif
#line 64 "mdbcomp.program_representation.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[64];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_String f2[3];
	MR_Integer f3;
	MR_String f4;
	MR_Integer f5[5];
	MR_String f6[3];
	MR_Integer f7;
	MR_String f8;
	MR_Integer f9[5];
	MR_String f10;
	MR_Integer f11;
	MR_String f12;
	MR_Integer f13[3];
	MR_String f14;
	MR_Integer f15[3];
	MR_String f16[2];
	MR_Integer f17[4];
	MR_String f18;
	MR_Integer f19;
	MR_String f20;
	MR_Integer f21[11];
	MR_String f22;
	MR_Integer f23[4];
	MR_String f24;
	MR_Integer f25[5];
	MR_String f26;
	MR_Integer f27;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

MR_STATIC_LINKAGE const struct mercury_type_7 mercury_vector_common_7_0[];

MR_STATIC_LINKAGE const struct mercury_type_7 mercury_vector_common_7_1[];

MR_STATIC_LINKAGE const struct mercury_type_7 mercury_vector_common_7_2[];

MR_STATIC_LINKAGE const struct mercury_type_7 mercury_vector_common_7_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__program_representation__type_ctor_info_var_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_var_num_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_term_path_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_read_proc_rep_info_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_maybe_cut_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_string_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_bytecode_goal_type_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_bytecode_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_builtin_mod_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_id_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0;
MR_decl_label1(mdbcomp__program_representation__byte_to_goal_type_2_0, 1)
MR_decl_label8(mdbcomp__program_representation__call_does_not_generate_events_3_0, 5,6,3,12,14,10,20,8)
MR_decl_label4(mdbcomp__program_representation__call_does_not_generate_events_3_0, 25,26,28,2)
MR_decl_label1(mdbcomp__program_representation__determinism_representation_2_1, 1)
MR_decl_label8(mdbcomp__program_representation__no_type_info_builtin_3_0, 3,97,5,6,11,16,21,26)
MR_decl_label8(mdbcomp__program_representation__no_type_info_builtin_3_0, 31,36,41,46,51,56,61,66)
MR_decl_label6(mdbcomp__program_representation__no_type_info_builtin_3_0, 71,76,81,86,91,93)
MR_decl_label1(mdbcomp__program_representation__path_from_string_2_0, 2)
MR_decl_label3(mdbcomp__program_representation__path_from_string_det_2_0, 3,4,2)
MR_decl_label8(mdbcomp__program_representation__path_step_from_string_2_0, 2,5,8,7,11,10,13,15)
MR_decl_label8(mdbcomp__program_representation__path_step_from_string_2_0, 17,21,19,24,28,30,32,23)
MR_decl_label2(mdbcomp__program_representation__path_step_from_string_2_0, 35,1)
MR_decl_label6(mdbcomp__program_representation__read_atomic_info_8_0, 4,2,7,8,10,11)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 2,4,7,8,9,10,11,12)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 13,14,15,16,17,18,19,20)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 21,23,27,28,29,30,31,32)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 34,35,36,37,39,40,41,42)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 44,45,46,47,49,50,51,53)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 54,55,57,58,59,61,62,64)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 65,66,68,69,70,71,73,74)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 75,76,78,79,80,81,83,84)
MR_decl_label2(mdbcomp__program_representation__read_goal_7_0, 85,3)
MR_decl_label3(mdbcomp__program_representation__read_goals_2_8_0, 3,4,2)
MR_decl_label6(mdbcomp__program_representation__read_maybe_vars_2_6_0, 6,3,7,11,12,2)
MR_decl_label6(mdbcomp__program_representation__read_proc_rep_3_0, 4,2,7,8,9,10)
MR_decl_label1(mdbcomp__program_representation__read_var_5_0, 3)
MR_decl_label3(mdbcomp__program_representation__read_vars_2_6_0, 4,5,2)
MR_decl_label1(mdbcomp__program_representation__var_num_rep_byte_2_0, 3)
MR_decl_label2(mdbcomp__program_representation__var_num_rep_byte_2_1, 3,1)
MR_decl_label8(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0, 13,14,36,17,18,35,25,16)
MR_decl_label5(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0, 29,16,30,18,19)
MR_decl_label3(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0, 7,13,8)
MR_decl_label8(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0, 4,5,6,7,8,9,10,62)
MR_decl_label8(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0, 12,13,63,16,17,19,23,22)
MR_decl_label7(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0, 26,27,28,29,30,20,33)
MR_decl_label2(fn__mdbcomp__program_representation__goal_path_to_string_1_0, 2,3)
MR_decl_label1(fn__mdbcomp__program_representation__goal_rep_type_0_0, 2)
MR_decl_label1(fn__mdbcomp__program_representation__proc_rep_type_0_0, 2)
MR_decl_label1(fn__mdbcomp__program_representation__string_from_path_1_0, 2)
MR_decl_label4(__Unify___mdbcomp__program_representation__arg_pos_0_0, 8,6,20,1)
MR_decl_label2(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0, 4,1)
MR_decl_label8(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0, 6,10,14,18,19,23,25,27)
MR_decl_label8(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0, 29,33,37,41,45,49,99,1)
MR_decl_label7(__Unify___mdbcomp__program_representation__goal_path_step_0_0, 12,13,15,17,18,40,1)
MR_decl_label8(__Unify___mdbcomp__program_representation__goal_rep_0_0, 121,6,10,14,18,36,31,33)
MR_decl_label6(__Unify___mdbcomp__program_representation__goal_rep_0_0, 27,19,21,23,65,1)
MR_decl_label3(__Unify___mdbcomp__program_representation__proc_rep_0_0, 4,8,1)
MR_decl_label2(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0, 4,1)
MR_decl_label7(__Compare___mdbcomp__program_representation__arg_pos_0_0, 3,2,28,12,6,32,11)
MR_decl_label5(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0, 3,2,5,9,29)
MR_decl_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 3,2,6,11,15,34,38,40)
MR_decl_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 44,62,67,69,73,90,91,100)
MR_decl_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 104,119,127,129,142,151,153,165)
MR_decl_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 175,177,188,199,206,218,220,229)
MR_decl_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 242,244,248,257,271,273,277,285)
MR_decl_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 300,302,306,312,313,328,329,331)
MR_decl_label1(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 535)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0, 6,7,10,19,21,24,33,35)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0, 38,47,49,52,61,63,66,75)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0, 77,80,86,89,91,191,106,117)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0, 121,134,137,122,144,153,169,154)
MR_decl_label1(__Compare___mdbcomp__program_representation__goal_path_step_0_0, 156)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_rep_0_0, 281,3,2,6,13,17,24,28)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_rep_0_0, 33,35,39,98,102,106,110,72)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_rep_0_0, 81,83,61,69,40,45,46,148)
MR_decl_label4(__Compare___mdbcomp__program_representation__goal_rep_0_0, 47,49,53,295)
MR_decl_label4(__Compare___mdbcomp__program_representation__proc_rep_0_0, 3,2,5,21)
MR_decl_label4(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0, 3,2,5,21)
MR_def_extern_entry(mdbcomp__program_representation__no_type_info_builtin_3_0)
MR_def_extern_entry(mdbcomp__program_representation__call_does_not_generate_events_3_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0)
MR_def_extern_entry(mdbcomp__program_representation__path_from_string_2_0)
MR_def_extern_entry(mdbcomp__program_representation__path_from_string_det_2_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__string_from_path_1_0)
MR_def_extern_entry(mdbcomp__program_representation__path_step_from_string_2_0)
MR_def_extern_entry(mdbcomp__program_representation__is_path_separator_1_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__proc_rep_type_0_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__goal_rep_type_0_0)
MR_def_extern_entry(mdbcomp__program_representation__determinism_representation_2_0)
MR_def_extern_entry(mdbcomp__program_representation__determinism_representation_2_1)
MR_def_extern_entry(fn__mdbcomp__program_representation__detism_rep_1_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__goal_type_to_byte_1_0)
MR_def_extern_entry(mdbcomp__program_representation__byte_to_goal_type_2_0)
MR_def_extern_entry(mdbcomp__program_representation__var_num_rep_byte_2_0)
MR_def_extern_entry(mdbcomp__program_representation__var_num_rep_byte_2_1)
MR_decl_static(mdbcomp__program_representation__read_byte_4_0)
MR_decl_static(mdbcomp__program_representation__read_short_4_0)
MR_decl_static(mdbcomp__program_representation__read_var_5_0)
MR_decl_static(mdbcomp__program_representation__read_vars_2_6_0)
MR_decl_static(mdbcomp__program_representation__read_vars_5_0)
MR_decl_static(mdbcomp__program_representation__read_string_5_0)
MR_decl_static(mdbcomp__program_representation__read_atomic_info_8_0)
MR_decl_static(mdbcomp__program_representation__read_maybe_vars_2_6_0)
MR_decl_static(mdbcomp__program_representation__read_maybe_vars_5_0)
MR_decl_static(mdbcomp__program_representation__read_method_num_4_0)
MR_decl_static(mdbcomp__program_representation__read_cons_id_5_0)
MR_decl_static(mdbcomp__program_representation__read_goal_7_0)
MR_decl_static(mdbcomp__program_representation__read_goals_7_0)
MR_decl_static(mdbcomp__program_representation__read_goals_2_8_0)
MR_decl_static(mdbcomp__program_representation__read_int32_4_0)
MR_def_extern_entry(mdbcomp__program_representation__read_proc_rep_3_0)
MR_decl_static(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__arg_pos_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__arg_pos_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0)
MR_decl_static(__Unify___mdbcomp__program_representation__builtin_mod_0_0)
MR_decl_static(__Compare___mdbcomp__program_representation__builtin_mod_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__bytecode_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__bytecode_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__bytecode_goal_type_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__bytecode_goal_type_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__cons_id_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__cons_id_rep_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__detism_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__detism_rep_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__goal_path_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__goal_path_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__goal_path_step_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__goal_path_step_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__goal_path_string_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__goal_path_string_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__goal_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__goal_rep_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__maybe_cut_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__maybe_cut_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__proc_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__proc_rep_0_0)
MR_decl_static(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0)
MR_decl_static(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__term_path_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__term_path_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__var_num_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__var_num_rep_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__var_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__var_rep_0_0)
MR_decl_static(mdbcomp__program_representation__IntroducedFrom__pred__read_proc_rep__608__1_2_0)
MR_decl_static(mdbcomp__program_representation__IntroducedFrom__pred__path_step_from_string_2__494__1_2_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
-2,
-1,
3,
-1,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
-1,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
1,
-2,
-1,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-1,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-1,
-2
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
0,
{
MR_string_const("get", 3),
MR_string_const("unconstrained_type_info_from_typeclass_info", 43),
MR_string_const("builtin_compound_eq", 19)
},
0,
MR_string_const("type_info_from_typeclass_info", 29),
{
0,
0,
0,
0,
0
},
{
MR_string_const("builtin_compound_lt", 19),
MR_string_const("new_future", 10),
MR_string_const("table_lookup_insert_typeclassinfo", 33)
},
0,
MR_string_const("wait", 4),
{
0,
0,
0,
0,
0
},
MR_string_const("increment_size", 14),
0,
MR_string_const("store_at_ref", 12),
{
0,
0,
0
},
MR_string_const("table_restore_any_answer", 24),
{
0,
0,
0
},
{
MR_string_const("table_lookup_insert_enum", 24),
MR_string_const("superclass_from_typeclass_info", 30)
},
{
0,
0,
0,
0
},
MR_string_const("instance_constraint_from_typeclass_info", 39),
0,
MR_string_const("unsafe_type_cast", 16),
{
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("unsafe_promise_unique", 21),
{
0,
0,
0,
0
},
MR_string_const("signal", 6),
{
0,
0,
0,
0,
0
},
MR_string_const("table_lookup_insert_typeinfo", 28),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__path_from_string_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__path_from_string_det_2_0_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__program_representation__path_from_string_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__program_representation__path_from_string_det_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
};

static const struct mercury_type_3 mercury_common_3[6] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(mdbcomp__program_representation__is_path_separator_1_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(mdbcomp__program_representation__path_step_from_string_2_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(mdbcomp__program_representation__is_path_separator_1_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(mdbcomp__program_representation__path_step_from_string_2_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__path_from_string_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__path_from_string_det_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__program_representation__goal_path_to_string_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__program_representation__string_from_path_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__path_step_from_string_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__read_proc_rep_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__program_representation__path_from_string_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step)
},
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__program_representation__path_from_string_det_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mdbcomp__program_representation__goal_path_to_string_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mdbcomp__program_representation__string_from_path_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__program_representation__path_step_from_string_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__program_representation__read_proc_rep_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
1,
1
}
},
{
{
1,
0
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_COMMON(4,4),
MR_ENTRY_AP(mdbcomp__program_representation__IntroducedFrom__pred__path_step_from_string_2__494__1_2_0),
1,
45
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
17629
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_7 mercury_vector_common_7_0[8] =
{
{
6
},
{
2
},
{
3
},
{
7
},
{
10
},
{
14
},
{
4
},
{
0
},
};

static const struct mercury_type_7 mercury_vector_common_7_1[15] =
{
{
7
},
{
0
},
{
1
},
{
2
},
{
6
},
{
0
},
{
0
},
{
3
},
{
0
},
{
0
},
{
4
},
{
0
},
{
0
},
{
0
},
{
5
},
};

static const struct mercury_type_7 mercury_vector_common_7_2[19] =
{
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
{
10
},
{
11
},
{
12
},
{
13
},
{
14
},
{
15
},
{
16
},
{
17
},
{
18
},
{
19
},
};

static const struct mercury_type_7 mercury_vector_common_7_3[19] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
{
8
},
{
9
},
{
10
},
{
11
},
{
12
},
{
13
},
{
14
},
{
15
},
{
16
},
{
17
},
{
18
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_var_rep_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__var_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__var_rep_0_0)),
	"mdbcomp.program_representation",
	"var_rep",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_var_num_rep_0_0 = {
	"byte",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_var_num_rep_0_1 = {
	"short",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__program_representation__enum_value_ordered_var_num_rep_0[] = {
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_var_num_rep_0_0,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_var_num_rep_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__program_representation__enum_name_ordered_var_num_rep_0[] = {
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_var_num_rep_0_0,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_var_num_rep_0_1
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_var_num_rep_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_var_num_rep_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__var_num_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__var_num_rep_0_0)),
	"mdbcomp.program_representation",
	"var_num_rep",
	{ (void *)mercury_data_mdbcomp__program_representation__enum_name_ordered_var_num_rep_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__enum_value_ordered_var_num_rep_0 },
	2,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_var_num_rep_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_term_path_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__term_path_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__term_path_0_0)),
	"mdbcomp.program_representation",
	"term_path",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_read_proc_rep_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_mdbcomp__program_representation__field_names_read_proc_rep_info_0_0[] = {
	"limit",
	"filename"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_read_proc_rep_info_0_0 = {
	"read_proc_rep_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_read_proc_rep_info_0_0,
	mercury_data_mdbcomp__program_representation__field_names_read_proc_rep_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_read_proc_rep_info_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_read_proc_rep_info_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_read_proc_rep_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_read_proc_rep_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_read_proc_rep_info_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_read_proc_rep_info_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_read_proc_rep_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_read_proc_rep_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0)),
	"mdbcomp.program_representation",
	"read_proc_rep_info",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_read_proc_rep_info_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_read_proc_rep_info_0 },
	1,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_read_proc_rep_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_proc_rep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_proc_rep_0_0 = {
	"proc_rep",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_proc_rep_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_proc_rep_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_proc_rep_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_proc_rep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_proc_rep_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_proc_rep_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_proc_rep_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_proc_rep_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__proc_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__proc_rep_0_0)),
	"mdbcomp.program_representation",
	"proc_rep",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_proc_rep_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_proc_rep_0 },
	1,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_proc_rep_0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_maybe_cut_0_0 = {
	"scope_is_cut",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_maybe_cut_0_1 = {
	"scope_is_no_cut",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__program_representation__enum_value_ordered_maybe_cut_0[] = {
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_maybe_cut_0_0,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_maybe_cut_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__program_representation__enum_name_ordered_maybe_cut_0[] = {
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_maybe_cut_0_0,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_maybe_cut_0_1
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_maybe_cut_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_maybe_cut_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__maybe_cut_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__maybe_cut_0_0)),
	"mdbcomp.program_representation",
	"maybe_cut",
	{ (void *)mercury_data_mdbcomp__program_representation__enum_name_ordered_maybe_cut_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__enum_value_ordered_maybe_cut_0 },
	2,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_maybe_cut_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_rep_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0
}};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_rep_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_0 = {
	"conj_rep",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_rep_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_1 = {
	"disj_rep",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_rep_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_2 = {
	"switch_rep",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_3 = {
	"ite_rep",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_4 = {
	"negation_rep",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_4,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_maybe_cut_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_maybe_cut_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_5 = {
	"scope_rep",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_5,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_6 = {
	"atomic_goal_rep",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_6,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_rep_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_rep_0_1[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_rep_0_2[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_2

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_rep_0_3[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_3,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_4,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_5,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_6

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_goal_rep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_rep_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_rep_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_rep_0_2 },
	{ 4, MR_SECTAG_REMOTE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_rep_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_goal_rep_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_6,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_0,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_1,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_3,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_4,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_5,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_2
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_goal_rep_0[] = {
	1,
	2,
	6,
	3,
	4,
	5,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__goal_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0)),
	"mdbcomp.program_representation",
	"goal_rep",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_goal_rep_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_goal_rep_0 },
	7,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_goal_rep_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_string_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__goal_path_string_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__goal_path_string_0_0)),
	"mdbcomp.program_representation",
	"goal_path_string",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_path_step_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_0 = {
	"step_conj",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_goal_path_step_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_path_step_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_1 = {
	"step_disj",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_goal_path_step_0_1,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_path_step_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_2 = {
	"step_switch",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_goal_path_step_0_2,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_3 = {
	"step_ite_cond",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_4 = {
	"step_ite_then",
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

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_5 = {
	"step_ite_else",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_6 = {
	"step_neg",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_path_step_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_maybe_cut_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_7 = {
	"step_scope",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	7,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_goal_path_step_0_7,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_8 = {
	"step_first",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_9 = {
	"step_later",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_3,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_4,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_5,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_6,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_8,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_9

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_1[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_2[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_3[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_2,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_7

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_goal_path_step_0[] = {
	{ 6, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_goal_path_step_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_0,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_1,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_8,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_3,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_5,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_4,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_9,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_6,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_7,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_2
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_goal_path_step_0[] = {
	0,
	1,
	9,
	3,
	5,
	4,
	7,
	8,
	2,
	6 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__goal_path_step_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0)),
	"mdbcomp.program_representation",
	"goal_path_step",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_goal_path_step_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_goal_path_step_0 },
	10,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_goal_path_step_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__goal_path_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__goal_path_0_0)),
	"mdbcomp.program_representation",
	"goal_path",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_0 = {
	"det_rep",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_1 = {
	"semidet_rep",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_2 = {
	"nondet_rep",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_3 = {
	"multidet_rep",
	3
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_4 = {
	"cc_nondet_rep",
	4
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_5 = {
	"cc_multidet_rep",
	5
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_6 = {
	"erroneous_rep",
	6
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_7 = {
	"failure_rep",
	7
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__program_representation__enum_value_ordered_detism_rep_0[] = {
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_0,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_1,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_2,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_3,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_4,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_5,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_6,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_7
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__program_representation__enum_name_ordered_detism_rep_0[] = {
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_5,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_4,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_0,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_6,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_7,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_3,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_2,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_detism_rep_0_1
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_detism_rep_0[] = {
	2,
	7,
	6,
	5,
	1,
	0,
	3,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__detism_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__detism_rep_0_0)),
	"mdbcomp.program_representation",
	"detism_rep",
	{ (void *)mercury_data_mdbcomp__program_representation__enum_name_ordered_detism_rep_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__enum_value_ordered_detism_rep_0 },
	8,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_detism_rep_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_rep_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__cons_id_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__cons_id_rep_0_0)),
	"mdbcomp.program_representation",
	"cons_id_rep",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_0 = {
	"goal_conj",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_1 = {
	"goal_disj",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_2 = {
	"goal_switch",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_3 = {
	"goal_ite",
	3
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_4 = {
	"goal_neg",
	4
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_5 = {
	"goal_scope",
	5
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_6 = {
	"goal_construct",
	6
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_7 = {
	"goal_deconstruct",
	7
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_8 = {
	"goal_partial_construct",
	8
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_9 = {
	"goal_partial_deconstruct",
	9
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_10 = {
	"goal_assign",
	10
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_11 = {
	"goal_cast",
	11
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_12 = {
	"goal_simple_test",
	12
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_13 = {
	"goal_foreign",
	13
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_14 = {
	"goal_ho_call",
	14
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_15 = {
	"goal_method_call",
	15
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_16 = {
	"goal_plain_call",
	16
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_17 = {
	"goal_builtin_call",
	17
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_18 = {
	"goal_event_call",
	18
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__program_representation__enum_value_ordered_bytecode_goal_type_0[] = {
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_0,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_1,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_2,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_3,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_4,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_5,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_6,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_7,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_8,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_9,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_10,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_11,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_12,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_13,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_14,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_15,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_16,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_17,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_18
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__program_representation__enum_name_ordered_bytecode_goal_type_0[] = {
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_10,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_17,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_11,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_0,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_6,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_7,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_1,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_18,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_13,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_14,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_3,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_15,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_4,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_8,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_9,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_16,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_5,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_12,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_bytecode_goal_type_0_2
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_bytecode_goal_type_0[] = {
	3,
	6,
	18,
	10,
	12,
	16,
	4,
	5,
	13,
	14,
	0,
	2,
	17,
	8,
	9,
	11,
	15,
	1,
	7 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_bytecode_goal_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__bytecode_goal_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__bytecode_goal_type_0_0)),
	"mdbcomp.program_representation",
	"bytecode_goal_type",
	{ (void *)mercury_data_mdbcomp__program_representation__enum_name_ordered_bytecode_goal_type_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__enum_value_ordered_bytecode_goal_type_0 },
	19,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_bytecode_goal_type_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_bytecode_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_STABLE_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__bytecode_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__bytecode_0_0)),
	"mdbcomp.program_representation",
	"bytecode",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_0 = {
	"builtin",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_1 = {
	"private_builtin",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_2 = {
	"table_builtin",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_3 = {
	"term_size_prof_builtin",
	3
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_4 = {
	"par_builtin",
	4
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__program_representation__enum_value_ordered_builtin_mod_0[] = {
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_0,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_1,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_2,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_3,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_4
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__program_representation__enum_name_ordered_builtin_mod_0[] = {
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_0,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_4,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_1,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_2,
	&mercury_data_mdbcomp__program_representation__enum_functor_desc_builtin_mod_0_3
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_builtin_mod_0[] = {
	0,
	2,
	3,
	4,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_builtin_mod_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__builtin_mod_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__builtin_mod_0_0)),
	"mdbcomp.program_representation",
	"builtin_mod",
	{ (void *)mercury_data_mdbcomp__program_representation__enum_name_ordered_builtin_mod_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__enum_value_ordered_builtin_mod_0 },
	5,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_builtin_mod_0
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_0 = {
	"unify_construct_rep",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_1 = {
	"unify_deconstruct_rep",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_1,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_2 = {
	"partial_deconstruct_rep",
	3,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_3 = {
	"partial_construct_rep",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_4 = {
	"unify_assign_rep",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_5 = {
	"cast_rep",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_6 = {
	"unify_simple_test_rep",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_6,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_7 = {
	"pragma_foreign_code_rep",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_7,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_8 = {
	"higher_order_call_rep",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_8,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_9 = {
	"method_call_rep",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_9,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_10 = {
	"plain_call_rep",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	10,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_10,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_11 = {
	"builtin_call_rep",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	11,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_11,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_12 = {
	"event_call_rep",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	12,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_rep_0_12,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_atomic_goal_rep_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_atomic_goal_rep_0_1[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_atomic_goal_rep_0_2[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_2

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_atomic_goal_rep_0_3[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_3,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_4,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_5,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_6,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_7,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_8,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_9,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_10,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_11,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_12

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_atomic_goal_rep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_atomic_goal_rep_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_atomic_goal_rep_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_atomic_goal_rep_0_2 },
	{ 10, MR_SECTAG_REMOTE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_atomic_goal_rep_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_atomic_goal_rep_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_11,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_5,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_12,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_8,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_9,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_3,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_2,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_10,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_7,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_4,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_0,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_1,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_rep_0_6
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_atomic_goal_rep_0[] = {
	10,
	11,
	6,
	5,
	9,
	1,
	12,
	8,
	3,
	4,
	7,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0)),
	"mdbcomp.program_representation",
	"atomic_goal_rep",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_atomic_goal_rep_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_atomic_goal_rep_0 },
	13,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_atomic_goal_rep_0
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_atomic_goal_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_id_0_0 = {
	"atomic_goal_id",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_atomic_goal_id_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_atomic_goal_id_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_id_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_atomic_goal_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_atomic_goal_id_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_atomic_goal_id_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_atomic_goal_id_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_atomic_goal_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_id_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0)),
	"mdbcomp.program_representation",
	"atomic_goal_id",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_atomic_goal_id_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_atomic_goal_id_0 },
	1,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_atomic_goal_id_0
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_arg_pos_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_arg_pos_0_0 = {
	"user_head_var",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_arg_pos_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_arg_pos_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_arg_pos_0_1 = {
	"any_head_var",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_arg_pos_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_arg_pos_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_arg_pos_0_2 = {
	"any_head_var_from_back",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_arg_pos_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_arg_pos_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_arg_pos_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_arg_pos_0_1[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_arg_pos_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_arg_pos_0_2[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_arg_pos_0_2

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_arg_pos_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_arg_pos_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_arg_pos_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_arg_pos_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_arg_pos_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_arg_pos_0_1,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_arg_pos_0_2,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_arg_pos_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_arg_pos_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__arg_pos_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__arg_pos_0_0)),
	"mdbcomp.program_representation",
	"arg_pos",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_arg_pos_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_arg_pos_0 },
	3,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_arg_pos_0
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__path_from_string_2_0_1 = {
{
MR_PREDICATE,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"is_path_separator",
1,
0
},
"mdbcomp.program_representation",
"program_representation.m",
479,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__path_from_string_2_0_2 = {
{
MR_PREDICATE,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"path_step_from_string",
2,
0
},
"mdbcomp.program_representation",
"program_representation.m",
480,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__path_from_string_det_2_0_1 = {
{
MR_PREDICATE,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"is_path_separator",
1,
0
},
"mdbcomp.program_representation",
"program_representation.m",
479,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__path_from_string_det_2_0_2 = {
{
MR_PREDICATE,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"path_step_from_string",
2,
0
},
"mdbcomp.program_representation",
"program_representation.m",
480,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__program_representation__goal_path_to_string_1_0_1 = {
{
MR_FUNCTION,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"goal_path_step_to_string",
2,
0
},
"mdbcomp.program_representation",
"program_representation.m",
515,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__program_representation__string_from_path_1_0_1 = {
{
MR_FUNCTION,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"goal_path_step_to_string",
2,
0
},
"mdbcomp.program_representation",
"program_representation.m",
519,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__path_step_from_string_2_0_1 = {
{
MR_PREDICATE,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"lambda_program_representation_m_494",
2,
0
},
"mdbcomp.program_representation",
"program_representation.m",
494,
"d3;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__read_proc_rep_3_0_1 = {
{
MR_PREDICATE,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"lambda_program_representation_m_608",
2,
0
},
"mdbcomp.program_representation",
"program_representation.m",
608,
"d1;c4;q;c9;"
};

MR_decl_entry(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module0)
	MR_init_entry1(mdbcomp__program_representation__no_type_info_builtin_3_0);
	MR_init_label8(mdbcomp__program_representation__no_type_info_builtin_3_0,3,97,5,6,11,16,21,26)
	MR_init_label8(mdbcomp__program_representation__no_type_info_builtin_3_0,31,36,41,46,51,56,61,66)
	MR_init_label6(mdbcomp__program_representation__no_type_info_builtin_3_0,71,76,81,86,91,93)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__no_type_info_builtin_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_hash_string((MR_String) MR_r2) & (MR_Integer) 63);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(1,0))[(MR_Integer) MR_r4];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r2) == 0))) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i5);
	}
	MR_r4 = (MR_COMMON(0,0))[(MR_Integer) MR_r4];
	if (MR_INT_GE(MR_r4,0))
		continue;
	}
	break; } /* end while */
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r4,
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i6) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i11) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i16) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i21) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i26) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i31) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i36) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i41) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i46) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i51) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i56) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i61) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i66) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i71) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i76) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i81) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i86) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i91) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97));
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__string_to_sym_name_1_0);
MR_decl_entry(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module1)
	MR_init_entry1(mdbcomp__program_representation__call_does_not_generate_events_3_0);
	MR_init_label8(mdbcomp__program_representation__call_does_not_generate_events_3_0,5,6,3,12,14,10,20,8)
	MR_init_label4(mdbcomp__program_representation__call_does_not_generate_events_3_0,25,26,28,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__call_does_not_generate_events_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("__Compare__", 11)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("__Index__", 9)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("__Unify__", 9)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i10);
	}
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("compare", 7)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i12);
	}
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("compare_representation", 22)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i14);
	}
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("unify", 5)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i8);
	}
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("exception", 9)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i8);
	}
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("builtin_catch", 13)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i20);
	}
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("builtin_throw", 13)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i8);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		mdbcomp__program_representation__call_does_not_generate_events_3_0_i25);
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__program_representation__no_type_info_builtin_3_0,
		mdbcomp__program_representation__call_does_not_generate_events_3_0_i26);
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		mdbcomp__program_representation__call_does_not_generate_events_3_0_i28);
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0);
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module2)
	MR_init_entry1(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0);
	MR_init_label8(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,13,14,36,17,18,35,25,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i35);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i13) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i14) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i36) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i35));
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r1, 3);
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i17);
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__call_does_not_generate_events_3_0,
		fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i18);
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i16);
	}
	MR_GOTO_LAB(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i25);
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module3)
	MR_init_entry1(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0);
	MR_init_label3(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0,7,13,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__goal_generates_internal_event_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0_i13) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0_i8) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0_i8) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0_i7));
MR_def_label(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0_i8);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0_i8);
	}
MR_def_label(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module4)
	MR_init_entry1(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0);
	MR_init_label5(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0,29,16,30,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i19);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i19) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i19) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i19) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i19) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i19) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i19) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i19) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i29) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i30) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i19));
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i16);
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i18);
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__words_separator_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__map_3_2);

MR_BEGIN_MODULE(mdbcomp__program_representation_module5)
	MR_init_entry1(mdbcomp__program_representation__path_from_string_2_0);
	MR_init_label1(mdbcomp__program_representation__path_from_string_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__path_from_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdbcomp__program_representation__path_from_string_2_0_i2);
MR_def_label(mdbcomp__program_representation__path_from_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(list__map_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module6)
	MR_init_entry1(mdbcomp__program_representation__path_from_string_det_2_0);
	MR_init_label3(mdbcomp__program_representation__path_from_string_det_2_0,3,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__path_from_string_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdbcomp__program_representation__path_from_string_det_2_0_i3);
MR_def_label(mdbcomp__program_representation__path_from_string_det_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_np_call_localret_ent(list__map_3_2,
		mdbcomp__program_representation__path_from_string_det_2_0_i4);
MR_def_label(mdbcomp__program_representation__path_from_string_det_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_from_string_det_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdbcomp__program_representation__path_from_string_det_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("path_from_string_det: path_from_string failed", 45);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module7)
	MR_init_entry1(fn__mdbcomp__program_representation__goal_path_to_string_1_0);
	MR_init_label2(fn__mdbcomp__program_representation__goal_path_to_string_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__goal_path_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		fn__mdbcomp__program_representation__goal_path_to_string_1_0_i2);
MR_def_label(fn__mdbcomp__program_representation__goal_path_to_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mdbcomp__program_representation__goal_path_to_string_1_0_i3);
MR_def_label(fn__mdbcomp__program_representation__goal_path_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module8)
	MR_init_entry1(fn__mdbcomp__program_representation__string_from_path_1_0);
	MR_init_label1(fn__mdbcomp__program_representation__string_from_path_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__string_from_path_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mdbcomp__program_representation__string_from_path_1_0_i2);
MR_def_label(fn__mdbcomp__program_representation__string_from_path_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__first_char_3_3);
MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module9)
	MR_init_entry1(mdbcomp__program_representation__path_step_from_string_2_0);
	MR_init_label8(mdbcomp__program_representation__path_step_from_string_2_0,2,5,8,7,11,10,13,15)
	MR_init_label8(mdbcomp__program_representation__path_step_from_string_2_0,17,21,19,24,28,30,32,23)
	MR_init_label2(mdbcomp__program_representation__path_step_from_string_2_0,35,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__path_step_from_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__first_char_3_3,
		mdbcomp__program_representation__path_step_from_string_2_0_i2);
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	if (MR_INT_NE(MR_r2,63)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i5);
	}
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,99)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i7);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__program_representation__path_step_from_string_2_0_i8);
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,100)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i10);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__program_representation__path_step_from_string_2_0_i11);
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,101)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i13);
	}
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,102)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i15);
	}
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,108)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i17);
	}
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,113)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i19);
	}
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i21);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,5,0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,5,1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,115)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i23);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdbcomp__program_representation__path_step_from_string_2_0_i24);
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__program_representation__path_step_from_string_2_0_i28);
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	if ((strcmp((char *)MR_sv(1), (char *)(MR_Word) MR_string_const("na", 2)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__program_representation__path_step_from_string_2_0_i32);
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,116)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i35);
	}
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,126)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__path_step_from_string_2_0,1)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module10)
	MR_init_entry1(mdbcomp__program_representation__is_path_separator_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__is_path_separator_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 59);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__type_of_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module11)
	MR_init_entry1(fn__mdbcomp__program_representation__proc_rep_type_0_0);
	MR_init_label1(fn__mdbcomp__program_representation__proc_rep_type_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__proc_rep_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, proc_rep);
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		fn__mdbcomp__program_representation__proc_rep_type_0_0_i2);
MR_def_label(fn__mdbcomp__program_representation__proc_rep_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module12)
	MR_init_entry1(fn__mdbcomp__program_representation__goal_rep_type_0_0);
	MR_init_label1(fn__mdbcomp__program_representation__goal_rep_type_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__goal_rep_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_rep);
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		fn__mdbcomp__program_representation__goal_rep_type_0_0_i2);
MR_def_label(fn__mdbcomp__program_representation__goal_rep_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module13)
	MR_init_entry1(mdbcomp__program_representation__determinism_representation_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__determinism_representation_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_0, MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module14)
	MR_init_entry1(mdbcomp__program_representation__determinism_representation_2_1);
	MR_init_label1(mdbcomp__program_representation__determinism_representation_2_1,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__determinism_representation_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) MR_r1 <= 14))) {
		MR_GOTO_LAB(mdbcomp__program_representation__determinism_representation_2_1_i1);
	}
	if (!((((MR_Integer) 1 << (MR_Integer) MR_r1) & (MR_Integer) 17629))) {
		MR_GOTO_LAB(mdbcomp__program_representation__determinism_representation_2_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_1, MR_r1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__determinism_representation_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module15)
	MR_init_entry1(fn__mdbcomp__program_representation__detism_rep_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__detism_rep_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mdbcomp__program_representation__determinism_representation_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module16)
	MR_init_entry1(fn__mdbcomp__program_representation__goal_type_to_byte_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__goal_type_to_byte_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_2, MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module17)
	MR_init_entry1(mdbcomp__program_representation__byte_to_goal_type_2_0);
	MR_init_label1(mdbcomp__program_representation__byte_to_goal_type_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__byte_to_goal_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 1) <= 18))) {
		MR_GOTO_LAB(mdbcomp__program_representation__byte_to_goal_type_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_7_3, ((MR_Integer) MR_r1 - (MR_Integer) 1));
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__byte_to_goal_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module18)
	MR_init_entry1(mdbcomp__program_representation__var_num_rep_byte_2_0);
	MR_init_label1(mdbcomp__program_representation__var_num_rep_byte_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__var_num_rep_byte_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__var_num_rep_byte_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__var_num_rep_byte_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module19)
	MR_init_entry1(mdbcomp__program_representation__var_num_rep_byte_2_1);
	MR_init_label2(mdbcomp__program_representation__var_num_rep_byte_2_1,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__var_num_rep_byte_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__var_num_rep_byte_2_1_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__var_num_rep_byte_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__var_num_rep_byte_2_1_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__var_num_rep_byte_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module20)
	MR_init_entry1(mdbcomp__program_representation__read_byte_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_byte_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_byte_4_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_r2;
{
#line 885 "program_representation.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 3921 "mdbcomp.program_representation.c"
	MR_r1 = Pos;
	MR_r2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module21)
	MR_init_entry1(mdbcomp__program_representation__read_short_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_short_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_short_4_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_r2;
{
#line 895 "program_representation.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 3958 "mdbcomp.program_representation.c"
	MR_r1 = Pos;
	MR_r2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module22)
	MR_init_entry1(mdbcomp__program_representation__read_var_5_0);
	MR_init_label1(mdbcomp__program_representation__read_var_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_var_5_0_i3);
	}
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_var_5_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r3;
{
#line 885 "program_representation.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 3999 "mdbcomp.program_representation.c"
	MR_r1 = Pos;
	MR_r2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(mdbcomp__program_representation__read_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_var_5_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r3;
{
#line 895 "program_representation.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 4021 "mdbcomp.program_representation.c"
	MR_r1 = Pos;
	MR_r2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module23)
	MR_init_entry1(mdbcomp__program_representation__read_vars_2_6_0);
	MR_init_label3(mdbcomp__program_representation__read_vars_2_6_0,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_vars_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_vars_2_6_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_vars_2_6_0_i4);
	}
	{
	MR_Word MR_tempr1;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_vars_2_6_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r4;
{
#line 885 "program_representation.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 4069 "mdbcomp.program_representation.c"
	MR_r4 = Pos;
	MR_tempr1 = Value;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_vars_2_6_0,
		mdbcomp__program_representation__read_vars_2_6_0_i5);
MR_def_label(mdbcomp__program_representation__read_vars_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_vars_2_6_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r4;
{
#line 895 "program_representation.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 4097 "mdbcomp.program_representation.c"
	MR_r4 = Pos;
	MR_tempr1 = Value;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_vars_2_6_0,
		mdbcomp__program_representation__read_vars_2_6_0_i5);
MR_def_label(mdbcomp__program_representation__read_vars_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdbcomp__program_representation__read_vars_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module24)
	MR_init_entry1(mdbcomp__program_representation__read_vars_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_vars_5_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r3;
{
#line 895 "program_representation.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 4153 "mdbcomp.program_representation.c"
	MR_r4 = Pos;
	MR_r3 = Value;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(mdbcomp__program_representation__read_vars_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module25)
	MR_init_entry1(mdbcomp__program_representation__read_string_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_string_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	const MR_LabelLayout *	Label;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_String	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_string_5_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Label = (const MR_LabelLayout *) MR_r2;
	Pos0 = MR_r3;
{
#line 917 "program_representation.m"

    int         offset;
    const char  *str;

    offset = (Bytecode[Pos0] << 24) + (Bytecode[Pos0+1] << 16) +
        (Bytecode[Pos0+2] << 8) + Bytecode[Pos0+3];
    Pos = Pos0 + 4;
    str = Label->MR_sll_entry->MR_sle_module_layout->MR_ml_string_table
        + offset;
    MR_make_aligned_string(Value, str);
;}
#line 4199 "mdbcomp.program_representation.c"
	MR_r1 = Pos;
	MR_r2 = (MR_Word) Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module26)
	MR_init_entry1(mdbcomp__program_representation__read_atomic_info_8_0);
	MR_init_label6(mdbcomp__program_representation__read_atomic_info_8_0,4,2,7,8,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_atomic_info_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_atomic_info_8_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r4;
{
#line 885 "program_representation.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 4241 "mdbcomp.program_representation.c"
	MR_tempr1 = Pos;
	MR_tempr2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__determinism_representation_2_1,
		mdbcomp__program_representation__read_atomic_info_8_0_i4);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i7);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	MR_tempr5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_string_const("read_atomic_info: bad detism", 28);
	}
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__program_representation__read_atomic_info_8_0_i7);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	const MR_LabelLayout *	Label;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_String	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_atomic_info_8_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Label = (const MR_LabelLayout *) MR_sv(3);
	Pos0 = MR_sv(6);
{
#line 917 "program_representation.m"

    int         offset;
    const char  *str;

    offset = (Bytecode[Pos0] << 24) + (Bytecode[Pos0+1] << 16) +
        (Bytecode[Pos0+2] << 8) + Bytecode[Pos0+3];
    Pos = Pos0 + 4;
    str = Label->MR_sll_entry->MR_sle_module_layout->MR_ml_string_table
        + offset;
    MR_make_aligned_string(Value, str);
;}
#line 4305 "mdbcomp.program_representation.c"
	MR_r5 = Pos;
	MR_r6 = (MR_Word) Value;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i8);
	}
	MR_sv(2) = MR_ctfield(0, MR_sv(4), 1);
	MR_r3 = MR_r5;
	MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i10);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r6;
	MR_r3 = MR_r5;
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_atomic_info_8_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r3;
{
#line 895 "program_representation.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 4338 "mdbcomp.program_representation.c"
	MR_tempr1 = Pos;
	MR_tempr2 = Value;
#undef	MR_PROC_LABEL
	}
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_atomic_info_8_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_tempr1;
{
#line 895 "program_representation.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 4357 "mdbcomp.program_representation.c"
	MR_r4 = Pos;
	MR_r3 = Value;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr2;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_2_6_0,
		mdbcomp__program_representation__read_atomic_info_8_0_i11);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module27)
	MR_init_entry1(mdbcomp__program_representation__read_maybe_vars_2_6_0);
	MR_init_label6(mdbcomp__program_representation__read_maybe_vars_2_6_0,6,3,7,11,12,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_maybe_vars_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_maybe_vars_2_6_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_maybe_vars_2_6_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r4;
{
#line 885 "program_representation.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 4417 "mdbcomp.program_representation.c"
	MR_r5 = Pos;
	MR_r6 = Value;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_maybe_vars_2_6_0_i3);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_maybe_vars_2_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_maybe_vars_2_6_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r5;
{
#line 885 "program_representation.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 4444 "mdbcomp.program_representation.c"
	MR_r4 = Pos;
	MR_tempr1 = Value;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_maybe_vars_2_6_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i12);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_maybe_vars_2_6_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r5;
{
#line 895 "program_representation.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 4473 "mdbcomp.program_representation.c"
	MR_r4 = Pos;
	MR_tempr1 = Value;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_maybe_vars_2_6_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i12);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_maybe_vars_2_6_0_i7);
	}
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r5;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_np_localcall_lab(mdbcomp__program_representation__read_maybe_vars_2_6_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i12);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("read_maybe_vars_2: invalid yes or no flag", 41);
	}
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i11);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mdbcomp__program_representation__read_maybe_vars_2_6_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i12);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module28)
	MR_init_entry1(mdbcomp__program_representation__read_maybe_vars_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_maybe_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_maybe_vars_5_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r3;
{
#line 895 "program_representation.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 4553 "mdbcomp.program_representation.c"
	MR_r4 = Pos;
	MR_r3 = Value;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(mdbcomp__program_representation__read_maybe_vars_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module29)
	MR_init_entry1(mdbcomp__program_representation__read_method_num_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_method_num_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_method_num_4_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_r2;
{
#line 895 "program_representation.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 4590 "mdbcomp.program_representation.c"
	MR_r1 = Pos;
	MR_r2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module30)
	MR_init_entry1(mdbcomp__program_representation__read_cons_id_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_cons_id_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	const MR_LabelLayout *	Label;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_String	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_cons_id_5_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Label = (const MR_LabelLayout *) MR_r2;
	Pos0 = MR_r3;
{
#line 917 "program_representation.m"

    int         offset;
    const char  *str;

    offset = (Bytecode[Pos0] << 24) + (Bytecode[Pos0+1] << 16) +
        (Bytecode[Pos0+2] << 8) + Bytecode[Pos0+3];
    Pos = Pos0 + 4;
    str = Label->MR_sll_entry->MR_sle_module_layout->MR_ml_string_table
        + offset;
    MR_make_aligned_string(Value, str);
;}
#line 4636 "mdbcomp.program_representation.c"
	MR_r1 = Pos;
	MR_r2 = (MR_Word) Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module31)
	MR_init_entry1(mdbcomp__program_representation__read_goal_7_0);
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,2,4,7,8,9,10,11,12)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,13,14,15,16,17,18,19,20)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,21,23,27,28,29,30,31,32)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,34,35,36,37,39,40,41,42)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,44,45,46,47,49,50,51,53)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,54,55,57,58,59,61,62,64)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,65,66,68,69,70,71,73,74)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,75,76,78,79,80,81,83,84)
	MR_init_label2(mdbcomp__program_representation__read_goal_7_0,85,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__read_byte_4_0,
		mdbcomp__program_representation__read_goal_7_0_i2);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdbcomp__program_representation__byte_to_goal_type_2_0,
		mdbcomp__program_representation__read_goal_7_0_i4);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i3);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i7) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i9) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i11) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i13) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i17) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i19) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i29) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i34) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i39) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i44) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i49) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i53) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i57) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i61) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i64) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i68) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i73) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i78) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i83));
MR_def_label(mdbcomp__program_representation__read_goal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_goals_7_0,
		mdbcomp__program_representation__read_goal_7_0_i8);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_goals_7_0,
		mdbcomp__program_representation__read_goal_7_0_i10);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_goals_7_0,
		mdbcomp__program_representation__read_goal_7_0_i12);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i14);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i15);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i16);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i18);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_byte_4_0,
		mdbcomp__program_representation__read_goal_7_0_i20);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i21);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_sv(1) = (MR_Integer) 1;
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i28);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i23);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i28);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("read_goal: bad maybe_cut", 24);
	}
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__program_representation__read_goal_7_0_i27);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i28);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i30);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_cons_id_5_0,
		mdbcomp__program_representation__read_goal_7_0_i31);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i32);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i35);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_cons_id_5_0,
		mdbcomp__program_representation__read_goal_7_0_i36);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i37);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i40);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_cons_id_5_0,
		mdbcomp__program_representation__read_goal_7_0_i41);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_maybe_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i42);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i45);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_cons_id_5_0,
		mdbcomp__program_representation__read_goal_7_0_i46);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_maybe_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i47);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i50);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i51);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i54);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i55);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i58);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i59);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i62);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i65);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i66);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i69);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_method_num_4_0,
		mdbcomp__program_representation__read_goal_7_0_i70);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i71);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_string_5_0,
		mdbcomp__program_representation__read_goal_7_0_i74);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_string_5_0,
		mdbcomp__program_representation__read_goal_7_0_i75);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i76);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_string_5_0,
		mdbcomp__program_representation__read_goal_7_0_i79);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_string_5_0,
		mdbcomp__program_representation__read_goal_7_0_i80);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i81);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_string_5_0,
		mdbcomp__program_representation__read_goal_7_0_i84);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i85);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("read_goal: invalid goal type", 28);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module32)
	MR_init_entry1(mdbcomp__program_representation__read_goals_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_goals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_goals_7_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r4;
{
#line 895 "program_representation.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 5399 "mdbcomp.program_representation.c"
	MR_r4 = Pos;
	MR_r6 = Value;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(mdbcomp__program_representation__read_goals_2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module33)
	MR_init_entry1(mdbcomp__program_representation__read_goals_2_8_0);
	MR_init_label3(mdbcomp__program_representation__read_goals_2_8_0,3,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_goals_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r6,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goals_2_8_0_i2);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goals_2_8_0_i3);
MR_def_label(mdbcomp__program_representation__read_goals_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_np_localcall_lab(mdbcomp__program_representation__read_goals_2_8_0,
		mdbcomp__program_representation__read_goals_2_8_0_i4);
MR_def_label(mdbcomp__program_representation__read_goals_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(mdbcomp__program_representation__read_goals_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module34)
	MR_init_entry1(mdbcomp__program_representation__read_int32_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_int32_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_int32_4_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_r2;
{
#line 905 "program_representation.m"

    Value = (Bytecode[Pos0] << 24) + (Bytecode[Pos0+1] << 16) +
        (Bytecode[Pos0+2] << 8) + Bytecode[Pos0+3];
    Pos = Pos0 + 4;
;}
#line 5493 "mdbcomp.program_representation.c"
	MR_r1 = Pos;
	MR_r2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__require_2_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module35)
	MR_init_entry1(mdbcomp__program_representation__read_proc_rep_3_0);
	MR_init_label6(mdbcomp__program_representation__read_proc_rep_3_0,4,2,7,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__read_proc_rep_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_proc_rep_3_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = (MR_Integer) 0;
{
#line 905 "program_representation.m"

    Value = (Bytecode[Pos0] << 24) + (Bytecode[Pos0+1] << 16) +
        (Bytecode[Pos0+2] << 8) + Bytecode[Pos0+3];
    Pos = Pos0 + 4;
;}
#line 5535 "mdbcomp.program_representation.c"
	MR_r5 = Pos;
	MR_r6 = Value;
#undef	MR_PROC_LABEL
	}
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_proc_rep_3_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_r5;
{
#line 885 "program_representation.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 5554 "mdbcomp.program_representation.c"
	MR_r5 = Pos;
	MR_r7 = Value;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_3_0_i4);
	}
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r1;
	MR_sv(3) = MR_r6;
	MR_r3 = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_3_0_i7);
MR_def_label(mdbcomp__program_representation__read_proc_rep_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_3_0_i2);
	}
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r1;
	MR_sv(3) = MR_r6;
	MR_r3 = MR_r5;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_3_0_i7);
MR_def_label(mdbcomp__program_representation__read_proc_rep_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("read_var_num_rep: unknown var_num_rep", 37);
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__program_representation__read_proc_rep_3_0_i7);
MR_def_label(mdbcomp__program_representation__read_proc_rep_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	const MR_uint_least8_t *	Bytecode;
	const MR_LabelLayout *	Label;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_String	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_proc_rep_3_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Label = (const MR_LabelLayout *) MR_sv(2);
	Pos0 = MR_r3;
{
#line 917 "program_representation.m"

    int         offset;
    const char  *str;

    offset = (Bytecode[Pos0] << 24) + (Bytecode[Pos0+1] << 16) +
        (Bytecode[Pos0+2] << 8) + Bytecode[Pos0+3];
    Pos = Pos0 + 4;
    str = Label->MR_sll_entry->MR_sle_module_layout->MR_ml_string_table
        + offset;
    MR_make_aligned_string(Value, str);
;}
#line 5612 "mdbcomp.program_representation.c"
	MR_tempr1 = Pos;
	MR_tempr2 = (MR_Word) Value;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_proc_rep_3_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_tempr1;
{
#line 895 "program_representation.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 5635 "mdbcomp.program_representation.c"
	MR_r4 = Pos;
	MR_r3 = Value;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_2_6_0,
		mdbcomp__program_representation__read_proc_rep_3_0_i8);
MR_def_label(mdbcomp__program_representation__read_proc_rep_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_proc_rep_3_0_i9);
MR_def_label(mdbcomp__program_representation__read_proc_rep_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__program_representation__IntroducedFrom__pred__read_proc_rep__608__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 4) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("read_proc_rep: limit mismatch", 29);
	}
	MR_np_call_localret_ent(require__require_2_0,
		mdbcomp__program_representation__read_proc_rep_3_0_i10);
MR_def_label(mdbcomp__program_representation__read_proc_rep_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module36)
	MR_init_entry1(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0);
	MR_init_label8(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,4,5,6,7,8,9,10,62)
	MR_init_label8(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,12,13,63,16,17,19,23,22)
	MR_init_label7(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,26,27,28,29,30,20,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i4) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i62) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i63) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i19));
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i5) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i6) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i7) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i8) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i9) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i10));
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("?;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("t;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("e;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("~;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("l;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i12);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i13);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("c", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i16);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i17);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("d", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i20);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i22);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i23);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("-na;", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i30);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i26);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i27);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i28);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i29);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i30);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("s", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("q!;", 3);
	MR_proceed();
	}
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("q;", 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module37)
	MR_init_entry1(__Unify___mdbcomp__program_representation__arg_pos_0_0);
	MR_init_label4(__Unify___mdbcomp__program_representation__arg_pos_0_0,8,6,20,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__arg_pos_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__arg_pos_0_0_i20);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__arg_pos_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__arg_pos_0_0_i8);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__arg_pos_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_tempr2 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__program_representation__arg_pos_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__arg_pos_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__program_representation__arg_pos_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__arg_pos_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__program_representation__arg_pos_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__arg_pos_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module38)
	MR_init_entry1(__Compare___mdbcomp__program_representation__arg_pos_0_0);
	MR_init_label7(__Compare___mdbcomp__program_representation__arg_pos_0_0,3,2,28,12,6,32,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__arg_pos_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__arg_pos_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__arg_pos_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i12);
	}
	MR_tempr2 = MR_sv(2);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i11);
	}
	if (MR_PTAG_TEST(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i11);
	}
	}
MR_def_label(__Compare___mdbcomp__program_representation__arg_pos_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r3, 0);
	MR_r2 = MR_const_mask_field(MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__arg_pos_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i32);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___mdbcomp__program_representation__arg_pos_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i28);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i11);
	}
	}
MR_def_label(__Compare___mdbcomp__program_representation__arg_pos_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__arg_pos_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module39)
	MR_init_entry1(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0);
	MR_init_label2(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__atomic_goal_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module40)
	MR_init_entry1(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0);
	MR_init_label5(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__atomic_goal_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_id_0_0_i5);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_id_0_0_i9);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module41)
	MR_init_entry1(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0);
	MR_init_label8(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,6,10,14,18,19,23,25,27)
	MR_init_label8(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,29,33,37,41,45,49,99,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__atomic_goal_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i99);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r4 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i14) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i18));
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr3, 2);
	MR_r3 = MR_ctfield(0, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(1, MR_tempr3, 2);
	MR_r3 = MR_ctfield(1, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_ctfield(2, MR_tempr3, 2);
	MR_r3 = MR_ctfield(2, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i19) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i27) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i29) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i33) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i37) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i41) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i45) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i49));
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_ctfield(3, MR_tempr3, 3);
	MR_r3 = MR_ctfield(3, MR_tempr4, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 1);
	MR_tempr5 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr3 = MR_ctfield(3, MR_tempr5, 2);
	MR_r1 = (MR_tempr1 == MR_tempr3);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 1);
	MR_tempr5 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr3 = MR_ctfield(3, MR_tempr5, 2);
	MR_r1 = (MR_tempr1 == MR_tempr3);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 1);
	MR_tempr5 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr3 = MR_ctfield(3, MR_tempr5, 2);
	MR_r1 = (MR_tempr1 == MR_tempr3);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr3, 2);
	MR_r3 = MR_ctfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr3, 3);
	MR_r3 = MR_ctfield(3, MR_tempr4, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr3, 3);
	MR_r3 = MR_ctfield(3, MR_tempr4, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr3, 3);
	MR_r3 = MR_ctfield(3, MR_tempr4, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr3, 2);
	MR_r3 = MR_ctfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module42)
	MR_init_entry1(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0);
	MR_init_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,3,2,6,11,15,34,38,40)
	MR_init_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,44,62,67,69,73,90,91,100)
	MR_init_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,104,119,127,129,142,151,153,165)
	MR_init_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,175,177,188,199,206,218,220,229)
	MR_init_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,242,244,248,257,271,273,277,285)
	MR_init_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,300,302,306,312,313,328,329,331)
	MR_init_label1(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,535)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__atomic_goal_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i34) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i62) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i90));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312);
	}
	MR_tempr4 = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr4, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i11);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i15);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i38) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i40);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i44);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i67) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(2, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(2, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i69);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i73);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i119) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i142) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i188) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i206) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i229) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i257) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i285) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i313));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312);
	}
	MR_tempr4 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(3, MR_tempr4, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i100);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i104);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i127) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312));
	}
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i129);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i151) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312));
	}
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i153);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i175) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312));
	}
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i177);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i199) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312));
	}
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i218) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312));
	}
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i220);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i242) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312));
	}
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i244);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i248);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i271) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312));
	}
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i273);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i277);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i300) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i312));
	}
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i302);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i306);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i328);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),9)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i329);
	}
	}
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,329)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i331);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i535);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,535)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module43)
	MR_init_entry1(__Unify___mdbcomp__program_representation__builtin_mod_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdbcomp__program_representation__builtin_mod_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module44)
	MR_init_entry1(__Compare___mdbcomp__program_representation__builtin_mod_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdbcomp__program_representation__builtin_mod_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module45)
	MR_init_entry1(__Unify___mdbcomp__program_representation__bytecode_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__bytecode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module46)
	MR_init_entry1(__Compare___mdbcomp__program_representation__bytecode_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__bytecode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module47)
	MR_init_entry1(__Unify___mdbcomp__program_representation__bytecode_goal_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__bytecode_goal_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module48)
	MR_init_entry1(__Compare___mdbcomp__program_representation__bytecode_goal_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__bytecode_goal_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module49)
	MR_init_entry1(__Unify___mdbcomp__program_representation__cons_id_rep_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__cons_id_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module50)
	MR_init_entry1(__Compare___mdbcomp__program_representation__cons_id_rep_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__cons_id_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module51)
	MR_init_entry1(__Unify___mdbcomp__program_representation__detism_rep_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__detism_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module52)
	MR_init_entry1(__Compare___mdbcomp__program_representation__detism_rep_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__detism_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module53)
	MR_init_entry1(__Unify___mdbcomp__program_representation__goal_path_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__goal_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module54)
	MR_init_entry1(__Compare___mdbcomp__program_representation__goal_path_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__goal_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module55)
	MR_init_entry1(__Unify___mdbcomp__program_representation__goal_path_step_0_0);
	MR_init_label7(__Unify___mdbcomp__program_representation__goal_path_step_0_0,12,13,15,17,18,40,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__goal_path_step_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i40);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i17));
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i18);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_sv(1), 2);
	MR_r3 = MR_ctfield(3, MR_tempr3, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module56)
	MR_init_entry1(__Compare___mdbcomp__program_representation__goal_path_step_0_0);
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0,6,7,10,19,21,24,33,35)
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0,38,47,49,52,61,63,66,75)
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0,77,80,86,89,91,191,106,117)
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0,121,134,137,122,144,153,169,154)
	MR_init_label1(__Compare___mdbcomp__program_representation__goal_path_step_0_0,156)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__goal_path_step_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i86);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i106) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i121));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i21) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i63) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i77));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i19));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i86);
	}
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i24) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i33));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i86) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i38) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i47));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i86) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i52) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i61));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i86) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i66) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i75));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i86) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i80) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i89));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),5)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	if (MR_INT_EQ(MR_tag(MR_r4),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i117);
	}
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r3, 0);
	MR_r2 = MR_const_mask_field(MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i122);
	}
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i134));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__goal_path_step_0_0_i137);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i156);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i153));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r4),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i191));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i154);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module57)
	MR_init_entry1(__Unify___mdbcomp__program_representation__goal_path_string_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__goal_path_string_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module58)
	MR_init_entry1(__Compare___mdbcomp__program_representation__goal_path_string_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__goal_path_string_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module59)
	MR_init_entry1(__Unify___mdbcomp__program_representation__goal_rep_0_0);
	MR_init_label8(__Unify___mdbcomp__program_representation__goal_rep_0_0,121,6,10,14,18,36,31,33)
	MR_init_label6(__Unify___mdbcomp__program_representation__goal_rep_0_0,27,19,21,23,65,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__goal_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i65);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r4 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_rep_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_rep_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_rep_0_0_i14) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_rep_0_0_i18));
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_rep);
	MR_r2 = MR_ctfield(0, MR_r4, 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_rep);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_rep);
	MR_r2 = MR_ctfield(2, MR_r4, 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i19);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i27);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i31);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 5);
	MR_tempr1 = MR_tempr4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr3, 4);
	MR_r3 = MR_ctfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdbcomp__program_representation__goal_rep_0_0_i36);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_localcall_lab(__Unify___mdbcomp__program_representation__goal_rep_0_0,
		__Unify___mdbcomp__program_representation__goal_rep_0_0_i33);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i121);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_localcall_lab(__Unify___mdbcomp__program_representation__goal_rep_0_0,
		__Unify___mdbcomp__program_representation__goal_rep_0_0_i21);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(__Unify___mdbcomp__program_representation__goal_rep_0_0,
		__Unify___mdbcomp__program_representation__goal_rep_0_0_i23);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i121);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module60)
	MR_init_entry1(__Compare___mdbcomp__program_representation__goal_rep_0_0);
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_rep_0_0,281,3,2,6,13,17,24,28)
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_rep_0_0,33,35,39,98,102,106,110,72)
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_rep_0_0,81,83,61,69,40,45,46,148)
	MR_init_label4(__Compare___mdbcomp__program_representation__goal_rep_0_0,47,49,53,295)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__goal_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i17) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i28) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i39));
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i33) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i13));
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i33) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i24));
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i33) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i35));
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_rep);
	MR_r2 = MR_const_mask_field(MR_r3, 0);
	MR_r3 = MR_const_mask_field(MR_r4, 0);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i40);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i61);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i72);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i45);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i45);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i45);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i45);
	}
	MR_tempr4 = MR_r3;
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(3, MR_tempr4, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i98);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i295);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i102);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i295);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i106);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i295);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i110);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i295);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i45);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i45);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i45);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i81);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_localcall_lab(__Compare___mdbcomp__program_representation__goal_rep_0_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i83);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i295);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i45);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i45);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i69);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i148);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i281);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	if (MR_INT_EQ(MR_tag(MR_r4),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i46);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i47);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_localcall_lab(__Compare___mdbcomp__program_representation__goal_rep_0_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i49);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i295);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(__Compare___mdbcomp__program_representation__goal_rep_0_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i53);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i295);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i281);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module61)
	MR_init_entry1(__Unify___mdbcomp__program_representation__maybe_cut_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__maybe_cut_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module62)
	MR_init_entry1(__Compare___mdbcomp__program_representation__maybe_cut_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__maybe_cut_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module63)
	MR_init_entry1(__Unify___mdbcomp__program_representation__proc_rep_0_0);
	MR_init_label3(__Unify___mdbcomp__program_representation__proc_rep_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__proc_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__proc_rep_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdbcomp__program_representation__proc_rep_0_0_i4);
MR_def_label(__Unify___mdbcomp__program_representation__proc_rep_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__proc_rep_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__goal_rep_0_0);
MR_def_label(__Unify___mdbcomp__program_representation__proc_rep_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__proc_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module64)
	MR_init_entry1(__Compare___mdbcomp__program_representation__proc_rep_0_0);
	MR_init_label4(__Compare___mdbcomp__program_representation__proc_rep_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__proc_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__proc_rep_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__proc_rep_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__proc_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__proc_rep_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdbcomp__program_representation__proc_rep_0_0_i5);
MR_def_label(__Compare___mdbcomp__program_representation__proc_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__proc_rep_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__goal_rep_0_0);
MR_def_label(__Compare___mdbcomp__program_representation__proc_rep_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module65)
	MR_init_entry1(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0);
	MR_init_label2(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_tempr3) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module66)
	MR_init_entry1(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0);
	MR_init_label4(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0_i5);
MR_def_label(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module67)
	MR_init_entry1(__Unify___mdbcomp__program_representation__term_path_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__term_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module68)
	MR_init_entry1(__Compare___mdbcomp__program_representation__term_path_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__term_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module69)
	MR_init_entry1(__Unify___mdbcomp__program_representation__var_num_rep_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__var_num_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module70)
	MR_init_entry1(__Compare___mdbcomp__program_representation__var_num_rep_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__var_num_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module71)
	MR_init_entry1(__Unify___mdbcomp__program_representation__var_rep_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__var_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module72)
	MR_init_entry1(__Compare___mdbcomp__program_representation__var_rep_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__var_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module73)
	MR_init_entry1(mdbcomp__program_representation__IntroducedFrom__pred__read_proc_rep__608__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__IntroducedFrom__pred__read_proc_rep__608__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module74)
	MR_init_entry1(mdbcomp__program_representation__IntroducedFrom__pred__path_step_from_string_2__494__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__IntroducedFrom__pred__path_step_from_string_2__494__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__mdbcomp__program_representation__read_proc_rep_3_0);

void
MR_MDBCOMP_trace_read_rep(const MR_uint_least8_t * Mercury__argument1, const MR_LabelLayout * Mercury__argument2, MR_Word * Mercury__argument3);

void
MR_MDBCOMP_trace_read_rep(const MR_uint_least8_t * Mercury__argument1, const MR_LabelLayout * Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdbcomp__program_representation__read_proc_rep_3_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_uint_least8_t *, Mercury__argument1, MR_r1);
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument2, MR_r2);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdbcomp__program_representation__read_proc_rep_3_0), MR_FALSE);
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


MR_declare_entry(mercury__fn__mdbcomp__program_representation__goal_rep_type_0_0);

MR_Word
ML_goal_rep_type(void);

MR_Word
ML_goal_rep_type(void)
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
	MR_setup_callback(MR_ENTRY(mercury__fn__mdbcomp__program_representation__goal_rep_type_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdbcomp__program_representation__goal_rep_type_0_0), MR_FALSE);
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


MR_declare_entry(mercury__fn__mdbcomp__program_representation__proc_rep_type_0_0);

MR_Word
ML_proc_rep_type(void);

MR_Word
ML_proc_rep_type(void)
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
	MR_setup_callback(MR_ENTRY(mercury__fn__mdbcomp__program_representation__proc_rep_type_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdbcomp__program_representation__proc_rep_type_0_0), MR_FALSE);
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


static void mercury__mdbcomp__program_representation_maybe_bunch_0(void)
{
	mdbcomp__program_representation_module0();
	mdbcomp__program_representation_module1();
	mdbcomp__program_representation_module2();
	mdbcomp__program_representation_module3();
	mdbcomp__program_representation_module4();
	mdbcomp__program_representation_module5();
	mdbcomp__program_representation_module6();
	mdbcomp__program_representation_module7();
	mdbcomp__program_representation_module8();
	mdbcomp__program_representation_module9();
	mdbcomp__program_representation_module10();
	mdbcomp__program_representation_module11();
	mdbcomp__program_representation_module12();
	mdbcomp__program_representation_module13();
	mdbcomp__program_representation_module14();
	mdbcomp__program_representation_module15();
	mdbcomp__program_representation_module16();
	mdbcomp__program_representation_module17();
	mdbcomp__program_representation_module18();
	mdbcomp__program_representation_module19();
	mdbcomp__program_representation_module20();
	mdbcomp__program_representation_module21();
	mdbcomp__program_representation_module22();
	mdbcomp__program_representation_module23();
	mdbcomp__program_representation_module24();
	mdbcomp__program_representation_module25();
	mdbcomp__program_representation_module26();
	mdbcomp__program_representation_module27();
	mdbcomp__program_representation_module28();
	mdbcomp__program_representation_module29();
	mdbcomp__program_representation_module30();
	mdbcomp__program_representation_module31();
	mdbcomp__program_representation_module32();
	mdbcomp__program_representation_module33();
	mdbcomp__program_representation_module34();
	mdbcomp__program_representation_module35();
	mdbcomp__program_representation_module36();
	mdbcomp__program_representation_module37();
	mdbcomp__program_representation_module38();
	mdbcomp__program_representation_module39();
}

static void mercury__mdbcomp__program_representation_maybe_bunch_1(void)
{
	mdbcomp__program_representation_module40();
	mdbcomp__program_representation_module41();
	mdbcomp__program_representation_module42();
	mdbcomp__program_representation_module43();
	mdbcomp__program_representation_module44();
	mdbcomp__program_representation_module45();
	mdbcomp__program_representation_module46();
	mdbcomp__program_representation_module47();
	mdbcomp__program_representation_module48();
	mdbcomp__program_representation_module49();
	mdbcomp__program_representation_module50();
	mdbcomp__program_representation_module51();
	mdbcomp__program_representation_module52();
	mdbcomp__program_representation_module53();
	mdbcomp__program_representation_module54();
	mdbcomp__program_representation_module55();
	mdbcomp__program_representation_module56();
	mdbcomp__program_representation_module57();
	mdbcomp__program_representation_module58();
	mdbcomp__program_representation_module59();
	mdbcomp__program_representation_module60();
	mdbcomp__program_representation_module61();
	mdbcomp__program_representation_module62();
	mdbcomp__program_representation_module63();
	mdbcomp__program_representation_module64();
	mdbcomp__program_representation_module65();
	mdbcomp__program_representation_module66();
	mdbcomp__program_representation_module67();
	mdbcomp__program_representation_module68();
	mdbcomp__program_representation_module69();
	mdbcomp__program_representation_module70();
	mdbcomp__program_representation_module71();
	mdbcomp__program_representation_module72();
	mdbcomp__program_representation_module73();
	mdbcomp__program_representation_module74();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdbcomp__program_representation__init(void);
void mercury__mdbcomp__program_representation__init_type_tables(void);
void mercury__mdbcomp__program_representation__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdbcomp__program_representation__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdbcomp__program_representation__init_complexity_procs(void);
#endif

void mercury__mdbcomp__program_representation__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdbcomp__program_representation_maybe_bunch_0();
	mercury__mdbcomp__program_representation_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_var_rep_0,
		mdbcomp__program_representation__var_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_var_num_rep_0,
		mdbcomp__program_representation__var_num_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_term_path_0,
		mdbcomp__program_representation__term_path_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_read_proc_rep_info_0,
		mdbcomp__program_representation__read_proc_rep_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_0,
		mdbcomp__program_representation__proc_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_maybe_cut_0,
		mdbcomp__program_representation__maybe_cut_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0,
		mdbcomp__program_representation__goal_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_string_0,
		mdbcomp__program_representation__goal_path_string_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0,
		mdbcomp__program_representation__goal_path_step_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0,
		mdbcomp__program_representation__goal_path_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0,
		mdbcomp__program_representation__detism_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_rep_0,
		mdbcomp__program_representation__cons_id_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_bytecode_goal_type_0,
		mdbcomp__program_representation__bytecode_goal_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_bytecode_0,
		mdbcomp__program_representation__bytecode_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_builtin_mod_0,
		mdbcomp__program_representation__builtin_mod_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0,
		mdbcomp__program_representation__atomic_goal_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_id_0,
		mdbcomp__program_representation__atomic_goal_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0,
		mdbcomp__program_representation__arg_pos_0_0);
	mercury__mdbcomp__program_representation__init_debugger();
}

void mercury__mdbcomp__program_representation__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_var_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_var_num_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_term_path_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_read_proc_rep_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_maybe_cut_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_string_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_bytecode_goal_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_bytecode_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_builtin_mod_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0);
	}
}


void mercury__mdbcomp__program_representation__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdbcomp__program_representation__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdbcomp__program_representation__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
