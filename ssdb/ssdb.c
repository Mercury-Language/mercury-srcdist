/*
** Automatically generated from `ssdb.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__ssdb__init
REQUIRED_INIT mercury__ssdb__required_init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "ssdb.c"
#include "ssdb.mh"

#line 28 "ssdb.c"
#line 532 "../library/io.int"
#include "io.mh"

#line 32 "ssdb.c"
#line 540 "../library/io.int"
#include "string.mh"

#line 36 "ssdb.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ssdb.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "ssdb.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "ssdb.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "ssdb.c"
#line 53 "ssdb.c"
#ifndef SSDB_DECL_GUARD
#define SSDB_DECL_GUARD

#line 57 "ssdb.c"
#line 241 "ssdb.m"
extern MR_Word ssdb__mutable_variable_cur_ssdb_event_number;
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_event_number_lock;
#endif

#line 64 "ssdb.c"
#line 244 "ssdb.m"
extern MR_Word ssdb__mutable_variable_cur_ssdb_csn;
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_csn_lock;
#endif

#line 71 "ssdb.c"
#line 246 "ssdb.m"
extern MR_Word ssdb__mutable_variable_cur_ssdb_depth;
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_depth_lock;
#endif

#line 78 "ssdb.c"
#line 248 "ssdb.m"
extern MR_Word ssdb__mutable_variable_cur_ssdb_next_stop;
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_next_stop_lock;
#endif

#line 85 "ssdb.c"
#line 251 "ssdb.m"
extern MR_Word ssdb__mutable_variable_cur_ssdb_breakpoints;
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_breakpoints_lock;
#endif

#line 92 "ssdb.c"
#line 254 "ssdb.m"
extern MR_Word ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock;
#endif

#line 99 "ssdb.c"
#line 257 "ssdb.m"
extern MR_Word ssdb__mutable_variable_cur_ssdb_shadow_stack;
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_shadow_stack_lock;
#endif

#line 106 "ssdb.c"
#line 260 "ssdb.m"
extern MR_Word ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock;
#endif

#line 113 "ssdb.c"
#line 263 "ssdb.m"
extern MR_Word ssdb__mutable_variable_debugger_state;
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_debugger_state_lock;
#endif

#line 120 "ssdb.c"
#line 121 "ssdb.c"

#endif
#line 124 "ssdb.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
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
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ssdb__type_ctor_info_what_next_0,
	mercury_data_ssdb__type_ctor_info_var_value_0,
	mercury_data_ssdb__type_ctor_info_var_name_0,
	mercury_data_ssdb__type_ctor_info_stack_elem_0,
	mercury_data_ssdb__type_ctor_info_ssdb_retry_0,
	mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0,
	mercury_data_ssdb__type_ctor_info_ssdb_event_type_0,
	mercury_data_ssdb__type_ctor_info_pos_0,
	mercury_data_ssdb__type_ctor_info_next_stop_0,
	mercury_data_ssdb__type_ctor_info_list_var_value_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ssdb__type_ctor_info_debugger_state_0,
	mercury_data_ssdb__type_ctor_info_cur_ssdb_shadow_stack_nondet_0,
	mercury_data_ssdb__type_ctor_info_cur_ssdb_shadow_stack_0,
	mercury_data_ssdb__type_ctor_info_cur_ssdb_next_stop_0,
	mercury_data_ssdb__type_ctor_info_cur_ssdb_breakpoints_0,
	mercury_data_ssdb__type_ctor_info_breakpoint_0,
	mercury_data_ssdb__type_ctor_info_bp_state_0;
MR_decl_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0, 16,3,5,6,8,10,11,12)
MR_decl_label5(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0, 9,13,7,14,15)
MR_decl_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0, 26,3,5,6,8,12,11,10)
MR_decl_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0, 16,17,9,18,7,19,20,21)
MR_decl_label2(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0, 4,23)
MR_decl_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0, 5,7,9,10,13,14,6,39)
MR_decl_label1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0, 38)
MR_decl_label4(ssdb__csn_is_in_stack_2_0, 17,2,7,1)
MR_decl_label5(ssdb__delete_breakpoint_with_num_3_0, 3,4,6,7,2)
MR_decl_label2(ssdb__find_breakpoint_with_num_3_0, 3,1)
MR_decl_label5(ssdb__get_correct_frame_nondet_2_4_0, 32,3,2,5,6)
MR_decl_label4(ssdb__get_correct_frame_with_num_3_0, 20,2,6,5)
MR_decl_label7(ssdb__handle_event_call_2_0, 5,6,7,10,11,29,28)
MR_decl_label8(ssdb__handle_event_call_nondet_2_0, 5,6,7,8,11,12,30,29)
MR_decl_label8(ssdb__handle_event_exit_3_0, 18,3,5,6,7,8,10,12)
MR_decl_label7(ssdb__handle_event_exit_3_0, 13,14,11,15,9,16,17)
MR_decl_label8(ssdb__handle_event_exit_nondet_2_0, 5,6,7,8,12,13,14,11)
MR_decl_label4(ssdb__handle_event_exit_nondet_2_0, 9,16,17,33)
MR_decl_label1(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0, 2)
MR_decl_label3(ssdb__initialise_mutable_debugger_state_0_0, 2,4,3)
MR_decl_label8(ssdb__list_var_value_to_assoc_list_2_0, 28,3,10,11,12,13,6,7)
MR_decl_label2(ssdb__list_var_value_to_assoc_list_2_0, 8,9)
MR_decl_label5(ssdb__modify_state_breakpoint_6_0, 12,3,4,5,6)
MR_decl_label4(ssdb__modify_state_breakpoint_with_num_4_0, 3,4,6,2)
MR_decl_label2(ssdb__modify_state_breakpoints_3_0, 2,3)
MR_decl_label8(ssdb__print_breakpoint_3_0, 2,3,4,5,6,7,8,10)
MR_decl_label1(ssdb__print_breakpoint_3_0, 9)
MR_decl_label8(ssdb__print_event_info_7_0, 2,3,4,5,6,7,8,16)
MR_decl_label8(ssdb__print_event_info_7_0, 18,20,22,23,24,25,26,27)
MR_decl_label8(ssdb__print_frame_info_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label2(ssdb__print_frame_info_3_0, 10,11)
MR_decl_label8(ssdb__print_frames_list_5_0, 27,5,7,10,11,12,13,8)
MR_decl_label2(ssdb__print_frames_list_5_0, 14,30)
MR_decl_label8(ssdb__print_help_2_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ssdb__print_help_2_0, 10,11,12,13,14,15,16,17)
MR_decl_label7(ssdb__print_help_2_0, 18,19,20,21,22,23,24)
MR_decl_label5(ssdb__print_stack_frame_5_0, 4,3,5,6,7)
MR_decl_label8(ssdb__print_var_3_0, 25,26,27,28,29,30,15,16)
MR_decl_label8(ssdb__print_var_3_0, 17,18,19,20,21,22,4,5)
MR_decl_label8(ssdb__print_var_3_0, 6,7,8,9,10,11,12,13)
MR_decl_label8(ssdb__prompt_6_0, 1113,2,3,4,377,7,8,9)
MR_decl_label8(ssdb__prompt_6_0, 14,10,22,21,24,18,31,30)
MR_decl_label8(ssdb__prompt_6_0, 27,38,42,41,35,50,49,59)
MR_decl_label8(ssdb__prompt_6_0, 56,68,70,71,73,72,77,78)
MR_decl_label8(ssdb__prompt_6_0, 79,80,81,62,89,88,92,91)
MR_decl_label8(ssdb__prompt_6_0, 85,105,108,110,112,111,107,100)
MR_decl_label8(ssdb__prompt_6_0, 123,122,126,125,119,136,135,139)
MR_decl_label8(ssdb__prompt_6_0, 140,141,138,132,149,148,173,174)
MR_decl_label8(ssdb__prompt_6_0, 175,176,178,181,182,183,146,190)
MR_decl_label8(ssdb__prompt_6_0, 193,195,212,213,214,217,219,221)
MR_decl_label8(ssdb__prompt_6_0, 224,225,226,227,196,192,185,239)
MR_decl_label8(ssdb__prompt_6_0, 243,242,234,251,250,256,257,248)
MR_decl_label8(ssdb__prompt_6_0, 260,275,274,268,282,297,296,290)
MR_decl_label8(ssdb__prompt_6_0, 310,311,304,321,320,314,334,335)
MR_decl_label8(ssdb__prompt_6_0, 336,338,339,340,341,333,328,347)
MR_decl_label1(ssdb__prompt_6_0, 352)
MR_decl_label8(ssdb__should_stop_at_this_event_6_0, 4,122,7,8,14,17,20,23)
MR_decl_label8(ssdb__should_stop_at_this_event_6_0, 27,30,31,34,43,44,35,124)
MR_decl_label1(ssdb__should_stop_at_this_event_6_0, 46)
MR_decl_label8(ssdb__what_next_stop_4_0, 4,5,6,7,8,9,11,12)
MR_decl_label2(ssdb__what_next_stop_4_0, 13,2)
MR_decl_label2(__Unify___ssdb__breakpoint_0_0, 4,1)
MR_decl_label7(__Unify___ssdb__next_stop_0_0, 6,8,10,12,13,31,1)
MR_decl_label2(__Unify___ssdb__ssdb_proc_id_0_0, 4,1)
MR_decl_label3(__Unify___ssdb__stack_elem_0_0, 4,8,1)
MR_decl_label4(__Unify___ssdb__var_value_0_0, 10,6,28,1)
MR_decl_label7(__Unify___ssdb__what_next_0_0, 6,9,11,13,14,32,1)
MR_decl_label6(__Compare___ssdb__breakpoint_0_0, 3,2,5,9,13,37)
MR_decl_label8(__Compare___ssdb__next_stop_0_0, 6,10,77,14,7,18,22,137)
MR_decl_label8(__Compare___ssdb__next_stop_0_0, 24,27,29,34,37,40,42,49)
MR_decl_label8(__Compare___ssdb__next_stop_0_0, 53,57,60,50,67,71,91,72)
MR_decl_label1(__Compare___ssdb__next_stop_0_0, 74)
MR_decl_label4(__Compare___ssdb__ssdb_proc_id_0_0, 3,2,5,21)
MR_decl_label7(__Compare___ssdb__stack_elem_0_0, 3,2,5,9,13,17,45)
MR_decl_label8(__Compare___ssdb__var_value_0_0, 3,2,38,22,26,28,6,54)
MR_decl_label5(__Compare___ssdb__var_value_0_0, 21,9,11,15,102)
MR_decl_label8(__Compare___ssdb__what_next_0_0, 6,10,11,15,7,20,21,88)
MR_decl_label8(__Compare___ssdb__what_next_0_0, 25,17,29,30,34,178,36,39)
MR_decl_label8(__Compare___ssdb__what_next_0_0, 40,47,50,51,54,58,62,63)
MR_decl_label7(__Compare___ssdb__what_next_0_0, 67,102,59,72,73,77,105)
MR_decl_static(ssdb__lock_cur_ssdb_shadow_stack_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_shadow_stack_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_shadow_stack_1_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_shadow_stack_1_0)
MR_decl_static(ssdb__lock_debugger_state_0_0)
MR_decl_static(ssdb__unlock_debugger_state_0_0)
MR_decl_static(ssdb__unsafe_get_debugger_state_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_csn_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_csn_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_csn_1_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_csn_1_0)
MR_decl_static(ssdb__set_cur_ssdb_csn_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_event_number_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_event_number_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_event_number_1_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_event_number_1_0)
MR_decl_static(ssdb__set_cur_ssdb_event_number_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_depth_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_depth_0_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_depth_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_next_stop_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_next_stop_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_next_stop_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_breakpoints_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_breakpoints_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_breakpoints_1_0)
MR_decl_static(ssdb__get_cur_ssdb_breakpoints_1_0)
MR_decl_static(ssdb__should_stop_at_this_event_6_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_next_stop_1_0)
MR_decl_static(ssdb__what_next_stop_4_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_depth_1_0)
MR_decl_static(ssdb__get_cur_ssdb_depth_1_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_breakpoints_1_0)
MR_decl_static(ssdb__set_cur_ssdb_breakpoints_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_number_of_breakpoint_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_number_of_breakpoint_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_number_of_breakpoint_1_0)
MR_decl_static(ssdb__get_cur_ssdb_number_of_breakpoint_1_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_number_of_breakpoint_1_0)
MR_decl_static(ssdb__set_cur_ssdb_number_of_breakpoint_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_shadow_stack_nondet_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_shadow_stack_nondet_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_shadow_stack_nondet_1_0)
MR_decl_static(ssdb__get_cur_ssdb_shadow_stack_nondet_1_0)
MR_decl_static(ssdb__unsafe_set_debugger_state_1_0)
MR_decl_static(ssdb__set_debugger_state_1_0)
MR_decl_static(ssdb__csn_is_in_stack_2_0)
MR_decl_static(ssdb__list_var_value_to_assoc_list_2_0)
MR_decl_static(ssdb__get_correct_frame_with_num_3_0)
MR_decl_static(ssdb__print_breakpoint_3_0)
MR_decl_static(ssdb__modify_state_breakpoint_6_0)
MR_decl_static(ssdb__modify_state_breakpoints_3_0)
MR_decl_static(ssdb__find_breakpoint_with_num_3_0)
MR_decl_static(ssdb__modify_state_breakpoint_with_num_4_0)
MR_decl_static(ssdb__delete_breakpoint_with_num_3_0)
MR_decl_static(ssdb__exit_debugger_2_0)
MR_decl_static(ssdb__print_frame_info_3_0)
MR_decl_static(ssdb__print_help_2_0)
MR_decl_static(ssdb__print_vars_3_0)
MR_decl_static(ssdb__print_stack_frame_5_0)
MR_decl_static(ssdb__print_frames_list_5_0)
MR_decl_static(ssdb__print_breakpoints_3_0)
MR_decl_static(ssdb__prompt_6_0)
MR_decl_static(ssdb__print_event_info_7_0)
MR_decl_static(ssdb__invent_io_1_0)
MR_decl_static(ssdb__consume_io_1_0)
MR_def_extern_entry(ssdb__handle_event_call_2_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_shadow_stack_nondet_1_0)
MR_def_extern_entry(ssdb__handle_event_call_nondet_2_0)
MR_def_extern_entry(ssdb__handle_event_exit_3_0)
MR_def_extern_entry(ssdb__handle_event_exit_nondet_2_0)
MR_def_extern_entry(ssdb__handle_event_fail_3_0)
MR_decl_static(ssdb__get_correct_frame_nondet_2_4_0)
MR_def_extern_entry(ssdb__handle_event_fail_nondet_3_0)
MR_def_extern_entry(ssdb__handle_event_redo_nondet_2_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_event_number_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_event_number_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_csn_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_csn_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_depth_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_depth_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_next_stop_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_next_stop_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_breakpoints_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_number_of_breakpoint_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_shadow_stack_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_debugger_state_0_0)
MR_decl_static(ssdb__initialise_mutable_debugger_state_0_0)
MR_decl_static(ssdb__print_var_3_0)
MR_decl_static(__Unify___ssdb__bp_state_0_0)
MR_decl_static(__Compare___ssdb__bp_state_0_0)
MR_decl_static(__Unify___ssdb__breakpoint_0_0)
MR_decl_static(__Compare___ssdb__breakpoint_0_0)
MR_decl_static(__Unify___ssdb__cur_ssdb_breakpoints_0_0)
MR_decl_static(__Compare___ssdb__cur_ssdb_breakpoints_0_0)
MR_decl_static(__Unify___ssdb__cur_ssdb_next_stop_0_0)
MR_decl_static(__Compare___ssdb__cur_ssdb_next_stop_0_0)
MR_decl_static(__Unify___ssdb__cur_ssdb_shadow_stack_0_0)
MR_decl_static(__Compare___ssdb__cur_ssdb_shadow_stack_0_0)
MR_decl_static(__Unify___ssdb__cur_ssdb_shadow_stack_nondet_0_0)
MR_decl_static(__Compare___ssdb__cur_ssdb_shadow_stack_nondet_0_0)
MR_decl_static(__Unify___ssdb__debugger_state_0_0)
MR_decl_static(__Compare___ssdb__debugger_state_0_0)
MR_def_extern_entry(__Unify___ssdb__list_var_value_0_0)
MR_def_extern_entry(__Compare___ssdb__list_var_value_0_0)
MR_decl_static(__Unify___ssdb__next_stop_0_0)
MR_decl_static(__Compare___ssdb__next_stop_0_0)
MR_def_extern_entry(__Unify___ssdb__pos_0_0)
MR_def_extern_entry(__Compare___ssdb__pos_0_0)
MR_def_extern_entry(__Unify___ssdb__ssdb_event_type_0_0)
MR_def_extern_entry(__Compare___ssdb__ssdb_event_type_0_0)
MR_def_extern_entry(__Unify___ssdb__ssdb_proc_id_0_0)
MR_def_extern_entry(__Compare___ssdb__ssdb_proc_id_0_0)
MR_def_extern_entry(__Unify___ssdb__ssdb_retry_0_0)
MR_def_extern_entry(__Compare___ssdb__ssdb_retry_0_0)
MR_decl_static(__Unify___ssdb__stack_elem_0_0)
MR_decl_static(__Compare___ssdb__stack_elem_0_0)
MR_def_extern_entry(__Unify___ssdb__var_name_0_0)
MR_def_extern_entry(__Compare___ssdb__var_name_0_0)
MR_def_extern_entry(__Unify___ssdb__var_value_0_0)
MR_def_extern_entry(__Compare___ssdb__var_value_0_0)
MR_decl_static(__Unify___ssdb__what_next_0_0)
MR_decl_static(__Compare___ssdb__what_next_0_0)
MR_def_extern_entry(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0)
MR_def_extern_entry(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0)
MR_def_extern_entry(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_vars_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_var_value_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_stack_frame_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_frames_list_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_breakpoints_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_breakpoint_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__print_vars_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ssdb, var_value),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__print_stack_frame_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ssdb, var_value),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__print_frames_list_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ssdb, var_value),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__print_breakpoints_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ssdb, breakpoint),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_2 mercury_common_2[4] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(ssdb__print_var_3_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(ssdb__print_var_3_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(ssdb__print_var_3_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(ssdb__print_breakpoint_3_0),
0
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_pprint__type_ctor_info_doc_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__,
MR_CTOR0_ADDR(pprint, doc)
}
},
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_what_next_0_0 = {
	"wn_step",
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

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_what_next_0_1 = {
	"wn_next",
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

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_what_next_0_2 = {
	"wn_continue",
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_what_next_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_what_next_0_3 = {
	"wn_finish",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_what_next_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_what_next_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_what_next_0_4 = {
	"wn_retry",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_what_next_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_what_next_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_what_next_0_5 = {
	"wn_retry_nondet",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_what_next_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_what_next_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_what_next_0_6 = {
	"wn_goto",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_what_next_0_6,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_what_next_0_0[] = {
	&mercury_data_ssdb__du_functor_desc_what_next_0_0,
	&mercury_data_ssdb__du_functor_desc_what_next_0_1,
	&mercury_data_ssdb__du_functor_desc_what_next_0_2

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_what_next_0_1[] = {
	&mercury_data_ssdb__du_functor_desc_what_next_0_3

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_what_next_0_2[] = {
	&mercury_data_ssdb__du_functor_desc_what_next_0_4

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_what_next_0_3[] = {
	&mercury_data_ssdb__du_functor_desc_what_next_0_5,
	&mercury_data_ssdb__du_functor_desc_what_next_0_6

};

const MR_DuPtagLayout mercury_data_ssdb__du_ptag_ordered_what_next_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_ssdb__du_stag_ordered_what_next_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_what_next_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_what_next_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_ssdb__du_stag_ordered_what_next_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_name_ordered_what_next_0[] = {
	&mercury_data_ssdb__du_functor_desc_what_next_0_2,
	&mercury_data_ssdb__du_functor_desc_what_next_0_3,
	&mercury_data_ssdb__du_functor_desc_what_next_0_6,
	&mercury_data_ssdb__du_functor_desc_what_next_0_1,
	&mercury_data_ssdb__du_functor_desc_what_next_0_4,
	&mercury_data_ssdb__du_functor_desc_what_next_0_5,
	&mercury_data_ssdb__du_functor_desc_what_next_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_what_next_0[] = {
	6,
	3,
	0,
	1,
	4,
	5,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_what_next_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__what_next_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__what_next_0_0)),
	"ssdb",
	"what_next",
	{ (void *)mercury_data_ssdb__du_name_ordered_what_next_0 },
	{ (void *)mercury_data_ssdb__du_ptag_ordered_what_next_0 },
	7,
	4,
	mercury_data_ssdb__functor_number_map_what_next_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_var_value_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_var_value_0_0 = {
	"unbound_head_var",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_var_value_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_var_value_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) 513
};

const MR_DuExistLocn mercury_data_ssdb__exist_locns_var_value_0_1[] = {
	{ 0, -1 }
};

static const MR_DuExistInfo mercury_data_ssdb__exist_info_var_value_0_1 = {
	1,
	0,
	0,
	mercury_data_ssdb__exist_locns_var_value_0_1,
	
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_var_value_0_1 = {
	"bound_head_var",
	3,
	4,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_var_value_0_1,
	NULL,
	&mercury_data_ssdb__exist_info_var_value_0_1
};

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_var_value_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) 513
};

const MR_DuExistLocn mercury_data_ssdb__exist_locns_var_value_0_2[] = {
	{ 0, -1 }
};

static const MR_DuExistInfo mercury_data_ssdb__exist_info_var_value_0_2 = {
	1,
	0,
	0,
	mercury_data_ssdb__exist_locns_var_value_0_2,
	
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_var_value_0_2 = {
	"bound_other_var",
	2,
	2,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_var_value_0_2,
	NULL,
	&mercury_data_ssdb__exist_info_var_value_0_2
};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_var_value_0_0[] = {
	&mercury_data_ssdb__du_functor_desc_var_value_0_0

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_var_value_0_1[] = {
	&mercury_data_ssdb__du_functor_desc_var_value_0_1

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_var_value_0_2[] = {
	&mercury_data_ssdb__du_functor_desc_var_value_0_2

};

const MR_DuPtagLayout mercury_data_ssdb__du_ptag_ordered_var_value_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_var_value_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_var_value_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_var_value_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_name_ordered_var_value_0[] = {
	&mercury_data_ssdb__du_functor_desc_var_value_0_1,
	&mercury_data_ssdb__du_functor_desc_var_value_0_2,
	&mercury_data_ssdb__du_functor_desc_var_value_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_var_value_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_var_value_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__var_value_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__var_value_0_0)),
	"ssdb",
	"var_value",
	{ (void *)mercury_data_ssdb__du_name_ordered_var_value_0 },
	{ (void *)mercury_data_ssdb__du_ptag_ordered_var_value_0 },
	3,
	4,
	mercury_data_ssdb__functor_number_map_var_value_0
};

const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_var_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__var_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__var_name_0_0)),
	"ssdb",
	"var_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_var_value_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ssdb__type_ctor_info_var_value_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ssdb__type_ctor_info_var_value_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0;

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_stack_elem_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ssdb__type_ctor_info_var_value_0
};

const MR_ConstString mercury_data_ssdb__field_names_stack_elem_0_0[] = {
	"se_event_number",
	"se_csn",
	"se_depth",
	"se_proc_id",
	"se_list_var_value"
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_stack_elem_0_0 = {
	"elem",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_stack_elem_0_0,
	mercury_data_ssdb__field_names_stack_elem_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_stack_elem_0_0[] = {
	&mercury_data_ssdb__du_functor_desc_stack_elem_0_0

};

const MR_DuPtagLayout mercury_data_ssdb__du_ptag_ordered_stack_elem_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_stack_elem_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_name_ordered_stack_elem_0[] = {
	&mercury_data_ssdb__du_functor_desc_stack_elem_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_stack_elem_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_stack_elem_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__stack_elem_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__stack_elem_0_0)),
	"ssdb",
	"stack_elem",
	{ (void *)mercury_data_ssdb__du_name_ordered_stack_elem_0 },
	{ (void *)mercury_data_ssdb__du_ptag_ordered_stack_elem_0 },
	1,
	4,
	mercury_data_ssdb__functor_number_map_stack_elem_0
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_retry_0_0 = {
	"do_retry",
	0
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_retry_0_1 = {
	"do_not_retry",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_value_ordered_ssdb_retry_0[] = {
	&mercury_data_ssdb__enum_functor_desc_ssdb_retry_0_0,
	&mercury_data_ssdb__enum_functor_desc_ssdb_retry_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_name_ordered_ssdb_retry_0[] = {
	&mercury_data_ssdb__enum_functor_desc_ssdb_retry_0_1,
	&mercury_data_ssdb__enum_functor_desc_ssdb_retry_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_ssdb_retry_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_ssdb_retry_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__ssdb_retry_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__ssdb_retry_0_0)),
	"ssdb",
	"ssdb_retry",
	{ (void *)mercury_data_ssdb__enum_name_ordered_ssdb_retry_0 },
	{ (void *)mercury_data_ssdb__enum_value_ordered_ssdb_retry_0 },
	2,
	4,
	mercury_data_ssdb__functor_number_map_ssdb_retry_0
};

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_ssdb_proc_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ssdb__field_names_ssdb_proc_id_0_0[] = {
	"module_name",
	"proc_name"
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_ssdb_proc_id_0_0 = {
	"ssdb_proc_id",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_ssdb_proc_id_0_0,
	mercury_data_ssdb__field_names_ssdb_proc_id_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_ssdb_proc_id_0_0[] = {
	&mercury_data_ssdb__du_functor_desc_ssdb_proc_id_0_0

};

const MR_DuPtagLayout mercury_data_ssdb__du_ptag_ordered_ssdb_proc_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_ssdb_proc_id_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_name_ordered_ssdb_proc_id_0[] = {
	&mercury_data_ssdb__du_functor_desc_ssdb_proc_id_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_ssdb_proc_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__ssdb_proc_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__ssdb_proc_id_0_0)),
	"ssdb",
	"ssdb_proc_id",
	{ (void *)mercury_data_ssdb__du_name_ordered_ssdb_proc_id_0 },
	{ (void *)mercury_data_ssdb__du_ptag_ordered_ssdb_proc_id_0 },
	1,
	4,
	mercury_data_ssdb__functor_number_map_ssdb_proc_id_0
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_0 = {
	"ssdb_call",
	0
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_1 = {
	"ssdb_exit",
	1
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_2 = {
	"ssdb_fail",
	2
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_3 = {
	"ssdb_call_nondet",
	3
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_4 = {
	"ssdb_exit_nondet",
	4
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_5 = {
	"ssdb_redo_nondet",
	5
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_6 = {
	"ssdb_fail_nondet",
	6
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_value_ordered_ssdb_event_type_0[] = {
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_0,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_1,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_2,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_3,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_4,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_5,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_6
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_name_ordered_ssdb_event_type_0[] = {
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_0,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_3,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_1,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_4,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_2,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_6,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_5
};

const MR_Integer mercury_data_ssdb__functor_number_map_ssdb_event_type_0[] = {
	0,
	2,
	4,
	1,
	3,
	6,
	5 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_ssdb_event_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__ssdb_event_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__ssdb_event_type_0_0)),
	"ssdb",
	"ssdb_event_type",
	{ (void *)mercury_data_ssdb__enum_name_ordered_ssdb_event_type_0 },
	{ (void *)mercury_data_ssdb__enum_value_ordered_ssdb_event_type_0 },
	7,
	4,
	mercury_data_ssdb__functor_number_map_ssdb_event_type_0
};

const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_pos_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__pos_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__pos_0_0)),
	"ssdb",
	"pos",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_next_stop_0_0 = {
	"ns_step",
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

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_next_stop_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_next_stop_0_1 = {
	"ns_next",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_next_stop_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_next_stop_0_2 = {
	"ns_continue",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_ssdb_retry_0;

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_next_stop_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ssdb__type_ctor_info_ssdb_retry_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_next_stop_0_3 = {
	"ns_final_port",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_next_stop_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_next_stop_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ssdb__type_ctor_info_ssdb_retry_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_next_stop_0_4 = {
	"ns_final_port_nondet",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_next_stop_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_next_stop_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_next_stop_0_5 = {
	"ns_goto",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_next_stop_0_5,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_next_stop_0_0[] = {
	&mercury_data_ssdb__du_functor_desc_next_stop_0_0,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_2

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_next_stop_0_1[] = {
	&mercury_data_ssdb__du_functor_desc_next_stop_0_1

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_next_stop_0_2[] = {
	&mercury_data_ssdb__du_functor_desc_next_stop_0_3

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_next_stop_0_3[] = {
	&mercury_data_ssdb__du_functor_desc_next_stop_0_4,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_5

};

const MR_DuPtagLayout mercury_data_ssdb__du_ptag_ordered_next_stop_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_ssdb__du_stag_ordered_next_stop_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_next_stop_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_next_stop_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_ssdb__du_stag_ordered_next_stop_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_name_ordered_next_stop_0[] = {
	&mercury_data_ssdb__du_functor_desc_next_stop_0_2,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_3,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_4,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_5,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_1,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_next_stop_0[] = {
	5,
	4,
	0,
	1,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_next_stop_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__next_stop_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__next_stop_0_0)),
	"ssdb",
	"next_stop",
	{ (void *)mercury_data_ssdb__du_name_ordered_next_stop_0 },
	{ (void *)mercury_data_ssdb__du_ptag_ordered_next_stop_0 },
	6,
	4,
	mercury_data_ssdb__functor_number_map_next_stop_0
};

const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_list_var_value_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__list_var_value_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__list_var_value_0_0)),
	"ssdb",
	"list_var_value",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1ssdb__type_ctor_info_var_value_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_debugger_state_0_0 = {
	"debugger_disabled",
	0
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_debugger_state_0_1 = {
	"debugger_on",
	1
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_debugger_state_0_2 = {
	"debugger_off",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_value_ordered_debugger_state_0[] = {
	&mercury_data_ssdb__enum_functor_desc_debugger_state_0_0,
	&mercury_data_ssdb__enum_functor_desc_debugger_state_0_1,
	&mercury_data_ssdb__enum_functor_desc_debugger_state_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_name_ordered_debugger_state_0[] = {
	&mercury_data_ssdb__enum_functor_desc_debugger_state_0_0,
	&mercury_data_ssdb__enum_functor_desc_debugger_state_0_2,
	&mercury_data_ssdb__enum_functor_desc_debugger_state_0_1
};

const MR_Integer mercury_data_ssdb__functor_number_map_debugger_state_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_debugger_state_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__debugger_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__debugger_state_0_0)),
	"ssdb",
	"debugger_state",
	{ (void *)mercury_data_ssdb__enum_name_ordered_debugger_state_0 },
	{ (void *)mercury_data_ssdb__enum_value_ordered_debugger_state_0 },
	3,
	4,
	mercury_data_ssdb__functor_number_map_debugger_state_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_stack_elem_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ssdb__type_ctor_info_stack_elem_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ssdb__type_ctor_info_stack_elem_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_cur_ssdb_shadow_stack_nondet_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__cur_ssdb_shadow_stack_nondet_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__cur_ssdb_shadow_stack_nondet_0_0)),
	"ssdb",
	"cur_ssdb_shadow_stack_nondet",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1ssdb__type_ctor_info_stack_elem_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_cur_ssdb_shadow_stack_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__cur_ssdb_shadow_stack_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__cur_ssdb_shadow_stack_0_0)),
	"ssdb",
	"cur_ssdb_shadow_stack",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1ssdb__type_ctor_info_stack_elem_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_next_stop_0;

const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_cur_ssdb_next_stop_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__cur_ssdb_next_stop_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__cur_ssdb_next_stop_0_0)),
	"ssdb",
	"cur_ssdb_next_stop",
	{ 0 },
	{ (void *)&mercury_data_ssdb__type_ctor_info_next_stop_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_breakpoint_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0ssdb__type_ctor_info_breakpoint_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_ssdb__type_ctor_info_breakpoint_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_cur_ssdb_breakpoints_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__cur_ssdb_breakpoints_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__cur_ssdb_breakpoints_0_0)),
	"ssdb",
	"cur_ssdb_breakpoints",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0ssdb__type_ctor_info_breakpoint_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_bp_state_0;

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_breakpoint_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_ssdb__type_ctor_info_bp_state_0
};

const MR_ConstString mercury_data_ssdb__field_names_breakpoint_0_0[] = {
	"bp_number",
	"bp_module_name",
	"bp_pred_name",
	"bp_state"
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_breakpoint_0_0 = {
	"breakpoint",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_breakpoint_0_0,
	mercury_data_ssdb__field_names_breakpoint_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_breakpoint_0_0[] = {
	&mercury_data_ssdb__du_functor_desc_breakpoint_0_0

};

const MR_DuPtagLayout mercury_data_ssdb__du_ptag_ordered_breakpoint_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_breakpoint_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_name_ordered_breakpoint_0[] = {
	&mercury_data_ssdb__du_functor_desc_breakpoint_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_breakpoint_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_breakpoint_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__breakpoint_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__breakpoint_0_0)),
	"ssdb",
	"breakpoint",
	{ (void *)mercury_data_ssdb__du_name_ordered_breakpoint_0 },
	{ (void *)mercury_data_ssdb__du_ptag_ordered_breakpoint_0 },
	1,
	4,
	mercury_data_ssdb__functor_number_map_breakpoint_0
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_bp_state_0_0 = {
	"bp_state_enabled",
	0
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_bp_state_0_1 = {
	"bp_state_disabled",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_value_ordered_bp_state_0[] = {
	&mercury_data_ssdb__enum_functor_desc_bp_state_0_0,
	&mercury_data_ssdb__enum_functor_desc_bp_state_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_name_ordered_bp_state_0[] = {
	&mercury_data_ssdb__enum_functor_desc_bp_state_0_1,
	&mercury_data_ssdb__enum_functor_desc_bp_state_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_bp_state_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_bp_state_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__bp_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__bp_state_0_0)),
	"ssdb",
	"bp_state",
	{ (void *)mercury_data_ssdb__enum_name_ordered_bp_state_0 },
	{ (void *)mercury_data_ssdb__enum_value_ordered_bp_state_0 },
	2,
	4,
	mercury_data_ssdb__functor_number_map_bp_state_0
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_vars_3_0_1 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"print_var",
3,
0
},
"ssdb",
"ssdb.m",
1661,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_stack_frame_5_0_1 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"print_var",
3,
0
},
"ssdb",
"ssdb.m",
1661,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_frames_list_5_0_1 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"print_var",
3,
0
},
"ssdb",
"ssdb.m",
1661,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_breakpoints_3_0_1 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"print_breakpoint",
3,
0
},
"ssdb",
"ssdb.m",
1701,
"d1;c4;"
};


MR_BEGIN_MODULE(ssdb_module0)
	MR_init_entry1(ssdb__lock_cur_ssdb_shadow_stack_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_shadow_stack_0_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 1593 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module1)
	MR_init_entry1(ssdb__unlock_cur_ssdb_shadow_stack_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_shadow_stack_0_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 1623 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module2)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_shadow_stack_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_cur_ssdb_shadow_stack_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_cur_ssdb_shadow_stack_1_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 1650 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module3)
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_shadow_stack_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_cur_ssdb_shadow_stack_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_cur_ssdb_shadow_stack_1_0
	X = MR_r1;
{
#line 257 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 1679 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module4)
	MR_init_entry1(ssdb__lock_debugger_state_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_debugger_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_debugger_state_0_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 1709 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module5)
	MR_init_entry1(ssdb__unlock_debugger_state_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_debugger_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_debugger_state_0_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 1739 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module6)
	MR_init_entry1(ssdb__unsafe_get_debugger_state_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_debugger_state_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_debugger_state_1_0
{
#line 263 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 1766 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module7)
	MR_init_entry1(ssdb__lock_cur_ssdb_csn_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_csn_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_csn_0_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 1797 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module8)
	MR_init_entry1(ssdb__unlock_cur_ssdb_csn_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_csn_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_csn_0_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 1827 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module9)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_csn_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_cur_ssdb_csn_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_cur_ssdb_csn_1_0
{
#line 244 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_csn;;}
#line 1854 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module10)
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_csn_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_cur_ssdb_csn_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_cur_ssdb_csn_1_0
	X = MR_r1;
{
#line 244 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 1883 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module11)
	MR_init_entry1(ssdb__set_cur_ssdb_csn_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_cur_ssdb_csn_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_csn_1_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 1913 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_csn_1_0
	X = MR_r1;
{
#line 244 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 1923 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_csn_1_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 1935 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module12)
	MR_init_entry1(ssdb__lock_cur_ssdb_event_number_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_event_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_event_number_0_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 1965 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module13)
	MR_init_entry1(ssdb__unlock_cur_ssdb_event_number_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_event_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_event_number_0_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 1995 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module14)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_event_number_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_cur_ssdb_event_number_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_cur_ssdb_event_number_1_0
{
#line 241 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 2022 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module15)
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_event_number_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_cur_ssdb_event_number_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_cur_ssdb_event_number_1_0
	X = MR_r1;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 2051 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module16)
	MR_init_entry1(ssdb__set_cur_ssdb_event_number_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_cur_ssdb_event_number_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_event_number_1_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 2081 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_event_number_1_0
	X = MR_r1;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 2091 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_event_number_1_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 2103 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module17)
	MR_init_entry1(ssdb__lock_cur_ssdb_depth_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_depth_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_depth_0_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 2133 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module18)
	MR_init_entry1(ssdb__unlock_cur_ssdb_depth_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_depth_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_depth_0_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 2163 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module19)
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_depth_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_cur_ssdb_depth_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_cur_ssdb_depth_1_0
	X = MR_r1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 2191 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module20)
	MR_init_entry1(ssdb__lock_cur_ssdb_next_stop_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_next_stop_0_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 2221 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module21)
	MR_init_entry1(ssdb__unlock_cur_ssdb_next_stop_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_next_stop_0_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 2251 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module22)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_next_stop_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_cur_ssdb_next_stop_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_cur_ssdb_next_stop_1_0
{
#line 248 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_next_stop;;}
#line 2278 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module23)
	MR_init_entry1(ssdb__lock_cur_ssdb_breakpoints_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_breakpoints_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_breakpoints_0_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 2309 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module24)
	MR_init_entry1(ssdb__unlock_cur_ssdb_breakpoints_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_breakpoints_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_breakpoints_0_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 2339 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module25)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_breakpoints_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_cur_ssdb_breakpoints_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_cur_ssdb_breakpoints_1_0
{
#line 251 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 2366 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module26)
	MR_init_entry1(ssdb__get_cur_ssdb_breakpoints_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_cur_ssdb_breakpoints_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_breakpoints_1_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 2397 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_breakpoints_1_0
{
#line 251 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 2406 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_breakpoints_1_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 2419 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__pair__pair_2_0);
MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(ssdb_module27)
	MR_init_entry1(ssdb__should_stop_at_this_event_6_0);
	MR_init_label8(ssdb__should_stop_at_this_event_6_0,4,122,7,8,14,17,20,23)
	MR_init_label8(ssdb__should_stop_at_this_event_6_0,27,30,31,34,43,44,35,124)
	MR_init_label1(ssdb__should_stop_at_this_event_6_0,46)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__should_stop_at_this_event_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_6_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 2454 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_6_0
{
#line 248 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_next_stop;;}
#line 2463 "ssdb.c"
	MR_r5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_6_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 2476 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(ssdb__should_stop_at_this_event_6_0_i4) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_6_0_i14) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_6_0_i17) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_6_0_i34));
MR_def_label(ssdb__should_stop_at_this_event_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r5),0)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_6_0_i122);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_6_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_6_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 2505 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_6_0
{
#line 251 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 2516 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_6_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 2529 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_r4, 0);
	MR_r4 = MR_ctfield(0, MR_r4, 1);
	}
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		ssdb__should_stop_at_this_event_6_0_i7);
MR_def_label(ssdb__should_stop_at_this_event_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		ssdb__should_stop_at_this_event_6_0_i8);
MR_def_label(ssdb__should_stop_at_this_event_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_6_0_i46);
	}
	MR_r3 = MR_ctfield(0, MR_r2, 3);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_6_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__should_stop_at_this_event_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(1, MR_r5, 0);
	if ((MR_r6 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_6_0_i124);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ssdb__should_stop_at_this_event_6_0_i30) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_6_0_i23) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_6_0_i30) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_6_0_i27) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_6_0_i30) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_6_0_i31));
MR_def_label(ssdb__should_stop_at_this_event_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	MR_r6 = MR_ctfield(2, MR_tempr1, 0);
	if ((MR_r6 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_6_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ssdb__should_stop_at_this_event_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	MR_r6 = MR_ctfield(2, MR_tempr1, 0);
	if ((MR_r6 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_6_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ssdb__should_stop_at_this_event_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	MR_r6 = MR_ctfield(2, MR_tempr1, 0);
	if ((MR_r6 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_6_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ssdb__should_stop_at_this_event_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_ctfield(2, MR_r5, 1);
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	MR_r6 = MR_ctfield(2, MR_tempr1, 0);
	if ((MR_r6 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_6_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ssdb__should_stop_at_this_event_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r5, 0),0)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_6_0_i35);
	}
	if (MR_INT_EQ(MR_r1,6)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_6_0_i43);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_ctfield(3, MR_r5, 2);
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r6 = MR_ctfield(3, MR_tempr1, 1);
	if ((MR_r6 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_6_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ssdb__should_stop_at_this_event_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(3, MR_r5, 1);
	if ((MR_r6 != MR_r2)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_6_0_i124);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_6_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ssdb__should_stop_at_this_event_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module28)
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_next_stop_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_cur_ssdb_next_stop_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_cur_ssdb_next_stop_1_0
	X = MR_r1;
{
#line 248 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop= X;;}
#line 2706 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module29)
	MR_init_entry1(ssdb__what_next_stop_4_0);
	MR_init_label8(ssdb__what_next_stop_4_0,4,5,6,7,8,9,11,12)
	MR_init_label2(ssdb__what_next_stop_4_0,13,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__what_next_stop_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ssdb__what_next_stop_4_0_i4) MR_AND
		MR_LABEL_AP(ssdb__what_next_stop_4_0_i7) MR_AND
		MR_LABEL_AP(ssdb__what_next_stop_4_0_i8) MR_AND
		MR_LABEL_AP(ssdb__what_next_stop_4_0_i11));
MR_def_label(ssdb__what_next_stop_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_unmkbody(MR_r3);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ssdb__what_next_stop_4_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ssdb__what_next_stop_4_0_i2);
MR_def_label(ssdb__what_next_stop_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ssdb__what_next_stop_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(ssdb__what_next_stop_4_0_i2);
	}
MR_def_label(ssdb__what_next_stop_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(ssdb__what_next_stop_4_0_i2);
MR_def_label(ssdb__what_next_stop_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r3, 0);
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 1;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__what_next_stop_4_0_i2);
	}
MR_def_label(ssdb__what_next_stop_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(2, MR_r3, 0);
	if ((MR_r4 != MR_r2)) {
		MR_GOTO_LAB(ssdb__what_next_stop_4_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ssdb__what_next_stop_4_0_i2);
MR_def_label(ssdb__what_next_stop_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r4;
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 0;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__what_next_stop_4_0_i2);
	}
MR_def_label(ssdb__what_next_stop_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ssdb__what_next_stop_4_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r3, 1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__what_next_stop_4_0_i2);
	}
MR_def_label(ssdb__what_next_stop_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(ssdb__what_next_stop_4_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ssdb__what_next_stop_4_0_i2);
MR_def_label(ssdb__what_next_stop_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
MR_def_label(ssdb__what_next_stop_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__what_next_stop_4_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 2839 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__what_next_stop_4_0
	X = MR_r2;
{
#line 248 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop= X;;}
#line 2849 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__what_next_stop_4_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 2861 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module30)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_depth_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_cur_ssdb_depth_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_cur_ssdb_depth_1_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 2888 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module31)
	MR_init_entry1(ssdb__get_cur_ssdb_depth_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_cur_ssdb_depth_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_depth_1_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 2919 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_depth_1_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 2928 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_depth_1_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 2941 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module32)
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_breakpoints_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_cur_ssdb_breakpoints_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_cur_ssdb_breakpoints_1_0
	X = MR_r1;
{
#line 251 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 2969 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module33)
	MR_init_entry1(ssdb__set_cur_ssdb_breakpoints_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_cur_ssdb_breakpoints_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_breakpoints_1_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 2999 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_breakpoints_1_0
	X = MR_r1;
{
#line 251 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 3009 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_breakpoints_1_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 3021 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module34)
	MR_init_entry1(ssdb__lock_cur_ssdb_number_of_breakpoint_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_number_of_breakpoint_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_number_of_breakpoint_0_0
{
#line 254 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 3051 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module35)
	MR_init_entry1(ssdb__unlock_cur_ssdb_number_of_breakpoint_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_number_of_breakpoint_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_number_of_breakpoint_0_0
{
#line 254 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 3081 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module36)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_number_of_breakpoint_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_cur_ssdb_number_of_breakpoint_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_cur_ssdb_number_of_breakpoint_1_0
{
#line 254 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;;}
#line 3108 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module37)
	MR_init_entry1(ssdb__get_cur_ssdb_number_of_breakpoint_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_cur_ssdb_number_of_breakpoint_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_number_of_breakpoint_1_0
{
#line 254 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 3139 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_number_of_breakpoint_1_0
{
#line 254 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;;}
#line 3148 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_number_of_breakpoint_1_0
{
#line 254 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 3161 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module38)
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_number_of_breakpoint_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_cur_ssdb_number_of_breakpoint_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_cur_ssdb_number_of_breakpoint_1_0
	X = MR_r1;
{
#line 254 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_number_of_breakpoint= X;;}
#line 3189 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module39)
	MR_init_entry1(ssdb__set_cur_ssdb_number_of_breakpoint_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_cur_ssdb_number_of_breakpoint_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_number_of_breakpoint_1_0
{
#line 254 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 3219 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_number_of_breakpoint_1_0
	X = MR_r1;
{
#line 254 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_number_of_breakpoint= X;;}
#line 3229 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_number_of_breakpoint_1_0
{
#line 254 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 3241 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module40)
	MR_init_entry1(ssdb__lock_cur_ssdb_shadow_stack_nondet_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_shadow_stack_nondet_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_shadow_stack_nondet_0_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 3271 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module41)
	MR_init_entry1(ssdb__unlock_cur_ssdb_shadow_stack_nondet_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_shadow_stack_nondet_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_shadow_stack_nondet_0_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 3301 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module42)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_shadow_stack_nondet_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_cur_ssdb_shadow_stack_nondet_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_cur_ssdb_shadow_stack_nondet_1_0
{
#line 260 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 3328 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module43)
	MR_init_entry1(ssdb__get_cur_ssdb_shadow_stack_nondet_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_cur_ssdb_shadow_stack_nondet_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_shadow_stack_nondet_1_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 3359 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_shadow_stack_nondet_1_0
{
#line 260 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 3368 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_shadow_stack_nondet_1_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 3381 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module44)
	MR_init_entry1(ssdb__unsafe_set_debugger_state_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_debugger_state_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_debugger_state_1_0
	X = MR_r1;
{
#line 263 "ssdb.m"
ssdb__mutable_variable_debugger_state= X;;}
#line 3409 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module45)
	MR_init_entry1(ssdb__set_debugger_state_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_debugger_state_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_debugger_state_1_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 3439 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_debugger_state_1_0
	X = MR_r1;
{
#line 263 "ssdb.m"
ssdb__mutable_variable_debugger_state= X;;}
#line 3449 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_debugger_state_1_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 3461 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__pop_3_0);

MR_BEGIN_MODULE(ssdb_module46)
	MR_init_entry1(ssdb__csn_is_in_stack_2_0);
	MR_init_label4(ssdb__csn_is_in_stack_2_0,17,2,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__csn_is_in_stack_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ssdb__csn_is_in_stack_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(stack__pop_3_0,
		ssdb__csn_is_in_stack_2_0_i2);
MR_def_label(ssdb__csn_is_in_stack_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__csn_is_in_stack_2_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 1);
	if ((MR_sv(1) == MR_r1)) {
		MR_GOTO_LAB(ssdb__csn_is_in_stack_2_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ssdb__csn_is_in_stack_2_0_i17);
MR_def_label(ssdb__csn_is_in_stack_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__csn_is_in_stack_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

MR_BEGIN_MODULE(ssdb_module47)
	MR_init_entry1(ssdb__list_var_value_to_assoc_list_2_0);
	MR_init_label8(ssdb__list_var_value_to_assoc_list_2_0,28,3,10,11,12,13,6,7)
	MR_init_label2(ssdb__list_var_value_to_assoc_list_2_0,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__list_var_value_to_assoc_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i6);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i10);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i28);
	}
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	MR_r2 = MR_ctfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__list_var_value_to_assoc_list_2_0_i11);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ssdb__list_var_value_to_assoc_list_2_0,
		ssdb__list_var_value_to_assoc_list_2_0_i12);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		ssdb__list_var_value_to_assoc_list_2_0_i13);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__list_var_value_to_assoc_list_2_0_i7);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ssdb__list_var_value_to_assoc_list_2_0,
		ssdb__list_var_value_to_assoc_list_2_0_i8);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		ssdb__list_var_value_to_assoc_list_2_0_i9);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__top_det_2_0);
MR_decl_entry(stack__pop_det_3_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(ssdb_module48)
	MR_init_entry1(ssdb__get_correct_frame_with_num_3_0);
	MR_init_label4(ssdb__get_correct_frame_with_num_3_0,20,2,6,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_correct_frame_with_num_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ssdb__get_correct_frame_with_num_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__get_correct_frame_with_num_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(stack__top_det_2_0);
MR_def_label(ssdb__get_correct_frame_with_num_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__get_correct_frame_with_num_3_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(stack__pop_det_3_0,
		ssdb__get_correct_frame_with_num_3_0_i6);
MR_def_label(ssdb__get_correct_frame_with_num_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ssdb__get_correct_frame_with_num_3_0_i20);
MR_def_label(ssdb__get_correct_frame_with_num_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Unexpected error : get_correct_frame_with_num", 45);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);
MR_decl_entry(io__write_int_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(ssdb_module49)
	MR_init_entry1(ssdb__print_breakpoint_3_0);
	MR_init_label8(ssdb__print_breakpoint_3_0,2,3,4,5,6,7,8,10)
	MR_init_label1(ssdb__print_breakpoint_3_0,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_breakpoint_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		ssdb__print_breakpoint_3_0_i2);
MR_def_label(ssdb__print_breakpoint_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_breakpoint_3_0_i3);
MR_def_label(ssdb__print_breakpoint_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		ssdb__print_breakpoint_3_0_i4);
MR_def_label(ssdb__print_breakpoint_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_breakpoint_3_0_i5);
MR_def_label(ssdb__print_breakpoint_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_breakpoint_3_0_i6);
MR_def_label(ssdb__print_breakpoint_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_breakpoint_3_0_i7);
MR_def_label(ssdb__print_breakpoint_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_breakpoint_3_0_i8);
MR_def_label(ssdb__print_breakpoint_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ssdb__print_breakpoint_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("enable", 6);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_breakpoint_3_0_i9);
MR_def_label(ssdb__print_breakpoint_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("disable", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_breakpoint_3_0_i9);
MR_def_label(ssdb__print_breakpoint_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(ssdb_module50)
	MR_init_entry1(ssdb__modify_state_breakpoint_6_0);
	MR_init_label5(ssdb__modify_state_breakpoint_6_0,12,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__modify_state_breakpoint_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ssdb__modify_state_breakpoint_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__modify_state_breakpoint_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
MR_def_label(ssdb__modify_state_breakpoint_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr4;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__print_breakpoint_3_0,
		ssdb__modify_state_breakpoint_6_0_i4);
MR_def_label(ssdb__modify_state_breakpoint_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		ssdb__modify_state_breakpoint_6_0_i5);
MR_def_label(ssdb__modify_state_breakpoint_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(map__det_update_4_0,
		ssdb__modify_state_breakpoint_6_0_i6);
MR_def_label(ssdb__modify_state_breakpoint_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ssdb__modify_state_breakpoint_6_0_i12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__values_1_0);

MR_BEGIN_MODULE(ssdb_module51)
	MR_init_entry1(ssdb__modify_state_breakpoints_3_0);
	MR_init_label2(ssdb__modify_state_breakpoints_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__modify_state_breakpoints_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_state_breakpoints_3_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 3881 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__modify_state_breakpoints_3_0
{
#line 251 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 3890 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_state_breakpoints_3_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 3903 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__modify_state_breakpoints_3_0_i2);
MR_def_label(ssdb__modify_state_breakpoints_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__modify_state_breakpoint_6_0,
		ssdb__modify_state_breakpoints_3_0_i3);
MR_def_label(ssdb__modify_state_breakpoints_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_state_breakpoints_3_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 3930 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__modify_state_breakpoints_3_0
	X = MR_r1;
{
#line 251 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 3940 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_state_breakpoints_3_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 3952 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module52)
	MR_init_entry1(ssdb__find_breakpoint_with_num_3_0);
	MR_init_label2(ssdb__find_breakpoint_with_num_3_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__find_breakpoint_with_num_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__find_breakpoint_with_num_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(ssdb__find_breakpoint_with_num_3_0_i3);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__find_breakpoint_with_num_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_localtailcall(ssdb__find_breakpoint_with_num_3_0);
MR_def_label(ssdb__find_breakpoint_with_num_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module53)
	MR_init_entry1(ssdb__modify_state_breakpoint_with_num_4_0);
	MR_init_label4(ssdb__modify_state_breakpoint_with_num_4_0,3,4,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__modify_state_breakpoint_with_num_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_state_breakpoint_with_num_4_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4026 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__modify_state_breakpoint_with_num_4_0
{
#line 251 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 4037 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_state_breakpoint_with_num_4_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4050 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__modify_state_breakpoint_with_num_4_0_i3);
MR_def_label(ssdb__modify_state_breakpoint_with_num_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__find_breakpoint_with_num_3_0,
		ssdb__modify_state_breakpoint_with_num_4_0_i4);
MR_def_label(ssdb__modify_state_breakpoint_with_num_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__modify_state_breakpoint_with_num_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ssdb__modify_state_breakpoint_6_0,
		ssdb__modify_state_breakpoint_with_num_4_0_i6);
MR_def_label(ssdb__modify_state_breakpoint_with_num_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_state_breakpoint_with_num_4_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4095 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__modify_state_breakpoint_with_num_4_0
	X = MR_r1;
{
#line 251 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 4105 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_state_breakpoint_with_num_4_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4117 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__modify_state_breakpoint_with_num_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("No breakpoint found.\n", 21);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__delete_3_0);
MR_decl_entry(io__format_4_0);

MR_BEGIN_MODULE(ssdb_module54)
	MR_init_entry1(ssdb__delete_breakpoint_with_num_3_0);
	MR_init_label5(ssdb__delete_breakpoint_with_num_3_0,3,4,6,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__delete_breakpoint_with_num_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_with_num_3_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4158 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_with_num_3_0
{
#line 251 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 4167 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_with_num_3_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4180 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__delete_breakpoint_with_num_3_0_i3);
MR_def_label(ssdb__delete_breakpoint_with_num_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__find_breakpoint_with_num_3_0,
		ssdb__delete_breakpoint_with_num_3_0_i4);
MR_def_label(ssdb__delete_breakpoint_with_num_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__delete_breakpoint_with_num_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		ssdb__delete_breakpoint_with_num_3_0_i6);
MR_def_label(ssdb__delete_breakpoint_with_num_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__delete_3_0,
		ssdb__delete_breakpoint_with_num_3_0_i7);
MR_def_label(ssdb__delete_breakpoint_with_num_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_with_num_3_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4232 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_with_num_3_0
	X = MR_r1;
{
#line 251 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 4242 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_with_num_3_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4254 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("Breakpoint on %s.%s deleted\n", 28);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__format_4_0);
	}
MR_def_label(ssdb__delete_breakpoint_with_num_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("No breakpoint found.\n", 21);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module55)
	MR_init_entry1(ssdb__exit_debugger_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__exit_debugger_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__ssdb__exit_debugger_2_0
	MR_OBTAIN_GLOBAL_LOCK("exit_debugger");
{
#line 1491 "ssdb.m"

    exit(0);
    IO = IO0;
;}
#line 4309 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("exit_debugger");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module56)
	MR_init_entry1(ssdb__print_frame_info_3_0);
	MR_init_label8(ssdb__print_frame_info_3_0,2,3,4,5,6,7,8,9)
	MR_init_label2(ssdb__print_frame_info_3_0,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_frame_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("       ", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_frame_info_3_0_i2);
MR_def_label(ssdb__print_frame_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_frame_info_3_0_i3);
MR_def_label(ssdb__print_frame_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_frame_info_3_0_i4);
MR_def_label(ssdb__print_frame_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_frame_info_3_0_i5);
MR_def_label(ssdb__print_frame_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_frame_info_3_0_i6);
MR_def_label(ssdb__print_frame_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_frame_info_3_0_i7);
MR_def_label(ssdb__print_frame_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_frame_info_3_0_i8);
MR_def_label(ssdb__print_frame_info_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_frame_info_3_0_i9);
MR_def_label(ssdb__print_frame_info_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_frame_info_3_0_i10);
MR_def_label(ssdb__print_frame_info_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_frame_info_3_0_i11);
MR_def_label(ssdb__print_frame_info_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module57)
	MR_init_entry1(ssdb__print_help_2_0);
	MR_init_label8(ssdb__print_help_2_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ssdb__print_help_2_0,10,11,12,13,14,15,16,17)
	MR_init_label7(ssdb__print_help_2_0,18,19,20,21,22,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_help_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__nl_2_0,
		ssdb__print_help_2_0_i2);
MR_def_label(ssdb__print_help_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nPrincipal Commands", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i3);
MR_def_label(ssdb__print_help_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n------------------", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i4);
MR_def_label(ssdb__print_help_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ssdb__print_help_2_0_i5);
MR_def_label(ssdb__print_help_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<step> or <s> or < >", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i6);
MR_def_label(ssdb__print_help_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<next> or <n>", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i7);
MR_def_label(ssdb__print_help_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<continue> or <c>", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i8);
MR_def_label(ssdb__print_help_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<finish> or <f>", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i9);
MR_def_label(ssdb__print_help_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<retry> or <r>", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i10);
MR_def_label(ssdb__print_help_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<break X Y> or <b X Y>", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i11);
MR_def_label(ssdb__print_help_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<break info> or <b info>", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i12);
MR_def_label(ssdb__print_help_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<enable / disable / delete *>", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i13);
MR_def_label(ssdb__print_help_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<enable / disable / delete N>", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i14);
MR_def_label(ssdb__print_help_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<print> or <p>", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i15);
MR_def_label(ssdb__print_help_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<stack> or <st>", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i16);
MR_def_label(ssdb__print_help_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<up> or <u>", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i17);
MR_def_label(ssdb__print_help_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<down> or <d>", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i18);
MR_def_label(ssdb__print_help_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<goto N> or <g N>", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i19);
MR_def_label(ssdb__print_help_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<help> or <h>", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i20);
MR_def_label(ssdb__print_help_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n<exit>", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i21);
MR_def_label(ssdb__print_help_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ssdb__print_help_2_0_i22);
MR_def_label(ssdb__print_help_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ssdb__print_help_2_0_i23);
MR_def_label(ssdb__print_help_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nConsult the file : /ssdb/SSDB_COMMAND_HELP.txt for details", 59);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_help_2_0_i24);
MR_def_label(ssdb__print_help_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(ssdb_module58)
	MR_init_entry1(ssdb__print_vars_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(list__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module59)
	MR_init_entry1(ssdb__print_stack_frame_5_0);
	MR_init_label5(ssdb__print_stack_frame_5_0,4,3,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_stack_frame_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__print_stack_frame_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 32;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		ssdb__print_stack_frame_5_0_i4);
MR_def_label(ssdb__print_stack_frame_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const(" %i \t%s.%s(\n", 12);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__print_stack_frame_5_0_i6);
MR_def_label(ssdb__print_stack_frame_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 42;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		ssdb__print_stack_frame_5_0_i5);
MR_def_label(ssdb__print_stack_frame_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const(" %i \t%s.%s(\n", 12);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__print_stack_frame_5_0_i6);
MR_def_label(ssdb__print_stack_frame_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_ctfield(0, MR_sv(2), 4);
	MR_np_call_localret_ent(list__foldl_4_0,
		ssdb__print_stack_frame_5_0_i7);
MR_def_label(ssdb__print_stack_frame_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("   )\n", 5);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__is_empty_1_0);

MR_BEGIN_MODULE(ssdb_module60)
	MR_init_entry1(ssdb__print_frames_list_5_0);
	MR_init_label8(ssdb__print_frames_list_5_0,27,5,7,10,11,12,13,8)
	MR_init_label2(ssdb__print_frames_list_5_0,14,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_frames_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ssdb__print_frames_list_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(stack__is_empty_1_0,
		ssdb__print_frames_list_5_0_i5);
MR_def_label(ssdb__print_frames_list_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ssdb__print_frames_list_5_0_i30);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(stack__pop_det_3_0,
		ssdb__print_frames_list_5_0_i7);
MR_def_label(ssdb__print_frames_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ssdb__print_frames_list_5_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 42;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		ssdb__print_frames_list_5_0_i10);
MR_def_label(ssdb__print_frames_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const(" %i \t%s.%s(\n", 12);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__print_frames_list_5_0_i11);
MR_def_label(ssdb__print_frames_list_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_ctfield(0, MR_sv(2), 4);
	MR_np_call_localret_ent(list__foldl_4_0,
		ssdb__print_frames_list_5_0_i12);
MR_def_label(ssdb__print_frames_list_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("   )\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_frames_list_5_0_i13);
MR_def_label(ssdb__print_frames_list_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = (MR_Integer) -1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ssdb__print_frames_list_5_0_i27);
MR_def_label(ssdb__print_frames_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__print_stack_frame_5_0,
		ssdb__print_frames_list_5_0_i14);
MR_def_label(ssdb__print_frames_list_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ssdb__print_frames_list_5_0_i27);
MR_def_label(ssdb__print_frames_list_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module61)
	MR_init_entry1(ssdb__print_breakpoints_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_breakpoints_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_np_tailcall_ent(list__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__io__stdin_stream_0_0);
MR_decl_entry(io__read_line_as_string_4_0);
MR_decl_entry(fn__string__chomp_1_0);
MR_decl_entry(fn__string__words_1_0);
MR_decl_entry(map__contains_2_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(string__to_int_2_0);
MR_decl_entry(fn__stack__depth_1_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(assoc_list__search_3_0);
MR_decl_entry(io__stdin_stream_3_0);
MR_decl_entry(io__stdout_stream_3_0);
MR_decl_entry(mdb__browser_info__init_persistent_state_1_0);
MR_decl_entry(fn__mdb__browser_term__univ_to_browser_term_1_0);
MR_decl_entry(mdb__browse__browse_browser_term_no_modes_8_0);

MR_BEGIN_MODULE(ssdb_module62)
	MR_init_entry1(ssdb__prompt_6_0);
	MR_init_label8(ssdb__prompt_6_0,1113,2,3,4,377,7,8,9)
	MR_init_label8(ssdb__prompt_6_0,14,10,22,21,24,18,31,30)
	MR_init_label8(ssdb__prompt_6_0,27,38,42,41,35,50,49,59)
	MR_init_label8(ssdb__prompt_6_0,56,68,70,71,73,72,77,78)
	MR_init_label8(ssdb__prompt_6_0,79,80,81,62,89,88,92,91)
	MR_init_label8(ssdb__prompt_6_0,85,105,108,110,112,111,107,100)
	MR_init_label8(ssdb__prompt_6_0,123,122,126,125,119,136,135,139)
	MR_init_label8(ssdb__prompt_6_0,140,141,138,132,149,148,173,174)
	MR_init_label8(ssdb__prompt_6_0,175,176,178,181,182,183,146,190)
	MR_init_label8(ssdb__prompt_6_0,193,195,212,213,214,217,219,221)
	MR_init_label8(ssdb__prompt_6_0,224,225,226,227,196,192,185,239)
	MR_init_label8(ssdb__prompt_6_0,243,242,234,251,250,256,257,248)
	MR_init_label8(ssdb__prompt_6_0,260,275,274,268,282,297,296,290)
	MR_init_label8(ssdb__prompt_6_0,310,311,304,321,320,314,334,335)
	MR_init_label8(ssdb__prompt_6_0,336,338,339,340,341,333,328,347)
	MR_init_label1(ssdb__prompt_6_0,352)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__prompt_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ssdb__prompt_6_0,1113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ssdb> ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i2);
MR_def_label(ssdb__prompt_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__io__stdin_stream_0_0,
		ssdb__prompt_6_0_i3);
MR_def_label(ssdb__prompt_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__read_line_as_string_4_0,
		ssdb__prompt_6_0_i4);
MR_def_label(ssdb__prompt_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i7);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i377);
	}
	MR_r1 = (MR_Word) MR_string_const("eof from read_line_as_string", 28);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
	}
MR_def_label(ssdb__prompt_6_0,377)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("error from read_line_as_string", 30);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(ssdb__prompt_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__chomp_1_0,
		ssdb__prompt_6_0_i8);
MR_def_label(ssdb__prompt_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__words_1_0,
		ssdb__prompt_6_0_i9);
MR_def_label(ssdb__prompt_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i10);
	}
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("h", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i14);
	}
	MR_tempr1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("help", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	}
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i18);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("p", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i22);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(ssdb__prompt_6_0_i21);
	}
MR_def_label(ssdb__prompt_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("print", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i18);
	}
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	}
MR_def_label(ssdb__prompt_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__prompt_6_0_i24);
MR_def_label(ssdb__prompt_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_np_call_localret_ent(ssdb__print_vars_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r5 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i27);
	}
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("st", 2)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i31);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_GOTO_LAB(ssdb__prompt_6_0_i30);
	}
MR_def_label(ssdb__prompt_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("stack", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i27);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(ssdb__prompt_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__print_frames_list_5_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i35);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("n", 1)) == 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i38);
	}
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("next", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i35);
	}
	}
MR_def_label(ssdb__prompt_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i42);
	}
	if (MR_INT_EQ(MR_sv(1),3)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i42);
	}
	if (MR_INT_NE(MR_sv(1),5)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i41);
	}
MR_def_label(ssdb__prompt_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(8);
MR_def_label(ssdb__prompt_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Impossible at exit or fail port\n", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i50);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i49);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("s", 1)) == 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i50);
	}
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("step", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i49);
	}
	}
MR_def_label(ssdb__prompt_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(ssdb__prompt_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i56);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i56);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("c", 1)) == 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i59);
	}
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("continue", 8)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i56);
	}
	}
MR_def_label(ssdb__prompt_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_decr_sp_and_return(8);
MR_def_label(ssdb__prompt_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i62);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i62);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i62);
	}
	MR_r4 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i62);
	}
	MR_r4 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("b", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i68);
	}
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ssdb__get_cur_ssdb_breakpoints_1_0,
		ssdb__prompt_6_0_i70);
MR_def_label(ssdb__prompt_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("break", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i62);
	}
	MR_sv(4) = MR_ctfield(1, MR_r2, 0);
	MR_sv(5) = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ssdb__get_cur_ssdb_breakpoints_1_0,
		ssdb__prompt_6_0_i70);
MR_def_label(ssdb__prompt_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		ssdb__prompt_6_0_i71);
MR_def_label(ssdb__prompt_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__contains_2_0,
		ssdb__prompt_6_0_i73);
MR_def_label(ssdb__prompt_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i72);
	}
	MR_r1 = (MR_Word) MR_string_const("The new breakpoint already exist\n", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__get_cur_ssdb_number_of_breakpoint_1_0,
		ssdb__prompt_6_0_i77);
MR_def_label(ssdb__prompt_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ssdb__prompt_6_0_i78);
MR_def_label(ssdb__prompt_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__prompt_6_0_i79);
MR_def_label(ssdb__prompt_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__print_breakpoints_3_0,
		ssdb__prompt_6_0_i80);
MR_def_label(ssdb__prompt_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_breakpoints_1_0,
		ssdb__prompt_6_0_i81);
MR_def_label(ssdb__prompt_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_number_of_breakpoint_1_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i85);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i85);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("f", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i89);
	}
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(ssdb__prompt_6_0_i88);
	}
MR_def_label(ssdb__prompt_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("finish", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i85);
	}
	MR_r2 = MR_sv(2);
MR_def_label(ssdb__prompt_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i92);
	}
	if (MR_INT_EQ(MR_sv(1),3)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i92);
	}
	if (MR_INT_NE(MR_sv(1),5)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i91);
	}
MR_def_label(ssdb__prompt_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(stack__top_det_2_0,
		ssdb__prompt_6_0_i112);
MR_def_label(ssdb__prompt_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("impossible at exit or fail port\n", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i100);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i100);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i100);
	}
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("f", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i105);
	}
	MR_tempr2 = MR_tempr1;
	MR_tempr3 = MR_tempr4;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__prompt_6_0_i108);
MR_def_label(ssdb__prompt_6_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("finish", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i100);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__prompt_6_0_i108);
MR_def_label(ssdb__prompt_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i107);
	}
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(ssdb__get_cur_ssdb_depth_1_0,
		ssdb__prompt_6_0_i110);
MR_def_label(ssdb__prompt_6_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(4),0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i111);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	if (((MR_Integer) MR_sv(4) > (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i111);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__prompt_6_0_i112);
MR_def_label(ssdb__prompt_6_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ssdb__prompt_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("The number must be between 1 and %i\n", 36);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The number must be an integer\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i119);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i119);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("d", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i123);
	}
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(ssdb__prompt_6_0_i122);
	}
MR_def_label(ssdb__prompt_6_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("down", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i119);
	}
	MR_r2 = MR_sv(2);
MR_def_label(ssdb__prompt_6_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i125);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__prompt_6_0_i126);
MR_def_label(ssdb__prompt_6_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__print_frame_info_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("Impossible to go down\n", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i132);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i132);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("u", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i136);
	}
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(ssdb__prompt_6_0_i135);
	}
MR_def_label(ssdb__prompt_6_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("up", 2)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i132);
	}
	MR_r2 = MR_sv(2);
MR_def_label(ssdb__prompt_6_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		ssdb__prompt_6_0_i139);
MR_def_label(ssdb__prompt_6_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i138);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__prompt_6_0_i140);
MR_def_label(ssdb__prompt_6_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__print_frame_info_3_0,
		ssdb__prompt_6_0_i141);
MR_def_label(ssdb__prompt_6_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ssdb__prompt_6_0_i1113);
MR_def_label(ssdb__prompt_6_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Impossible to go up\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i146);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i149);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("r", 1)) == 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i148);
	}
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("retry", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i146);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(ssdb__prompt_6_0_i178) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i181) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i181) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i178) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i173) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i178) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i181));
	}
MR_def_label(ssdb__prompt_6_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i146);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("0", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i146);
	}
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("r", 1)) == 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i148);
	}
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("retry", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i146);
	}
	}
MR_def_label(ssdb__prompt_6_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(ssdb__prompt_6_0_i178) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i181) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i181) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i178) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i173) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i178) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i181));
MR_def_label(ssdb__prompt_6_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(stack__top_det_2_0,
		ssdb__prompt_6_0_i174);
MR_def_label(ssdb__prompt_6_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(ssdb__set_debugger_state_1_0,
		ssdb__prompt_6_0_i175);
MR_def_label(ssdb__prompt_6_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_event_number_1_0,
		ssdb__prompt_6_0_i176);
MR_def_label(ssdb__prompt_6_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_csn_1_0,
		ssdb__prompt_6_0_i227);
MR_def_label(ssdb__prompt_6_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Impossible at call or redo port\n", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(stack__top_det_2_0,
		ssdb__prompt_6_0_i182);
MR_def_label(ssdb__prompt_6_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_ctfield(0, MR_r1, 0) - (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_event_number_1_0,
		ssdb__prompt_6_0_i183);
MR_def_label(ssdb__prompt_6_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_csn_1_0,
		ssdb__prompt_6_0_i227);
MR_def_label(ssdb__prompt_6_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i185);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i185);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i185);
	}
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("r", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i190);
	}
	MR_tempr2 = MR_tempr1;
	MR_tempr3 = MR_tempr4;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__prompt_6_0_i193);
MR_def_label(ssdb__prompt_6_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("retry", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i185);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__prompt_6_0_i193);
MR_def_label(ssdb__prompt_6_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i192);
	}
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(ssdb__get_cur_ssdb_depth_1_0,
		ssdb__prompt_6_0_i195);
MR_def_label(ssdb__prompt_6_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(4),0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i196);
	}
	MR_r3 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	if (((MR_Integer) MR_sv(4) > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i196);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(ssdb__prompt_6_0_i221) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i224) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i224) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i221) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i212) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i221) MR_AND
		MR_LABEL_AP(ssdb__prompt_6_0_i224));
MR_def_label(ssdb__prompt_6_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__prompt_6_0_i213);
MR_def_label(ssdb__prompt_6_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(ssdb__get_cur_ssdb_shadow_stack_nondet_1_0,
		ssdb__prompt_6_0_i214);
MR_def_label(ssdb__prompt_6_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__csn_is_in_stack_2_0,
		ssdb__prompt_6_0_i217);
MR_def_label(ssdb__prompt_6_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i227);
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(ssdb__set_debugger_state_1_0,
		ssdb__prompt_6_0_i219);
MR_def_label(ssdb__prompt_6_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ssdb__prompt_6_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Impossible at call or redo \n                                port\n", 65);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__prompt_6_0_i225);
MR_def_label(ssdb__prompt_6_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_ctfield(0, MR_r1, 0) - (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_event_number_1_0,
		ssdb__prompt_6_0_i226);
MR_def_label(ssdb__prompt_6_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_csn_1_0,
		ssdb__prompt_6_0_i227);
MR_def_label(ssdb__prompt_6_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(ssdb__prompt_6_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("The number must be between 1 and %i\n", 36);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The number must be an integer\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i234);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i234);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i234);
	}
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("g", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i239);
	}
	MR_tempr2 = MR_tempr1;
	MR_tempr3 = MR_tempr4;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__prompt_6_0_i243);
MR_def_label(ssdb__prompt_6_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("goto", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i234);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__prompt_6_0_i243);
MR_def_label(ssdb__prompt_6_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i242);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ssdb__prompt_6_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The number must be an integer\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i248);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("b", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i251);
	}
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_GOTO_LAB(ssdb__prompt_6_0_i250);
	}
MR_def_label(ssdb__prompt_6_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("break", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i248);
	}
	MR_r2 = MR_ctfield(1, MR_r1, 1);
MR_def_label(ssdb__prompt_6_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i248);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i248);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("info", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i248);
	}
	}
	MR_np_call_localret_ent(ssdb__get_cur_ssdb_breakpoints_1_0,
		ssdb__prompt_6_0_i256);
MR_def_label(ssdb__prompt_6_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__prompt_6_0_i257);
MR_def_label(ssdb__prompt_6_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__print_breakpoints_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i260);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("disable", 7)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i260);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i260);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i260);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i260);
	}
	MR_r1 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ssdb__modify_state_breakpoints_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i268);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("disable", 7)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i268);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i268);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i268);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__prompt_6_0_i275);
MR_def_label(ssdb__prompt_6_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i274);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(ssdb__modify_state_breakpoint_with_num_4_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The number must be an integer\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i282);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("enable", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i282);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i282);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i282);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i282);
	}
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ssdb__modify_state_breakpoints_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i290);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("enable", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i290);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i290);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i290);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__prompt_6_0_i297);
MR_def_label(ssdb__prompt_6_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i296);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__modify_state_breakpoint_with_num_4_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The number must be an integer\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i304);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("delete", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i304);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i304);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i304);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i304);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ssdb__prompt_6_0_i310);
MR_def_label(ssdb__prompt_6_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_breakpoints_1_0,
		ssdb__prompt_6_0_i311);
MR_def_label(ssdb__prompt_6_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("All breakpoints have been deleted.\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,304)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i314);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("delete", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i314);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i314);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i314);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__prompt_6_0_i321);
MR_def_label(ssdb__prompt_6_0,321)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i320);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__delete_breakpoint_with_num_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The number must be an integer\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i328);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("browse", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i328);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i328);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i328);
	}
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__prompt_6_0_i334);
MR_def_label(ssdb__prompt_6_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_np_call_localret_ent(ssdb__list_var_value_to_assoc_list_2_0,
		ssdb__prompt_6_0_i335);
MR_def_label(ssdb__prompt_6_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(assoc_list__search_3_0,
		ssdb__prompt_6_0_i336);
MR_def_label(ssdb__prompt_6_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i333);
	}
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(io__stdin_stream_3_0,
		ssdb__prompt_6_0_i338);
MR_def_label(ssdb__prompt_6_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		ssdb__prompt_6_0_i339);
MR_def_label(ssdb__prompt_6_0,339)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(mdb__browser_info__init_persistent_state_1_0,
		ssdb__prompt_6_0_i340);
MR_def_label(ssdb__prompt_6_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdb__browser_term__univ_to_browser_term_1_0,
		ssdb__prompt_6_0_i341);
MR_def_label(ssdb__prompt_6_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(mdb__browse__browse_browser_term_no_modes_8_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nError in browse command\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i347);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("exit", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i347);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__prompt_6_0_i347);
	}
	}
	MR_np_call_localret_ent(ssdb__exit_debugger_2_0,
		ssdb__prompt_6_0_i50);
MR_def_label(ssdb__prompt_6_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("huh?\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__prompt_6_0_i352);
MR_def_label(ssdb__prompt_6_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ssdb__prompt_6_0_i1113);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module63)
	MR_init_entry1(ssdb__print_event_info_7_0);
	MR_init_label8(ssdb__print_event_info_7_0,2,3,4,5,6,7,8,16)
	MR_init_label8(ssdb__print_event_info_7_0,18,20,22,23,24,25,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_event_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("       ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i2);
MR_def_label(ssdb__print_event_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_event_info_7_0_i3);
MR_def_label(ssdb__print_event_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i4);
MR_def_label(ssdb__print_event_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_event_info_7_0_i5);
MR_def_label(ssdb__print_event_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i6);
MR_def_label(ssdb__print_event_info_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_event_info_7_0_i7);
MR_def_label(ssdb__print_event_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i8);
MR_def_label(ssdb__print_event_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(ssdb__print_event_info_7_0_i16) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_7_0_i18) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_7_0_i22) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_7_0_i16) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_7_0_i18) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_7_0_i20) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_7_0_i22));
MR_def_label(ssdb__print_event_info_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("CALL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i23);
MR_def_label(ssdb__print_event_info_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("EXIT", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i23);
MR_def_label(ssdb__print_event_info_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("REDO", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i23);
MR_def_label(ssdb__print_event_info_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("FAIL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i23);
MR_def_label(ssdb__print_event_info_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i24);
MR_def_label(ssdb__print_event_info_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i25);
MR_def_label(ssdb__print_event_info_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i26);
MR_def_label(ssdb__print_event_info_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i27);
MR_def_label(ssdb__print_event_info_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module64)
	MR_init_entry1(ssdb__invent_io_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__invent_io_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__invent_io_1_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module65)
	MR_init_entry1(ssdb__consume_io_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__consume_io_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__consume_io_1_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__push_3_0);

MR_BEGIN_MODULE(ssdb_module66)
	MR_init_entry1(ssdb__handle_event_call_2_0);
	MR_init_label7(ssdb__handle_event_call_2_0,5,6,7,10,11,29,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_call_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 6326 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 263 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 6335 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 6348 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_2_0_i29);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ssdb__handle_event_call_2_0_i29);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 6368 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 241 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 6379 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 6392 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 6404 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_tempr2;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 6415 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 6427 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 6439 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 244 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_csn;;}
#line 6448 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 6461 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 6473 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_tempr3;
{
#line 244 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 6484 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 6496 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 6508 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 6517 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 6530 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		ssdb__handle_event_call_2_0_i5);
MR_def_label(ssdb__handle_event_call_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 6553 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_tempr1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 6566 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 6578 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 6590 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 6599 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 6612 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	}
	MR_np_call_localret_ent(stack__push_3_0,
		ssdb__handle_event_call_2_0_i6);
MR_def_label(ssdb__handle_event_call_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 6638 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_r1;
{
#line 257 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 6648 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 6660 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_6_0,
		ssdb__handle_event_call_2_0_i7);
MR_def_label(ssdb__handle_event_call_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_2_0_i28);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		ssdb__handle_event_call_2_0_i10);
MR_def_label(ssdb__handle_event_call_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__prompt_6_0,
		ssdb__handle_event_call_2_0_i11);
MR_def_label(ssdb__handle_event_call_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__what_next_stop_4_0);
MR_def_label(ssdb__handle_event_call_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(ssdb__handle_event_call_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module67)
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_shadow_stack_nondet_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_cur_ssdb_shadow_stack_nondet_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_cur_ssdb_shadow_stack_nondet_1_0
	X = MR_r1;
{
#line 260 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet= X;;}
#line 6735 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module68)
	MR_init_entry1(ssdb__handle_event_call_nondet_2_0);
	MR_init_label8(ssdb__handle_event_call_nondet_2_0,5,6,7,8,11,12,30,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_call_nondet_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 6766 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 263 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 6775 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 6788 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_nondet_2_0_i30);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ssdb__handle_event_call_nondet_2_0_i30);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 6808 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 241 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 6819 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 6832 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 6844 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_tempr2;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 6855 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 6867 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 6879 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 244 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_csn;;}
#line 6888 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 6901 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 6913 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_tempr3;
{
#line 244 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 6924 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 6936 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 6948 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 6957 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 6970 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		ssdb__handle_event_call_nondet_2_0_i5);
MR_def_label(ssdb__handle_event_call_nondet_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 6993 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_tempr1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 7006 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 7018 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(2);
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7037 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 7046 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7059 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	}
	MR_np_call_localret_ent(stack__push_3_0,
		ssdb__handle_event_call_nondet_2_0_i6);
MR_def_label(ssdb__handle_event_call_nondet_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7079 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_r1;
{
#line 257 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 7089 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7101 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 7113 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 260 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 7122 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 7135 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(stack__push_3_0,
		ssdb__handle_event_call_nondet_2_0_i7);
MR_def_label(ssdb__handle_event_call_nondet_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 7154 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_r1;
{
#line 260 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet= X;;}
#line 7164 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 7176 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_6_0,
		ssdb__handle_event_call_nondet_2_0_i8);
MR_def_label(ssdb__handle_event_call_nondet_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_nondet_2_0_i29);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		ssdb__handle_event_call_nondet_2_0_i11);
MR_def_label(ssdb__handle_event_call_nondet_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__prompt_6_0,
		ssdb__handle_event_call_nondet_2_0_i12);
MR_def_label(ssdb__handle_event_call_nondet_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__what_next_stop_4_0);
MR_def_label(ssdb__handle_event_call_nondet_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(ssdb__handle_event_call_nondet_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module69)
	MR_init_entry1(ssdb__handle_event_exit_3_0);
	MR_init_label8(ssdb__handle_event_exit_3_0,18,3,5,6,7,8,10,12)
	MR_init_label7(ssdb__handle_event_exit_3_0,13,14,11,15,9,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_exit_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 7254 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 263 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 7263 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 7276 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i3);
	}
MR_def_label(ssdb__handle_event_exit_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ssdb__handle_event_exit_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i18);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7302 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 241 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 7313 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7326 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7338 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_tempr2;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 7349 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7361 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 7373 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 7382 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 7395 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7407 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 7416 "ssdb.c"
	MR_tempr3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7429 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(stack__pop_det_3_0,
		ssdb__handle_event_exit_3_0_i5);
MR_def_label(ssdb__handle_event_exit_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	}
	MR_np_call_localret_ent(stack__push_3_0,
		ssdb__handle_event_exit_3_0_i6);
MR_def_label(ssdb__handle_event_exit_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7468 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_r1;
{
#line 257 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 7478 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7490 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7502 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 7511 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7524 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(stack__top_det_2_0,
		ssdb__handle_event_exit_3_0_i7);
MR_def_label(ssdb__handle_event_exit_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_6_0,
		ssdb__handle_event_exit_3_0_i8);
MR_def_label(ssdb__handle_event_exit_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i10);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i9);
MR_def_label(ssdb__handle_event_exit_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i12);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7570 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r7 = ((MR_Integer) MR_ctfield(0, MR_sv(5), 0) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_r7;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 7581 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7593 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 7605 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r7 = ((MR_Integer) MR_ctfield(0, MR_sv(5), 1) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_r7;
{
#line 244 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 7616 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 7628 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r3, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_tfield(2, MR_r3, 0) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i11);
	}
MR_def_label(ssdb__handle_event_exit_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		ssdb__handle_event_exit_3_0_i13);
MR_def_label(ssdb__handle_event_exit_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__prompt_6_0,
		ssdb__handle_event_exit_3_0_i14);
MR_def_label(ssdb__handle_event_exit_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
MR_def_label(ssdb__handle_event_exit_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_4_0,
		ssdb__handle_event_exit_3_0_i15);
MR_def_label(ssdb__handle_event_exit_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
MR_def_label(ssdb__handle_event_exit_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7683 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 7692 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7705 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		ssdb__handle_event_exit_3_0_i16);
MR_def_label(ssdb__handle_event_exit_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 7722 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_tempr1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 7735 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 7747 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(stack__pop_det_3_0,
		ssdb__handle_event_exit_3_0_i17);
MR_def_label(ssdb__handle_event_exit_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7766 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_r2;
{
#line 257 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 7776 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7788 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module70)
	MR_init_entry1(ssdb__handle_event_exit_nondet_2_0);
	MR_init_label8(ssdb__handle_event_exit_nondet_2_0,5,6,7,8,12,13,14,11)
	MR_init_label4(ssdb__handle_event_exit_nondet_2_0,9,16,17,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_exit_nondet_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 7821 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 263 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 7830 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 7843 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i33);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i33);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7863 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 241 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 7874 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7887 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7899 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
	X = MR_tempr2;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 7910 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7922 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 7934 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 7943 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 7956 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7968 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 7977 "ssdb.c"
	MR_tempr3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 7990 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(stack__pop_det_3_0,
		ssdb__handle_event_exit_nondet_2_0_i5);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	}
	MR_np_call_localret_ent(stack__push_3_0,
		ssdb__handle_event_exit_nondet_2_0_i6);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8029 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
	X = MR_r1;
{
#line 257 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 8039 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8051 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8063 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 8072 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8085 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(stack__top_det_2_0,
		ssdb__handle_event_exit_nondet_2_0_i7);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Integer) 4;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_6_0,
		ssdb__handle_event_exit_nondet_2_0_i8);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i9);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i12);
	}
	MR_tag_alloc_heap(MR_r3, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_tfield(2, MR_r3, 0) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i11);
	}
MR_def_label(ssdb__handle_event_exit_nondet_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		ssdb__handle_event_exit_nondet_2_0_i13);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__prompt_6_0,
		ssdb__handle_event_exit_nondet_2_0_i14);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_4_0,
		ssdb__handle_event_exit_nondet_2_0_i9);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8162 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 8171 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8184 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		ssdb__handle_event_exit_nondet_2_0_i16);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 8201 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
	X = MR_tempr1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 8214 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 8226 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(stack__pop_det_3_0,
		ssdb__handle_event_exit_nondet_2_0_i17);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8245 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
	X = MR_r2;
{
#line 257 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 8255 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8267 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(6);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module71)
	MR_init_entry1(ssdb__handle_event_fail_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_fail_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module72)
	MR_init_entry1(ssdb__get_correct_frame_nondet_2_4_0);
	MR_init_label5(ssdb__get_correct_frame_nondet_2_4_0,32,3,2,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_correct_frame_nondet_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ssdb__get_correct_frame_nondet_2_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(stack__is_empty_1_0,
		ssdb__get_correct_frame_nondet_2_4_0_i3);
MR_def_label(ssdb__get_correct_frame_nondet_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__get_correct_frame_nondet_2_4_0_i2);
	}
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__get_correct_frame_nondet_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(stack__pop_det_3_0,
		ssdb__get_correct_frame_nondet_2_4_0_i5);
MR_def_label(ssdb__get_correct_frame_nondet_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 2);
	if ((MR_sv(2) != MR_tempr1)) {
		MR_GOTO_LAB(ssdb__get_correct_frame_nondet_2_4_0_i6);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr5 = MR_sv(1);
	MR_tempr3 = MR_ctfield(0, MR_tempr5, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr3) != 0)) {
		MR_GOTO_LAB(ssdb__get_correct_frame_nondet_2_4_0_i6);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(ssdb__get_correct_frame_nondet_2_4_0_i6);
	}
	MR_r2 = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ssdb__get_correct_frame_nondet_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ssdb__get_correct_frame_nondet_2_4_0_i32);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module73)
	MR_init_entry1(ssdb__handle_event_fail_nondet_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_fail_nondet_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module74)
	MR_init_entry1(ssdb__handle_event_redo_nondet_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_redo_nondet_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module75)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_event_number_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_cur_ssdb_event_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_cur_ssdb_event_number_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_event_number");
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_event_number_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8432 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_event_number");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module76)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_event_number_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_cur_ssdb_event_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_event_number");
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_event_number_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8463 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_event_number");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 8476 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
	X = (MR_Integer) 0;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 8486 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 8498 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module77)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_csn_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_cur_ssdb_csn_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_cur_ssdb_csn_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_csn");
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_csn_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8528 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_csn");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module78)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_csn_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_cur_ssdb_csn_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_csn");
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_csn_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8559 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_csn");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 8572 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
	X = (MR_Integer) 0;
{
#line 244 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 8582 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 8594 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module79)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_depth_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_cur_ssdb_depth_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_cur_ssdb_depth_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_depth");
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_depth_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8624 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_depth");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module80)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_depth_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_cur_ssdb_depth_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_depth_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_depth");
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_depth_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8655 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_depth");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_depth_0_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 8668 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_depth_0_0
	X = (MR_Integer) 0;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 8678 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_depth_0_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 8690 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module81)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_next_stop_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_cur_ssdb_next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_cur_ssdb_next_stop_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_next_stop");
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_next_stop_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8720 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_next_stop");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module82)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_next_stop_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_cur_ssdb_next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_next_stop");
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_next_stop_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8751 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_next_stop");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 8764 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
	X = (MR_Word) MR_tbmkword(0, 0);
{
#line 248 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop= X;;}
#line 8774 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 8786 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module83)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_breakpoints_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_cur_ssdb_breakpoints_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_cur_ssdb_breakpoints_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_breakpoints");
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8816 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_breakpoints");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module84)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0);
	MR_init_label1(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_breakpoints");
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8850 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_breakpoints");
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0_i2);
MR_def_label(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 8869 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0
	X = MR_r1;
{
#line 251 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 8879 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0
{
#line 251 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 8891 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module85)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_number_of_breakpoint_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_cur_ssdb_number_of_breakpoint_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_cur_ssdb_number_of_breakpoint_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_number_of_breakpoint");
{
#line 254 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8921 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_number_of_breakpoint");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module86)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_number_of_breakpoint");
{
#line 254 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8952 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_number_of_breakpoint");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0
{
#line 254 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 8965 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0
	X = (MR_Integer) 0;
{
#line 254 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_number_of_breakpoint= X;;}
#line 8975 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0
{
#line 254 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 8987 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module87)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_shadow_stack_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_cur_ssdb_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_cur_ssdb_shadow_stack_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_shadow_stack");
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock, MR_MUTEX_ATTR);
#endif
;}
#line 9017 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_shadow_stack");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__stack__init_0_0);

MR_BEGIN_MODULE(ssdb_module88)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0);
	MR_init_label1(ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_shadow_stack");
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock, MR_MUTEX_ATTR);
#endif
;}
#line 9052 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_shadow_stack");
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(fn__stack__init_0_0,
		ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0_i2);
MR_def_label(ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9070 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0
	X = MR_r1;
{
#line 257 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 9080 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9092 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module89)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_shadow_stack_nondet");
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock, MR_MUTEX_ATTR);
#endif
;}
#line 9122 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_shadow_stack_nondet");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module90)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0);
	MR_init_label1(ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_shadow_stack_nondet");
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock, MR_MUTEX_ATTR);
#endif
;}
#line 9156 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_shadow_stack_nondet");
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(fn__stack__init_0_0,
		ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0_i2);
MR_def_label(ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 9174 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0
	X = MR_r1;
{
#line 260 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet= X;;}
#line 9184 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 9196 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module91)
	MR_init_entry1(ssdb__pre_initialise_mutable_debugger_state_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_debugger_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_debugger_state_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_debugger_state");
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_debugger_state_lock, MR_MUTEX_ATTR);
#endif
;}
#line 9226 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_debugger_state");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__get_environment_var_4_0);

MR_BEGIN_MODULE(ssdb_module92)
	MR_init_entry1(ssdb__initialise_mutable_debugger_state_0_0);
	MR_init_label3(ssdb__initialise_mutable_debugger_state_0_0,2,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_debugger_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_debugger_state");
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_debugger_state_lock, MR_MUTEX_ATTR);
#endif
;}
#line 9261 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_debugger_state");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("SSDB", 4);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		ssdb__initialise_mutable_debugger_state_0_0_i2);
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__initialise_mutable_debugger_state_0_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(ssdb__initialise_mutable_debugger_state_0_0_i3);
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 9297 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
	X = MR_r1;
{
#line 263 "ssdb.m"
ssdb__mutable_variable_debugger_state= X;;}
#line 9307 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 9319 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__flush_output_2_0);
MR_decl_entry(fn__pprint__to_doc_1_0);
MR_decl_entry(pprint__write_4_0);

MR_BEGIN_MODULE(ssdb_module93)
	MR_init_entry1(ssdb__print_var_3_0);
	MR_init_label8(ssdb__print_var_3_0,25,26,27,28,29,30,15,16)
	MR_init_label8(ssdb__print_var_3_0,17,18,19,20,21,22,4,5)
	MR_init_label8(ssdb__print_var_3_0,6,7,8,9,10,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ssdb__print_var_3_0_i4);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ssdb__print_var_3_0_i15);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Integer) 9;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		ssdb__print_var_3_0_i25);
MR_def_label(ssdb__print_var_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i26);
MR_def_label(ssdb__print_var_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i27);
MR_def_label(ssdb__print_var_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_var_3_0_i28);
MR_def_label(ssdb__print_var_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t=\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i29);
MR_def_label(ssdb__print_var_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i30);
MR_def_label(ssdb__print_var_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(ssdb__print_var_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 0);
	MR_r1 = (MR_Integer) 9;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		ssdb__print_var_3_0_i16);
MR_def_label(ssdb__print_var_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i17);
MR_def_label(ssdb__print_var_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\t_\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i18);
MR_def_label(ssdb__print_var_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("=\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i19);
MR_def_label(ssdb__print_var_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		ssdb__print_var_3_0_i20);
MR_def_label(ssdb__print_var_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__pprint__to_doc_1_0,
		ssdb__print_var_3_0_i21);
MR_def_label(ssdb__print_var_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Integer) 80;
	MR_np_call_localret_ent(pprint__write_4_0,
		ssdb__print_var_3_0_i22);
MR_def_label(ssdb__print_var_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ssdb__print_var_3_0_i13);
MR_def_label(ssdb__print_var_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Integer) 9;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		ssdb__print_var_3_0_i5);
MR_def_label(ssdb__print_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i6);
MR_def_label(ssdb__print_var_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i7);
MR_def_label(ssdb__print_var_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_var_3_0_i8);
MR_def_label(ssdb__print_var_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t=\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i9);
MR_def_label(ssdb__print_var_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		ssdb__print_var_3_0_i10);
MR_def_label(ssdb__print_var_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__pprint__to_doc_1_0,
		ssdb__print_var_3_0_i11);
MR_def_label(ssdb__print_var_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Integer) 80;
	MR_np_call_localret_ent(pprint__write_4_0,
		ssdb__print_var_3_0_i12);
MR_def_label(ssdb__print_var_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ssdb__print_var_3_0_i13);
MR_def_label(ssdb__print_var_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__flush_output_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module94)
	MR_init_entry1(__Unify___ssdb__bp_state_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__bp_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ssdb_module95)
	MR_init_entry1(__Compare___ssdb__bp_state_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__bp_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module96)
	MR_init_entry1(__Unify___ssdb__breakpoint_0_0);
	MR_init_label2(__Unify___ssdb__breakpoint_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__breakpoint_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__breakpoint_0_0_i4);
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
		MR_GOTO_LAB(__Unify___ssdb__breakpoint_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__breakpoint_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__breakpoint_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__breakpoint_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__breakpoint_0_0,1)
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

MR_BEGIN_MODULE(ssdb_module97)
	MR_init_entry1(__Compare___ssdb__breakpoint_0_0);
	MR_init_label6(__Compare___ssdb__breakpoint_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__breakpoint_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ssdb__breakpoint_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ssdb__breakpoint_0_0_i2);
MR_def_label(__Compare___ssdb__breakpoint_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ssdb__breakpoint_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__breakpoint_0_0_i5);
MR_def_label(__Compare___ssdb__breakpoint_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__breakpoint_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ssdb__breakpoint_0_0_i9);
MR_def_label(__Compare___ssdb__breakpoint_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__breakpoint_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ssdb__breakpoint_0_0_i13);
MR_def_label(__Compare___ssdb__breakpoint_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__breakpoint_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__breakpoint_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ssdb_module98)
	MR_init_entry1(__Unify___ssdb__cur_ssdb_breakpoints_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__cur_ssdb_breakpoints_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ssdb_module99)
	MR_init_entry1(__Compare___ssdb__cur_ssdb_breakpoints_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__cur_ssdb_breakpoints_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module100)
	MR_init_entry1(__Unify___ssdb__cur_ssdb_next_stop_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__cur_ssdb_next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ssdb__next_stop_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module101)
	MR_init_entry1(__Compare___ssdb__cur_ssdb_next_stop_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__cur_ssdb_next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___ssdb__next_stop_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ssdb_module102)
	MR_init_entry1(__Unify___ssdb__cur_ssdb_shadow_stack_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__cur_ssdb_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
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

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ssdb_module103)
	MR_init_entry1(__Compare___ssdb__cur_ssdb_shadow_stack_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__cur_ssdb_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
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


MR_BEGIN_MODULE(ssdb_module104)
	MR_init_entry1(__Unify___ssdb__cur_ssdb_shadow_stack_nondet_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__cur_ssdb_shadow_stack_nondet_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
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


MR_BEGIN_MODULE(ssdb_module105)
	MR_init_entry1(__Compare___ssdb__cur_ssdb_shadow_stack_nondet_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__cur_ssdb_shadow_stack_nondet_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
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


MR_BEGIN_MODULE(ssdb_module106)
	MR_init_entry1(__Unify___ssdb__debugger_state_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__debugger_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module107)
	MR_init_entry1(__Compare___ssdb__debugger_state_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__debugger_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module108)
	MR_init_entry1(__Unify___ssdb__list_var_value_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ssdb__list_var_value_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
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


MR_BEGIN_MODULE(ssdb_module109)
	MR_init_entry1(__Compare___ssdb__list_var_value_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ssdb__list_var_value_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
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


MR_BEGIN_MODULE(ssdb_module110)
	MR_init_entry1(__Unify___ssdb__next_stop_0_0);
	MR_init_label7(__Unify___ssdb__next_stop_0_0,6,8,10,12,13,31,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i31);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___ssdb__next_stop_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___ssdb__next_stop_0_0_i8) MR_AND
		MR_LABEL_AP(__Unify___ssdb__next_stop_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___ssdb__next_stop_0_0_i12));
MR_def_label(__Unify___ssdb__next_stop_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__next_stop_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__next_stop_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_r1 = MR_ctfield(2, MR_tempr4, 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__next_stop_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i13);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = MR_ctfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__next_stop_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__next_stop_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__next_stop_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module111)
	MR_init_entry1(__Compare___ssdb__next_stop_0_0);
	MR_init_label8(__Compare___ssdb__next_stop_0_0,6,10,77,14,7,18,22,137)
	MR_init_label8(__Compare___ssdb__next_stop_0_0,24,27,29,34,37,40,42,49)
	MR_init_label8(__Compare___ssdb__next_stop_0_0,53,57,60,50,67,71,91,72)
	MR_init_label1(__Compare___ssdb__next_stop_0_0,74)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i77);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i24) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i34) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i49));
MR_def_label(__Compare___ssdb__next_stop_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i7);
	}
	MR_r2 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i137) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i137) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i14));
MR_def_label(__Compare___ssdb__next_stop_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i137);
	}
MR_def_label(__Compare___ssdb__next_stop_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i137);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i18) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i137) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i22));
MR_def_label(__Compare___ssdb__next_stop_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i77);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i137);
	}
MR_def_label(__Compare___ssdb__next_stop_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i27) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i29) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i137) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i137));
MR_def_label(__Compare___ssdb__next_stop_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i137);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i40) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i137));
MR_def_label(__Compare___ssdb__next_stop_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i91);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_r3;
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__next_stop_0_0_i42);
MR_def_label(__Compare___ssdb__next_stop_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i74);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i50);
	}
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i53) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i57));
MR_def_label(__Compare___ssdb__next_stop_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i91);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i137);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__next_stop_0_0_i60);
MR_def_label(__Compare___ssdb__next_stop_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i74);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i67) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i71));
MR_def_label(__Compare___ssdb__next_stop_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i91);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i72);
	}
MR_def_label(__Compare___ssdb__next_stop_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module112)
	MR_init_entry1(__Unify___ssdb__pos_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ssdb__pos_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module113)
	MR_init_entry1(__Compare___ssdb__pos_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ssdb__pos_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module114)
	MR_init_entry1(__Unify___ssdb__ssdb_event_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ssdb__ssdb_event_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module115)
	MR_init_entry1(__Compare___ssdb__ssdb_event_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ssdb__ssdb_event_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module116)
	MR_init_entry1(__Unify___ssdb__ssdb_proc_id_0_0);
	MR_init_label2(__Unify___ssdb__ssdb_proc_id_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ssdb__ssdb_proc_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__ssdb_proc_id_0_0_i4);
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
		MR_GOTO_LAB(__Unify___ssdb__ssdb_proc_id_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_tempr3) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__ssdb_proc_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__ssdb_proc_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module117)
	MR_init_entry1(__Compare___ssdb__ssdb_proc_id_0_0);
	MR_init_label4(__Compare___ssdb__ssdb_proc_id_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ssdb__ssdb_proc_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ssdb__ssdb_proc_id_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ssdb__ssdb_proc_id_0_0_i2);
MR_def_label(__Compare___ssdb__ssdb_proc_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ssdb__ssdb_proc_id_0_0,2)
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
		__Compare___ssdb__ssdb_proc_id_0_0_i5);
MR_def_label(__Compare___ssdb__ssdb_proc_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__ssdb_proc_id_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ssdb__ssdb_proc_id_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module118)
	MR_init_entry1(__Unify___ssdb__ssdb_retry_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ssdb__ssdb_retry_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module119)
	MR_init_entry1(__Compare___ssdb__ssdb_retry_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ssdb__ssdb_retry_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module120)
	MR_init_entry1(__Unify___ssdb__stack_elem_0_0);
	MR_init_label3(__Unify___ssdb__stack_elem_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__stack_elem_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__stack_elem_0_0_i8);
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
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ssdb__stack_elem_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ssdb__stack_elem_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ssdb__stack_elem_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 4);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 4);
	MR_r1 = MR_ctfield(0, MR_tempr3, 3);
	MR_r2 = MR_ctfield(0, MR_tempr4, 3);
	}
	MR_np_call_localret_ent(__Unify___ssdb__ssdb_proc_id_0_0,
		__Unify___ssdb__stack_elem_0_0_i4);
MR_def_label(__Unify___ssdb__stack_elem_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ssdb__stack_elem_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ssdb__stack_elem_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__stack_elem_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module121)
	MR_init_entry1(__Compare___ssdb__stack_elem_0_0);
	MR_init_label7(__Compare___ssdb__stack_elem_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__stack_elem_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ssdb__stack_elem_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ssdb__stack_elem_0_0_i2);
MR_def_label(__Compare___ssdb__stack_elem_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ssdb__stack_elem_0_0,2)
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
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__stack_elem_0_0_i5);
MR_def_label(__Compare___ssdb__stack_elem_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__stack_elem_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__stack_elem_0_0_i9);
MR_def_label(__Compare___ssdb__stack_elem_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__stack_elem_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__stack_elem_0_0_i13);
MR_def_label(__Compare___ssdb__stack_elem_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__stack_elem_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___ssdb__ssdb_proc_id_0_0,
		__Compare___ssdb__stack_elem_0_0_i17);
MR_def_label(__Compare___ssdb__stack_elem_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__stack_elem_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ssdb__stack_elem_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module122)
	MR_init_entry1(__Unify___ssdb__var_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ssdb__var_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module123)
	MR_init_entry1(__Compare___ssdb__var_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ssdb__var_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__typed_unify_2_0);

MR_BEGIN_MODULE(ssdb_module124)
	MR_init_entry1(__Unify___ssdb__var_value_0_0);
	MR_init_label4(__Unify___ssdb__var_value_0_0,10,6,28,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ssdb__var_value_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i28);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i6);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr3, (char *)MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_tempr3 == MR_tempr5);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__var_value_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	MR_r3 = MR_ctfield(2, MR_tempr3, 2);
	MR_r4 = MR_ctfield(2, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_0);
	}
MR_def_label(__Unify___ssdb__var_value_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	MR_r3 = MR_ctfield(1, MR_tempr3, 3);
	MR_r4 = MR_ctfield(1, MR_tempr4, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_0);
	}
MR_def_label(__Unify___ssdb__var_value_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__var_value_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__typed_compare_3_0);

MR_BEGIN_MODULE(ssdb_module125)
	MR_init_entry1(__Compare___ssdb__var_value_0_0);
	MR_init_label8(__Compare___ssdb__var_value_0_0,3,2,38,22,26,28,6,54)
	MR_init_label5(__Compare___ssdb__var_value_0_0,21,9,11,15,102)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ssdb__var_value_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i2);
MR_def_label(__Compare___ssdb__var_value_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ssdb__var_value_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i6);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i22);
	}
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i21);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i21);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ssdb__var_value_0_0_i38);
MR_def_label(__Compare___ssdb__var_value_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i102);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__var_value_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i54);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Compare___ssdb__var_value_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(2, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(2, MR_tempr4, 0);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 1);
	MR_r2 = MR_ctfield(2, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ssdb__var_value_0_0_i28);
MR_def_label(__Compare___ssdb__var_value_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i102);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__typed_compare_3_0);
MR_def_label(__Compare___ssdb__var_value_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i21);
	}
	}
MR_def_label(__Compare___ssdb__var_value_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ssdb__var_value_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ssdb__var_value_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 3);
	MR_tempr4 = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 0);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 3);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r2 = MR_ctfield(1, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ssdb__var_value_0_0_i11);
MR_def_label(__Compare___ssdb__var_value_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i102);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__var_value_0_0_i15);
MR_def_label(__Compare___ssdb__var_value_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i102);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__typed_compare_3_0);
MR_def_label(__Compare___ssdb__var_value_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module126)
	MR_init_entry1(__Unify___ssdb__what_next_0_0);
	MR_init_label7(__Unify___ssdb__what_next_0_0,6,9,11,13,14,32,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__what_next_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i32);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___ssdb__what_next_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___ssdb__what_next_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___ssdb__what_next_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___ssdb__what_next_0_0_i13));
MR_def_label(__Unify___ssdb__what_next_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_r1);
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__what_next_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__what_next_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__what_next_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__what_next_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__what_next_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module127)
	MR_init_entry1(__Compare___ssdb__what_next_0_0);
	MR_init_label8(__Compare___ssdb__what_next_0_0,6,10,11,15,7,20,21,88)
	MR_init_label8(__Compare___ssdb__what_next_0_0,25,17,29,30,34,178,36,39)
	MR_init_label8(__Compare___ssdb__what_next_0_0,40,47,50,51,54,58,62,63)
	MR_init_label7(__Compare___ssdb__what_next_0_0,67,102,59,72,73,77,105)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__what_next_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i88);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i36) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i47) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i58));
MR_def_label(__Compare___ssdb__what_next_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_r2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i7);
	}
	MR_r2 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i178) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i178) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i15));
MR_def_label(__Compare___ssdb__what_next_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_r2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i178);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i178);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i17);
	}
	MR_r2 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i178) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i178) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i25));
MR_def_label(__Compare___ssdb__what_next_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_r2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i178);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i178);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i29) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i178) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i178) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i34));
MR_def_label(__Compare___ssdb__what_next_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_r2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i30);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i88);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i178);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i39) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i54) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i178) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i178));
MR_def_label(__Compare___ssdb__what_next_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_unmkbody(MR_r3);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i105);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i54) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i178));
MR_def_label(__Compare___ssdb__what_next_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_unmkbody(MR_r3);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i51);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i105);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r2, 0);
	MR_r2 = MR_const_mask_field(MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__what_next_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i59);
	}
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i62) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i67));
MR_def_label(__Compare___ssdb__what_next_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_unmkbody(MR_r3);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i63);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i105);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i178);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__what_next_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i72) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i77));
MR_def_label(__Compare___ssdb__what_next_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_unmkbody(MR_r3);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i73);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i105);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i102);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module128)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0);
	MR_init_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,16,3,5,6,8,10,11,12)
	MR_init_label5(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,9,13,7,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 11409 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 263 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 11418 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 11431 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i3);
	}
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i16);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 11457 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 11468 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 11481 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 11493 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_tempr2;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 11504 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 11516 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 11528 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 11537 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 11550 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 11562 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 11571 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 11584 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	}
	MR_np_call_localret_ent(stack__top_det_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i6);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i8);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i7);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i10);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 11634 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r7 = ((MR_Integer) MR_ctfield(0, MR_sv(5), 0) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_r7;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 11645 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 11657 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 11669 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r7 = ((MR_Integer) MR_ctfield(0, MR_sv(5), 1) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_r7;
{
#line 244 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 11680 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 11692 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r3, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_tfield(2, MR_r3, 0) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i9);
	}
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i11);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__prompt_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i12);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 11747 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 11756 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 11769 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i14);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 11786 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_tempr1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 11799 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 11811 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(stack__pop_det_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i15);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 11830 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_r2;
{
#line 257 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 11840 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 11852 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module129)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0);
	MR_init_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,26,3,5,6,8,12,11,10)
	MR_init_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,16,17,9,18,7,19,20,21)
	MR_init_label2(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,4,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 11888 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 263 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 11897 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 11910 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i3);
	}
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i4);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 11934 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 11945 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 11958 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 11970 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_tempr2;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 11981 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 11993 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 12005 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 12014 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 12027 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	}
	MR_np_call_localret_ent(stack__top_det_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 12048 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 12059 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 12072 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 12084 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 260 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 12093 "ssdb.c"
	MR_tempr2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 12106 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tempr2;
	MR_r1 = (MR_Integer) 6;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i6);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i8);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i7);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i10);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 12144 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 260 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 12153 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 12166 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ssdb__get_correct_frame_nondet_2_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i12);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i11);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 12187 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r7 = ((MR_Integer) MR_ctfield(0, MR_r2, 0) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_r7;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 12198 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 12210 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 12222 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r7 = ((MR_Integer) MR_ctfield(0, MR_r2, 1) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_r7;
{
#line 244 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 12233 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 244 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 12245 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r3, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(2, MR_r3, 0) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i9);
	}
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Unexpected error : ssdb/ssdb.m get_correct_frame_nondet failed", 62);
	MR_np_call_localret_ent(require__error_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i9);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i16);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__prompt_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i17);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i18);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 12305 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 12314 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 12327 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i19);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 12344 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_tempr1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 12357 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 12369 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(stack__pop_det_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i20);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(stack__pop_det_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i21);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 12395 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_sv(2);
{
#line 257 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 12405 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 12417 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 12429 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_r2;
{
#line 260 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet= X;;}
#line 12439 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 12451 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 12467 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 12478 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 12491 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 12503 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 260 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 12512 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 12525 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(ssdb__get_correct_frame_nondet_2_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i23);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i26);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 12546 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = (MR_Integer) 1;
{
#line 263 "ssdb.m"
ssdb__mutable_variable_debugger_state= X;;}
#line 12556 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 12568 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module130)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0);
	MR_init_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,5,7,9,10,13,14,6,39)
	MR_init_label1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 12601 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 263 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 12610 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 263 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 12623 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i39);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i39);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 12643 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 241 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 12654 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 12667 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 12679 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
	X = MR_tempr2;
{
#line 241 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 12690 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 241 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 12702 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 12714 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 12723 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 12736 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	}
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 12756 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
	X = MR_r2;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 12767 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 12779 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 12791 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 260 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 12800 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 260 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 12813 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__get_correct_frame_nondet_2_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i7);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i6);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 12834 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 257 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 12845 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 12858 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(stack__push_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i9);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 12879 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
	X = MR_r1;
{
#line 257 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 12889 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 257 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 12901 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 5;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i10);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i38);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 5;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i13);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__prompt_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i14);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__what_next_stop_4_0);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Unexpected error : ssdb/ssdb.m : get_correct_frame_nondet failed", 64);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 263 "ssdb.m"
MR_Word ssdb__mutable_variable_debugger_state;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_debugger_state_lock;
#endif

#line 12974 "ssdb.c"
#line 260 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock;
#endif

#line 12981 "ssdb.c"
#line 257 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_shadow_stack;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_shadow_stack_lock;
#endif

#line 12988 "ssdb.c"
#line 254 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock;
#endif

#line 12995 "ssdb.c"
#line 251 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_breakpoints;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_breakpoints_lock;
#endif

#line 13002 "ssdb.c"
#line 248 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_next_stop;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_next_stop_lock;
#endif

#line 13009 "ssdb.c"
#line 246 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_depth;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_depth_lock;
#endif

#line 13016 "ssdb.c"
#line 244 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_csn;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_csn_lock;
#endif

#line 13023 "ssdb.c"
#line 241 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_event_number;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_event_number_lock;
#endif

#line 13030 "ssdb.c"

MR_declare_static(mercury__ssdb__initialise_mutable_debugger_state_0_0);

void
ssdb__user_init_pred_8(void);

void
ssdb__user_init_pred_8(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_debugger_state_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_debugger_state_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0);

void
ssdb__user_init_pred_7(void);

void
ssdb__user_init_pred_7(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0);

void
ssdb__user_init_pred_6(void);

void
ssdb__user_init_pred_6(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0);

void
ssdb__user_init_pred_5(void);

void
ssdb__user_init_pred_5(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0);

void
ssdb__user_init_pred_4(void);

void
ssdb__user_init_pred_4(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0);

void
ssdb__user_init_pred_3(void);

void
ssdb__user_init_pred_3(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__ssdb__initialise_mutable_cur_ssdb_depth_0_0);

void
ssdb__user_init_pred_2(void);

void
ssdb__user_init_pred_2(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_depth_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_depth_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0);

void
ssdb__user_init_pred_1(void);

void
ssdb__user_init_pred_1(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0);

void
ssdb__user_init_pred_0(void);

void
ssdb__user_init_pred_0(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__ssdb_maybe_bunch_0(void)
{
	ssdb_module0();
	ssdb_module1();
	ssdb_module2();
	ssdb_module3();
	ssdb_module4();
	ssdb_module5();
	ssdb_module6();
	ssdb_module7();
	ssdb_module8();
	ssdb_module9();
	ssdb_module10();
	ssdb_module11();
	ssdb_module12();
	ssdb_module13();
	ssdb_module14();
	ssdb_module15();
	ssdb_module16();
	ssdb_module17();
	ssdb_module18();
	ssdb_module19();
	ssdb_module20();
	ssdb_module21();
	ssdb_module22();
	ssdb_module23();
	ssdb_module24();
	ssdb_module25();
	ssdb_module26();
	ssdb_module27();
	ssdb_module28();
	ssdb_module29();
	ssdb_module30();
	ssdb_module31();
	ssdb_module32();
	ssdb_module33();
	ssdb_module34();
	ssdb_module35();
	ssdb_module36();
	ssdb_module37();
	ssdb_module38();
	ssdb_module39();
}

static void mercury__ssdb_maybe_bunch_1(void)
{
	ssdb_module40();
	ssdb_module41();
	ssdb_module42();
	ssdb_module43();
	ssdb_module44();
	ssdb_module45();
	ssdb_module46();
	ssdb_module47();
	ssdb_module48();
	ssdb_module49();
	ssdb_module50();
	ssdb_module51();
	ssdb_module52();
	ssdb_module53();
	ssdb_module54();
	ssdb_module55();
	ssdb_module56();
	ssdb_module57();
	ssdb_module58();
	ssdb_module59();
	ssdb_module60();
	ssdb_module61();
	ssdb_module62();
	ssdb_module63();
	ssdb_module64();
	ssdb_module65();
	ssdb_module66();
	ssdb_module67();
	ssdb_module68();
	ssdb_module69();
	ssdb_module70();
	ssdb_module71();
	ssdb_module72();
	ssdb_module73();
	ssdb_module74();
	ssdb_module75();
	ssdb_module76();
	ssdb_module77();
	ssdb_module78();
	ssdb_module79();
}

static void mercury__ssdb_maybe_bunch_2(void)
{
	ssdb_module80();
	ssdb_module81();
	ssdb_module82();
	ssdb_module83();
	ssdb_module84();
	ssdb_module85();
	ssdb_module86();
	ssdb_module87();
	ssdb_module88();
	ssdb_module89();
	ssdb_module90();
	ssdb_module91();
	ssdb_module92();
	ssdb_module93();
	ssdb_module94();
	ssdb_module95();
	ssdb_module96();
	ssdb_module97();
	ssdb_module98();
	ssdb_module99();
	ssdb_module100();
	ssdb_module101();
	ssdb_module102();
	ssdb_module103();
	ssdb_module104();
	ssdb_module105();
	ssdb_module106();
	ssdb_module107();
	ssdb_module108();
	ssdb_module109();
	ssdb_module110();
	ssdb_module111();
	ssdb_module112();
	ssdb_module113();
	ssdb_module114();
	ssdb_module115();
	ssdb_module116();
	ssdb_module117();
	ssdb_module118();
	ssdb_module119();
}

static void mercury__ssdb_maybe_bunch_3(void)
{
	ssdb_module120();
	ssdb_module121();
	ssdb_module122();
	ssdb_module123();
	ssdb_module124();
	ssdb_module125();
	ssdb_module126();
	ssdb_module127();
	ssdb_module128();
	ssdb_module129();
	ssdb_module130();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ssdb__init(void);
void mercury__ssdb__init_type_tables(void);
void mercury__ssdb__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ssdb__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ssdb__init_complexity_procs(void);
#endif
void mercury__ssdb__required_init(void);

void mercury__ssdb__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ssdb_maybe_bunch_0();
	mercury__ssdb_maybe_bunch_1();
	mercury__ssdb_maybe_bunch_2();
	mercury__ssdb_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_what_next_0,
		ssdb__what_next_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_var_value_0,
		ssdb__var_value_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_var_name_0,
		ssdb__var_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_stack_elem_0,
		ssdb__stack_elem_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_ssdb_retry_0,
		ssdb__ssdb_retry_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0,
		ssdb__ssdb_proc_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_ssdb_event_type_0,
		ssdb__ssdb_event_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_pos_0,
		ssdb__pos_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_next_stop_0,
		ssdb__next_stop_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_list_var_value_0,
		ssdb__list_var_value_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_debugger_state_0,
		ssdb__debugger_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_cur_ssdb_shadow_stack_nondet_0,
		ssdb__cur_ssdb_shadow_stack_nondet_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_cur_ssdb_shadow_stack_0,
		ssdb__cur_ssdb_shadow_stack_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_cur_ssdb_next_stop_0,
		ssdb__cur_ssdb_next_stop_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_cur_ssdb_breakpoints_0,
		ssdb__cur_ssdb_breakpoints_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_breakpoint_0,
		ssdb__breakpoint_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_bp_state_0,
		ssdb__bp_state_0_0);
	mercury__ssdb__init_debugger();
}

void mercury__ssdb__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_what_next_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_var_value_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_var_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_stack_elem_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_ssdb_retry_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_ssdb_event_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_pos_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_next_stop_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_list_var_value_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_debugger_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_cur_ssdb_shadow_stack_nondet_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_cur_ssdb_shadow_stack_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_cur_ssdb_next_stop_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_cur_ssdb_breakpoints_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_breakpoint_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_bp_state_0);
	}
}


void mercury__ssdb__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ssdb__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ssdb);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ssdb__init_complexity_procs(void)
{
}

#endif

void mercury__ssdb__required_init(void)
{
	ssdb__user_init_pred_0();
	ssdb__user_init_pred_1();
	ssdb__user_init_pred_2();
	ssdb__user_init_pred_3();
	ssdb__user_init_pred_4();
	ssdb__user_init_pred_5();
	ssdb__user_init_pred_6();
	ssdb__user_init_pred_7();
	ssdb__user_init_pred_8();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
