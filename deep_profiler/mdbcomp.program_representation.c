/*
** Automatically generated from `mdbcomp.program_representation.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
#line 67 "mdbcomp.rtti_access.int"
#include "mdbcomp.rtti_access.mh"

#line 35 "mdbcomp.program_representation.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 39 "mdbcomp.program_representation.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 43 "mdbcomp.program_representation.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "mdbcomp.program_representation.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "mdbcomp.program_representation.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 55 "mdbcomp.program_representation.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 59 "mdbcomp.program_representation.c"
#line 60 "mdbcomp.program_representation.c"
#ifndef MDBCOMP__PROGRAM_REPRESENTATION_DECL_GUARD
#define MDBCOMP__PROGRAM_REPRESENTATION_DECL_GUARD

#line 64 "mdbcomp.program_representation.c"
#line 768 "program_representation.m"

#ifdef MR_HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif

#line 71 "mdbcomp.program_representation.c"
#line 72 "mdbcomp.program_representation.c"

#endif
#line 75 "mdbcomp.program_representation.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1[64];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
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
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_1[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_2[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__program_representation__type_ctor_info_var_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_var_num_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_term_path_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_read_proc_rep_info_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_prog_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_proclabel_kind_token_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_proc_defn_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_more_procs_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__program_representation__type_ctor_info_more_modules_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_module_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_maybe_cut_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_string_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_cp_type_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_case_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_call_type_and_callee_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_bytecode_goal_type_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_builtin_mod_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_atomic_goal_id_0,
	mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0;
MR_decl_label1(mdbcomp__program_representation__byte_to_goal_type_2_0, 1)
MR_decl_label8(mdbcomp__program_representation__call_does_not_generate_events_3_0, 5,6,3,12,14,10,21,18)
MR_decl_label6(mdbcomp__program_representation__call_does_not_generate_events_3_0, 25,8,30,31,33,2)
MR_decl_label3(mdbcomp__program_representation__coverage_point_type_c_value_2_0, 3,4,5)
MR_decl_label1(mdbcomp__program_representation__determinism_representation_2_1, 1)
MR_decl_label4(mdbcomp__program_representation__goal_path_from_string_2_0, 3,5,7,1)
MR_decl_label2(mdbcomp__program_representation__goal_path_from_string_det_2_0, 3,2)
MR_decl_label2(mdbcomp__program_representation__goal_path_inside_2_0, 2,3)
MR_decl_label8(mdbcomp__program_representation__goal_path_step_from_string_2_0, 2,5,7,10,9,14,13,17)
MR_decl_label8(mdbcomp__program_representation__goal_path_step_from_string_2_0, 19,21,24,23,29,27,35,39)
MR_decl_label5(mdbcomp__program_representation__goal_path_step_from_string_2_0, 41,44,33,49,1)
MR_decl_label1(mdbcomp__program_representation__is_more_modules_2_0, 1)
MR_decl_label1(mdbcomp__program_representation__is_more_procs_2_0, 1)
MR_decl_label1(mdbcomp__program_representation__is_proclabel_kind_2_0, 1)
MR_decl_label8(mdbcomp__program_representation__no_type_info_builtin_3_0, 3,97,5,6,11,16,21,26)
MR_decl_label8(mdbcomp__program_representation__no_type_info_builtin_3_0, 31,36,41,46,51,56,61,66)
MR_decl_label6(mdbcomp__program_representation__no_type_info_builtin_3_0, 71,76,81,86,91,93)
MR_decl_label8(mdbcomp__program_representation__read_atomic_info_8_0, 2,6,4,9,10,12,14,15)
MR_decl_label3(mdbcomp__program_representation__read_atomic_info_8_0, 17,19,1)
MR_decl_label2(mdbcomp__program_representation__read_cases_7_0, 2,1)
MR_decl_label8(mdbcomp__program_representation__read_cases_2_8_0, 3,5,8,10,12,15,2,1)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 2,5,8,9,11,16,17,19)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 21,26,27,29,34,35,38,39)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 41,43,48,49,51,53,58,59)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 62,63,65,70,71,76,77,79)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 84,85,87,89,92,93,95,97)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 102,103,106,107,109,111,116,117)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 119,121,126,127,129,131,136,137)
MR_decl_label8(mdbcomp__program_representation__read_goal_7_0, 139,141,145,146,149,150,152,280)
MR_decl_label5(mdbcomp__program_representation__read_goal_7_0, 157,158,160,4,1)
MR_decl_label2(mdbcomp__program_representation__read_goals_7_0, 2,1)
MR_decl_label4(mdbcomp__program_representation__read_goals_2_8_0, 3,5,2,1)
MR_decl_label2(mdbcomp__program_representation__read_maybe_vars_5_0, 2,1)
MR_decl_label8(mdbcomp__program_representation__read_maybe_vars_2_6_0, 3,9,8,12,5,15,19,20)
MR_decl_label2(mdbcomp__program_representation__read_maybe_vars_2_6_0, 2,1)
MR_decl_label8(mdbcomp__program_representation__read_module_reps_5_0, 57,2,8,10,12,14,7,1)
MR_decl_label5(mdbcomp__program_representation__read_n_cons_id_arities_6_0, 3,5,8,2,1)
MR_decl_label8(mdbcomp__program_representation__read_proc_rep_5_0, 2,8,10,12,14,16,18,7)
MR_decl_label8(mdbcomp__program_representation__read_proc_rep_5_0, 22,24,26,28,30,21,33,35)
MR_decl_label8(mdbcomp__program_representation__read_proc_rep_5_0, 37,39,41,6,44,46,50,49)
MR_decl_label7(mdbcomp__program_representation__read_proc_rep_5_0, 48,53,54,56,58,62,1)
MR_decl_label5(mdbcomp__program_representation__read_proc_reps_6_0, 39,2,8,7,1)
MR_decl_label8(mdbcomp__program_representation__read_prog_rep_file_4_0, 3,4,2,9,11,13,8,15)
MR_decl_label1(mdbcomp__program_representation__read_prog_rep_file_4_0, 16)
MR_decl_label1(mdbcomp__program_representation__read_var_5_0, 3)
MR_decl_label2(mdbcomp__program_representation__read_vars_5_0, 2,1)
MR_decl_label6(mdbcomp__program_representation__read_vars_2_6_0, 5,4,7,9,2,1)
MR_decl_label8(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0, 2,5,7,4,10,11,14,18)
MR_decl_label8(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0, 17,16,21,22,24,26,28,32)
MR_decl_label1(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0, 1)
MR_decl_label1(mdbcomp__program_representation__var_num_rep_byte_2_0, 3)
MR_decl_label2(mdbcomp__program_representation__var_num_rep_byte_2_1, 3,1)
MR_decl_label8(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0, 3,19,4,6,33,9,12,11)
MR_decl_label5(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0, 36,4,35,14,21)
MR_decl_label3(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0, 13,16,7)
MR_decl_label8(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0, 37,78,9,10,79,13,14,40)
MR_decl_label8(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0, 28,27,31,32,33,34,35,41)
MR_decl_label8(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0, 24,81,5,6,3,16,17,18)
MR_decl_label3(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0, 19,20,21)
MR_decl_label2(fn__mdbcomp__program_representation__goal_path_to_string_1_0, 2,4)
MR_decl_label1(fn__mdbcomp__program_representation__goal_rep_type_0_0, 2)
MR_decl_label1(fn__mdbcomp__program_representation__proc_defn_rep_type_0_0, 2)
MR_decl_label4(__Unify___mdbcomp__program_representation__arg_pos_0_0, 7,5,13,1)
MR_decl_label2(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0, 4,1)
MR_decl_label8(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0, 43,47,28,56,5,9,11,15)
MR_decl_label8(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0, 19,23,33,37,41,51,57,1)
MR_decl_label3(__Unify___mdbcomp__program_representation__call_site_0_0, 4,8,1)
MR_decl_label3(__Unify___mdbcomp__program_representation__call_type_and_callee_0_0, 8,14,1)
MR_decl_label4(__Unify___mdbcomp__program_representation__case_rep_0_0, 4,6,10,1)
MR_decl_label2(__Unify___mdbcomp__program_representation__cons_id_arity_rep_0_0, 4,1)
MR_decl_label3(__Unify___mdbcomp__program_representation__coverage_point_info_0_0, 4,6,1)
MR_decl_label8(__Unify___mdbcomp__program_representation__goal_path_step_0_0, 8,10,27,28,6,17,30,1)
MR_decl_label8(__Unify___mdbcomp__program_representation__goal_rep_0_0, 127,11,15,35,42,7,19,21)
MR_decl_label6(__Unify___mdbcomp__program_representation__goal_rep_0_0, 23,27,31,33,43,1)
MR_decl_label3(__Unify___mdbcomp__program_representation__module_rep_0_0, 4,8,1)
MR_decl_label3(__Unify___mdbcomp__program_representation__proc_defn_rep_0_0, 4,8,1)
MR_decl_label3(__Unify___mdbcomp__program_representation__proc_rep_0_0, 4,8,1)
MR_decl_label1(__Unify___mdbcomp__program_representation__prog_rep_0_0, 6)
MR_decl_label1(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0, 4)
MR_decl_label3(__Unify___mdbcomp__program_representation__string_proc_label_0_0, 17,5,1)
MR_decl_label7(__Compare___mdbcomp__program_representation__arg_pos_0_0, 3,2,36,13,5,48,9)
MR_decl_label5(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0, 3,2,5,9,29)
MR_decl_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 3,277,291,295,307,320,322,326)
MR_decl_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 171,179,181,185,365,5,7,9)
MR_decl_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 13,35,38,40,60,66,85,90)
MR_decl_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 92,110,116,118,122,140,149,153)
MR_decl_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 202,211,213,217,232,242,252,263)
MR_decl_label7(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0, 265,337,347,348,351,353,571)
MR_decl_label5(__Compare___mdbcomp__program_representation__call_site_0_0, 3,2,5,9,29)
MR_decl_label8(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0, 56,29,34,5,13,21,72,24)
MR_decl_label5(__Compare___mdbcomp__program_representation__case_rep_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0, 3,2,5,21)
MR_decl_label4(__Compare___mdbcomp__program_representation__coverage_point_info_0_0, 3,2,5,21)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0, 3,255,46,61,64,65,67,82)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0, 72,85,86,258,249,252,244,253)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0, 259,223,226,227,273,25,40,43)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0, 44,5,19,22,23,88,102,105)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0, 106,108,122,125,126,128,142,145)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0, 146,401,148,162,165,168,182,185)
MR_decl_label7(__Compare___mdbcomp__program_representation__goal_path_step_0_0, 186,188,202,205,288,199,432)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_rep_0_0, 326,3,39,52,53,57,66,124)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_rep_0_0, 132,134,142,146,9,13,17,21)
MR_decl_label8(__Compare___mdbcomp__program_representation__goal_rep_0_0, 67,72,74,78,91,97,105,179)
MR_decl_label4(__Compare___mdbcomp__program_representation__goal_rep_0_0, 111,112,114,341)
MR_decl_label5(__Compare___mdbcomp__program_representation__module_rep_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0, 3,2,5,21)
MR_decl_label4(__Compare___mdbcomp__program_representation__proc_rep_0_0, 3,2,5,21)
MR_decl_label2(__Compare___mdbcomp__program_representation__prog_rep_0_0, 3,2)
MR_decl_label2(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0, 3,2)
MR_decl_label8(__Compare___mdbcomp__program_representation__string_proc_label_0_0, 3,2,9,13,17,21,25,7)
MR_decl_label8(__Compare___mdbcomp__program_representation__string_proc_label_0_0, 5,35,37,41,45,49,53,126)
MR_decl_static(mdbcomp__program_representation__read_file_as_bytecode_2_6_0)
MR_def_extern_entry(mdbcomp__program_representation__is_proclabel_kind_2_0)
MR_def_extern_entry(mdbcomp__program_representation__byte_to_goal_type_2_0)
MR_def_extern_entry(mdbcomp__program_representation__determinism_representation_2_0)
MR_def_extern_entry(mdbcomp__program_representation__determinism_representation_2_1)
MR_decl_static(mdbcomp__program_representation__read_var_5_0)
MR_decl_static(mdbcomp__program_representation__read_vars_2_6_0)
MR_decl_static(mdbcomp__program_representation__read_vars_5_0)
MR_decl_static(mdbcomp__program_representation__read_atomic_info_8_0)
MR_decl_static(mdbcomp__program_representation__read_cons_id_5_0)
MR_decl_static(mdbcomp__program_representation__read_n_cons_id_arities_6_0)
MR_decl_static(mdbcomp__program_representation__read_maybe_vars_2_6_0)
MR_decl_static(mdbcomp__program_representation__read_maybe_vars_5_0)
MR_decl_static(mdbcomp__program_representation__read_method_num_4_0)
MR_decl_static(mdbcomp__program_representation__read_goal_7_0)
MR_decl_static(mdbcomp__program_representation__read_goals_7_0)
MR_decl_static(mdbcomp__program_representation__read_goals_2_8_0)
MR_decl_static(mdbcomp__program_representation__read_cases_7_0)
MR_decl_static(mdbcomp__program_representation__read_cases_2_8_0)
MR_def_extern_entry(mdbcomp__program_representation__var_num_rep_byte_2_0)
MR_def_extern_entry(mdbcomp__program_representation__var_num_rep_byte_2_1)
MR_decl_static(mdbcomp__program_representation__read_proc_rep_5_0)
MR_decl_static(mdbcomp__program_representation__is_more_procs_2_0)
MR_decl_static(mdbcomp__program_representation__read_proc_reps_6_0)
MR_decl_static(mdbcomp__program_representation__is_more_modules_2_0)
MR_decl_static(mdbcomp__program_representation__read_module_reps_5_0)
MR_def_extern_entry(mdbcomp__program_representation__read_prog_rep_file_4_0)
MR_def_extern_entry(mdbcomp__program_representation__no_type_info_builtin_3_0)
MR_def_extern_entry(mdbcomp__program_representation__call_does_not_generate_events_3_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0)
MR_def_extern_entry(mdbcomp__program_representation__goal_path_inside_2_0)
MR_def_extern_entry(mdbcomp__program_representation__goal_path_from_string_2_0)
MR_def_extern_entry(mdbcomp__program_representation__goal_path_from_string_det_2_0)
MR_def_extern_entry(mdbcomp__program_representation__goal_path_step_from_string_2_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0)
MR_def_extern_entry(mdbcomp__program_representation__is_goal_path_separator_1_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__proc_defn_rep_type_0_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__goal_rep_type_0_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__detism_rep_1_0)
MR_def_extern_entry(fn__mdbcomp__program_representation__goal_type_to_byte_1_0)
MR_def_extern_entry(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0)
MR_def_extern_entry(mdbcomp__program_representation__coverage_point_type_c_value_2_0)
MR_decl_static(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__arg_pos_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__arg_pos_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__atomic_goal_id_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0)
MR_decl_static(__Unify___mdbcomp__program_representation__builtin_mod_0_0)
MR_decl_static(__Compare___mdbcomp__program_representation__builtin_mod_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__bytecode_goal_type_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__bytecode_goal_type_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__call_site_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__call_site_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__call_type_and_callee_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__case_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__case_rep_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__cons_id_arity_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__cons_id_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__cons_id_rep_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__coverage_point_info_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__coverage_point_info_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__cp_type_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__cp_type_0_0)
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
MR_def_extern_entry(__Unify___mdbcomp__program_representation__module_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__module_rep_0_0)
MR_decl_static(__Unify___mdbcomp__program_representation__more_modules_0_0)
MR_decl_static(__Compare___mdbcomp__program_representation__more_modules_0_0)
MR_decl_static(__Unify___mdbcomp__program_representation__more_procs_0_0)
MR_decl_static(__Compare___mdbcomp__program_representation__more_procs_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__proc_defn_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__proc_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__proc_rep_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__proclabel_kind_token_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__proclabel_kind_token_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__prog_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__prog_rep_0_0)
MR_decl_static(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0)
MR_decl_static(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__string_proc_label_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__string_proc_label_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__term_path_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__term_path_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__var_num_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__var_num_rep_0_0)
MR_def_extern_entry(__Unify___mdbcomp__program_representation__var_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__program_representation__var_rep_0_0)
MR_decl_static(mdbcomp__program_representation__IntroducedFrom__pred__trace_read_proc_defn_rep__974__1_2_0)
MR_decl_static(mdbcomp__program_representation__IntroducedFrom__pred__goal_path_step_from_string_2__651__1_2_0)
MR_decl_static(mdbcomp__program_representation__IntroducedFrom__pred__read_proc_rep__912__1_2_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
17629
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__read_proc_rep_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__goal_path_from_string_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__goal_path_step_from_string_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__program_representation__goal_path_to_string_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_1;
static const struct mercury_type_1 mercury_common_1[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__program_representation__read_proc_rep_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__program_representation__goal_path_from_string_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step)
},
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__program_representation__goal_path_step_from_string_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mdbcomp__program_representation__goal_path_to_string_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

static const struct mercury_type_2 mercury_common_2[1] =
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

static const struct mercury_type_3 mercury_common_3[1] =
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
mercury_data__closure_layout__mdbcomp__program_representation__goal_path_from_string_2_0_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__program_representation__goal_path_from_string_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
};

static const struct mercury_type_5 mercury_common_5[3] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(mdbcomp__program_representation__is_goal_path_separator_1_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(mdbcomp__program_representation__goal_path_step_from_string_2_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0),
0
},
};

static const struct mercury_type_6 mercury_common_6[2] =
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

static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_COMMON(1,2),
MR_ENTRY_AP(mdbcomp__program_representation__IntroducedFrom__pred__goal_path_step_from_string_2__651__1_2_0),
1,
45
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

static const struct mercury_type_0 mercury_vector_common_0_0[19] =
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

static const struct mercury_type_0 mercury_vector_common_0_1[8] =
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

static const struct mercury_type_0 mercury_vector_common_0_2[15] =
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

static const struct mercury_type_0 mercury_vector_common_0_3[19] =
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
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_string_proc_label_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdbcomp__program_representation__field_names_string_proc_label_0_0[] = {
	"s_ord_pred_or_func",
	"s_ord_decl_module",
	"s_ord_def_module",
	"s_ord_name",
	"s_ord_arity",
	"s_ord_mode"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_string_proc_label_0_0 = {
	"str_ordinary_proc_label",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_string_proc_label_0_0,
	mercury_data_mdbcomp__program_representation__field_names_string_proc_label_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_string_proc_label_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdbcomp__program_representation__field_names_string_proc_label_0_1[] = {
	"s_spec_type_name",
	"s_spec_type_module",
	"s_spec_def_module",
	"s_spec_pred_name",
	"s_spec_arity",
	"s_spec_mode"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_string_proc_label_0_1 = {
	"str_special_proc_label",
	6,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_string_proc_label_0_1,
	mercury_data_mdbcomp__program_representation__field_names_string_proc_label_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_string_proc_label_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_string_proc_label_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_string_proc_label_0_1[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_string_proc_label_0_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_string_proc_label_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_string_proc_label_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_string_proc_label_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_string_proc_label_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_string_proc_label_0_0,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_string_proc_label_0_1
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_string_proc_label_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__string_proc_label_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__string_proc_label_0_0)),
	"mdbcomp.program_representation",
	"string_proc_label",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_string_proc_label_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_string_proc_label_0 },
	2,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_string_proc_label_0
};

static const MR_NotagFunctorDesc mercury_data_mdbcomp__program_representation__notag_functor_desc_read_proc_rep_info_0 = {
	"read_proc_rep_info",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	"filename"
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_read_proc_rep_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_read_proc_rep_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0)),
	"mdbcomp.program_representation",
	"read_proc_rep_info",
	{ (void *)&mercury_data_mdbcomp__program_representation__notag_functor_desc_read_proc_rep_info_0 },
	{ (void *)&mercury_data_mdbcomp__program_representation__notag_functor_desc_read_proc_rep_info_0 },
	1,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_read_proc_rep_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_module_rep_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_module_rep_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_module_rep_0
}};

static const MR_NotagFunctorDesc mercury_data_mdbcomp__program_representation__notag_functor_desc_prog_rep_0 = {
	"prog_rep",
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_module_rep_0,
	NULL
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_prog_rep_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_prog_rep_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__prog_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__prog_rep_0_0)),
	"mdbcomp.program_representation",
	"prog_rep",
	{ (void *)&mercury_data_mdbcomp__program_representation__notag_functor_desc_prog_rep_0 },
	{ (void *)&mercury_data_mdbcomp__program_representation__notag_functor_desc_prog_rep_0 },
	1,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_prog_rep_0
};

static const MR_ForeignEnumFunctorDesc mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_proclabel_kind_token_0_0 = {
	"proclabel_user_predicate",
	0,
	MR_proclabel_user_predicate
};

static const MR_ForeignEnumFunctorDesc mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_proclabel_kind_token_0_1 = {
	"proclabel_user_function",
	1,
	MR_proclabel_user_function
};

static const MR_ForeignEnumFunctorDesc mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_proclabel_kind_token_0_2 = {
	"proclabel_special",
	2,
	MR_proclabel_special
};

const MR_ForeignEnumFunctorDescPtr mercury_data_mdbcomp__program_representation__foreign_enum_ordinal_ordered_proclabel_kind_token_0[] = {
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_proclabel_kind_token_0_0,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_proclabel_kind_token_0_1,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_proclabel_kind_token_0_2
};

const MR_ForeignEnumFunctorDescPtr mercury_data_mdbcomp__program_representation__foreign_enum_name_ordered_proclabel_kind_token_0[] = {
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_proclabel_kind_token_0_2,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_proclabel_kind_token_0_1,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_proclabel_kind_token_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_proclabel_kind_token_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_proclabel_kind_token_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__proclabel_kind_token_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__proclabel_kind_token_0_0)),
	"mdbcomp.program_representation",
	"proclabel_kind_token",
	{ (void *)mercury_data_mdbcomp__program_representation__foreign_enum_name_ordered_proclabel_kind_token_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__foreign_enum_ordinal_ordered_proclabel_kind_token_0 },
	3,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_proclabel_kind_token_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_proc_defn_rep_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_proc_rep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_proc_defn_rep_0
};

const MR_ConstString mercury_data_mdbcomp__program_representation__field_names_proc_rep_0_0[] = {
	"pr_id",
	"pr_defn"
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
	mercury_data_mdbcomp__program_representation__field_names_proc_rep_0_0,
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
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_proc_defn_rep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_proc_defn_rep_0_0 = {
	"proc_defn_rep",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_proc_defn_rep_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_proc_defn_rep_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_proc_defn_rep_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_proc_defn_rep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_proc_defn_rep_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_proc_defn_rep_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_proc_defn_rep_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_proc_defn_rep_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_proc_defn_rep_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__proc_defn_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0)),
	"mdbcomp.program_representation",
	"proc_defn_rep",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_proc_defn_rep_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_proc_defn_rep_0 },
	1,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_proc_defn_rep_0
};

static const MR_ForeignEnumFunctorDesc mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_more_procs_0_0 = {
	"no_more_procs",
	0,
	MR_no_more_procs
};

static const MR_ForeignEnumFunctorDesc mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_more_procs_0_1 = {
	"next_proc",
	1,
	MR_next_proc
};

const MR_ForeignEnumFunctorDescPtr mercury_data_mdbcomp__program_representation__foreign_enum_ordinal_ordered_more_procs_0[] = {
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_more_procs_0_0,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_more_procs_0_1
};

const MR_ForeignEnumFunctorDescPtr mercury_data_mdbcomp__program_representation__foreign_enum_name_ordered_more_procs_0[] = {
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_more_procs_0_1,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_more_procs_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_more_procs_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_more_procs_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__more_procs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__more_procs_0_0)),
	"mdbcomp.program_representation",
	"more_procs",
	{ (void *)mercury_data_mdbcomp__program_representation__foreign_enum_name_ordered_more_procs_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__foreign_enum_ordinal_ordered_more_procs_0 },
	2,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_more_procs_0
};

static const MR_ForeignEnumFunctorDesc mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_more_modules_0_0 = {
	"no_more_modules",
	0,
	MR_no_more_modules
};

static const MR_ForeignEnumFunctorDesc mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_more_modules_0_1 = {
	"next_module",
	1,
	MR_next_module
};

const MR_ForeignEnumFunctorDescPtr mercury_data_mdbcomp__program_representation__foreign_enum_ordinal_ordered_more_modules_0[] = {
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_more_modules_0_0,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_more_modules_0_1
};

const MR_ForeignEnumFunctorDescPtr mercury_data_mdbcomp__program_representation__foreign_enum_name_ordered_more_modules_0[] = {
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_more_modules_0_1,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_more_modules_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_more_modules_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_more_modules_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__more_modules_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__more_modules_0_0)),
	"mdbcomp.program_representation",
	"more_modules",
	{ (void *)mercury_data_mdbcomp__program_representation__foreign_enum_name_ordered_more_modules_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__foreign_enum_ordinal_ordered_more_modules_0 },
	2,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_more_modules_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_proc_rep_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_module_rep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_proc_rep_0
};

const MR_ConstString mercury_data_mdbcomp__program_representation__field_names_module_rep_0_0[] = {
	"mr_name",
	"mr_string_table",
	"mr_procs"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_module_rep_0_0 = {
	"module_rep",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_module_rep_0_0,
	mercury_data_mdbcomp__program_representation__field_names_module_rep_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_module_rep_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_module_rep_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_module_rep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_module_rep_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_module_rep_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_module_rep_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_module_rep_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_module_rep_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__module_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__module_rep_0_0)),
	"mdbcomp.program_representation",
	"module_rep",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_module_rep_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_module_rep_0 },
	1,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_module_rep_0
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
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_case_rep_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_case_rep_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_case_rep_0
}};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_rep_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_case_rep_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_rep_0_2 = {
	"switch_rep",
	2,
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
	"step_atomic_main",
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

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_goal_path_step_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_9 = {
	"step_atomic_orelse",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	9,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_goal_path_step_0_9,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_10 = {
	"step_first",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_11 = {
	"step_later",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	11,
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
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_10,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_11

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_1[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_2[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_3[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_2,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_7,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_9

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_goal_path_step_0[] = {
	{ 7, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_goal_path_step_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_goal_path_step_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_8,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_9,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_0,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_1,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_10,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_3,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_5,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_4,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_11,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_6,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_7,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_goal_path_step_0_2
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_goal_path_step_0[] = {
	2,
	3,
	11,
	5,
	7,
	6,
	9,
	10,
	0,
	1,
	4,
	8 };
	
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
	12,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_goal_path_step_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 = {
	&mercury_data_cord__type_ctor_info_cord_1,
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
	{ (void *)&mercury_data_cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0 },
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

static const MR_ForeignEnumFunctorDesc mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_cp_type_0_0 = {
	"cp_type_solns_may_fail",
	0,
	MR_cp_type_solns_may_fail
};

static const MR_ForeignEnumFunctorDesc mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_cp_type_0_1 = {
	"cp_type_solns_multi",
	1,
	MR_cp_type_solns_multi
};

static const MR_ForeignEnumFunctorDesc mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_cp_type_0_2 = {
	"cp_type_solns_any",
	2,
	MR_cp_type_solns_any
};

static const MR_ForeignEnumFunctorDesc mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_cp_type_0_3 = {
	"cp_type_branch_arm",
	3,
	MR_cp_type_branch_arm
};

const MR_ForeignEnumFunctorDescPtr mercury_data_mdbcomp__program_representation__foreign_enum_ordinal_ordered_cp_type_0[] = {
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_cp_type_0_0,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_cp_type_0_1,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_cp_type_0_2,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_cp_type_0_3
};

const MR_ForeignEnumFunctorDescPtr mercury_data_mdbcomp__program_representation__foreign_enum_name_ordered_cp_type_0[] = {
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_cp_type_0_3,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_cp_type_0_2,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_cp_type_0_0,
	&mercury_data_mdbcomp__program_representation__foreign_enum_functor_desc_cp_type_0_1
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_cp_type_0[] = {
	2,
	3,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_cp_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__cp_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__cp_type_0_0)),
	"mdbcomp.program_representation",
	"cp_type",
	{ (void *)mercury_data_mdbcomp__program_representation__foreign_enum_name_ordered_cp_type_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__foreign_enum_ordinal_ordered_cp_type_0 },
	4,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_cp_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_cp_type_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_coverage_point_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1mdbcomp__program_representation__type_ctor_info_goal_path_step_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_cp_type_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_coverage_point_info_0_0 = {
	"coverage_point_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_coverage_point_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_coverage_point_info_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_coverage_point_info_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_coverage_point_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_coverage_point_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_coverage_point_info_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_coverage_point_info_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_coverage_point_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__coverage_point_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__coverage_point_info_0_0)),
	"mdbcomp.program_representation",
	"coverage_point_info",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_coverage_point_info_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_coverage_point_info_0 },
	1,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_coverage_point_info_0
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

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_cons_id_arity_rep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_cons_id_arity_rep_0_0 = {
	"cons_id_arity_rep",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_cons_id_arity_rep_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_cons_id_arity_rep_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_cons_id_arity_rep_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_cons_id_arity_rep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_cons_id_arity_rep_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_cons_id_arity_rep_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_cons_id_arity_rep_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_cons_id_arity_rep_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__cons_id_arity_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0)),
	"mdbcomp.program_representation",
	"cons_id_arity_rep",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_cons_id_arity_rep_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_cons_id_arity_rep_0 },
	1,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_cons_id_arity_rep_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0
}};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_case_rep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_case_rep_0_0 = {
	"case_rep",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_case_rep_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_case_rep_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_case_rep_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_case_rep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_case_rep_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_case_rep_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_case_rep_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_case_rep_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_case_rep_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__case_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__case_rep_0_0)),
	"mdbcomp.program_representation",
	"case_rep",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_case_rep_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_case_rep_0 },
	1,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_case_rep_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_0 = {
	"callback_call",
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

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_1 = {
	"higher_order_call",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_2 = {
	"method_call",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_call_type_and_callee_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_3 = {
	"plain_call",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_call_type_and_callee_0_3,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_4 = {
	"special_call",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_call_type_and_callee_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_0,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_1,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_2,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_4

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_call_type_and_callee_0_1[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_3

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_call_type_and_callee_0[] = {
	{ 4, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_call_type_and_callee_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_call_type_and_callee_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_call_type_and_callee_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_0,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_1,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_2,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_3,
	&mercury_data_mdbcomp__program_representation__du_functor_desc_call_type_and_callee_0_4
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_call_type_and_callee_0[] = {
	0,
	1,
	2,
	3,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_call_type_and_callee_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__call_type_and_callee_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0)),
	"mdbcomp.program_representation",
	"call_type_and_callee",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_call_type_and_callee_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_call_type_and_callee_0 },
	5,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_call_type_and_callee_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_call_type_and_callee_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__program_representation__field_types_call_site_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_call_type_and_callee_0
};

const MR_ConstString mercury_data_mdbcomp__program_representation__field_names_call_site_0_0[] = {
	"caller",
	"slot",
	"call_type_and_callee"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__program_representation__du_functor_desc_call_site_0_0 = {
	"call_site",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__program_representation__field_types_call_site_0_0,
	mercury_data_mdbcomp__program_representation__field_names_call_site_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_stag_ordered_call_site_0_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_call_site_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__program_representation__du_ptag_ordered_call_site_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__program_representation__du_stag_ordered_call_site_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__program_representation__du_name_ordered_call_site_0[] = {
	&mercury_data_mdbcomp__program_representation__du_functor_desc_call_site_0_0
};

const MR_Integer mercury_data_mdbcomp__program_representation__functor_number_map_call_site_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__program_representation__call_site_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__program_representation__call_site_0_0)),
	"mdbcomp.program_representation",
	"call_site",
	{ (void *)mercury_data_mdbcomp__program_representation__du_name_ordered_call_site_0 },
	{ (void *)mercury_data_mdbcomp__program_representation__du_ptag_ordered_call_site_0 },
	1,
	4,
	mercury_data_mdbcomp__program_representation__functor_number_map_call_site_0
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
mercury_data__closure_layout__mdbcomp__program_representation__read_proc_rep_5_0_1 = {
{
MR_PREDICATE,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"lambda_program_representation_m_912",
2,
0
},
"mdbcomp.program_representation",
"program_representation.m",
912,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__goal_path_from_string_2_0_1 = {
{
MR_PREDICATE,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"is_goal_path_separator",
1,
0
},
"mdbcomp.program_representation",
"program_representation.m",
635,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__goal_path_from_string_2_0_2 = {
{
MR_PREDICATE,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"goal_path_step_from_string",
2,
0
},
"mdbcomp.program_representation",
"program_representation.m",
636,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__goal_path_step_from_string_2_0_1 = {
{
MR_PREDICATE,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"lambda_program_representation_m_651",
2,
0
},
"mdbcomp.program_representation",
"program_representation.m",
651,
"d3;c5;"
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
676,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_1 = {
{
MR_PREDICATE,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"lambda_program_representation_m_974",
2,
0
},
"mdbcomp.program_representation",
"program_representation.m",
974,
"d1;c6;q;c12;"
};


MR_BEGIN_MODULE(mdbcomp__program_representation_module0)
	MR_init_entry1(mdbcomp__program_representation__read_file_as_bytecode_2_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_file_as_bytecode_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	FileName;
	const MR_uint_least8_t *	Bytes;
	MR_Integer	Size;
	MR_Integer	Error;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_file_as_bytecode_2_6_0
	FileName = (MR_String) MR_r1;
{
#line 781 "program_representation.m"

#if defined(MR_HAVE_SYS_STAT_H) &&     defined(MR_HAVE_STAT) &&     defined(MR_HAVE_OPEN)

    struct  stat statbuf;

    if (stat(FileName, &statbuf) != 0) {
        Bytes = NULL;
        Size = -1;
        Error = errno;
    } else {
        int     fd;
        char    *buf;

        Size = statbuf.st_size;
        MR_allocate_aligned_string_msg(buf, Size, MR_PROC_LABEL);
        fd = open(FileName, O_RDONLY, 0);
        if (fd < 0) {
            Bytes = NULL;
            Size = -1;
            Error = errno;
        } else {
            if (read(fd, buf, Size) != Size) {
                Bytes = NULL;
                Size = -1;
                Error = errno;
            } else {
                if (close(fd) != 0) {
                    Bytes = NULL;
                    Size = -1;
                    Error = errno;
                } else {
                    Bytes = (MR_uint_least8_t *) buf;
                    Error = 0;
                }
            }
        }
    }
#else
    MR_fatal_error("read_file_as_bytecode: not supported on this platform");
#endif
;}
#line 3432 "mdbcomp.program_representation.c"
	MR_r1 = (MR_Word) Bytes;
	MR_r2 = Size;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r3);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module1)
	MR_init_entry1(mdbcomp__program_representation__is_proclabel_kind_2_0);
	MR_init_label1(mdbcomp__program_representation__is_proclabel_kind_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__is_proclabel_kind_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Int;
	MR_Word	ProcLabelKind;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__is_proclabel_kind_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 1443 "program_representation.m"

    ProcLabelKind = (MR_ProcLabelToken) Int;

    switch (ProcLabelKind) {
        case MR_proclabel_user_predicate:
        case MR_proclabel_user_function:
        case MR_proclabel_special:
            SUCCESS_INDICATOR = MR_TRUE;
            break;

        default:
            SUCCESS_INDICATOR = MR_FALSE;
            break;
    }
;}
#line 3482 "mdbcomp.program_representation.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdbcomp__program_representation__is_proclabel_kind_2_0_i1);
	MR_r2 = ProcLabelKind;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__is_proclabel_kind_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module2)
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
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, ((MR_Integer) MR_r1 - (MR_Integer) 1));
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module3)
	MR_init_entry1(mdbcomp__program_representation__determinism_representation_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__determinism_representation_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module4)
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
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_2, (MR_Integer) MR_r1);
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

MR_decl_entry(mdbcomp__rtti_access__read_byte_4_0);
MR_decl_entry(mdbcomp__rtti_access__read_short_4_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module5)
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
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(mdbcomp__rtti_access__read_byte_4_0);
MR_def_label(mdbcomp__program_representation__read_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(mdbcomp__rtti_access__read_short_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module6)
	MR_init_entry1(mdbcomp__program_representation__read_vars_2_6_0);
	MR_init_label6(mdbcomp__program_representation__read_vars_2_6_0,5,4,7,9,2,1)
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
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_vars_2_6_0_i4);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_byte_4_0,
		mdbcomp__program_representation__read_vars_2_6_0_i5);
MR_def_label(mdbcomp__program_representation__read_vars_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_vars_2_6_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_vars_2_6_0,
		mdbcomp__program_representation__read_vars_2_6_0_i9);
MR_def_label(mdbcomp__program_representation__read_vars_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_short_4_0,
		mdbcomp__program_representation__read_vars_2_6_0_i7);
MR_def_label(mdbcomp__program_representation__read_vars_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_vars_2_6_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_vars_2_6_0,
		mdbcomp__program_representation__read_vars_2_6_0_i9);
MR_def_label(mdbcomp__program_representation__read_vars_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_vars_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(mdbcomp__program_representation__read_vars_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__read_vars_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module7)
	MR_init_entry1(mdbcomp__program_representation__read_vars_5_0);
	MR_init_label2(mdbcomp__program_representation__read_vars_5_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_short_4_0,
		mdbcomp__program_representation__read_vars_5_0_i2);
MR_def_label(mdbcomp__program_representation__read_vars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_vars_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_vars_2_6_0);
	}
MR_def_label(mdbcomp__program_representation__read_vars_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);
MR_decl_entry(mdbcomp__rtti_access__read_string_via_offset_5_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module8)
	MR_init_entry1(mdbcomp__program_representation__read_atomic_info_8_0);
	MR_init_label8(mdbcomp__program_representation__read_atomic_info_8_0,2,6,4,9,10,12,14,15)
	MR_init_label3(mdbcomp__program_representation__read_atomic_info_8_0,17,19,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_atomic_info_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_byte_4_0,
		mdbcomp__program_representation__read_atomic_info_8_0_i2);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i1);
	}
	MR_sv(6) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdbcomp__program_representation__determinism_representation_2_1,
		mdbcomp__program_representation__read_atomic_info_8_0_i6);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i9);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r1 = (MR_Word) MR_string_const("read_atomic_info: bad detism", 28);
	}
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__program_representation__read_atomic_info_8_0_i9);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_string_via_offset_5_0,
		mdbcomp__program_representation__read_atomic_info_8_0_i10);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i14);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r3;
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_short_4_0,
		mdbcomp__program_representation__read_atomic_info_8_0_i15);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_short_4_0,
		mdbcomp__program_representation__read_atomic_info_8_0_i17);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_2_6_0,
		mdbcomp__program_representation__read_atomic_info_8_0_i19);
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_atomic_info_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__read_atomic_info_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module9)
	MR_init_entry1(mdbcomp__program_representation__read_cons_id_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_cons_id_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mdbcomp__rtti_access__read_string_via_offset_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module10)
	MR_init_entry1(mdbcomp__program_representation__read_n_cons_id_arities_6_0);
	MR_init_label5(mdbcomp__program_representation__read_n_cons_id_arities_6_0,3,5,8,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_n_cons_id_arities_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_n_cons_id_arities_6_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_string_via_offset_5_0,
		mdbcomp__program_representation__read_n_cons_id_arities_6_0_i3);
MR_def_label(mdbcomp__program_representation__read_n_cons_id_arities_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_n_cons_id_arities_6_0_i1);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_short_4_0,
		mdbcomp__program_representation__read_n_cons_id_arities_6_0_i5);
MR_def_label(mdbcomp__program_representation__read_n_cons_id_arities_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_n_cons_id_arities_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r4 = MR_tempr3;
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_n_cons_id_arities_6_0,
		mdbcomp__program_representation__read_n_cons_id_arities_6_0_i8);
MR_def_label(mdbcomp__program_representation__read_n_cons_id_arities_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_n_cons_id_arities_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(mdbcomp__program_representation__read_n_cons_id_arities_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__read_n_cons_id_arities_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module11)
	MR_init_entry1(mdbcomp__program_representation__read_maybe_vars_2_6_0);
	MR_init_label8(mdbcomp__program_representation__read_maybe_vars_2_6_0,3,9,8,12,5,15,19,20)
	MR_init_label2(mdbcomp__program_representation__read_maybe_vars_2_6_0,2,1)
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
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_byte_4_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i3);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_maybe_vars_2_6_0_i1);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_maybe_vars_2_6_0_i5);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_maybe_vars_2_6_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_byte_4_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i9);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_maybe_vars_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_maybe_vars_2_6_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i20);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_short_4_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i12);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_maybe_vars_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_maybe_vars_2_6_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i20);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_maybe_vars_2_6_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r3;
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_np_localcall_lab(mdbcomp__program_representation__read_maybe_vars_2_6_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i20);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("read_maybe_vars_2: invalid yes or no flag", 41);
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i19);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mdbcomp__program_representation__read_maybe_vars_2_6_0,
		mdbcomp__program_representation__read_maybe_vars_2_6_0_i20);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_maybe_vars_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__read_maybe_vars_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module12)
	MR_init_entry1(mdbcomp__program_representation__read_maybe_vars_5_0);
	MR_init_label2(mdbcomp__program_representation__read_maybe_vars_5_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_maybe_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_short_4_0,
		mdbcomp__program_representation__read_maybe_vars_5_0_i2);
MR_def_label(mdbcomp__program_representation__read_maybe_vars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_maybe_vars_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_maybe_vars_2_6_0);
	}
MR_def_label(mdbcomp__program_representation__read_maybe_vars_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module13)
	MR_init_entry1(mdbcomp__program_representation__read_method_num_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_method_num_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mdbcomp__rtti_access__read_short_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module14)
	MR_init_entry1(mdbcomp__program_representation__read_goal_7_0);
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,2,5,8,9,11,16,17,19)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,21,26,27,29,34,35,38,39)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,41,43,48,49,51,53,58,59)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,62,63,65,70,71,76,77,79)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,84,85,87,89,92,93,95,97)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,102,103,106,107,109,111,116,117)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,119,121,126,127,129,131,136,137)
	MR_init_label8(mdbcomp__program_representation__read_goal_7_0,139,141,145,146,149,150,152,280)
	MR_init_label5(mdbcomp__program_representation__read_goal_7_0,157,158,160,4,1)
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
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_byte_4_0,
		mdbcomp__program_representation__read_goal_7_0_i2);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdbcomp__program_representation__byte_to_goal_type_2_0,
		mdbcomp__program_representation__read_goal_7_0_i5);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i34) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i58) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i157) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i84) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i102) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i136) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i38) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i48) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i106) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i116) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i8) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i26) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i149) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i70) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i76) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i92) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i126) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i16) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__read_goal_7_0_i62));
MR_def_label(mdbcomp__program_representation__read_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i9);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i11);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_string_via_offset_5_0,
		mdbcomp__program_representation__read_goal_7_0_i17);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_string_via_offset_5_0,
		mdbcomp__program_representation__read_goal_7_0_i19);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i21);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i27);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i29);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_goals_7_0,
		mdbcomp__program_representation__read_goal_7_0_i35);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i39);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_cons_id_5_0,
		mdbcomp__program_representation__read_goal_7_0_i41);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i43);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i49);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_cons_id_5_0,
		mdbcomp__program_representation__read_goal_7_0_i51);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i53);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_goals_7_0,
		mdbcomp__program_representation__read_goal_7_0_i59);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_string_via_offset_5_0,
		mdbcomp__program_representation__read_goal_7_0_i63);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i65);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i71);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i77);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i79);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i85);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i87);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i89);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i93);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__program_representation__read_method_num_4_0,
		mdbcomp__program_representation__read_goal_7_0_i95);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i97);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i103);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i107);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_cons_id_5_0,
		mdbcomp__program_representation__read_goal_7_0_i109);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_maybe_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i111);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i117);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_cons_id_5_0,
		mdbcomp__program_representation__read_goal_7_0_i119);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_maybe_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i121);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_string_via_offset_5_0,
		mdbcomp__program_representation__read_goal_7_0_i127);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_string_via_offset_5_0,
		mdbcomp__program_representation__read_goal_7_0_i129);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_goal_7_0_i131);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_byte_4_0,
		mdbcomp__program_representation__read_goal_7_0_i137);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i139);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_sv(1) = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i146);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i141);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_sv(1) = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i146);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("read_goal: bad maybe_cut", 24);
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__program_representation__read_goal_7_0_i145);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goal_7_0_i146);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i150);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i152);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_atomic_info_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__read_goal_7_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_var_5_0,
		mdbcomp__program_representation__read_goal_7_0_i158);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__read_cases_7_0,
		mdbcomp__program_representation__read_goal_7_0_i160);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goal_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__read_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("read_goal: invalid goal type", 28);
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__program_representation__read_goal_7_0_i280);
MR_def_label(mdbcomp__program_representation__read_goal_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module15)
	MR_init_entry1(mdbcomp__program_representation__read_goals_7_0);
	MR_init_label2(mdbcomp__program_representation__read_goals_7_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_goals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_short_4_0,
		mdbcomp__program_representation__read_goals_7_0_i2);
MR_def_label(mdbcomp__program_representation__read_goals_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goals_7_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_goals_2_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_goals_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module16)
	MR_init_entry1(mdbcomp__program_representation__read_goals_2_8_0);
	MR_init_label4(mdbcomp__program_representation__read_goals_2_8_0,3,5,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_goals_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r5,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goals_2_8_0_i2);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_goals_2_8_0_i3);
MR_def_label(mdbcomp__program_representation__read_goals_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goals_2_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_goals_2_8_0,
		mdbcomp__program_representation__read_goals_2_8_0_i5);
MR_def_label(mdbcomp__program_representation__read_goals_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_goals_2_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(mdbcomp__program_representation__read_goals_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__read_goals_2_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module17)
	MR_init_entry1(mdbcomp__program_representation__read_cases_7_0);
	MR_init_label2(mdbcomp__program_representation__read_cases_7_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_cases_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_short_4_0,
		mdbcomp__program_representation__read_cases_7_0_i2);
MR_def_label(mdbcomp__program_representation__read_cases_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_cases_7_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdbcomp__program_representation__read_cases_2_8_0);
	}
MR_def_label(mdbcomp__program_representation__read_cases_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module18)
	MR_init_entry1(mdbcomp__program_representation__read_cases_2_8_0);
	MR_init_label8(mdbcomp__program_representation__read_cases_2_8_0,3,5,8,10,12,15,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_cases_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r5,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_cases_2_8_0_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r6;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_string_via_offset_5_0,
		mdbcomp__program_representation__read_cases_2_8_0_i3);
MR_def_label(mdbcomp__program_representation__read_cases_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_cases_2_8_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_short_4_0,
		mdbcomp__program_representation__read_cases_2_8_0_i5);
MR_def_label(mdbcomp__program_representation__read_cases_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_cases_2_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_short_4_0,
		mdbcomp__program_representation__read_cases_2_8_0_i8);
MR_def_label(mdbcomp__program_representation__read_cases_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_cases_2_8_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__read_n_cons_id_arities_6_0,
		mdbcomp__program_representation__read_cases_2_8_0_i10);
MR_def_label(mdbcomp__program_representation__read_cases_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_cases_2_8_0_i1);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_cases_2_8_0_i12);
MR_def_label(mdbcomp__program_representation__read_cases_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_cases_2_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r6 = MR_tempr3;
	}
	MR_np_localcall_lab(mdbcomp__program_representation__read_cases_2_8_0,
		mdbcomp__program_representation__read_cases_2_8_0_i15);
MR_def_label(mdbcomp__program_representation__read_cases_2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_cases_2_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(mdbcomp__program_representation__read_cases_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__read_cases_2_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module19)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module20)
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

MR_decl_entry(mdbcomp__rtti_access__read_len_string_4_0);
MR_decl_entry(mdbcomp__rtti_access__read_num_4_0);
MR_decl_entry(mdbcomp__rtti_access__read_int32_4_0);
MR_decl_entry(require__require_2_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module21)
	MR_init_entry1(mdbcomp__program_representation__read_proc_rep_5_0);
	MR_init_label8(mdbcomp__program_representation__read_proc_rep_5_0,2,8,10,12,14,16,18,7)
	MR_init_label8(mdbcomp__program_representation__read_proc_rep_5_0,22,24,26,28,30,21,33,35)
	MR_init_label8(mdbcomp__program_representation__read_proc_rep_5_0,37,39,41,6,44,46,50,49)
	MR_init_label7(mdbcomp__program_representation__read_proc_rep_5_0,48,53,54,56,58,62,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_proc_rep_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_byte_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i2);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	{
	MR_Integer	Int;
	MR_Word	ProcLabelKind;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_proc_rep_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 1443 "program_representation.m"

    ProcLabelKind = (MR_ProcLabelToken) Int;

    switch (ProcLabelKind) {
        case MR_proclabel_user_predicate:
        case MR_proclabel_user_function:
        case MR_proclabel_special:
            SUCCESS_INDICATOR = MR_TRUE;
            break;

        default:
            SUCCESS_INDICATOR = MR_FALSE;
            break;
    }
;}
#line 5591 "mdbcomp.program_representation.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	MR_r4 = ProcLabelKind;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r4 != ((MR_Integer) MR_proclabel_special))) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_len_string_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i8);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_len_string_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i10);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_len_string_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i12);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_len_string_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i14);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_num_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i16);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_num_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i18);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_r3;
	MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i6);
	}
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 != ((MR_Integer) MR_proclabel_user_function))) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_len_string_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i22);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_len_string_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i24);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_len_string_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i26);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_num_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i28);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_num_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i30);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_r3;
	MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i6);
	}
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_len_string_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i33);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_len_string_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i35);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_len_string_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i37);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_num_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i39);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_num_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i41);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_r3;
	}
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_int32_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i44);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_byte_4_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i46);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i50);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i49);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i48);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Integer) 1;
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r4;
	MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i53);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("read_var_num_rep: unknown var_num_rep", 37);
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i53);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_string_via_offset_5_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i54);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_5_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i56);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i58);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_rep_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__program_representation__IntroducedFrom__pred__read_proc_rep__912__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 4) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_sv(5));
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr3;
	MR_r2 = (MR_Word) MR_string_const("trace_read_proc_defn_rep: limit mismatch", 40);
	}
	MR_np_call_localret_ent(require__require_2_0,
		mdbcomp__program_representation__read_proc_rep_5_0_i62);
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__read_proc_rep_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module22)
	MR_init_entry1(mdbcomp__program_representation__is_more_procs_2_0);
	MR_init_label1(mdbcomp__program_representation__is_more_procs_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__is_more_procs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Int;
	MR_Word	MoreProcs;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__is_more_procs_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 1419 "program_representation.m"

    MoreProcs = (MR_MoreProcs) Int;

    switch (MoreProcs) {
        case MR_no_more_procs:
        case MR_next_proc:
            SUCCESS_INDICATOR = MR_TRUE;
            break;

        default:
            SUCCESS_INDICATOR = MR_FALSE;
            break;
    }
;}
#line 5974 "mdbcomp.program_representation.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdbcomp__program_representation__is_more_procs_2_0_i1);
	MR_r2 = MoreProcs;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__is_more_procs_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module23)
	MR_init_entry1(mdbcomp__program_representation__read_proc_reps_6_0);
	MR_init_label5(mdbcomp__program_representation__read_proc_reps_6_0,39,2,8,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_proc_reps_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__program_representation__read_proc_reps_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_byte_4_0,
		mdbcomp__program_representation__read_proc_reps_6_0_i2);
MR_def_label(mdbcomp__program_representation__read_proc_reps_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_reps_6_0_i1);
	}
	{
	MR_Integer	Int;
	MR_Word	MoreProcs;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_proc_reps_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 1419 "program_representation.m"

    MoreProcs = (MR_MoreProcs) Int;

    switch (MoreProcs) {
        case MR_no_more_procs:
        case MR_next_proc:
            SUCCESS_INDICATOR = MR_TRUE;
            break;

        default:
            SUCCESS_INDICATOR = MR_FALSE;
            break;
    }
;}
#line 6044 "mdbcomp.program_representation.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdbcomp__program_representation__read_proc_reps_6_0_i1);
	MR_r4 = MoreProcs;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r4 != ((MR_Integer) MR_next_proc))) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_reps_6_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_proc_rep_5_0,
		mdbcomp__program_representation__read_proc_reps_6_0_i8);
MR_def_label(mdbcomp__program_representation__read_proc_reps_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_proc_reps_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdbcomp__program_representation__read_proc_reps_6_0_i39);
	}
MR_def_label(mdbcomp__program_representation__read_proc_reps_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(mdbcomp__program_representation__read_proc_reps_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module24)
	MR_init_entry1(mdbcomp__program_representation__is_more_modules_2_0);
	MR_init_label1(mdbcomp__program_representation__is_more_modules_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__is_more_modules_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Int;
	MR_Word	MoreModules;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__is_more_modules_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 1390 "program_representation.m"

    MoreModules = (MR_MoreModules) Int;

    switch (MoreModules) {
        case MR_no_more_modules:
        case MR_next_module:
            SUCCESS_INDICATOR = MR_TRUE;
            break;

        default:
            SUCCESS_INDICATOR = MR_FALSE;
            break;
    }
;}
#line 6127 "mdbcomp.program_representation.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdbcomp__program_representation__is_more_modules_2_0_i1);
	MR_r2 = MoreModules;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__is_more_modules_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__rtti_access__read_string_table_4_0);
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module25)
	MR_init_entry1(mdbcomp__program_representation__read_module_reps_5_0);
	MR_init_label8(mdbcomp__program_representation__read_module_reps_5_0,57,2,8,10,12,14,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__read_module_reps_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__program_representation__read_module_reps_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_byte_4_0,
		mdbcomp__program_representation__read_module_reps_5_0_i2);
MR_def_label(mdbcomp__program_representation__read_module_reps_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_module_reps_5_0_i1);
	}
	{
	MR_Integer	Int;
	MR_Word	MoreModules;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_module_reps_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 1390 "program_representation.m"

    MoreModules = (MR_MoreModules) Int;

    switch (MoreModules) {
        case MR_no_more_modules:
        case MR_next_module:
            SUCCESS_INDICATOR = MR_TRUE;
            break;

        default:
            SUCCESS_INDICATOR = MR_FALSE;
            break;
    }
;}
#line 6198 "mdbcomp.program_representation.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdbcomp__program_representation__read_module_reps_5_0_i1);
	MR_r4 = MoreModules;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r4 != ((MR_Integer) MR_next_module))) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_module_reps_5_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_len_string_4_0,
		mdbcomp__program_representation__read_module_reps_5_0_i8);
MR_def_label(mdbcomp__program_representation__read_module_reps_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_module_reps_5_0_i1);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_string_table_4_0,
		mdbcomp__program_representation__read_module_reps_5_0_i10);
MR_def_label(mdbcomp__program_representation__read_module_reps_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_module_reps_5_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__read_proc_reps_6_0,
		mdbcomp__program_representation__read_module_reps_5_0_i12);
MR_def_label(mdbcomp__program_representation__read_module_reps_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_module_reps_5_0_i1);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, proc_rep);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdbcomp__program_representation__read_module_reps_5_0_i14);
MR_def_label(mdbcomp__program_representation__read_module_reps_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(mdbcomp__program_representation__read_module_reps_5_0_i57);
	}
MR_def_label(mdbcomp__program_representation__read_module_reps_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(mdbcomp__program_representation__read_module_reps_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__make_err_msg_5_0);
MR_decl_entry(fn__io__make_io_error_1_0);
MR_decl_entry(mdbcomp__rtti_access__read_line_4_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module26)
	MR_init_entry1(mdbcomp__program_representation__read_prog_rep_file_4_0);
	MR_init_label8(mdbcomp__program_representation__read_prog_rep_file_4_0,3,4,2,9,11,13,8,15)
	MR_init_label1(mdbcomp__program_representation__read_prog_rep_file_4_0,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__read_prog_rep_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_String	FileName;
	const MR_uint_least8_t *	Bytes;
	MR_Integer	Size;
	MR_Integer	Error;
#define	MR_PROC_LABEL	mercury__mdbcomp__program_representation__read_prog_rep_file_4_0
	FileName = (MR_String) MR_r1;
{
#line 781 "program_representation.m"

#if defined(MR_HAVE_SYS_STAT_H) &&     defined(MR_HAVE_STAT) &&     defined(MR_HAVE_OPEN)

    struct  stat statbuf;

    if (stat(FileName, &statbuf) != 0) {
        Bytes = NULL;
        Size = -1;
        Error = errno;
    } else {
        int     fd;
        char    *buf;

        Size = statbuf.st_size;
        MR_allocate_aligned_string_msg(buf, Size, MR_PROC_LABEL);
        fd = open(FileName, O_RDONLY, 0);
        if (fd < 0) {
            Bytes = NULL;
            Size = -1;
            Error = errno;
        } else {
            if (read(fd, buf, Size) != Size) {
                Bytes = NULL;
                Size = -1;
                Error = errno;
            } else {
                if (close(fd) != 0) {
                    Bytes = NULL;
                    Size = -1;
                    Error = errno;
                } else {
                    Bytes = (MR_uint_least8_t *) buf;
                    Error = 0;
                }
            }
        }
    }
#else
    MR_fatal_error("read_file_as_bytecode: not supported on this platform");
#endif
;}
#line 6347 "mdbcomp.program_representation.c"
	MR_r3 = (MR_Word) Bytes;
	MR_r4 = Size;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, MR_r5);
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_prog_rep_file_4_0_i2);
	}
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("opening ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__program_representation__read_prog_rep_file_4_0_i3);
MR_def_label(mdbcomp__program_representation__read_prog_rep_file_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__make_err_msg_5_0,
		mdbcomp__program_representation__read_prog_rep_file_4_0_i4);
MR_def_label(mdbcomp__program_representation__read_prog_rep_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__io__make_io_error_1_0,
		mdbcomp__program_representation__read_prog_rep_file_4_0_i16);
MR_def_label(mdbcomp__program_representation__read_prog_rep_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_line_4_0,
		mdbcomp__program_representation__read_prog_rep_file_4_0_i9);
MR_def_label(mdbcomp__program_representation__read_prog_rep_file_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_prog_rep_file_4_0_i8);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("Mercury deep profiler procrep version 1\n", 40)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_prog_rep_file_4_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_module_reps_5_0,
		mdbcomp__program_representation__read_prog_rep_file_4_0_i11);
MR_def_label(mdbcomp__program_representation__read_prog_rep_file_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_prog_rep_file_4_0_i8);
	}
	if ((MR_r3 != MR_sv(3))) {
		MR_GOTO_LAB(mdbcomp__program_representation__read_prog_rep_file_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, module_rep);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdbcomp__program_representation__read_prog_rep_file_4_0_i13);
MR_def_label(mdbcomp__program_representation__read_prog_rep_file_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(mdbcomp__program_representation__read_prog_rep_file_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("is not a valid program representation file", 42);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__program_representation__read_prog_rep_file_4_0_i15);
MR_def_label(mdbcomp__program_representation__read_prog_rep_file_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__io__make_io_error_1_0,
		mdbcomp__program_representation__read_prog_rep_file_4_0_i16);
MR_def_label(mdbcomp__program_representation__read_prog_rep_file_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module27)
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
	MR_tempr1 = (MR_COMMON(3,0))[(MR_Integer) MR_r4];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_r2) == 0))) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i5);
	}
	MR_r4 = (MR_COMMON(2,0))[(MR_Integer) MR_r4];
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
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i81) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i21) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i91) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i26) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i86) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i66) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i41) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i6) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i76) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i56) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i31) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i46) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i51) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i71) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i11) MR_AND
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
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i16) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i61) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i97) MR_AND
		MR_LABEL_AP(mdbcomp__program_representation__no_type_info_builtin_3_0_i36) MR_AND
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
	if (MR_INT_NE(MR_r3,2)) {
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
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
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
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0,
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
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
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
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdbcomp__program_representation__no_type_info_builtin_3_0_i97);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mdbcomp__program_representation__no_type_info_builtin_3_0_i93);
MR_def_label(mdbcomp__program_representation__no_type_info_builtin_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__string_to_sym_name_1_0);
MR_decl_entry(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module28)
	MR_init_entry1(mdbcomp__program_representation__call_does_not_generate_events_3_0);
	MR_init_label8(mdbcomp__program_representation__call_does_not_generate_events_3_0,5,6,3,12,14,10,21,18)
	MR_init_label6(mdbcomp__program_representation__call_does_not_generate_events_3_0,25,8,30,31,33,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__call_does_not_generate_events_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("__Index__", 9)) != 0)) {
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
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("__Unify__", 9)) != 0)) {
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
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("__Compare__", 11)) != 0)) {
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
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i10);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("unify", 5)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i12);
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
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("compare", 7)) != 0)) {
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
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("compare_representation", 22)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i8);
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
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("backjump", 8)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i18);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i8);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("builtin_backjump", 16)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("builtin_choice_id", 17)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("exception", 9)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i8);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("builtin_catch", 13)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i25);
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
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("builtin_throw", 13)) != 0)) {
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
		mdbcomp__program_representation__call_does_not_generate_events_3_0_i30);
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__program_representation__no_type_info_builtin_3_0,
		mdbcomp__program_representation__call_does_not_generate_events_3_0_i31);
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__program_representation__call_does_not_generate_events_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		mdbcomp__program_representation__call_does_not_generate_events_3_0_i33);
MR_def_label(mdbcomp__program_representation__call_does_not_generate_events_3_0,33)
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

MR_BEGIN_MODULE(mdbcomp__program_representation_module29)
	MR_init_entry1(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0);
	MR_init_label8(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,3,19,4,6,33,9,12,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i19);
	}
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i3) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i3) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i3) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i3) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i3) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i4) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i6) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i33) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i3) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i3));
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i9);
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__call_does_not_generate_events_3_0,
		fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i12);
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module30)
	MR_init_entry1(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0);
	MR_init_label3(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0,13,16,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__goal_generates_internal_event_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0_i16) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0_i7) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0_i7) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0_i13));
MR_def_label(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0_i7);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0_i7);
	}
	}
MR_def_label(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_generates_internal_event_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module31)
	MR_init_entry1(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0);
	MR_init_label5(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0,36,4,35,14,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i21);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i21) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i21) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i21) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i21) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i21) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i21) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i21) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i35) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i36) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i21));
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i4);
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0,4)
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
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0_i14);
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0,14)
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
MR_def_label(fn__mdbcomp__program_representation__atomic_goal_identifiable_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(list__append_3_3);

MR_BEGIN_MODULE(mdbcomp__program_representation_module32)
	MR_init_entry1(mdbcomp__program_representation__goal_path_inside_2_0);
	MR_init_label2(mdbcomp__program_representation__goal_path_inside_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__goal_path_inside_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		mdbcomp__program_representation__goal_path_inside_2_0_i2);
MR_def_label(mdbcomp__program_representation__goal_path_inside_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		mdbcomp__program_representation__goal_path_inside_2_0_i3);
MR_def_label(mdbcomp__program_representation__goal_path_inside_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__append_3_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__words_separator_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__map_3_2);
MR_decl_entry(fn__cord__from_list_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module33)
	MR_init_entry1(mdbcomp__program_representation__goal_path_from_string_2_0);
	MR_init_label4(mdbcomp__program_representation__goal_path_from_string_2_0,3,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__goal_path_from_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdbcomp__program_representation__goal_path_from_string_2_0_i3);
MR_def_label(mdbcomp__program_representation__goal_path_from_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_2,
		mdbcomp__program_representation__goal_path_from_string_2_0_i5);
MR_def_label(mdbcomp__program_representation__goal_path_from_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_from_string_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		mdbcomp__program_representation__goal_path_from_string_2_0_i7);
MR_def_label(mdbcomp__program_representation__goal_path_from_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__goal_path_from_string_2_0,1)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module34)
	MR_init_entry1(mdbcomp__program_representation__goal_path_from_string_det_2_0);
	MR_init_label2(mdbcomp__program_representation__goal_path_from_string_det_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__goal_path_from_string_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdbcomp__program_representation__goal_path_from_string_2_0,
		mdbcomp__program_representation__goal_path_from_string_det_2_0_i3);
MR_def_label(mdbcomp__program_representation__goal_path_from_string_det_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_from_string_det_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdbcomp__program_representation__goal_path_from_string_det_2_0,2)
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

MR_decl_entry(string__first_char_3_3);
MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module35)
	MR_init_entry1(mdbcomp__program_representation__goal_path_step_from_string_2_0);
	MR_init_label8(mdbcomp__program_representation__goal_path_step_from_string_2_0,2,5,7,10,9,14,13,17)
	MR_init_label8(mdbcomp__program_representation__goal_path_step_from_string_2_0,19,21,24,23,29,27,35,39)
	MR_init_label5(mdbcomp__program_representation__goal_path_step_from_string_2_0,41,44,33,49,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__goal_path_step_from_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__first_char_3_3,
		mdbcomp__program_representation__goal_path_step_from_string_2_0_i2);
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	if (MR_INT_NE(MR_r2,63)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i5);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,97)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i7);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,99)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i9);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__program_representation__goal_path_step_from_string_2_0_i10);
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
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
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,100)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i13);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__program_representation__goal_path_step_from_string_2_0_i14);
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
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
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,101)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i17);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,102)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i19);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,108)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i21);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,111)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i23);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__program_representation__goal_path_step_from_string_2_0_i24);
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,113)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i27);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i29);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,6,1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,115)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i33);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		mdbcomp__program_representation__goal_path_step_from_string_2_0_i35);
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__program_representation__goal_path_step_from_string_2_0_i39);
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("na", 2)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i41);
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
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		mdbcomp__program_representation__goal_path_step_from_string_2_0_i44);
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
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
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,116)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i49);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,126)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__goal_path_step_from_string_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__goal_path_step_from_string_2_0,1)
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

MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module36)
	MR_init_entry1(fn__mdbcomp__program_representation__goal_path_to_string_1_0);
	MR_init_label2(fn__mdbcomp__program_representation__goal_path_to_string_1_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__goal_path_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		fn__mdbcomp__program_representation__goal_path_to_string_1_0_i2);
MR_def_label(fn__mdbcomp__program_representation__goal_path_to_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mdbcomp__program_representation__goal_path_to_string_1_0_i4);
MR_def_label(fn__mdbcomp__program_representation__goal_path_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module37)
	MR_init_entry1(mdbcomp__program_representation__is_goal_path_separator_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__is_goal_path_separator_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 59);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__type_of_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module38)
	MR_init_entry1(fn__mdbcomp__program_representation__proc_defn_rep_type_0_0);
	MR_init_label1(fn__mdbcomp__program_representation__proc_defn_rep_type_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__proc_defn_rep_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, proc_defn_rep);
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		fn__mdbcomp__program_representation__proc_defn_rep_type_0_0_i2);
MR_def_label(fn__mdbcomp__program_representation__proc_defn_rep_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module39)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module40)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module41)
	MR_init_entry1(fn__mdbcomp__program_representation__goal_type_to_byte_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__program_representation__goal_type_to_byte_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_3, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__rtti_access__containing_proc_layout_1_0);
MR_decl_entry(mdbcomp__rtti_access__containing_module_common_layout_2_0);
MR_decl_entry(fn__mdbcomp__rtti_access__module_common_string_table_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module42)
	MR_init_entry1(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0);
	MR_init_label8(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,2,5,7,4,10,11,14,18)
	MR_init_label8(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,17,16,21,22,24,26,28,32)
	MR_init_label1(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__trace_read_proc_defn_rep_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__containing_proc_layout_1_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i2);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__rtti_access__containing_module_common_layout_2_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i5);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i4);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__module_common_string_table_1_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i7);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 4;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_int32_4_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i11);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("trace_read_proc_defn_rep: no module common layout", 49);
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i10);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_int32_4_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i11);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_byte_4_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i14);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i1);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i18);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i17);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i16);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r4 = (MR_Integer) 1;
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_GOTO_LAB(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i21);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("read_var_num_rep: unknown var_num_rep", 37);
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i21);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_string_via_offset_5_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i22);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_short_4_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i24);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__read_vars_2_6_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i26);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__read_goal_7_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i28);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__program_representation__IntroducedFrom__pred__trace_read_proc_defn_rep__974__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 4) = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("trace_read_proc_defn_rep: limit mismatch", 40);
	}
	MR_np_call_localret_ent(require__require_2_0,
		mdbcomp__program_representation__trace_read_proc_defn_rep_3_0_i32);
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module43)
	MR_init_entry1(mdbcomp__program_representation__coverage_point_type_c_value_2_0);
	MR_init_label3(mdbcomp__program_representation__coverage_point_type_c_value_2_0,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__program_representation__coverage_point_type_c_value_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 != ((MR_Integer) MR_cp_type_branch_arm))) {
		MR_GOTO_LAB(mdbcomp__program_representation__coverage_point_type_c_value_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_cp_type_branch_arm", 21);
	MR_proceed();
MR_def_label(mdbcomp__program_representation__coverage_point_type_c_value_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 != ((MR_Integer) MR_cp_type_solns_any))) {
		MR_GOTO_LAB(mdbcomp__program_representation__coverage_point_type_c_value_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_cp_type_solns_any", 20);
	MR_proceed();
MR_def_label(mdbcomp__program_representation__coverage_point_type_c_value_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 != ((MR_Integer) MR_cp_type_solns_may_fail))) {
		MR_GOTO_LAB(mdbcomp__program_representation__coverage_point_type_c_value_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_cp_type_solns_may_fail", 25);
	MR_proceed();
MR_def_label(mdbcomp__program_representation__coverage_point_type_c_value_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_cp_type_solns_multi", 22);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module44)
	MR_init_entry1(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0);
	MR_init_label8(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,37,78,9,10,79,13,14,40)
	MR_init_label8(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,28,27,31,32,33,34,35,41)
	MR_init_label8(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,24,81,5,6,3,16,17,18)
	MR_init_label3(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i37) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i78) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i79) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i40));
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i17) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i19) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i18) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i21) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i3) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i16) MR_AND
		MR_LABEL_AP(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i20));
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i9);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i10);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("c", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i13);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i14);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("d", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i41);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i27);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i28);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("-na;", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i35);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i31);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i32);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i33);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i34);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i35);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("s", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i81);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("q!;", 3);
	MR_proceed();
	}
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("q;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i5);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(";", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__program_representation__goal_path_step_to_string_1_0_i6);
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("o", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("a;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("f;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("?;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("e;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("t;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("l;", 2);
	MR_proceed();
MR_def_label(fn__mdbcomp__program_representation__goal_path_step_to_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("~;", 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module45)
	MR_init_entry1(__Unify___mdbcomp__program_representation__arg_pos_0_0);
	MR_init_label4(__Unify___mdbcomp__program_representation__arg_pos_0_0,7,5,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__arg_pos_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__arg_pos_0_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	MR_r1 = MR_tempr3;
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__arg_pos_0_0_i5);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__arg_pos_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__arg_pos_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_tempr4);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__program_representation__arg_pos_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__arg_pos_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__program_representation__arg_pos_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__arg_pos_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__program_representation__arg_pos_0_0,13)
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

MR_BEGIN_MODULE(mdbcomp__program_representation_module46)
	MR_init_entry1(__Compare___mdbcomp__program_representation__arg_pos_0_0);
	MR_init_label7(__Compare___mdbcomp__program_representation__arg_pos_0_0,3,2,36,13,5,48,9)
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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(1));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i5);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i13);
	}
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i9);
	}
	}
MR_def_label(__Compare___mdbcomp__program_representation__arg_pos_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_sv(1), 0);
	MR_r2 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__arg_pos_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i48);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i36);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___mdbcomp__program_representation__arg_pos_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i36);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__arg_pos_0_0_i9);
	}
	}
MR_def_label(__Compare___mdbcomp__program_representation__arg_pos_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__arg_pos_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module47)
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
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_id_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
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

MR_BEGIN_MODULE(mdbcomp__program_representation_module48)
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

MR_BEGIN_MODULE(mdbcomp__program_representation_module49)
	MR_init_entry1(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0);
	MR_init_label8(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,43,47,28,56,5,9,11,15)
	MR_init_label8(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,19,23,33,37,41,51,57,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__atomic_goal_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i57);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i43) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i47) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i28) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i56));
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr3, 2);
	MR_r3 = MR_ctfield(0, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(1, MR_tempr3, 2);
	MR_r3 = MR_ctfield(1, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_ctfield(2, MR_tempr3, 2);
	MR_r3 = MR_ctfield(2, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i41) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i51) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i37) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i19) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i33) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i11));
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr3, 3);
	MR_r3 = MR_ctfield(3, MR_tempr4, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr3, 2);
	MR_r3 = MR_ctfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
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
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
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
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_ctfield(3, MR_tempr3, 3);
	MR_r3 = MR_ctfield(3, MR_tempr4, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr3, 3);
	MR_r3 = MR_ctfield(3, MR_tempr4, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0,57)
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

MR_BEGIN_MODULE(mdbcomp__program_representation_module50)
	MR_init_entry1(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0);
	MR_init_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,3,277,291,295,307,320,322,326)
	MR_init_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,171,179,181,185,365,5,7,9)
	MR_init_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,13,35,38,40,60,66,85,90)
	MR_init_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,92,110,116,118,122,140,149,153)
	MR_init_label8(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,202,211,213,217,232,242,252,263)
	MR_init_label7(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,265,337,347,348,351,353,571)
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i277) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i307) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i171) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i365));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i291);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i295);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i320) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i322);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i326);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(2, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i181);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i185);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i252) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i337) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i232) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i110) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i60));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i9);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i13);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i38) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i40);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),9)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i66);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i90) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i92);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i116) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i118);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i122);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i149);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i153);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i211) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i213);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i217);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i242) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i263) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i265);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,337)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i351) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i347));
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i353);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0_i571);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0,571)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module51)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module52)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module53)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module54)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module55)
	MR_init_entry1(__Unify___mdbcomp__program_representation__call_site_0_0);
	MR_init_label3(__Unify___mdbcomp__program_representation__call_site_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__call_site_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__call_site_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__string_proc_label_0_0,
		__Unify___mdbcomp__program_representation__call_site_0_0_i4);
MR_def_label(__Unify___mdbcomp__program_representation__call_site_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__call_site_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__call_site_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__call_type_and_callee_0_0);
MR_def_label(__Unify___mdbcomp__program_representation__call_site_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__call_site_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module56)
	MR_init_entry1(__Compare___mdbcomp__program_representation__call_site_0_0);
	MR_init_label5(__Compare___mdbcomp__program_representation__call_site_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__call_site_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_site_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_site_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__call_site_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__call_site_0_0,2)
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
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__string_proc_label_0_0,
		__Compare___mdbcomp__program_representation__call_site_0_0_i5);
MR_def_label(__Compare___mdbcomp__program_representation__call_site_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_site_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__call_site_0_0_i9);
MR_def_label(__Compare___mdbcomp__program_representation__call_site_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_site_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0);
MR_def_label(__Compare___mdbcomp__program_representation__call_site_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module57)
	MR_init_entry1(__Unify___mdbcomp__program_representation__call_type_and_callee_0_0);
	MR_init_label3(__Unify___mdbcomp__program_representation__call_type_and_callee_0_0,8,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__call_type_and_callee_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__call_type_and_callee_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__call_type_and_callee_0_0_i8);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr1);
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__program_representation__call_type_and_callee_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__call_type_and_callee_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__string_proc_label_0_0);
MR_def_label(__Unify___mdbcomp__program_representation__call_type_and_callee_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__call_type_and_callee_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module58)
	MR_init_entry1(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0);
	MR_init_label8(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0,56,29,34,5,13,21,72,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__call_type_and_callee_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i56);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i29);
	}
	MR_tempr4 = MR_unmkbody(MR_tempr1);
	if (MR_INT_EQ(MR_tempr4,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i5);
	}
	if (MR_INT_EQ(MR_tempr4,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i13);
	}
	if (MR_INT_EQ(MR_tempr4,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i21);
	}
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i24);
	}
	MR_tempr4 = MR_unmkbody(MR_tempr2);
	if (MR_INT_EQ(MR_tempr4,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i24);
	}
	if (MR_INT_EQ(MR_tempr4,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i24);
	}
	if (MR_INT_EQ(MR_tempr4,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i24);
	}
	}
MR_def_label(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i34);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr3);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i24);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i24);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__string_proc_label_0_0);
MR_def_label(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i72);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr3);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i56);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i72);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i72);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i72);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr3);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i24);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i56);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i72);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i72);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr3);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i24);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i24);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0_i56);
	}
	}
MR_def_label(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__call_type_and_callee_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module59)
	MR_init_entry1(__Unify___mdbcomp__program_representation__case_rep_0_0);
	MR_init_label4(__Unify___mdbcomp__program_representation__case_rep_0_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__case_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__case_rep_0_0_i10);
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
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__cons_id_arity_rep_0_0,
		__Unify___mdbcomp__program_representation__case_rep_0_0_i4);
MR_def_label(__Unify___mdbcomp__program_representation__case_rep_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__case_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, cons_id_arity_rep);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdbcomp__program_representation__case_rep_0_0_i6);
MR_def_label(__Unify___mdbcomp__program_representation__case_rep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__case_rep_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__goal_rep_0_0);
MR_def_label(__Unify___mdbcomp__program_representation__case_rep_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__case_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module60)
	MR_init_entry1(__Compare___mdbcomp__program_representation__case_rep_0_0);
	MR_init_label5(__Compare___mdbcomp__program_representation__case_rep_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__case_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__case_rep_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__case_rep_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__case_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__case_rep_0_0,2)
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
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0,
		__Compare___mdbcomp__program_representation__case_rep_0_0_i5);
MR_def_label(__Compare___mdbcomp__program_representation__case_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__case_rep_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, cons_id_arity_rep);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdbcomp__program_representation__case_rep_0_0_i9);
MR_def_label(__Compare___mdbcomp__program_representation__case_rep_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__case_rep_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__goal_rep_0_0);
MR_def_label(__Compare___mdbcomp__program_representation__case_rep_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module61)
	MR_init_entry1(__Unify___mdbcomp__program_representation__cons_id_arity_rep_0_0);
	MR_init_label2(__Unify___mdbcomp__program_representation__cons_id_arity_rep_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__cons_id_arity_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__cons_id_arity_rep_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__cons_id_arity_rep_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__program_representation__cons_id_arity_rep_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__cons_id_arity_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module62)
	MR_init_entry1(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0);
	MR_init_label4(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0_i5);
MR_def_label(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__cons_id_arity_rep_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module63)
	MR_init_entry1(__Unify___mdbcomp__program_representation__cons_id_rep_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__cons_id_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module64)
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

MR_decl_entry(__Unify___cord__cord_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module65)
	MR_init_entry1(__Unify___mdbcomp__program_representation__coverage_point_info_0_0);
	MR_init_label3(__Unify___mdbcomp__program_representation__coverage_point_info_0_0,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__coverage_point_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__coverage_point_info_0_0_i6);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___cord__cord_1_0,
		__Unify___mdbcomp__program_representation__coverage_point_info_0_0_i4);
MR_def_label(__Unify___mdbcomp__program_representation__coverage_point_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__coverage_point_info_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__program_representation__coverage_point_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__coverage_point_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___cord__cord_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module66)
	MR_init_entry1(__Compare___mdbcomp__program_representation__coverage_point_info_0_0);
	MR_init_label4(__Compare___mdbcomp__program_representation__coverage_point_info_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__coverage_point_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__coverage_point_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__coverage_point_info_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__coverage_point_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__coverage_point_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___cord__cord_1_0,
		__Compare___mdbcomp__program_representation__coverage_point_info_0_0_i5);
MR_def_label(__Compare___mdbcomp__program_representation__coverage_point_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__coverage_point_info_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__coverage_point_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module67)
	MR_init_entry1(__Unify___mdbcomp__program_representation__cp_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__cp_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module68)
	MR_init_entry1(__Compare___mdbcomp__program_representation__cp_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__cp_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module69)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module70)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module71)
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
	MR_np_tailcall_ent(__Unify___cord__cord_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module72)
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
	MR_np_tailcall_ent(__Compare___cord__cord_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module73)
	MR_init_entry1(__Unify___mdbcomp__program_representation__goal_path_step_0_0);
	MR_init_label8(__Unify___mdbcomp__program_representation__goal_path_step_0_0,8,10,27,28,6,17,30,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__goal_path_step_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i30);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i8) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i27));
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i28);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr3, 2);
	MR_r3 = MR_ctfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i6);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_path_step_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__program_representation__goal_path_step_0_0,30)
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

MR_BEGIN_MODULE(mdbcomp__program_representation_module74)
	MR_init_entry1(__Compare___mdbcomp__program_representation__goal_path_step_0_0);
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0,3,255,46,61,64,65,67,82)
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0,72,85,86,258,249,252,244,253)
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0,259,223,226,227,273,25,40,43)
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0,44,5,19,22,23,88,102,105)
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0,106,108,122,125,126,128,142,145)
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_path_step_0_0,146,401,148,162,165,168,182,185)
	MR_init_label7(__Compare___mdbcomp__program_representation__goal_path_step_0_0,186,188,202,205,288,199,432)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__goal_path_step_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i255) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i67) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i258));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(1)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i108) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i148) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i128) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i188) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i88) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i168));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i61) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i72) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i64));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i65);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i72) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i85));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_sv(1), 0);
	MR_r2 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i86);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_sv(1), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i259);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i249) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i252));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_r3 = MR_ctfield(3, MR_tempr5, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i253);
	}
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__goal_path_step_0_0_i244);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i432);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i25);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i223) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i226));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i227);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i40) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i43));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i273);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i22));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i199) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i102) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i105));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i199) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i106);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i122) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i125));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i199);
	}
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i126);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i142) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i145));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i199) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i146);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,401)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i162) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i165));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i199) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i182) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i185));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),6)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i199);
	}
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i186);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i205));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i288) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i199) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401));
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_path_step_0_0_i401);
	}
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___mdbcomp__program_representation__goal_path_step_0_0,432)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module75)
	MR_init_entry1(__Unify___mdbcomp__program_representation__goal_path_string_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__goal_path_string_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module76)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module77)
	MR_init_entry1(__Unify___mdbcomp__program_representation__goal_rep_0_0);
	MR_init_label8(__Unify___mdbcomp__program_representation__goal_rep_0_0,127,11,15,35,42,7,19,21)
	MR_init_label6(__Unify___mdbcomp__program_representation__goal_rep_0_0,23,27,31,33,43,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__goal_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i43);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_rep_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_rep_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_rep_0_0_i35) MR_AND
		MR_LABEL_AP(__Unify___mdbcomp__program_representation__goal_rep_0_0_i42));
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_rep);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_rep);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, case_rep);
	MR_r2 = MR_ctfield(2, MR_tempr3, 1);
	MR_r3 = MR_ctfield(2, MR_tempr4, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i19);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i27);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i31);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr2 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 3);
	if ((MR_tempr2 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 5);
	MR_tempr1 = MR_tempr4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(3, MR_tempr2, 4);
	MR_r3 = MR_ctfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdbcomp__program_representation__goal_rep_0_0_i7);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__atomic_goal_rep_0_0);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
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
	MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i127);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i127);
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__goal_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
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
MR_def_label(__Unify___mdbcomp__program_representation__goal_rep_0_0,43)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module78)
	MR_init_entry1(__Compare___mdbcomp__program_representation__goal_rep_0_0);
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_rep_0_0,326,3,39,52,53,57,66,124)
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_rep_0_0,132,134,142,146,9,13,17,21)
	MR_init_label8(__Compare___mdbcomp__program_representation__goal_rep_0_0,67,72,74,78,91,97,105,179)
	MR_init_label4(__Compare___mdbcomp__program_representation__goal_rep_0_0,111,112,114,341)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__goal_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i39) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i53) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i124) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i146));
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i57) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i52));
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i57) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i66));
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_rep);
	MR_r2 = MR_const_mask_field(MR_sv(1), 0);
	MR_r3 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i132) MR_AND
		MR_LABEL_AP(__Compare___mdbcomp__program_representation__goal_rep_0_0_i142));
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i134);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i341);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, case_rep);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i67);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i91);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i105);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111);
	}
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111);
	}
	MR_sv(8) = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(4) = MR_ctfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr6, 4);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr1;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i9);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i341);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i13);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i341);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i17);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i341);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i21);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i341);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__atomic_goal_rep_0_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i72);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_localcall_lab(__Compare___mdbcomp__program_representation__goal_rep_0_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i74);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i341);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(__Compare___mdbcomp__program_representation__goal_rep_0_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i78);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i341);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i326);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i97);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i326);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i111);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i112);
	}
	}
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_localcall_lab(__Compare___mdbcomp__program_representation__goal_rep_0_0,
		__Compare___mdbcomp__program_representation__goal_rep_0_0_i114);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__goal_rep_0_0_i341);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__goal_rep_0_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module79)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module80)
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

MR_decl_entry(__Unify___mdbcomp__rtti_access__string_table_0_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module81)
	MR_init_entry1(__Unify___mdbcomp__program_representation__module_rep_0_0);
	MR_init_label3(__Unify___mdbcomp__program_representation__module_rep_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__module_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__module_rep_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__module_rep_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 2);
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r2 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__string_table_0_0,
		__Unify___mdbcomp__program_representation__module_rep_0_0_i4);
MR_def_label(__Unify___mdbcomp__program_representation__module_rep_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__module_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, proc_rep);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__program_representation__module_rep_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__module_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__rtti_access__string_table_0_0);

MR_BEGIN_MODULE(mdbcomp__program_representation_module82)
	MR_init_entry1(__Compare___mdbcomp__program_representation__module_rep_0_0);
	MR_init_label5(__Compare___mdbcomp__program_representation__module_rep_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__module_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__module_rep_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__module_rep_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__module_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__module_rep_0_0,2)
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
		__Compare___mdbcomp__program_representation__module_rep_0_0_i5);
MR_def_label(__Compare___mdbcomp__program_representation__module_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__module_rep_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__string_table_0_0,
		__Compare___mdbcomp__program_representation__module_rep_0_0_i9);
MR_def_label(__Compare___mdbcomp__program_representation__module_rep_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__module_rep_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, proc_rep);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__program_representation__module_rep_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module83)
	MR_init_entry1(__Unify___mdbcomp__program_representation__more_modules_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdbcomp__program_representation__more_modules_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module84)
	MR_init_entry1(__Compare___mdbcomp__program_representation__more_modules_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdbcomp__program_representation__more_modules_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module85)
	MR_init_entry1(__Unify___mdbcomp__program_representation__more_procs_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdbcomp__program_representation__more_procs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module86)
	MR_init_entry1(__Compare___mdbcomp__program_representation__more_procs_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdbcomp__program_representation__more_procs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module87)
	MR_init_entry1(__Unify___mdbcomp__program_representation__proc_defn_rep_0_0);
	MR_init_label3(__Unify___mdbcomp__program_representation__proc_defn_rep_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__proc_defn_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__proc_defn_rep_0_0_i8);
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
		__Unify___mdbcomp__program_representation__proc_defn_rep_0_0_i4);
MR_def_label(__Unify___mdbcomp__program_representation__proc_defn_rep_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__proc_defn_rep_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__goal_rep_0_0);
MR_def_label(__Unify___mdbcomp__program_representation__proc_defn_rep_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__proc_defn_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module88)
	MR_init_entry1(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0);
	MR_init_label4(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__proc_defn_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0,2)
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
		__Compare___mdbcomp__program_representation__proc_defn_rep_0_0_i5);
MR_def_label(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__goal_rep_0_0);
MR_def_label(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module89)
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
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__string_proc_label_0_0,
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
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__proc_defn_rep_0_0);
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module90)
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
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__string_proc_label_0_0,
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
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__proc_defn_rep_0_0);
MR_def_label(__Compare___mdbcomp__program_representation__proc_rep_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module91)
	MR_init_entry1(__Unify___mdbcomp__program_representation__proclabel_kind_token_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__proclabel_kind_token_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module92)
	MR_init_entry1(__Compare___mdbcomp__program_representation__proclabel_kind_token_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__proclabel_kind_token_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module93)
	MR_init_entry1(__Unify___mdbcomp__program_representation__prog_rep_0_0);
	MR_init_label1(__Unify___mdbcomp__program_representation__prog_rep_0_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__prog_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__prog_rep_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, module_rep);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__program_representation__prog_rep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module94)
	MR_init_entry1(__Compare___mdbcomp__program_representation__prog_rep_0_0);
	MR_init_label2(__Compare___mdbcomp__program_representation__prog_rep_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__prog_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__prog_rep_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__prog_rep_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__prog_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__prog_rep_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, module_rep);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module95)
	MR_init_entry1(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0);
	MR_init_label1(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0,4)
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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__read_proc_rep_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module96)
	MR_init_entry1(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0);
	MR_init_label2(__Compare___mdbcomp__program_representation__read_proc_rep_info_0_0,3,2)
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
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module97)
	MR_init_entry1(__Unify___mdbcomp__program_representation__string_proc_label_0_0);
	MR_init_label3(__Unify___mdbcomp__program_representation__string_proc_label_0_0,17,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__program_representation__string_proc_label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 3);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 5);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 5);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__program_representation__string_proc_label_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__program_representation__string_proc_label_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 2);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 3);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 4);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 4);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__program_representation__string_proc_label_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 5);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 5);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__program_representation__string_proc_label_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module98)
	MR_init_entry1(__Compare___mdbcomp__program_representation__string_proc_label_0_0);
	MR_init_label8(__Compare___mdbcomp__program_representation__string_proc_label_0_0,3,2,9,13,17,21,25,7)
	MR_init_label8(__Compare___mdbcomp__program_representation__string_proc_label_0_0,5,35,37,41,45,49,53,126)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__program_representation__string_proc_label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i2);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 5);
	MR_tempr6 = MR_sv(2);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__string_proc_label_0_0_i9);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__string_proc_label_0_0_i13);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__string_proc_label_0_0_i17);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__string_proc_label_0_0_i21);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__string_proc_label_0_0_i25);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i35);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(10) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(9) = MR_ctfield(1, MR_tempr5, 2);
	MR_sv(8) = MR_ctfield(1, MR_tempr5, 3);
	MR_sv(7) = MR_ctfield(1, MR_tempr5, 4);
	MR_sv(6) = MR_ctfield(1, MR_tempr5, 5);
	MR_tempr6 = MR_sv(2);
	MR_sv(5) = MR_ctfield(1, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(1, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__string_proc_label_0_0_i37);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__string_proc_label_0_0_i41);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__string_proc_label_0_0_i45);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__program_representation__string_proc_label_0_0_i49);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__program_representation__string_proc_label_0_0_i53);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__program_representation__string_proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__program_representation__string_proc_label_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module99)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module100)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module101)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module102)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module103)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module104)
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


MR_BEGIN_MODULE(mdbcomp__program_representation_module105)
	MR_init_entry1(mdbcomp__program_representation__IntroducedFrom__pred__trace_read_proc_defn_rep__974__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__IntroducedFrom__pred__trace_read_proc_defn_rep__974__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module106)
	MR_init_entry1(mdbcomp__program_representation__IntroducedFrom__pred__goal_path_step_from_string_2__651__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__IntroducedFrom__pred__goal_path_step_from_string_2__651__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__program_representation_module107)
	MR_init_entry1(mdbcomp__program_representation__IntroducedFrom__pred__read_proc_rep__912__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__program_representation__IntroducedFrom__pred__read_proc_rep__912__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__mdbcomp__program_representation__trace_read_proc_defn_rep_3_0);

MR_bool
MR_MDBCOMP_trace_read_proc_defn_rep(const MR_uint_least8_t * Mercury__argument1, const MR_LabelLayout * Mercury__argument2, MR_Word * Mercury__argument3);

MR_bool
MR_MDBCOMP_trace_read_proc_defn_rep(const MR_uint_least8_t * Mercury__argument1, const MR_LabelLayout * Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdbcomp__program_representation__trace_read_proc_defn_rep_3_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_uint_least8_t *, Mercury__argument1, MR_r1);
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument2, MR_r2);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdbcomp__program_representation__trace_read_proc_defn_rep_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
	*Mercury__argument3 = MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
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


MR_declare_entry(mercury__fn__mdbcomp__program_representation__proc_defn_rep_type_0_0);

MR_Word
ML_proc_defn_rep_type(void);

MR_Word
ML_proc_defn_rep_type(void)
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
	MR_setup_callback(MR_ENTRY(mercury__fn__mdbcomp__program_representation__proc_defn_rep_type_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdbcomp__program_representation__proc_defn_rep_type_0_0), MR_FALSE);
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
	mdbcomp__program_representation_module75();
	mdbcomp__program_representation_module76();
	mdbcomp__program_representation_module77();
	mdbcomp__program_representation_module78();
	mdbcomp__program_representation_module79();
}

static void mercury__mdbcomp__program_representation_maybe_bunch_2(void)
{
	mdbcomp__program_representation_module80();
	mdbcomp__program_representation_module81();
	mdbcomp__program_representation_module82();
	mdbcomp__program_representation_module83();
	mdbcomp__program_representation_module84();
	mdbcomp__program_representation_module85();
	mdbcomp__program_representation_module86();
	mdbcomp__program_representation_module87();
	mdbcomp__program_representation_module88();
	mdbcomp__program_representation_module89();
	mdbcomp__program_representation_module90();
	mdbcomp__program_representation_module91();
	mdbcomp__program_representation_module92();
	mdbcomp__program_representation_module93();
	mdbcomp__program_representation_module94();
	mdbcomp__program_representation_module95();
	mdbcomp__program_representation_module96();
	mdbcomp__program_representation_module97();
	mdbcomp__program_representation_module98();
	mdbcomp__program_representation_module99();
	mdbcomp__program_representation_module100();
	mdbcomp__program_representation_module101();
	mdbcomp__program_representation_module102();
	mdbcomp__program_representation_module103();
	mdbcomp__program_representation_module104();
	mdbcomp__program_representation_module105();
	mdbcomp__program_representation_module106();
	mdbcomp__program_representation_module107();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdbcomp__program_representation__init(void);
void mercury__mdbcomp__program_representation__init_type_tables(void);
void mercury__mdbcomp__program_representation__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdbcomp__program_representation__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
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
	mercury__mdbcomp__program_representation_maybe_bunch_2();
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
		mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
		mdbcomp__program_representation__string_proc_label_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_read_proc_rep_info_0,
		mdbcomp__program_representation__read_proc_rep_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_prog_rep_0,
		mdbcomp__program_representation__prog_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_proclabel_kind_token_0,
		mdbcomp__program_representation__proclabel_kind_token_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_0,
		mdbcomp__program_representation__proc_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_proc_defn_rep_0,
		mdbcomp__program_representation__proc_defn_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_more_procs_0,
		mdbcomp__program_representation__more_procs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_more_modules_0,
		mdbcomp__program_representation__more_modules_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_module_rep_0,
		mdbcomp__program_representation__module_rep_0_0);
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
		mercury_data_mdbcomp__program_representation__type_ctor_info_cp_type_0,
		mdbcomp__program_representation__cp_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0,
		mdbcomp__program_representation__coverage_point_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_rep_0,
		mdbcomp__program_representation__cons_id_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0,
		mdbcomp__program_representation__cons_id_arity_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_case_rep_0,
		mdbcomp__program_representation__case_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_call_type_and_callee_0,
		mdbcomp__program_representation__call_type_and_callee_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0,
		mdbcomp__program_representation__call_site_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__program_representation__type_ctor_info_bytecode_goal_type_0,
		mdbcomp__program_representation__bytecode_goal_type_0_0);
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
		&mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_read_proc_rep_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_prog_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_proclabel_kind_token_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_proc_defn_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_more_procs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_more_modules_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_module_rep_0);
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
		&mercury_data_mdbcomp__program_representation__type_ctor_info_cp_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_case_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_call_type_and_callee_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__program_representation__type_ctor_info_bytecode_goal_type_0);
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

void mercury__mdbcomp__program_representation__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdbcomp__program_representation);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdbcomp__program_representation__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
