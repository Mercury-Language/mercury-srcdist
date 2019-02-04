/*
** Automatically generated from `ssdb.m'
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
INIT mercury__ssdb__init
REQUIRED_INIT mercury__ssdb__required_init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "ssdb.c"
#include "ssdb.mh"

#line 28 "ssdb.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 32 "ssdb.c"
#line 542 "../library/io.int"
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
#line 234 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_cur_ssdb_event_number;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_event_number;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_event_number_lock;
#endif

#line 68 "ssdb.c"
#line 237 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_cur_ssdb_csn;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_csn;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_csn_lock;
#endif

#line 79 "ssdb.c"
#line 240 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_cur_ssdb_depth;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_depth;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_depth_lock;
#endif

#line 90 "ssdb.c"
#line 243 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_cur_ssdb_next_stop;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_next_stop;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_next_stop_lock;
#endif

#line 101 "ssdb.c"
#line 246 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_cur_ssdb_breakpoints;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_breakpoints;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_breakpoints_lock;
#endif

#line 112 "ssdb.c"
#line 249 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock;
#endif

#line 123 "ssdb.c"
#line 252 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_cur_ssdb_shadow_stack;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_shadow_stack;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_shadow_stack_lock;
#endif

#line 134 "ssdb.c"
#line 255 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock;
#endif

#line 145 "ssdb.c"
#line 258 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_debugger_state;
#else
    extern MR_Word ssdb__mutable_variable_debugger_state;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_debugger_state_lock;
#endif

#line 156 "ssdb.c"
#line 157 "ssdb.c"

#endif
#line 160 "ssdb.c"

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
	MR_Integer f1[64];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_String f2[8];
	MR_Integer f3[2];
	MR_String f4;
	MR_Integer f5;
	MR_String f6;
	MR_Integer f7[7];
	MR_String f8[2];
	MR_Integer f9;
	MR_String f10;
	MR_Integer f11;
	MR_String f12;
	MR_Integer f13[4];
	MR_String f14;
	MR_Integer f15[2];
	MR_String f16[2];
	MR_Integer f17;
	MR_String f18[3];
	MR_Integer f19;
	MR_String f20;
	MR_Integer f21[5];
	MR_String f22;
	MR_Integer f23[2];
	MR_String f24[6];
	MR_Integer f25[8];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ssdb__type_ctor_info_what_next_0,
	mercury_data_ssdb__type_ctor_info_var_value_0,
	mercury_data_ssdb__type_ctor_info_var_name_0,
	mercury_data_ssdb__type_ctor_info_stack_elem_0,
	mercury_data_ssdb__type_ctor_info_ssdb_retry_0,
	mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0,
	mercury_data_ssdb__type_ctor_info_ssdb_event_type_0,
	mercury_data_ssdb__type_ctor_info_ssdb_cmd_0,
	mercury_data_ssdb__type_ctor_info_pos_0,
	mercury_data_ssdb__type_ctor_info_next_stop_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ssdb__type_ctor_info_list_var_value_0,
	mercury_data_ssdb__type_ctor_info_debugger_state_0,
	mercury_data_ssdb__type_ctor_info_cur_ssdb_shadow_stack_nondet_0,
	mercury_data_ssdb__type_ctor_info_cur_ssdb_shadow_stack_0,
	mercury_data_ssdb__type_ctor_info_cur_ssdb_next_stop_0,
	mercury_data_ssdb__type_ctor_info_cur_ssdb_breakpoints_0,
	mercury_data_ssdb__type_ctor_info_breakpoint_0,
	mercury_data_ssdb__type_ctor_info_bp_state_0;
MR_decl_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0, 4,5,7,10,11,9,13,6)
MR_decl_label4(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0, 14,15,3,2)
MR_decl_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0, 3,5,7,4,8,9,10,12)
MR_decl_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0, 15,16,14,17,20,19,13,23)
MR_decl_label6(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0, 24,25,26,27,28,2)
MR_decl_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0, 5,6,9,10,13,14,8,2)
MR_decl_label4(ssdb__csn_is_in_stack_2_0, 17,2,7,1)
MR_decl_label5(ssdb__delete_breakpoint_with_num_3_0, 3,6,8,9,5)
MR_decl_label8(ssdb__execute_cmd_8_0, 3,5,7,9,11,13,15,17)
MR_decl_label8(ssdb__execute_cmd_8_0, 19,21,23,25,27,29,31,33)
MR_decl_label1(ssdb__execute_cmd_8_0, 35)
MR_decl_label8(ssdb__execute_ssdb_break_7_0, 3,10,12,8,7,20,21,24)
MR_decl_label8(ssdb__execute_ssdb_break_7_0, 22,28,31,32,33,34,19,38)
MR_decl_label8(ssdb__execute_ssdb_browse_7_0, 3,9,10,11,13,14,15,16)
MR_decl_label3(ssdb__execute_ssdb_browse_7_0, 8,7,24)
MR_decl_label2(ssdb__execute_ssdb_continue_7_0, 13,4)
MR_decl_label7(ssdb__execute_ssdb_delete_7_0, 3,11,8,16,14,7,24)
MR_decl_label8(ssdb__execute_ssdb_disable_7_0, 3,11,8,16,19,22,25,21)
MR_decl_label4(ssdb__execute_ssdb_disable_7_0, 14,29,7,34)
MR_decl_label8(ssdb__execute_ssdb_down_7_0, 5,6,7,8,9,10,11,12)
MR_decl_label6(ssdb__execute_ssdb_down_7_0, 13,14,15,4,3,21)
MR_decl_label8(ssdb__execute_ssdb_enable_7_0, 3,11,8,16,19,22,25,21)
MR_decl_label3(ssdb__execute_ssdb_enable_7_0, 14,7,33)
MR_decl_label2(ssdb__execute_ssdb_exit_7_0, 13,4)
MR_decl_label8(ssdb__execute_ssdb_finish_7_0, 6,7,5,4,3,18,21,20)
MR_decl_label3(ssdb__execute_ssdb_finish_7_0, 16,15,31)
MR_decl_label5(ssdb__execute_ssdb_goto_7_0, 3,10,8,7,16)
MR_decl_label2(ssdb__execute_ssdb_help_7_0, 3,5)
MR_decl_label6(ssdb__execute_ssdb_next_7_0, 6,7,5,4,3,12)
MR_decl_label3(ssdb__execute_ssdb_print_7_0, 4,3,8)
MR_decl_label8(ssdb__execute_ssdb_retry_7_0, 115,6,7,8,9,5,11,14)
MR_decl_label8(ssdb__execute_ssdb_retry_7_0, 15,3,20,23,25,31,32,35)
MR_decl_label8(ssdb__execute_ssdb_retry_7_0, 37,34,30,41,44,45,46,28)
MR_decl_label3(ssdb__execute_ssdb_retry_7_0, 22,19,57)
MR_decl_label2(ssdb__execute_ssdb_stack_7_0, 3,6)
MR_decl_label2(ssdb__execute_ssdb_step_7_0, 13,4)
MR_decl_label8(ssdb__execute_ssdb_up_7_0, 5,6,7,8,9,10,11,12)
MR_decl_label8(ssdb__execute_ssdb_up_7_0, 13,14,15,16,17,4,3,22)
MR_decl_label2(ssdb__find_breakpoint_with_num_3_0, 3,1)
MR_decl_label4(ssdb__get_correct_frame_with_num_3_0, 20,2,6,5)
MR_decl_label5(ssdb__get_frame_at_depth_nondet_2_4_0, 24,3,2,5,6)
MR_decl_label1(ssdb__get_ssdb_depth_dec_3_0, 2)
MR_decl_label6(ssdb__handle_event_call_2_0, 5,7,8,11,12,2)
MR_decl_label7(ssdb__handle_event_call_nondet_2_0, 5,7,8,9,12,13,2)
MR_decl_label8(ssdb__handle_event_exit_3_0, 4,5,6,8,11,12,10,14)
MR_decl_label6(ssdb__handle_event_exit_3_0, 7,15,16,17,3,2)
MR_decl_label8(ssdb__handle_event_exit_nondet_2_0, 5,7,8,9,14,15,13,10)
MR_decl_label3(ssdb__handle_event_exit_nondet_2_0, 18,19,2)
MR_decl_label1(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0, 3)
MR_decl_label1(ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0, 2)
MR_decl_label3(ssdb__initialise_mutable_debugger_state_0_0, 2,4,3)
MR_decl_label8(ssdb__list_var_value_to_assoc_list_2_0, 32,3,10,11,12,13,5,6)
MR_decl_label2(ssdb__list_var_value_to_assoc_list_2_0, 7,8)
MR_decl_label5(ssdb__modify_state_breakpoint_6_0, 14,3,5,6,8)
MR_decl_label8(ssdb__print_breakpoint_3_0, 2,3,4,5,6,7,8,10)
MR_decl_label1(ssdb__print_breakpoint_3_0, 9)
MR_decl_label8(ssdb__print_event_info_7_0, 2,3,4,5,6,7,8,10)
MR_decl_label8(ssdb__print_event_info_7_0, 12,14,16,17,18,19,20,21)
MR_decl_label8(ssdb__print_frames_list_5_0, 34,5,7,10,17,19,20,8)
MR_decl_label2(ssdb__print_frames_list_5_0, 21,37)
MR_decl_label8(ssdb__print_help_2_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ssdb__print_help_2_0, 10,11,12,13,14,15,16,17)
MR_decl_label7(ssdb__print_help_2_0, 18,19,20,21,22,23,24)
MR_decl_label5(ssdb__print_stack_frame_5_0, 4,3,11,18,20)
MR_decl_label8(ssdb__print_var_3_0, 27,28,29,30,31,32,15,16)
MR_decl_label8(ssdb__print_var_3_0, 17,18,19,20,21,23,3,4)
MR_decl_label8(ssdb__print_var_3_0, 5,6,7,8,9,10,12,13)
MR_decl_label8(ssdb__read_and_execute_cmd_6_0, 88,2,3,4,67,8,9,14)
MR_decl_label8(ssdb__read_and_execute_cmd_6_0, 15,16,18,22,24,29,30,32)
MR_decl_label8(ssdb__read_and_execute_cmd_6_0, 33,35,37,39,41,42,43,45)
MR_decl_label7(ssdb__read_and_execute_cmd_6_0, 46,47,49,50,52,20,56)
MR_decl_label2(ssdb__set_list_var_value_in_shadow_stack_3_0, 2,4)
MR_decl_label8(ssdb__should_stop_at_this_event_8_0, 29,88,5,7,90,37,25,12)
MR_decl_label6(ssdb__should_stop_at_this_event_8_0, 14,33,20,19,94,44)
MR_decl_label8(ssdb__what_next_stop_6_0, 19,20,3,4,12,13,24,6)
MR_decl_label2(ssdb__what_next_stop_6_0, 7,2)
MR_decl_label2(__Unify___ssdb__breakpoint_0_0, 4,1)
MR_decl_label7(__Unify___ssdb__next_stop_0_0, 15,12,6,19,10,21,1)
MR_decl_label2(__Unify___ssdb__ssdb_proc_id_0_0, 4,1)
MR_decl_label3(__Unify___ssdb__stack_elem_0_0, 4,8,1)
MR_decl_label4(__Unify___ssdb__var_value_0_0, 9,5,17,1)
MR_decl_label7(__Unify___ssdb__what_next_0_0, 16,6,11,21,8,23,1)
MR_decl_label6(__Compare___ssdb__breakpoint_0_0, 3,2,5,9,13,37)
MR_decl_label8(__Compare___ssdb__next_stop_0_0, 103,97,112,101,5,13,17,74)
MR_decl_label8(__Compare___ssdb__next_stop_0_0, 83,80,87,161,19,33,22,24)
MR_decl_label8(__Compare___ssdb__next_stop_0_0, 107,53,57,45,59,68,72,126)
MR_decl_label2(__Compare___ssdb__next_stop_0_0, 64,109)
MR_decl_label4(__Compare___ssdb__ssdb_proc_id_0_0, 3,2,5,21)
MR_decl_label7(__Compare___ssdb__stack_elem_0_0, 3,2,5,9,13,17,45)
MR_decl_label8(__Compare___ssdb__var_value_0_0, 3,2,42,23,26,28,5,75)
MR_decl_label5(__Compare___ssdb__var_value_0_0, 19,7,9,13,123)
MR_decl_label8(__Compare___ssdb__what_next_0_0, 121,114,115,119,122,64,65,136)
MR_decl_label8(__Compare___ssdb__what_next_0_0, 69,5,14,15,19,21,31,32)
MR_decl_label8(__Compare___ssdb__what_next_0_0, 36,209,71,81,82,77,126,98)
MR_decl_label8(__Compare___ssdb__what_next_0_0, 99,103,150,38,48,49,53,153)
MR_decl_static(ssdb__lock_cur_ssdb_shadow_stack_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_shadow_stack_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_shadow_stack_1_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_shadow_stack_1_0)
MR_decl_static(ssdb__set_cur_ssdb_shadow_stack_3_0)
MR_decl_static(ssdb__lock_debugger_state_0_0)
MR_decl_static(ssdb__unlock_debugger_state_0_0)
MR_decl_static(ssdb__unsafe_get_debugger_state_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_csn_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_csn_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_csn_1_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_csn_1_0)
MR_decl_static(ssdb__set_cur_ssdb_csn_3_0)
MR_decl_static(ssdb__lock_cur_ssdb_event_number_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_event_number_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_event_number_1_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_event_number_1_0)
MR_decl_static(ssdb__set_cur_ssdb_event_number_3_0)
MR_decl_static(ssdb__get_ssdb_event_number_inc_3_0)
MR_decl_static(ssdb__lock_cur_ssdb_depth_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_depth_0_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_depth_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_next_stop_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_next_stop_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_next_stop_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_breakpoints_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_breakpoints_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_breakpoints_1_0)
MR_decl_static(ssdb__get_cur_ssdb_breakpoints_3_0)
MR_decl_static(ssdb__should_stop_at_this_event_8_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_next_stop_1_0)
MR_decl_static(ssdb__what_next_stop_6_0)
MR_decl_static(ssdb__print_help_2_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_depth_1_0)
MR_decl_static(ssdb__get_cur_ssdb_depth_3_0)
MR_decl_static(ssdb__get_correct_frame_with_num_3_0)
MR_decl_static(ssdb__lock_cur_ssdb_shadow_stack_nondet_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_shadow_stack_nondet_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_shadow_stack_nondet_1_0)
MR_decl_static(ssdb__get_cur_ssdb_shadow_stack_nondet_3_0)
MR_decl_static(ssdb__unsafe_set_debugger_state_1_0)
MR_decl_static(ssdb__set_debugger_state_3_0)
MR_decl_static(ssdb__csn_is_in_stack_2_0)
MR_decl_static(ssdb__print_stack_frame_5_0)
MR_decl_static(ssdb__print_frames_list_5_0)
MR_decl_static(ssdb__list_var_value_to_assoc_list_2_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_breakpoints_1_0)
MR_decl_static(ssdb__set_cur_ssdb_breakpoints_3_0)
MR_decl_static(ssdb__lock_cur_ssdb_number_of_breakpoint_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_number_of_breakpoint_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_number_of_breakpoint_1_0)
MR_decl_static(ssdb__get_cur_ssdb_number_of_breakpoint_3_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_number_of_breakpoint_1_0)
MR_decl_static(ssdb__set_cur_ssdb_number_of_breakpoint_3_0)
MR_decl_static(ssdb__print_breakpoints_3_0)
MR_decl_static(ssdb__print_breakpoint_3_0)
MR_decl_static(ssdb__modify_state_breakpoint_6_0)
MR_decl_static(ssdb__find_breakpoint_with_num_3_0)
MR_decl_static(ssdb__delete_breakpoint_with_num_3_0)
MR_decl_static(ssdb__exit_debugger_2_0)
MR_decl_static(ssdb__read_and_execute_cmd_6_0)
MR_decl_static(ssdb__execute_cmd_8_0)
MR_decl_static(ssdb__execute_ssdb_help_7_0)
MR_decl_static(ssdb__execute_ssdb_step_7_0)
MR_decl_static(ssdb__execute_ssdb_next_7_0)
MR_decl_static(ssdb__execute_ssdb_goto_7_0)
MR_decl_static(ssdb__execute_ssdb_continue_7_0)
MR_decl_static(ssdb__execute_ssdb_finish_7_0)
MR_decl_static(ssdb__execute_ssdb_retry_7_0)
MR_decl_static(ssdb__execute_ssdb_stack_7_0)
MR_decl_static(ssdb__execute_ssdb_print_7_0)
MR_decl_static(ssdb__execute_ssdb_browse_7_0)
MR_decl_static(ssdb__execute_ssdb_down_7_0)
MR_decl_static(ssdb__execute_ssdb_up_7_0)
MR_decl_static(ssdb__execute_ssdb_break_7_0)
MR_decl_static(ssdb__execute_ssdb_enable_7_0)
MR_decl_static(ssdb__execute_ssdb_disable_7_0)
MR_decl_static(ssdb__execute_ssdb_delete_7_0)
MR_decl_static(ssdb__execute_ssdb_exit_7_0)
MR_decl_static(ssdb__print_event_info_7_0)
MR_decl_static(ssdb__invent_io_1_0)
MR_decl_static(ssdb__consume_io_1_0)
MR_def_extern_entry(ssdb__handle_event_call_2_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_shadow_stack_nondet_1_0)
MR_decl_static(ssdb__set_cur_ssdb_shadow_stack_nondet_3_0)
MR_def_extern_entry(ssdb__handle_event_call_nondet_2_0)
MR_decl_static(ssdb__get_ssdb_depth_dec_3_0)
MR_decl_static(ssdb__set_list_var_value_in_shadow_stack_3_0)
MR_def_extern_entry(ssdb__handle_event_exit_3_0)
MR_def_extern_entry(ssdb__handle_event_exit_nondet_2_0)
MR_def_extern_entry(ssdb__handle_event_fail_3_0)
MR_decl_static(ssdb__get_frame_at_depth_nondet_2_4_0)
MR_decl_static(ssdb__get_frame_at_depth_nondet_5_0)
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
MR_decl_static(__Unify___ssdb__ssdb_cmd_0_0)
MR_decl_static(__Compare___ssdb__ssdb_cmd_0_0)
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
mercury_data__closure_layout__ssdb__print_stack_frame_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_var_value_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_frames_list_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_breakpoints_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_breakpoint_0;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_print_7_0_1;
static const struct mercury_type_1 mercury_common_1[4] =
{
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
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_print_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ssdb, var_value),
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
MR_ENTRY_AP(ssdb__print_breakpoint_3_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(ssdb__print_var_3_0),
0
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
-2,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-2,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-1,
-1,
-2,
1,
-1,
2,
-2,
5,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-1,
6,
8,
-1,
-1,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
0,
{
MR_string_const("d", 1),
MR_string_const("f", 1),
MR_string_const("next", 4),
MR_string_const("exit", 4),
MR_string_const("continue", 8),
MR_string_const("disable", 7),
MR_string_const("enable", 6),
MR_string_const("print", 5)
},
{
0,
0
},
MR_string_const("stack", 5),
0,
MR_string_const("retry", 5),
{
0,
0,
0,
0,
0,
0,
0
},
{
MR_string_const("help", 4),
MR_string_const("step", 4)
},
0,
MR_string_const("browse", 6),
0,
MR_string_const("break", 5),
{
0,
0,
0,
0
},
MR_string_const("delete", 6),
{
0,
0
},
{
MR_string_const("c", 1),
MR_string_const("b", 1)
},
0,
{
MR_string_const("st", 2),
MR_string_const("g", 1),
MR_string_const("up", 2)
},
0,
MR_string_const("h", 1),
{
0,
0,
0,
0,
0
},
MR_string_const("n", 1),
{
0,
0
},
{
MR_string_const("s", 1),
MR_string_const("r", 1),
MR_string_const("u", 1),
MR_string_const("finish", 6),
MR_string_const("down", 4),
MR_string_const("goto", 4)
},
{
0,
0,
0,
0,
0,
0,
0,
0
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_pprint__type_ctor_info_doc_0;
static const struct mercury_type_5 mercury_common_5[1] =
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

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_0 = {
	"ssdb_help",
	0
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_1 = {
	"ssdb_step",
	1
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_2 = {
	"ssdb_next",
	2
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_3 = {
	"ssdb_goto",
	3
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_4 = {
	"ssdb_continue",
	4
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_5 = {
	"ssdb_finish",
	5
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_6 = {
	"ssdb_retry",
	6
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_7 = {
	"ssdb_stack",
	7
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_8 = {
	"ssdb_print",
	8
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_9 = {
	"ssdb_browse",
	9
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_10 = {
	"ssdb_down",
	10
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_11 = {
	"ssdb_up",
	11
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_12 = {
	"ssdb_break",
	12
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_13 = {
	"ssdb_enable",
	13
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_14 = {
	"ssdb_disable",
	14
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_15 = {
	"ssdb_delete",
	15
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_16 = {
	"ssdb_exit",
	16
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_value_ordered_ssdb_cmd_0[] = {
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_0,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_1,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_2,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_3,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_4,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_5,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_6,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_7,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_8,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_9,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_10,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_11,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_12,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_13,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_14,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_15,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_16
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_name_ordered_ssdb_cmd_0[] = {
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_12,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_9,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_4,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_15,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_14,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_10,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_13,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_16,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_5,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_3,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_0,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_2,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_8,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_6,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_7,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_1,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_11
};

const MR_Integer mercury_data_ssdb__functor_number_map_ssdb_cmd_0[] = {
	10,
	15,
	11,
	9,
	2,
	8,
	13,
	14,
	12,
	1,
	5,
	16,
	0,
	6,
	4,
	3,
	7 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_ssdb_cmd_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__ssdb_cmd_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__ssdb_cmd_0_0)),
	"ssdb",
	"ssdb_cmd",
	{ (void *)mercury_data_ssdb__enum_name_ordered_ssdb_cmd_0 },
	{ (void *)mercury_data_ssdb__enum_value_ordered_ssdb_cmd_0 },
	17,
	4,
	mercury_data_ssdb__functor_number_map_ssdb_cmd_0
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
extern const MR_TypeCtorInfo_Struct mercury_data_stack__type_ctor_info_stack_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_stack_elem_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_stack__ti_stack_1ssdb__type_ctor_info_stack_elem_0 = {
	&mercury_data_stack__type_ctor_info_stack_1,
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
	{ (void *)&mercury_data_stack__ti_stack_1ssdb__type_ctor_info_stack_elem_0 },
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
	{ (void *)&mercury_data_stack__ti_stack_1ssdb__type_ctor_info_stack_elem_0 },
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
1876,
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
1876,
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
1915,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_print_7_0_1 = {
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
1876,
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
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 2027 "ssdb.c"
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
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 2057 "ssdb.c"
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
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 2084 "ssdb.c"
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
#line 252 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 2113 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module4)
	MR_init_entry1(ssdb__set_cur_ssdb_shadow_stack_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_cur_ssdb_shadow_stack_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_shadow_stack_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 2143 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_shadow_stack_3_0
	X = MR_r1;
{
#line 252 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 2153 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_shadow_stack_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 2165 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module5)
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
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 2195 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module6)
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
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 2225 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module7)
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
#line 258 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 2252 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module8)
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
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 2283 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module9)
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
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 2313 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module10)
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
#line 237 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_csn;;}
#line 2340 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module11)
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
#line 237 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 2369 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module12)
	MR_init_entry1(ssdb__set_cur_ssdb_csn_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_cur_ssdb_csn_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_csn_3_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 2399 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_csn_3_0
	X = MR_r1;
{
#line 237 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 2409 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_csn_3_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 2421 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module13)
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
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 2451 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module14)
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
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 2481 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module15)
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
#line 234 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 2508 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module16)
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
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 2537 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module17)
	MR_init_entry1(ssdb__set_cur_ssdb_event_number_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_cur_ssdb_event_number_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_event_number_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 2567 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_event_number_3_0
	X = MR_r1;
{
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 2577 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_event_number_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 2589 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module18)
	MR_init_entry1(ssdb__get_ssdb_event_number_inc_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_ssdb_event_number_inc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_ssdb_event_number_inc_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 2619 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_ssdb_event_number_inc_3_0
{
#line 234 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 2630 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_ssdb_event_number_inc_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 2643 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_ssdb_event_number_inc_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 2655 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_ssdb_event_number_inc_3_0
	X = MR_tempr2;
{
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 2666 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_ssdb_event_number_inc_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 2678 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module19)
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
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 2710 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module20)
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
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 2740 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module21)
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
#line 240 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 2768 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module22)
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
#line 243 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 2798 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module23)
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
#line 243 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 2828 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module24)
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
#line 243 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_next_stop;;}
#line 2855 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module25)
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
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 2886 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module26)
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
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 2916 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module27)
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
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 2943 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module28)
	MR_init_entry1(ssdb__get_cur_ssdb_breakpoints_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_cur_ssdb_breakpoints_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_breakpoints_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 2974 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_breakpoints_3_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 2985 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_breakpoints_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 2998 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__pair__pair_2_0);
MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(ssdb_module29)
	MR_init_entry1(ssdb__should_stop_at_this_event_8_0);
	MR_init_label8(ssdb__should_stop_at_this_event_8_0,29,88,5,7,90,37,25,12)
	MR_init_label6(ssdb__should_stop_at_this_event_8_0,14,33,20,19,94,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__should_stop_at_this_event_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 243 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 3034 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 243 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_next_stop;;}
#line 3043 "ssdb.c"
	MR_r6 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 243 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 3056 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i29) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i25) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i12) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i33));
MR_def_label(ssdb__should_stop_at_this_event_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r6),0)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i88);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_8_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 3085 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 3096 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 3109 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_r4, 0);
	MR_r4 = MR_ctfield(0, MR_r4, 1);
	}
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		ssdb__should_stop_at_this_event_8_0_i5);
MR_def_label(ssdb__should_stop_at_this_event_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ssdb__should_stop_at_this_event_8_0_i7);
MR_def_label(ssdb__should_stop_at_this_event_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i37);
	}
	MR_r4 = MR_ctfield(0, MR_r2, 3);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i44);
	}
	MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i37);
MR_def_label(ssdb__should_stop_at_this_event_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ssdb__should_stop_at_this_event_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__should_stop_at_this_event_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r6, 0);
	if ((MR_r7 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i90);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_r1 == (MR_Integer) 0) || ((MR_Integer) MR_r1 == (MR_Integer) 3)) || ((MR_Integer) MR_r1 == (MR_Integer) 5)))) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_ctfield(2, MR_r6, 1);
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	MR_r7 = MR_ctfield(2, MR_tempr1, 0);
	if ((MR_r7 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ssdb__should_stop_at_this_event_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r6, 0),0)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i94);
	}
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r7 = MR_ctfield(3, MR_tempr1, 1);
	if ((MR_r7 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ssdb__should_stop_at_this_event_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_ctfield(3, MR_r6, 2);
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_8_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r7 = MR_ctfield(3, MR_r6, 1);
	if ((MR_r7 != MR_r2)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i37);
	}
MR_def_label(ssdb__should_stop_at_this_event_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module30)
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
#line 243 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop= X;;}
#line 3246 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module31)
	MR_init_entry1(ssdb__what_next_stop_6_0);
	MR_init_label8(ssdb__what_next_stop_6_0,19,20,3,4,12,13,24,6)
	MR_init_label2(ssdb__what_next_stop_6_0,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__what_next_stop_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ssdb__what_next_stop_6_0_i19) MR_AND
		MR_LABEL_AP(ssdb__what_next_stop_6_0_i4) MR_AND
		MR_LABEL_AP(ssdb__what_next_stop_6_0_i12) MR_AND
		MR_LABEL_AP(ssdb__what_next_stop_6_0_i24));
MR_def_label(ssdb__what_next_stop_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_unmkbody(MR_r3);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ssdb__what_next_stop_6_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ssdb__what_next_stop_6_0_i2);
MR_def_label(ssdb__what_next_stop_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(ssdb__what_next_stop_6_0_i3);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__what_next_stop_6_0_i2);
MR_def_label(ssdb__what_next_stop_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(ssdb__what_next_stop_6_0_i2);
MR_def_label(ssdb__what_next_stop_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r3, 0);
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 1;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_GOTO_LAB(ssdb__what_next_stop_6_0_i2);
	}
MR_def_label(ssdb__what_next_stop_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(2, MR_r3, 0);
	if ((MR_r5 != MR_r2)) {
		MR_GOTO_LAB(ssdb__what_next_stop_6_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ssdb__what_next_stop_6_0_i2);
MR_def_label(ssdb__what_next_stop_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r5;
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 0;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__what_next_stop_6_0_i2);
	}
MR_def_label(ssdb__what_next_stop_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ssdb__what_next_stop_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r3, 1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_GOTO_LAB(ssdb__what_next_stop_6_0_i2);
	}
MR_def_label(ssdb__what_next_stop_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r3, 1);
	if ((MR_r1 != MR_r5)) {
		MR_GOTO_LAB(ssdb__what_next_stop_6_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ssdb__what_next_stop_6_0_i2);
MR_def_label(ssdb__what_next_stop_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r5;
	MR_r1 = (MR_Integer) 1;
	}
MR_def_label(ssdb__what_next_stop_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__what_next_stop_6_0
{
#line 243 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 3375 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__what_next_stop_6_0
	X = MR_r3;
{
#line 243 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop= X;;}
#line 3385 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__what_next_stop_6_0
{
#line 243 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 3397 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__nl_2_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(ssdb_module32)
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


MR_BEGIN_MODULE(ssdb_module33)
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
#line 240 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 3562 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module34)
	MR_init_entry1(ssdb__get_cur_ssdb_depth_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_cur_ssdb_depth_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_depth_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 3593 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_depth_3_0
{
#line 240 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 3604 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_depth_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 3617 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__top_det_2_0);
MR_decl_entry(stack__pop_det_3_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(ssdb_module35)
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


MR_BEGIN_MODULE(ssdb_module36)
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
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 3701 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module37)
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
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 3731 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module38)
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
#line 255 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 3758 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module39)
	MR_init_entry1(ssdb__get_cur_ssdb_shadow_stack_nondet_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_cur_ssdb_shadow_stack_nondet_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_shadow_stack_nondet_3_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 3789 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_shadow_stack_nondet_3_0
{
#line 255 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 3800 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_shadow_stack_nondet_3_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 3813 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module40)
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
#line 258 "ssdb.m"
ssdb__mutable_variable_debugger_state= X;;}
#line 3843 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module41)
	MR_init_entry1(ssdb__set_debugger_state_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_debugger_state_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_debugger_state_3_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 3873 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_debugger_state_3_0
	X = MR_r1;
{
#line 258 "ssdb.m"
ssdb__mutable_variable_debugger_state= X;;}
#line 3883 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_debugger_state_3_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 3895 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__pop_3_0);

MR_BEGIN_MODULE(ssdb_module42)
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

MR_decl_entry(io__write_char_3_0);
MR_decl_entry(io__format_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(ssdb_module43)
	MR_init_entry1(ssdb__print_stack_frame_5_0);
	MR_init_label5(ssdb__print_stack_frame_5_0,4,3,11,18,20)
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
		ssdb__print_stack_frame_5_0_i18);
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
		ssdb__print_stack_frame_5_0_i11);
MR_def_label(ssdb__print_stack_frame_5_0,11)
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
		ssdb__print_stack_frame_5_0_i18);
MR_def_label(ssdb__print_stack_frame_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_ctfield(0, MR_sv(2), 4);
	MR_np_call_localret_ent(list__foldl_4_0,
		ssdb__print_stack_frame_5_0_i20);
MR_def_label(ssdb__print_stack_frame_5_0,20)
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

MR_BEGIN_MODULE(ssdb_module44)
	MR_init_entry1(ssdb__print_frames_list_5_0);
	MR_init_label8(ssdb__print_frames_list_5_0,34,5,7,10,17,19,20,8)
	MR_init_label2(ssdb__print_frames_list_5_0,21,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_frames_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ssdb__print_frames_list_5_0,34)
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
		MR_GOTO_LAB(ssdb__print_frames_list_5_0_i37);
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
		ssdb__print_frames_list_5_0_i17);
MR_def_label(ssdb__print_frames_list_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_ctfield(0, MR_sv(2), 4);
	MR_np_call_localret_ent(list__foldl_4_0,
		ssdb__print_frames_list_5_0_i19);
MR_def_label(ssdb__print_frames_list_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("   )\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_frames_list_5_0_i20);
MR_def_label(ssdb__print_frames_list_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = (MR_Integer) -1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ssdb__print_frames_list_5_0_i34);
MR_def_label(ssdb__print_frames_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__print_stack_frame_5_0,
		ssdb__print_frames_list_5_0_i21);
MR_def_label(ssdb__print_frames_list_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ssdb__print_frames_list_5_0_i34);
MR_def_label(ssdb__print_frames_list_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

MR_BEGIN_MODULE(ssdb_module45)
	MR_init_entry1(ssdb__list_var_value_to_assoc_list_2_0);
	MR_init_label8(ssdb__list_var_value_to_assoc_list_2_0,32,3,10,11,12,13,5,6)
	MR_init_label2(ssdb__list_var_value_to_assoc_list_2_0,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__list_var_value_to_assoc_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,32)
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
		MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i5);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i10);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i32);
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(ssdb__list_var_value_to_assoc_list_2_0,
		ssdb__list_var_value_to_assoc_list_2_0_i12);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
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
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,5)
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
		ssdb__list_var_value_to_assoc_list_2_0_i6);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(ssdb__list_var_value_to_assoc_list_2_0,
		ssdb__list_var_value_to_assoc_list_2_0_i7);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		ssdb__list_var_value_to_assoc_list_2_0_i8);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,8)
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


MR_BEGIN_MODULE(ssdb_module46)
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
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 4344 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module47)
	MR_init_entry1(ssdb__set_cur_ssdb_breakpoints_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_cur_ssdb_breakpoints_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_breakpoints_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4374 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_breakpoints_3_0
	X = MR_r1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 4384 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_breakpoints_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4396 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module48)
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
#line 249 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 4426 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module49)
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
#line 249 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 4456 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module50)
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
#line 249 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;;}
#line 4483 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module51)
	MR_init_entry1(ssdb__get_cur_ssdb_number_of_breakpoint_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_cur_ssdb_number_of_breakpoint_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_number_of_breakpoint_3_0
{
#line 249 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 4514 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_number_of_breakpoint_3_0
{
#line 249 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;;}
#line 4525 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_cur_ssdb_number_of_breakpoint_3_0
{
#line 249 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 4538 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module52)
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
#line 249 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_number_of_breakpoint= X;;}
#line 4568 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module53)
	MR_init_entry1(ssdb__set_cur_ssdb_number_of_breakpoint_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_cur_ssdb_number_of_breakpoint_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_number_of_breakpoint_3_0
{
#line 249 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 4598 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_number_of_breakpoint_3_0
	X = MR_r1;
{
#line 249 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_number_of_breakpoint= X;;}
#line 4608 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_number_of_breakpoint_3_0
{
#line 249 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 4620 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module54)
	MR_init_entry1(ssdb__print_breakpoints_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_breakpoints_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(ssdb_module55)
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
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ssdb__print_breakpoint_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("disable", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_breakpoint_3_0_i9);
MR_def_label(ssdb__print_breakpoint_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("enable", 6);
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

MR_BEGIN_MODULE(ssdb_module56)
	MR_init_entry1(ssdb__modify_state_breakpoint_6_0);
	MR_init_label5(ssdb__modify_state_breakpoint_6_0,14,3,5,6,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__modify_state_breakpoint_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ssdb__modify_state_breakpoint_6_0,14)
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
		ssdb__modify_state_breakpoint_6_0_i5);
MR_def_label(ssdb__modify_state_breakpoint_6_0,5)
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
		ssdb__modify_state_breakpoint_6_0_i6);
MR_def_label(ssdb__modify_state_breakpoint_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ssdb__modify_state_breakpoint_6_0_i8);
MR_def_label(ssdb__modify_state_breakpoint_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ssdb__modify_state_breakpoint_6_0_i14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module57)
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

MR_decl_entry(fn__map__values_1_0);
MR_decl_entry(map__delete_3_0);

MR_BEGIN_MODULE(ssdb_module58)
	MR_init_entry1(ssdb__delete_breakpoint_with_num_3_0);
	MR_init_label5(ssdb__delete_breakpoint_with_num_3_0,3,6,8,9,5)
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
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4885 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_with_num_3_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 4894 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_with_num_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4907 "ssdb.c"
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__find_breakpoint_with_num_3_0,
		ssdb__delete_breakpoint_with_num_3_0_i6);
MR_def_label(ssdb__delete_breakpoint_with_num_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__delete_breakpoint_with_num_3_0_i5);
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
		ssdb__delete_breakpoint_with_num_3_0_i8);
MR_def_label(ssdb__delete_breakpoint_with_num_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__delete_3_0,
		ssdb__delete_breakpoint_with_num_3_0_i9);
MR_def_label(ssdb__delete_breakpoint_with_num_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_with_num_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4967 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_with_num_3_0
	X = MR_r1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 4977 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_with_num_3_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 4989 "ssdb.c"
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
MR_def_label(ssdb__delete_breakpoint_with_num_3_0,5)
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


MR_BEGIN_MODULE(ssdb_module59)
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
#line 1713 "ssdb.m"

    exit(0);
    IO = IO0;
;}
#line 5044 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("exit_debugger");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__io__stdin_stream_0_0);
MR_decl_entry(io__read_line_as_string_4_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(fn__string__chomp_1_0);
MR_decl_entry(fn__string__words_1_0);

MR_BEGIN_MODULE(ssdb_module60)
	MR_init_entry1(ssdb__read_and_execute_cmd_6_0);
	MR_init_label8(ssdb__read_and_execute_cmd_6_0,88,2,3,4,67,8,9,14)
	MR_init_label8(ssdb__read_and_execute_cmd_6_0,15,16,18,22,24,29,30,32)
	MR_init_label8(ssdb__read_and_execute_cmd_6_0,33,35,37,39,41,42,43,45)
	MR_init_label7(ssdb__read_and_execute_cmd_6_0,46,47,49,50,52,20,56)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__read_and_execute_cmd_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ssdb__read_and_execute_cmd_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ssdb> ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__read_and_execute_cmd_6_0_i2);
MR_def_label(ssdb__read_and_execute_cmd_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__io__stdin_stream_0_0,
		ssdb__read_and_execute_cmd_6_0_i3);
MR_def_label(ssdb__read_and_execute_cmd_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__read_line_as_string_4_0,
		ssdb__read_and_execute_cmd_6_0_i4);
MR_def_label(ssdb__read_and_execute_cmd_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_6_0_i14);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_6_0_i8);
	}
	}
MR_def_label(ssdb__read_and_execute_cmd_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		ssdb__read_and_execute_cmd_6_0_i9);
MR_def_label(ssdb__read_and_execute_cmd_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("could not read command: %s\n", 27);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__read_and_execute_cmd_6_0_i67);
MR_def_label(ssdb__read_and_execute_cmd_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__chomp_1_0,
		ssdb__read_and_execute_cmd_6_0_i15);
MR_def_label(ssdb__read_and_execute_cmd_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__words_1_0,
		ssdb__read_and_execute_cmd_6_0_i16);
MR_def_label(ssdb__read_and_execute_cmd_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_6_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r1, 0);
	MR_r8 = (MR_hash_string((MR_String) MR_r7) & (MR_Integer) 63);
MR_def_label(ssdb__read_and_execute_cmd_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(4,0))[(MR_Integer) MR_r8];
	MR_r9 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 && (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_r7) == 0))) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_6_0_i24);
	}
	MR_r8 = (MR_COMMON(3,0))[(MR_Integer) MR_r8];
	if (MR_INT_GE(MR_r8,0))
		continue;
	MR_GOTO_LAB(ssdb__read_and_execute_cmd_6_0_i20);
	}
	break; } /* end while */
MR_def_label(ssdb__read_and_execute_cmd_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r8,
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i47) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i41) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i35) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i42) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i49) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i45) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i43) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i33) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i29) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i32) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i37) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i30) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i50) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i52) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i46) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i49) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i52) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i29) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i39) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i52) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i37) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i35) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i30) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i32) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i52) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i41) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i47) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i39) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_6_0_i20));
MR_def_label(ssdb__read_and_execute_cmd_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 7;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 6;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 8;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 3;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 5;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 16;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 13;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 14;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 15;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 10;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 4;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 9;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 11;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r7;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%s: unknown command (try \"help\")\n", 33);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__read_and_execute_cmd_6_0_i56);
MR_def_label(ssdb__read_and_execute_cmd_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ssdb__read_and_execute_cmd_6_0_i88);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module61)
	MR_init_entry1(ssdb__execute_cmd_8_0);
	MR_init_label8(ssdb__execute_cmd_8_0,3,5,7,9,11,13,15,17)
	MR_init_label8(ssdb__execute_cmd_8_0,19,21,23,25,27,29,31,33)
	MR_init_label1(ssdb__execute_cmd_8_0,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_cmd_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i23) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i33) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i25) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i21) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i7) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i19) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i29) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i31) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i27) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i5) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i13) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i35) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i3) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i15) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i11) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i9) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_8_0_i17));
MR_def_label(ssdb__execute_cmd_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_break_7_0);
MR_def_label(ssdb__execute_cmd_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_browse_7_0);
MR_def_label(ssdb__execute_cmd_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_continue_7_0);
MR_def_label(ssdb__execute_cmd_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_delete_7_0);
MR_def_label(ssdb__execute_cmd_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_disable_7_0);
MR_def_label(ssdb__execute_cmd_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_down_7_0);
MR_def_label(ssdb__execute_cmd_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_enable_7_0);
MR_def_label(ssdb__execute_cmd_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_exit_7_0);
MR_def_label(ssdb__execute_cmd_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_finish_7_0);
MR_def_label(ssdb__execute_cmd_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_goto_7_0);
MR_def_label(ssdb__execute_cmd_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_help_7_0);
MR_def_label(ssdb__execute_cmd_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_next_7_0);
MR_def_label(ssdb__execute_cmd_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_print_7_0);
MR_def_label(ssdb__execute_cmd_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_retry_7_0);
MR_def_label(ssdb__execute_cmd_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_stack_7_0);
MR_def_label(ssdb__execute_cmd_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_step_7_0);
MR_def_label(ssdb__execute_cmd_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_up_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module62)
	MR_init_entry1(ssdb__execute_ssdb_help_7_0);
	MR_init_label2(ssdb__execute_ssdb_help_7_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_help_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_help_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_help_7_0_i5);
MR_def_label(ssdb__execute_ssdb_help_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_help_7_0_i5);
MR_def_label(ssdb__execute_ssdb_help_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module63)
	MR_init_entry1(ssdb__execute_ssdb_step_7_0);
	MR_init_label2(ssdb__execute_ssdb_step_7_0,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_step_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_step_7_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ssdb__execute_ssdb_step_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_step_7_0_i4);
MR_def_label(ssdb__execute_ssdb_step_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module64)
	MR_init_entry1(ssdb__execute_ssdb_next_7_0);
	MR_init_label6(ssdb__execute_ssdb_next_7_0,6,7,5,4,3,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_next_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_next_7_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_next_7_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(ssdb__execute_ssdb_next_7_0_i5);
MR_def_label(ssdb__execute_ssdb_next_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_next_7_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(ssdb__execute_ssdb_next_7_0_i5);
MR_def_label(ssdb__execute_ssdb_next_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,5)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_next_7_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
MR_def_label(ssdb__execute_ssdb_next_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__execute_ssdb_next_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("The \140next\' command can be executed only at a call or redo port.\n", 64);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_next_7_0_i12);
MR_def_label(ssdb__execute_ssdb_next_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_next_7_0_i12);
MR_def_label(ssdb__execute_ssdb_next_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(ssdb_module65)
	MR_init_entry1(ssdb__execute_ssdb_goto_7_0);
	MR_init_label5(ssdb__execute_ssdb_goto_7_0,3,10,8,7,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_goto_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_goto_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_goto_7_0_i16);
MR_def_label(ssdb__execute_ssdb_goto_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_goto_7_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_goto_7_0_i10);
MR_def_label(ssdb__execute_ssdb_goto_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_goto_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ssdb__execute_ssdb_goto_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("The event number to go to must be an integer.\n", 46);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_goto_7_0_i16);
MR_def_label(ssdb__execute_ssdb_goto_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_goto_7_0_i16);
MR_def_label(ssdb__execute_ssdb_goto_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module66)
	MR_init_entry1(ssdb__execute_ssdb_continue_7_0);
	MR_init_label2(ssdb__execute_ssdb_continue_7_0,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_continue_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_continue_7_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_proceed();
MR_def_label(ssdb__execute_ssdb_continue_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_continue_7_0_i4);
MR_def_label(ssdb__execute_ssdb_continue_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module67)
	MR_init_entry1(ssdb__execute_ssdb_finish_7_0);
	MR_init_label8(ssdb__execute_ssdb_finish_7_0,6,7,5,4,3,18,21,20)
	MR_init_label3(ssdb__execute_ssdb_finish_7_0,16,15,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_finish_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_7_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_7_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(ssdb__execute_ssdb_finish_7_0_i5);
MR_def_label(ssdb__execute_ssdb_finish_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_7_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(ssdb__execute_ssdb_finish_7_0_i5);
MR_def_label(ssdb__execute_ssdb_finish_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,5)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_7_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(3) = MR_r4;
MR_def_label(ssdb__execute_ssdb_finish_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(stack__top_det_2_0,
		ssdb__execute_ssdb_finish_7_0_i21);
MR_def_label(ssdb__execute_ssdb_finish_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("The \140finish\' command can be executed only at a call or redo port.\n", 66);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_finish_7_0_i31);
MR_def_label(ssdb__execute_ssdb_finish_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_7_0_i15);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_finish_7_0_i18);
MR_def_label(ssdb__execute_ssdb_finish_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_7_0_i16);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_7_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 5948 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_7_0
{
#line 240 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 5957 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_7_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 5970 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_7_0_i20);
	}
	MR_r4 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_7_0_i20);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__execute_ssdb_finish_7_0_i21);
MR_def_label(ssdb__execute_ssdb_finish_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ssdb__execute_ssdb_finish_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("The depth must be between 1 and %i.\n", 36);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__execute_ssdb_finish_7_0_i31);
MR_def_label(ssdb__execute_ssdb_finish_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("The depth must be an integer.\n", 30);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_finish_7_0_i31);
MR_def_label(ssdb__execute_ssdb_finish_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_finish_7_0_i31);
MR_def_label(ssdb__execute_ssdb_finish_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module68)
	MR_init_entry1(ssdb__execute_ssdb_retry_7_0);
	MR_init_label8(ssdb__execute_ssdb_retry_7_0,115,6,7,8,9,5,11,14)
	MR_init_label8(ssdb__execute_ssdb_retry_7_0,15,3,20,23,25,31,32,35)
	MR_init_label8(ssdb__execute_ssdb_retry_7_0,37,34,30,41,44,45,46,28)
	MR_init_label3(ssdb__execute_ssdb_retry_7_0,22,19,57)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_retry_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ssdb__execute_ssdb_retry_7_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_7_0_i3);
	}
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_7_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(stack__top_det_2_0,
		ssdb__execute_ssdb_retry_7_0_i6);
MR_def_label(ssdb__execute_ssdb_retry_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(ssdb__set_debugger_state_3_0,
		ssdb__execute_ssdb_retry_7_0_i7);
MR_def_label(ssdb__execute_ssdb_retry_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_event_number_3_0,
		ssdb__execute_ssdb_retry_7_0_i8);
MR_def_label(ssdb__execute_ssdb_retry_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_csn_3_0,
		ssdb__execute_ssdb_retry_7_0_i9);
MR_def_label(ssdb__execute_ssdb_retry_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ssdb__execute_ssdb_retry_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_r2 == (MR_Integer) 0) || ((MR_Integer) MR_r2 == (MR_Integer) 3)) || ((MR_Integer) MR_r2 == (MR_Integer) 5)))) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_7_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("Cannot execute retry at a call or redo port.\n", 45);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_retry_7_0_i57);
MR_def_label(ssdb__execute_ssdb_retry_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(stack__top_det_2_0,
		ssdb__execute_ssdb_retry_7_0_i14);
MR_def_label(ssdb__execute_ssdb_retry_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_ctfield(0, MR_r1, 0) - (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_event_number_3_0,
		ssdb__execute_ssdb_retry_7_0_i15);
MR_def_label(ssdb__execute_ssdb_retry_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_csn_3_0,
		ssdb__execute_ssdb_retry_7_0_i46);
MR_def_label(ssdb__execute_ssdb_retry_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_7_0_i19);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ssdb__get_cur_ssdb_depth_3_0,
		ssdb__execute_ssdb_retry_7_0_i20);
MR_def_label(ssdb__execute_ssdb_retry_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_retry_7_0_i23);
MR_def_label(ssdb__execute_ssdb_retry_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_7_0_i22);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_7_0_i25);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ssdb__execute_ssdb_retry_7_0_i115);
MR_def_label(ssdb__execute_ssdb_retry_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_7_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_7_0_i28);
	}
	if (MR_INT_NE(MR_sv(1),4)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_7_0_i30);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__execute_ssdb_retry_7_0_i31);
MR_def_label(ssdb__execute_ssdb_retry_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(ssdb__get_cur_ssdb_shadow_stack_nondet_3_0,
		ssdb__execute_ssdb_retry_7_0_i32);
MR_def_label(ssdb__execute_ssdb_retry_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__csn_is_in_stack_2_0,
		ssdb__execute_ssdb_retry_7_0_i35);
MR_def_label(ssdb__execute_ssdb_retry_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_7_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(ssdb__set_debugger_state_3_0,
		ssdb__execute_ssdb_retry_7_0_i37);
MR_def_label(ssdb__execute_ssdb_retry_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ssdb__execute_ssdb_retry_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(ssdb__execute_ssdb_retry_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_sv(1) == (MR_Integer) 0) || ((MR_Integer) MR_sv(1) == (MR_Integer) 3)) || ((MR_Integer) MR_sv(1) == (MR_Integer) 5)))) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_7_0_i41);
	}
	MR_r1 = (MR_Word) MR_string_const("Cannot execute retry at a call or redo port.\n", 45);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_retry_7_0_i57);
MR_def_label(ssdb__execute_ssdb_retry_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__execute_ssdb_retry_7_0_i44);
MR_def_label(ssdb__execute_ssdb_retry_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_ctfield(0, MR_r1, 0) - (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_event_number_3_0,
		ssdb__execute_ssdb_retry_7_0_i45);
MR_def_label(ssdb__execute_ssdb_retry_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_csn_3_0,
		ssdb__execute_ssdb_retry_7_0_i46);
MR_def_label(ssdb__execute_ssdb_retry_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ssdb__execute_ssdb_retry_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("The depth must be between 1 and %i.\n", 36);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__execute_ssdb_retry_7_0_i57);
MR_def_label(ssdb__execute_ssdb_retry_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The depth must be an integer.\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_retry_7_0_i57);
MR_def_label(ssdb__execute_ssdb_retry_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_retry_7_0_i57);
MR_def_label(ssdb__execute_ssdb_retry_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module69)
	MR_init_entry1(ssdb__execute_ssdb_stack_7_0);
	MR_init_label2(ssdb__execute_ssdb_stack_7_0,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_stack_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_stack_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ssdb__print_frames_list_5_0,
		ssdb__execute_ssdb_stack_7_0_i6);
MR_def_label(ssdb__execute_ssdb_stack_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_stack_7_0_i6);
MR_def_label(ssdb__execute_ssdb_stack_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module70)
	MR_init_entry1(ssdb__execute_ssdb_print_7_0);
	MR_init_label3(ssdb__execute_ssdb_print_7_0,4,3,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_print_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_print_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__execute_ssdb_print_7_0_i4);
MR_def_label(ssdb__execute_ssdb_print_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ssdb__execute_ssdb_print_7_0_i8);
MR_def_label(ssdb__execute_ssdb_print_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_print_7_0_i8);
MR_def_label(ssdb__execute_ssdb_print_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__search_3_0);
MR_decl_entry(io__stdin_stream_3_0);
MR_decl_entry(io__stdout_stream_3_0);
MR_decl_entry(mdb__browser_info__init_persistent_state_1_0);
MR_decl_entry(fn__mdb__browser_term__univ_to_browser_term_1_0);
MR_decl_entry(mdb__browse__browse_browser_term_no_modes_8_0);

MR_BEGIN_MODULE(ssdb_module71)
	MR_init_entry1(ssdb__execute_ssdb_browse_7_0);
	MR_init_label8(ssdb__execute_ssdb_browse_7_0,3,9,10,11,13,14,15,16)
	MR_init_label3(ssdb__execute_ssdb_browse_7_0,8,7,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_browse_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_browse_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_browse_7_0_i24);
MR_def_label(ssdb__execute_ssdb_browse_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_browse_7_0_i7);
	}
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__execute_ssdb_browse_7_0_i9);
MR_def_label(ssdb__execute_ssdb_browse_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_np_call_localret_ent(ssdb__list_var_value_to_assoc_list_2_0,
		ssdb__execute_ssdb_browse_7_0_i10);
MR_def_label(ssdb__execute_ssdb_browse_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(assoc_list__search_3_0,
		ssdb__execute_ssdb_browse_7_0_i11);
MR_def_label(ssdb__execute_ssdb_browse_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_browse_7_0_i8);
	}
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(io__stdin_stream_3_0,
		ssdb__execute_ssdb_browse_7_0_i13);
MR_def_label(ssdb__execute_ssdb_browse_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		ssdb__execute_ssdb_browse_7_0_i14);
MR_def_label(ssdb__execute_ssdb_browse_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(mdb__browser_info__init_persistent_state_1_0,
		ssdb__execute_ssdb_browse_7_0_i15);
MR_def_label(ssdb__execute_ssdb_browse_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdb__browser_term__univ_to_browser_term_1_0,
		ssdb__execute_ssdb_browse_7_0_i16);
MR_def_label(ssdb__execute_ssdb_browse_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(mdb__browse__browse_browser_term_no_modes_8_0,
		ssdb__execute_ssdb_browse_7_0_i24);
MR_def_label(ssdb__execute_ssdb_browse_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("There is no variable named \140%s\'.\n", 33);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__execute_ssdb_browse_7_0_i24);
MR_def_label(ssdb__execute_ssdb_browse_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_browse_7_0_i24);
MR_def_label(ssdb__execute_ssdb_browse_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module72)
	MR_init_entry1(ssdb__execute_ssdb_down_7_0);
	MR_init_label8(ssdb__execute_ssdb_down_7_0,5,6,7,8,9,10,11,12)
	MR_init_label6(ssdb__execute_ssdb_down_7_0,13,14,15,4,3,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_down_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_down_7_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_down_7_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__execute_ssdb_down_7_0_i5);
MR_def_label(ssdb__execute_ssdb_down_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("       ", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_down_7_0_i6);
MR_def_label(ssdb__execute_ssdb_down_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__execute_ssdb_down_7_0_i7);
MR_def_label(ssdb__execute_ssdb_down_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_down_7_0_i8);
MR_def_label(ssdb__execute_ssdb_down_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__execute_ssdb_down_7_0_i9);
MR_def_label(ssdb__execute_ssdb_down_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_down_7_0_i10);
MR_def_label(ssdb__execute_ssdb_down_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__execute_ssdb_down_7_0_i11);
MR_def_label(ssdb__execute_ssdb_down_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_down_7_0_i12);
MR_def_label(ssdb__execute_ssdb_down_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(7), 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_down_7_0_i13);
MR_def_label(ssdb__execute_ssdb_down_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_down_7_0_i14);
MR_def_label(ssdb__execute_ssdb_down_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(7), 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_down_7_0_i15);
MR_def_label(ssdb__execute_ssdb_down_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ssdb__execute_ssdb_down_7_0_i21);
MR_def_label(ssdb__execute_ssdb_down_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("Already at bottom stack frame.\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_down_7_0_i21);
MR_def_label(ssdb__execute_ssdb_down_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_down_7_0_i21);
MR_def_label(ssdb__execute_ssdb_down_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__stack__depth_1_0);

MR_BEGIN_MODULE(ssdb_module73)
	MR_init_entry1(ssdb__execute_ssdb_up_7_0);
	MR_init_label8(ssdb__execute_ssdb_up_7_0,5,6,7,8,9,10,11,12)
	MR_init_label8(ssdb__execute_ssdb_up_7_0,13,14,15,16,17,4,3,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_up_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_up_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		ssdb__execute_ssdb_up_7_0_i5);
MR_def_label(ssdb__execute_ssdb_up_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_up_7_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__get_correct_frame_with_num_3_0,
		ssdb__execute_ssdb_up_7_0_i6);
MR_def_label(ssdb__execute_ssdb_up_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("       ", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_7_0_i7);
MR_def_label(ssdb__execute_ssdb_up_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__execute_ssdb_up_7_0_i8);
MR_def_label(ssdb__execute_ssdb_up_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_7_0_i9);
MR_def_label(ssdb__execute_ssdb_up_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__execute_ssdb_up_7_0_i10);
MR_def_label(ssdb__execute_ssdb_up_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_7_0_i11);
MR_def_label(ssdb__execute_ssdb_up_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__execute_ssdb_up_7_0_i12);
MR_def_label(ssdb__execute_ssdb_up_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_7_0_i13);
MR_def_label(ssdb__execute_ssdb_up_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(7), 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_7_0_i14);
MR_def_label(ssdb__execute_ssdb_up_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_7_0_i15);
MR_def_label(ssdb__execute_ssdb_up_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(7), 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_7_0_i16);
MR_def_label(ssdb__execute_ssdb_up_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ssdb__execute_ssdb_up_7_0_i17);
MR_def_label(ssdb__execute_ssdb_up_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
MR_def_label(ssdb__execute_ssdb_up_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Already at top stack frame.\n", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_7_0_i22);
MR_def_label(ssdb__execute_ssdb_up_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_up_7_0_i22);
MR_def_label(ssdb__execute_ssdb_up_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__contains_2_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(ssdb_module74)
	MR_init_entry1(ssdb__execute_ssdb_break_7_0);
	MR_init_label8(ssdb__execute_ssdb_break_7_0,3,10,12,8,7,20,21,24)
	MR_init_label8(ssdb__execute_ssdb_break_7_0,22,28,31,32,33,34,19,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_break_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_break_7_0_i38);
MR_def_label(ssdb__execute_ssdb_break_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r6 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_7_0_i7);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("info", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_7_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	}
	MR_np_call_localret_ent(ssdb__get_cur_ssdb_breakpoints_3_0,
		ssdb__execute_ssdb_break_7_0_i10);
MR_def_label(ssdb__execute_ssdb_break_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__execute_ssdb_break_7_0_i12);
MR_def_label(ssdb__execute_ssdb_break_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__print_breakpoints_3_0,
		ssdb__execute_ssdb_break_7_0_i38);
MR_def_label(ssdb__execute_ssdb_break_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_break_7_0_i38);
MR_def_label(ssdb__execute_ssdb_break_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_7_0_i19);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ssdb__get_cur_ssdb_breakpoints_3_0,
		ssdb__execute_ssdb_break_7_0_i20);
MR_def_label(ssdb__execute_ssdb_break_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		ssdb__execute_ssdb_break_7_0_i21);
MR_def_label(ssdb__execute_ssdb_break_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__contains_2_0,
		ssdb__execute_ssdb_break_7_0_i24);
MR_def_label(ssdb__execute_ssdb_break_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_7_0_i22);
	}
	MR_r1 = (MR_Word) MR_string_const("The new breakpoint already exist\n", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_break_7_0_i38);
MR_def_label(ssdb__execute_ssdb_break_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__get_cur_ssdb_number_of_breakpoint_3_0,
		ssdb__execute_ssdb_break_7_0_i28);
MR_def_label(ssdb__execute_ssdb_break_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tempr4 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr4;
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ssdb__execute_ssdb_break_7_0_i31);
MR_def_label(ssdb__execute_ssdb_break_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__execute_ssdb_break_7_0_i32);
MR_def_label(ssdb__execute_ssdb_break_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__print_breakpoints_3_0,
		ssdb__execute_ssdb_break_7_0_i33);
MR_def_label(ssdb__execute_ssdb_break_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_breakpoints_3_0,
		ssdb__execute_ssdb_break_7_0_i34);
MR_def_label(ssdb__execute_ssdb_break_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_number_of_breakpoint_3_0,
		ssdb__execute_ssdb_break_7_0_i38);
MR_def_label(ssdb__execute_ssdb_break_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_break_7_0_i38);
MR_def_label(ssdb__execute_ssdb_break_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module75)
	MR_init_entry1(ssdb__execute_ssdb_enable_7_0);
	MR_init_label8(ssdb__execute_ssdb_enable_7_0,3,11,8,16,19,22,25,21)
	MR_init_label3(ssdb__execute_ssdb_enable_7_0,14,7,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_enable_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_enable_7_0_i33);
MR_def_label(ssdb__execute_ssdb_enable_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r6 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_7_0_i7);
	}
	MR_r6 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_7_0_i8);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7029 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_7_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 7038 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7051 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__execute_ssdb_enable_7_0_i11);
MR_def_label(ssdb__execute_ssdb_enable_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ssdb__modify_state_breakpoint_6_0,
		ssdb__execute_ssdb_enable_7_0_i25);
MR_def_label(ssdb__execute_ssdb_enable_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_enable_7_0_i16);
MR_def_label(ssdb__execute_ssdb_enable_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_7_0_i14);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7097 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_7_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 7106 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7119 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__execute_ssdb_enable_7_0_i19);
MR_def_label(ssdb__execute_ssdb_enable_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__find_breakpoint_with_num_3_0,
		ssdb__execute_ssdb_enable_7_0_i22);
MR_def_label(ssdb__execute_ssdb_enable_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_7_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(ssdb__modify_state_breakpoint_6_0,
		ssdb__execute_ssdb_enable_7_0_i25);
MR_def_label(ssdb__execute_ssdb_enable_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7165 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_7_0
	X = MR_r1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 7175 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7187 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
MR_def_label(ssdb__execute_ssdb_enable_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("No breakpoint found.\n", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_enable_7_0_i33);
MR_def_label(ssdb__execute_ssdb_enable_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_enable_7_0_i33);
MR_def_label(ssdb__execute_ssdb_enable_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_enable_7_0_i33);
MR_def_label(ssdb__execute_ssdb_enable_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module76)
	MR_init_entry1(ssdb__execute_ssdb_disable_7_0);
	MR_init_label8(ssdb__execute_ssdb_disable_7_0,3,11,8,16,19,22,25,21)
	MR_init_label4(ssdb__execute_ssdb_disable_7_0,14,29,7,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_disable_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_disable_7_0_i34);
MR_def_label(ssdb__execute_ssdb_disable_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r6 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_7_0_i7);
	}
	MR_r6 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_7_0_i8);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7277 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_7_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 7286 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7299 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__execute_ssdb_disable_7_0_i11);
MR_def_label(ssdb__execute_ssdb_disable_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ssdb__modify_state_breakpoint_6_0,
		ssdb__execute_ssdb_disable_7_0_i25);
MR_def_label(ssdb__execute_ssdb_disable_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_disable_7_0_i16);
MR_def_label(ssdb__execute_ssdb_disable_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_7_0_i14);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7345 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_7_0
{
#line 246 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;;}
#line 7354 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7367 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__execute_ssdb_disable_7_0_i19);
MR_def_label(ssdb__execute_ssdb_disable_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__find_breakpoint_with_num_3_0,
		ssdb__execute_ssdb_disable_7_0_i22);
MR_def_label(ssdb__execute_ssdb_disable_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_7_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(ssdb__modify_state_breakpoint_6_0,
		ssdb__execute_ssdb_disable_7_0_i25);
MR_def_label(ssdb__execute_ssdb_disable_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7413 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_7_0
	X = MR_r1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 7423 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7435 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
MR_def_label(ssdb__execute_ssdb_disable_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("No breakpoint found.\n", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_disable_7_0_i34);
MR_def_label(ssdb__execute_ssdb_disable_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("The number must be an integer\n", 30);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_disable_7_0_i29);
MR_def_label(ssdb__execute_ssdb_disable_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_disable_7_0_i34);
MR_def_label(ssdb__execute_ssdb_disable_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_disable_7_0_i34);
MR_def_label(ssdb__execute_ssdb_disable_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(ssdb_module77)
	MR_init_entry1(ssdb__execute_ssdb_delete_7_0);
	MR_init_label7(ssdb__execute_ssdb_delete_7_0,3,11,8,16,14,7,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_delete_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_delete_7_0_i24);
MR_def_label(ssdb__execute_ssdb_delete_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r6 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_7_0_i7);
	}
	MR_r6 = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_7_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ssdb__execute_ssdb_delete_7_0_i11);
MR_def_label(ssdb__execute_ssdb_delete_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7540 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_7_0
	X = MR_r1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 7550 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_7_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 7562 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("All breakpoints have been deleted.\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_delete_7_0_i24);
MR_def_label(ssdb__execute_ssdb_delete_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_delete_7_0_i16);
MR_def_label(ssdb__execute_ssdb_delete_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_7_0_i14);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__delete_breakpoint_with_num_3_0,
		ssdb__execute_ssdb_delete_7_0_i24);
MR_def_label(ssdb__execute_ssdb_delete_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("The number must be an integer\n", 30);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_delete_7_0_i24);
MR_def_label(ssdb__execute_ssdb_delete_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_delete_7_0_i24);
MR_def_label(ssdb__execute_ssdb_delete_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module78)
	MR_init_entry1(ssdb__execute_ssdb_exit_7_0);
	MR_init_label2(ssdb__execute_ssdb_exit_7_0,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_exit_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_exit_7_0_i13);
	}
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_exit_7_0
	MR_OBTAIN_GLOBAL_LOCK("exit_debugger");
{
#line 1713 "ssdb.m"

    exit(0);
    IO = IO0;
;}
#line 7642 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("exit_debugger");
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ssdb__execute_ssdb_exit_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_exit_7_0_i4);
MR_def_label(ssdb__execute_ssdb_exit_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module79)
	MR_init_entry1(ssdb__print_event_info_7_0);
	MR_init_label8(ssdb__print_event_info_7_0,2,3,4,5,6,7,8,10)
	MR_init_label8(ssdb__print_event_info_7_0,12,14,16,17,18,19,20,21)
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
		MR_LABEL_AP(ssdb__print_event_info_7_0_i10) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_7_0_i12) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_7_0_i14) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_7_0_i10) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_7_0_i12) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_7_0_i16) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_7_0_i14));
MR_def_label(ssdb__print_event_info_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("CALL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i17);
MR_def_label(ssdb__print_event_info_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("EXIT", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i17);
MR_def_label(ssdb__print_event_info_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("FAIL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i17);
MR_def_label(ssdb__print_event_info_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("REDO", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i17);
MR_def_label(ssdb__print_event_info_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i18);
MR_def_label(ssdb__print_event_info_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i19);
MR_def_label(ssdb__print_event_info_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i20);
MR_def_label(ssdb__print_event_info_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_7_0_i21);
MR_def_label(ssdb__print_event_info_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module80)
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
{
#line 1944 "ssdb.m"

;}
#line 7802 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module81)
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
{
#line 1972 "ssdb.m"

;}
#line 7829 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__push_3_0);

MR_BEGIN_MODULE(ssdb_module82)
	MR_init_entry1(ssdb__handle_event_call_2_0);
	MR_init_label6(ssdb__handle_event_call_2_0,5,7,8,11,12,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_call_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 1944 "ssdb.m"

;}
#line 7860 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 7872 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 258 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 7881 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 7894 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_2_0_i2);
	}
	if (MR_INT_EQ(MR_r4,2)) {
		MR_GOTO_LAB(ssdb__handle_event_call_2_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7912 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 234 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 7923 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7936 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7948 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_tempr2;
{
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 7959 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 7971 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 7983 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 237 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_csn;;}
#line 7992 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 8005 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 8017 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_tempr3;
{
#line 237 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 8028 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 8040 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8052 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 8061 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8074 "ssdb.c"
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
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 8097 "ssdb.c"
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
#line 240 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 8110 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 8122 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8134 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 8143 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8156 "ssdb.c"
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
		ssdb__handle_event_call_2_0_i7);
MR_def_label(ssdb__handle_event_call_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8182 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_r1;
{
#line 252 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 8192 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8204 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		ssdb__handle_event_call_2_0_i8);
MR_def_label(ssdb__handle_event_call_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_2_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		ssdb__handle_event_call_2_0_i11);
MR_def_label(ssdb__handle_event_call_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_6_0,
		ssdb__handle_event_call_2_0_i12);
MR_def_label(ssdb__handle_event_call_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_6_0,
		ssdb__handle_event_call_2_0_i2);
MR_def_label(ssdb__handle_event_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 1972 "ssdb.m"

;}
#line 8252 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module83)
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
#line 255 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet= X;;}
#line 8280 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module84)
	MR_init_entry1(ssdb__set_cur_ssdb_shadow_stack_nondet_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_cur_ssdb_shadow_stack_nondet_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_shadow_stack_nondet_3_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 8310 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_shadow_stack_nondet_3_0
	X = MR_r1;
{
#line 255 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet= X;;}
#line 8320 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_cur_ssdb_shadow_stack_nondet_3_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 8332 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module85)
	MR_init_entry1(ssdb__handle_event_call_nondet_2_0);
	MR_init_label7(ssdb__handle_event_call_nondet_2_0,5,7,8,9,12,13,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_call_nondet_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 1944 "ssdb.m"

;}
#line 8362 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 8374 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 258 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 8383 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 8396 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_nondet_2_0_i2);
	}
	if (MR_INT_EQ(MR_r4,2)) {
		MR_GOTO_LAB(ssdb__handle_event_call_nondet_2_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 8414 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 234 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 8425 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 8438 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 8450 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_tempr2;
{
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 8461 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 8473 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 8485 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 237 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_csn;;}
#line 8494 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 8507 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 8519 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_tempr3;
{
#line 237 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 8530 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 8542 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8554 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 8563 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8576 "ssdb.c"
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
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 8599 "ssdb.c"
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
#line 240 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 8612 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 8624 "ssdb.c"
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
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8643 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 8652 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8665 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	}
	MR_np_call_localret_ent(stack__push_3_0,
		ssdb__handle_event_call_nondet_2_0_i7);
MR_def_label(ssdb__handle_event_call_nondet_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8685 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_r1;
{
#line 252 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 8695 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8707 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 8719 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 255 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 8728 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 8741 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(stack__push_3_0,
		ssdb__handle_event_call_nondet_2_0_i8);
MR_def_label(ssdb__handle_event_call_nondet_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 8764 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_r1;
{
#line 255 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet= X;;}
#line 8774 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 8786 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		ssdb__handle_event_call_nondet_2_0_i9);
MR_def_label(ssdb__handle_event_call_nondet_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_nondet_2_0_i2);
	}
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		ssdb__handle_event_call_nondet_2_0_i12);
MR_def_label(ssdb__handle_event_call_nondet_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_6_0,
		ssdb__handle_event_call_nondet_2_0_i13);
MR_def_label(ssdb__handle_event_call_nondet_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_6_0,
		ssdb__handle_event_call_nondet_2_0_i2);
MR_def_label(ssdb__handle_event_call_nondet_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 1972 "ssdb.m"

;}
#line 8833 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module86)
	MR_init_entry1(ssdb__get_ssdb_depth_dec_3_0);
	MR_init_label1(ssdb__get_ssdb_depth_dec_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_ssdb_depth_dec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_ssdb_depth_dec_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8866 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_ssdb_depth_dec_3_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 8875 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_ssdb_depth_dec_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8888 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		ssdb__get_ssdb_depth_dec_3_0_i2);
MR_def_label(ssdb__get_ssdb_depth_dec_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_ssdb_depth_dec_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 8905 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_ssdb_depth_dec_3_0
	X = MR_tempr1;
{
#line 240 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 8918 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_ssdb_depth_dec_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 8930 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module87)
	MR_init_entry1(ssdb__set_list_var_value_in_shadow_stack_3_0);
	MR_init_label2(ssdb__set_list_var_value_in_shadow_stack_3_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_list_var_value_in_shadow_stack_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_list_var_value_in_shadow_stack_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8965 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_list_var_value_in_shadow_stack_3_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 8976 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_list_var_value_in_shadow_stack_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 8989 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(stack__pop_det_3_0,
		ssdb__set_list_var_value_in_shadow_stack_3_0_i2);
MR_def_label(ssdb__set_list_var_value_in_shadow_stack_3_0,2)
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
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	}
	MR_np_call_localret_ent(stack__push_3_0,
		ssdb__set_list_var_value_in_shadow_stack_3_0_i4);
MR_def_label(ssdb__set_list_var_value_in_shadow_stack_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_list_var_value_in_shadow_stack_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9025 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_list_var_value_in_shadow_stack_3_0
	X = MR_r1;
{
#line 252 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 9035 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_list_var_value_in_shadow_stack_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9047 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module88)
	MR_init_entry1(ssdb__handle_event_exit_3_0);
	MR_init_label8(ssdb__handle_event_exit_3_0,4,5,6,8,11,12,10,14)
	MR_init_label6(ssdb__handle_event_exit_3_0,7,15,16,17,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_exit_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 1944 "ssdb.m"

;}
#line 9078 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 9090 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 258 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 9099 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 9112 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 9127 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 234 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 9138 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 9151 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 9163 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_tempr2;
{
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 9174 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 9186 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 9198 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 240 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 9207 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 9220 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ssdb__set_list_var_value_in_shadow_stack_3_0,
		ssdb__handle_event_exit_3_0_i4);
MR_def_label(ssdb__handle_event_exit_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9241 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 9250 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9263 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(stack__top_det_2_0,
		ssdb__handle_event_exit_3_0_i5);
MR_def_label(ssdb__handle_event_exit_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		ssdb__handle_event_exit_3_0_i6);
MR_def_label(ssdb__handle_event_exit_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i8);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i7);
MR_def_label(ssdb__handle_event_exit_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		ssdb__handle_event_exit_3_0_i11);
MR_def_label(ssdb__handle_event_exit_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_6_0,
		ssdb__handle_event_exit_3_0_i12);
MR_def_label(ssdb__handle_event_exit_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_6_0,
		ssdb__handle_event_exit_3_0_i14);
MR_def_label(ssdb__handle_event_exit_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 9332 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_ctfield(0, MR_sv(5), 0) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_tempr1;
{
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 9345 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 9357 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 9369 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = ((MR_Integer) MR_ctfield(0, MR_sv(5), 1) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_tempr1;
{
#line 237 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 9380 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 9392 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr2 = MR_sv(6);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_6_0,
		ssdb__handle_event_exit_3_0_i14);
MR_def_label(ssdb__handle_event_exit_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
MR_def_label(ssdb__handle_event_exit_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9418 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 9427 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9440 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		ssdb__handle_event_exit_3_0_i15);
MR_def_label(ssdb__handle_event_exit_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 9457 "ssdb.c"
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
#line 240 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 9470 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 9482 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(stack__pop_det_3_0,
		ssdb__handle_event_exit_3_0_i16);
MR_def_label(ssdb__handle_event_exit_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_shadow_stack_3_0,
		ssdb__handle_event_exit_3_0_i17);
MR_def_label(ssdb__handle_event_exit_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i2);
MR_def_label(ssdb__handle_event_exit_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
MR_def_label(ssdb__handle_event_exit_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 1972 "ssdb.m"

;}
#line 9510 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module89)
	MR_init_entry1(ssdb__handle_event_exit_nondet_2_0);
	MR_init_label8(ssdb__handle_event_exit_nondet_2_0,5,7,8,9,14,15,13,10)
	MR_init_label3(ssdb__handle_event_exit_nondet_2_0,18,19,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_exit_nondet_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 1944 "ssdb.m"

;}
#line 9541 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 9553 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 258 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 9562 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 9575 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i2);
	}
	if (MR_INT_EQ(MR_r4,2)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 9593 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 234 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 9604 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 9617 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 9629 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
	X = MR_tempr2;
{
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 9640 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 9652 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 9664 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 240 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 9673 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 9686 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9698 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 9707 "ssdb.c"
	MR_tempr3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9720 "ssdb.c"
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
		ssdb__handle_event_exit_nondet_2_0_i7);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9759 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
	X = MR_r1;
{
#line 252 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 9769 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9781 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9793 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 9802 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9815 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(stack__top_det_2_0,
		ssdb__handle_event_exit_nondet_2_0_i8);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Integer) 4;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		ssdb__handle_event_exit_nondet_2_0_i9);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i10);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i13);
	}
	MR_r1 = (MR_Integer) 4;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		ssdb__handle_event_exit_nondet_2_0_i14);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_6_0,
		ssdb__handle_event_exit_nondet_2_0_i15);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_6_0,
		ssdb__handle_event_exit_nondet_2_0_i10);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr2 = MR_sv(5);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_6_0,
		ssdb__handle_event_exit_nondet_2_0_i10);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9888 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 9897 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 9910 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		ssdb__handle_event_exit_nondet_2_0_i18);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 9927 "ssdb.c"
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
#line 240 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 9940 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 9952 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(stack__pop_det_3_0,
		ssdb__handle_event_exit_nondet_2_0_i19);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_shadow_stack_3_0,
		ssdb__handle_event_exit_nondet_2_0_i2);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 1972 "ssdb.m"

;}
#line 9973 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module90)
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


MR_BEGIN_MODULE(ssdb_module91)
	MR_init_entry1(ssdb__get_frame_at_depth_nondet_2_4_0);
	MR_init_label5(ssdb__get_frame_at_depth_nondet_2_4_0,24,3,2,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_frame_at_depth_nondet_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ssdb__get_frame_at_depth_nondet_2_4_0,24)
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
		ssdb__get_frame_at_depth_nondet_2_4_0_i3);
MR_def_label(ssdb__get_frame_at_depth_nondet_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__get_frame_at_depth_nondet_2_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__get_frame_at_depth_nondet_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(stack__pop_det_3_0,
		ssdb__get_frame_at_depth_nondet_2_4_0_i5);
MR_def_label(ssdb__get_frame_at_depth_nondet_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
	if ((MR_sv(2) != MR_tempr1)) {
		MR_GOTO_LAB(ssdb__get_frame_at_depth_nondet_2_4_0_i6);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr6 = MR_sv(1);
	MR_tempr3 = MR_ctfield(0, MR_tempr6, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(ssdb__get_frame_at_depth_nondet_2_4_0_i6);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(ssdb__get_frame_at_depth_nondet_2_4_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_r1 = MR_tempr4;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ssdb__get_frame_at_depth_nondet_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ssdb__get_frame_at_depth_nondet_2_4_0_i24);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module92)
	MR_init_entry1(ssdb__get_frame_at_depth_nondet_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__get_frame_at_depth_nondet_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_frame_at_depth_nondet_5_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 10104 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__get_frame_at_depth_nondet_5_0
{
#line 255 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 10115 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__get_frame_at_depth_nondet_5_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 10128 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(ssdb__get_frame_at_depth_nondet_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module93)
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


MR_BEGIN_MODULE(ssdb_module94)
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


MR_BEGIN_MODULE(ssdb_module95)
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
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_event_number_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10196 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_event_number");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module96)
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
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_event_number_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10227 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_event_number");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 10240 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
	X = (MR_Integer) 0;
{
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 10250 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 10262 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module97)
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
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_csn_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10292 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_csn");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module98)
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
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_csn_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10323 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_csn");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 10336 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
	X = (MR_Integer) 0;
{
#line 237 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 10346 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 10358 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module99)
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
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_depth_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10388 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_depth");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module100)
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
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_depth_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10419 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_depth");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_depth_0_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 10432 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_depth_0_0
	X = (MR_Integer) 0;
{
#line 240 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 10442 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_depth_0_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 10454 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module101)
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
#line 243 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_next_stop_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10484 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_next_stop");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module102)
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
#line 243 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_next_stop_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10515 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_next_stop");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
{
#line 243 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 10528 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
	X = (MR_Word) MR_tbmkword(0, 0);
{
#line 243 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop= X;;}
#line 10538 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
{
#line 243 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 10550 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module103)
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
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10580 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_breakpoints");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module104)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0);
	MR_init_label1(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0,3)
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
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10614 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_breakpoints");
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0_i3);
MR_def_label(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 10633 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0
	X = MR_r1;
{
#line 246 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints= X;;}
#line 10643 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0
{
#line 246 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 10655 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module105)
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
#line 249 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10685 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_number_of_breakpoint");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module106)
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
#line 249 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10716 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_number_of_breakpoint");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0
{
#line 249 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 10729 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0
	X = (MR_Integer) 0;
{
#line 249 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_number_of_breakpoint= X;;}
#line 10739 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0
{
#line 249 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 10751 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module107)
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
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10781 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module108)
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
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10816 "ssdb.c"
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
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 10834 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0
	X = MR_r1;
{
#line 252 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 10844 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_0_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 10856 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module109)
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
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10886 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_shadow_stack_nondet");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module110)
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
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10920 "ssdb.c"
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
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 10938 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0
	X = MR_r1;
{
#line 255 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet= X;;}
#line 10948 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_shadow_stack_nondet_0_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 10960 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module111)
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
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_debugger_state_lock, MR_MUTEX_ATTR);
#endif
;}
#line 10990 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module112)
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
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_debugger_state_lock, MR_MUTEX_ATTR);
#endif
;}
#line 11025 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_debugger_state");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 1944 "ssdb.m"

;}
#line 11035 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("SSDB", 4);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		ssdb__initialise_mutable_debugger_state_0_0_i2);
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 1972 "ssdb.m"

;}
#line 11049 "ssdb.c"
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
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 11071 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
	X = MR_r1;
{
#line 258 "ssdb.m"
ssdb__mutable_variable_debugger_state= X;;}
#line 11081 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 11093 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module113)
	MR_init_entry1(ssdb__print_var_3_0);
	MR_init_label8(ssdb__print_var_3_0,27,28,29,30,31,32,15,16)
	MR_init_label8(ssdb__print_var_3_0,17,18,19,20,21,23,3,4)
	MR_init_label8(ssdb__print_var_3_0,5,6,7,8,9,10,12,13)
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
		MR_GOTO_LAB(ssdb__print_var_3_0_i3);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ssdb__print_var_3_0_i15);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Integer) 9;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		ssdb__print_var_3_0_i27);
MR_def_label(ssdb__print_var_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i28);
MR_def_label(ssdb__print_var_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i29);
MR_def_label(ssdb__print_var_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_var_3_0_i30);
MR_def_label(ssdb__print_var_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t=\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i31);
MR_def_label(ssdb__print_var_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i32);
MR_def_label(ssdb__print_var_3_0,32)
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = (MR_Integer) 80;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(pprint__write_4_0,
		ssdb__print_var_3_0_i23);
MR_def_label(ssdb__print_var_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ssdb__print_var_3_0_i13);
MR_def_label(ssdb__print_var_3_0,3)
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
		ssdb__print_var_3_0_i4);
MR_def_label(ssdb__print_var_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i5);
MR_def_label(ssdb__print_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i6);
MR_def_label(ssdb__print_var_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_var_3_0_i7);
MR_def_label(ssdb__print_var_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t=\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_3_0_i8);
MR_def_label(ssdb__print_var_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		ssdb__print_var_3_0_i9);
MR_def_label(ssdb__print_var_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__pprint__to_doc_1_0,
		ssdb__print_var_3_0_i10);
MR_def_label(ssdb__print_var_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = (MR_Integer) 80;
	MR_r3 = MR_tempr1;
	}
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


MR_BEGIN_MODULE(ssdb_module114)
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

MR_BEGIN_MODULE(ssdb_module115)
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


MR_BEGIN_MODULE(ssdb_module116)
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
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__breakpoint_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
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

MR_BEGIN_MODULE(ssdb_module117)
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

MR_BEGIN_MODULE(ssdb_module118)
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

MR_BEGIN_MODULE(ssdb_module119)
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


MR_BEGIN_MODULE(ssdb_module120)
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


MR_BEGIN_MODULE(ssdb_module121)
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

MR_decl_entry(__Unify___stack__stack_1_0);

MR_BEGIN_MODULE(ssdb_module122)
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
	MR_np_tailcall_ent(__Unify___stack__stack_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___stack__stack_1_0);

MR_BEGIN_MODULE(ssdb_module123)
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
	MR_np_tailcall_ent(__Compare___stack__stack_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module124)
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
	MR_np_tailcall_ent(__Unify___stack__stack_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module125)
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
	MR_np_tailcall_ent(__Compare___stack__stack_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module126)
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


MR_BEGIN_MODULE(ssdb_module127)
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

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ssdb_module128)
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

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ssdb_module129)
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


MR_BEGIN_MODULE(ssdb_module130)
	MR_init_entry1(__Unify___ssdb__next_stop_0_0);
	MR_init_label7(__Unify___ssdb__next_stop_0_0,15,12,6,19,10,21,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___ssdb__next_stop_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___ssdb__next_stop_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___ssdb__next_stop_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___ssdb__next_stop_0_0_i19));
MR_def_label(__Unify___ssdb__next_stop_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__next_stop_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__next_stop_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_ctfield(2, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__next_stop_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i10);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__next_stop_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__next_stop_0_0,21)
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


MR_BEGIN_MODULE(ssdb_module131)
	MR_init_entry1(__Compare___ssdb__next_stop_0_0);
	MR_init_label8(__Compare___ssdb__next_stop_0_0,103,97,112,101,5,13,17,74)
	MR_init_label8(__Compare___ssdb__next_stop_0_0,83,80,87,161,19,33,22,24)
	MR_init_label8(__Compare___ssdb__next_stop_0_0,107,53,57,45,59,68,72,126)
	MR_init_label2(__Compare___ssdb__next_stop_0_0,64,109)
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
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i112);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i103) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i74) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i107));
MR_def_label(__Compare___ssdb__next_stop_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(1)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i5);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i97) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i161) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i161) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i101));
MR_def_label(__Compare___ssdb__next_stop_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i161);
	}
MR_def_label(__Compare___ssdb__next_stop_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i161);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i13) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i126) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i161) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i17));
MR_def_label(__Compare___ssdb__next_stop_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i112);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i161);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i83) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i80) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i161) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i87));
MR_def_label(__Compare___ssdb__next_stop_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i161);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___ssdb__next_stop_0_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i33) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i126) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i161));
MR_def_label(__Compare___ssdb__next_stop_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i126);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,22)
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
		__Compare___ssdb__next_stop_0_0_i24);
MR_def_label(__Compare___ssdb__next_stop_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i109);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i59);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i53) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i126) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i126) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i57));
MR_def_label(__Compare___ssdb__next_stop_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i126);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i161);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__next_stop_0_0_i45);
MR_def_label(__Compare___ssdb__next_stop_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i109);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i68) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i126) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i126) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i72));
MR_def_label(__Compare___ssdb__next_stop_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i126);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i64);
	}
MR_def_label(__Compare___ssdb__next_stop_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module132)
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


MR_BEGIN_MODULE(ssdb_module133)
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


MR_BEGIN_MODULE(ssdb_module134)
	MR_init_entry1(__Unify___ssdb__ssdb_cmd_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__ssdb_cmd_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module135)
	MR_init_entry1(__Compare___ssdb__ssdb_cmd_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__ssdb_cmd_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module136)
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


MR_BEGIN_MODULE(ssdb_module137)
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


MR_BEGIN_MODULE(ssdb_module138)
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
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__ssdb_proc_id_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) == 0);
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


MR_BEGIN_MODULE(ssdb_module139)
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


MR_BEGIN_MODULE(ssdb_module140)
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


MR_BEGIN_MODULE(ssdb_module141)
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


MR_BEGIN_MODULE(ssdb_module142)
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


MR_BEGIN_MODULE(ssdb_module143)
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


MR_BEGIN_MODULE(ssdb_module144)
	MR_init_entry1(__Unify___ssdb__var_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ssdb__var_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module145)
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

MR_BEGIN_MODULE(ssdb_module146)
	MR_init_entry1(__Unify___ssdb__var_value_0_0);
	MR_init_label4(__Unify___ssdb__var_value_0_0,9,5,17,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ssdb__var_value_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i17);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i5);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_tempr3 == MR_tempr4);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__var_value_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
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
MR_def_label(__Unify___ssdb__var_value_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
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
MR_def_label(__Unify___ssdb__var_value_0_0,17)
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

MR_BEGIN_MODULE(ssdb_module147)
	MR_init_entry1(__Compare___ssdb__var_value_0_0);
	MR_init_label8(__Compare___ssdb__var_value_0_0,3,2,42,23,26,28,5,75)
	MR_init_label5(__Compare___ssdb__var_value_0_0,19,7,9,13,123)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tag(MR_tempr5);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i5);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i23);
	}
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr6);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i19);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i19);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ssdb__var_value_0_0_i42);
MR_def_label(__Compare___ssdb__var_value_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i123);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__var_value_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i75);
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(2, MR_tempr5, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(2, MR_tempr6, 0);
	MR_tempr2 = MR_ctfield(2, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 1);
	MR_r2 = MR_ctfield(2, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ssdb__var_value_0_0_i28);
MR_def_label(__Compare___ssdb__var_value_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i123);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__typed_compare_3_0);
MR_def_label(__Compare___ssdb__var_value_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i7);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i19);
	}
	}
MR_def_label(__Compare___ssdb__var_value_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ssdb__var_value_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ssdb__var_value_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_ctfield(1, MR_tempr5, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_ctfield(1, MR_tempr6, 0);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 3);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r2 = MR_ctfield(1, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ssdb__var_value_0_0_i9);
MR_def_label(__Compare___ssdb__var_value_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i123);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__var_value_0_0_i13);
MR_def_label(__Compare___ssdb__var_value_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i123);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__typed_compare_3_0);
MR_def_label(__Compare___ssdb__var_value_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module148)
	MR_init_entry1(__Unify___ssdb__what_next_0_0);
	MR_init_label7(__Unify___ssdb__what_next_0_0,16,6,11,21,8,23,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__what_next_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i23);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___ssdb__what_next_0_0_i16) MR_AND
		MR_LABEL_AP(__Unify___ssdb__what_next_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___ssdb__what_next_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___ssdb__what_next_0_0_i21));
MR_def_label(__Unify___ssdb__what_next_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_unmkbody(MR_tempr2);
	MR_r1 = (MR_sv(2) == MR_tempr2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__what_next_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__what_next_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__what_next_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i8);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__what_next_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__what_next_0_0,23)
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


MR_BEGIN_MODULE(ssdb_module149)
	MR_init_entry1(__Compare___ssdb__what_next_0_0);
	MR_init_label8(__Compare___ssdb__what_next_0_0,121,114,115,119,122,64,65,136)
	MR_init_label8(__Compare___ssdb__what_next_0_0,69,5,14,15,19,21,31,32)
	MR_init_label8(__Compare___ssdb__what_next_0_0,36,209,71,81,82,77,126,98)
	MR_init_label8(__Compare___ssdb__what_next_0_0,99,103,150,38,48,49,53,153)
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
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i136);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i121) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i21) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i71) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i126));
MR_def_label(__Compare___ssdb__what_next_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_sv(1));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i122);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i114) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i209) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i209) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i119));
MR_def_label(__Compare___ssdb__what_next_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_sv(2));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i115);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i209);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i209);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i5);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i64) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i209) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i209) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i69));
MR_def_label(__Compare___ssdb__what_next_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_sv(2));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i65);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i209);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i209);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i14) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i209) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i209) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i19));
MR_def_label(__Compare___ssdb__what_next_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_sv(2));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i136);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i209);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i31) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i77) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i209) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i36));
MR_def_label(__Compare___ssdb__what_next_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_sv(2));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i32);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i153);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___ssdb__what_next_0_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i77) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i209));
MR_def_label(__Compare___ssdb__what_next_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_sv(2));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i82);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i153);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_sv(1), 0);
	MR_r2 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__what_next_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i38);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i98) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i103));
MR_def_label(__Compare___ssdb__what_next_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_sv(2));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i99);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i153);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i209);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__what_next_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i48) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i53));
MR_def_label(__Compare___ssdb__what_next_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_unmkbody(MR_sv(2));
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i153);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i150);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module150)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0);
	MR_init_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,4,5,7,10,11,9,13,6)
	MR_init_label4(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,14,15,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 1944 "ssdb.m"

;}
#line 13229 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 13241 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 258 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 13250 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 13263 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 13278 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 234 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 13289 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 13302 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 13314 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_tempr2;
{
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 13325 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 13337 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 13349 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 240 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 13358 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 13371 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 13383 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 13392 "ssdb.c"
	MR_tempr3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 13405 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(stack__top_det_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i4);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,4)
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
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i7);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i6);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i10);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i11);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 13479 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_ctfield(0, MR_sv(5), 0) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_tempr1;
{
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 13492 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 13504 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 13516 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = ((MR_Integer) MR_ctfield(0, MR_sv(5), 1) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_tempr1;
{
#line 237 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn= X;;}
#line 13527 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 237 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 13539 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr2 = MR_sv(6);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 13565 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 13574 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 13587 "ssdb.c"
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
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 13604 "ssdb.c"
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
#line 240 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 13617 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 13629 "ssdb.c"
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
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 13648 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_r2;
{
#line 252 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 13658 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 13670 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i2);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 1972 "ssdb.m"

;}
#line 13686 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module151)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0);
	MR_init_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,3,5,7,4,8,9,10,12)
	MR_init_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,15,16,14,17,20,19,13,23)
	MR_init_label6(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,24,25,26,27,28,2)
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
#line 1944 "ssdb.m"

;}
#line 13718 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 13730 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 258 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 13739 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 13752 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i2);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i4);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 13774 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 240 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 13785 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 13798 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(ssdb__get_frame_at_depth_nondet_5_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i2);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 13823 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = (MR_Integer) 1;
{
#line 258 "ssdb.m"
ssdb__mutable_variable_debugger_state= X;;}
#line 13833 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 13845 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i2);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ssdb__get_ssdb_event_number_inc_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i8);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 13866 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 13877 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 13890 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(stack__top_det_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i9);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 13911 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 240 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_depth;;}
#line 13922 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 13935 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 13947 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 255 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 13956 "ssdb.c"
	MR_tempr2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 13969 "ssdb.c"
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
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i10);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i12);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(ssdb__get_ssdb_depth_dec_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i24);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i14);
	}
	MR_r1 = (MR_Integer) 6;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ssdb__print_event_info_7_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i15);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i16);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i23);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ssdb__get_frame_at_depth_nondet_5_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i17);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i19);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 14040 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = ((MR_Integer) MR_ctfield(0, MR_tempr1, 0) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_tempr2;
{
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 14054 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 14066 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_ctfield(0, MR_tempr1, 1) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_csn_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i20);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(2, MR_r3, 0) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i23);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Unexpected error: ssdb/ssdb.m get_frame_at_depth_nondet failed", 62);
	MR_np_call_localret_ent(require__error_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__what_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i23);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ssdb__get_ssdb_depth_dec_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i24);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(stack__pop_det_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i25);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(stack__pop_det_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i26);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_shadow_stack_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i27);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__set_cur_ssdb_shadow_stack_nondet_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i28);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 1972 "ssdb.m"

;}
#line 14138 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module152)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0);
	MR_init_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,5,6,9,10,13,14,8,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 1944 "ssdb.m"

;}
#line 14168 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 14180 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 258 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;;}
#line 14189 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 258 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 14202 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i2);
	}
	if (MR_INT_EQ(MR_r3,2)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 14220 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 234 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;;}
#line 14231 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 14244 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 14256 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
	X = MR_tempr2;
{
#line 234 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number= X;;}
#line 14267 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 234 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 14279 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 14291 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 14300 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 14313 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__stack__depth_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 14334 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
	X = MR_r2;
{
#line 240 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_depth= X;;}
#line 14345 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 240 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_depth_lock,
                "ssdb__mutable_variable_cur_ssdb_depth_lock");
#endif
;}
#line 14357 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 14369 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 255 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;;}
#line 14378 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 255 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock");
#endif
;}
#line 14391 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__get_frame_at_depth_nondet_2_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i6);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i8);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 14412 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 252 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_shadow_stack;;}
#line 14421 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 14434 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_elem);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(stack__push_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i9);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 14453 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
	X = MR_r1;
{
#line 252 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_shadow_stack= X;;}
#line 14463 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 252 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_shadow_stack_lock,
                "ssdb__mutable_variable_cur_ssdb_shadow_stack_lock");
#endif
;}
#line 14475 "ssdb.c"
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
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i10);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i2);
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
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i14);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__what_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i2);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Unexpected error: ssdb/ssdb.m : get_frame_at_depth_nondet failed", 64);
	MR_np_call_localret_ent(require__error_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i2);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 1972 "ssdb.m"

;}
#line 14533 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 258 "ssdb.m"
MR_Word ssdb__mutable_variable_debugger_state;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_debugger_state_lock;
#endif

#line 14548 "ssdb.c"
#line 255 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_shadow_stack_nondet_lock;
#endif

#line 14555 "ssdb.c"
#line 252 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_shadow_stack;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_shadow_stack_lock;
#endif

#line 14562 "ssdb.c"
#line 249 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock;
#endif

#line 14569 "ssdb.c"
#line 246 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_breakpoints;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_breakpoints_lock;
#endif

#line 14576 "ssdb.c"
#line 243 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_next_stop;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_next_stop_lock;
#endif

#line 14583 "ssdb.c"
#line 240 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_depth;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_depth_lock;
#endif

#line 14590 "ssdb.c"
#line 237 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_csn;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_csn_lock;
#endif

#line 14597 "ssdb.c"
#line 234 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_event_number;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_event_number_lock;
#endif

#line 14604 "ssdb.c"

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
	ssdb_module131();
	ssdb_module132();
	ssdb_module133();
	ssdb_module134();
	ssdb_module135();
	ssdb_module136();
	ssdb_module137();
	ssdb_module138();
	ssdb_module139();
	ssdb_module140();
	ssdb_module141();
	ssdb_module142();
	ssdb_module143();
	ssdb_module144();
	ssdb_module145();
	ssdb_module146();
	ssdb_module147();
	ssdb_module148();
	ssdb_module149();
	ssdb_module150();
	ssdb_module151();
	ssdb_module152();
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
		mercury_data_ssdb__type_ctor_info_ssdb_cmd_0,
		ssdb__ssdb_cmd_0_0);
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
		&mercury_data_ssdb__type_ctor_info_ssdb_cmd_0);
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
