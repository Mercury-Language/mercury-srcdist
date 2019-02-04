/*
** Automatically generated from `ssdb.m'
** by the Mercury compiler,
** version rotd-2010-06-17, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ssdb__init
REQUIRED_INIT mercury__ssdb__required_init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 26 "ssdb.c"
#include "ssdb.mh"

#line 29 "ssdb.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 33 "ssdb.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 37 "ssdb.c"
#line 29 "../browser/mdb.listing.int"
#include "mdb.listing.mh"

#line 41 "ssdb.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 45 "ssdb.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 49 "ssdb.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 53 "ssdb.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 57 "ssdb.c"
#line 58 "ssdb.c"
#ifndef SSDB_DECL_GUARD
#define SSDB_DECL_GUARD

#line 62 "ssdb.c"
#line 129 "ssdb.m"

    #include "mercury_signal.h"
    static void MR_ssdb_sigint_handler(void);

#line 68 "ssdb.c"
#line 248 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_String ssdb__mutable_variable_cur_filename;
#else
    extern MR_Word ssdb__mutable_variable_cur_filename;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_filename_lock;
#endif

#line 79 "ssdb.c"
#line 250 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_cur_line_number;
#else
    extern MR_Word ssdb__mutable_variable_cur_line_number;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_line_number_lock;
#endif

#line 90 "ssdb.c"
#line 253 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_cur_ssdb_event_number;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_event_number;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_event_number_lock;
#endif

#line 101 "ssdb.c"
#line 256 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_cur_ssdb_csn;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_csn;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_csn_lock;
#endif

#line 112 "ssdb.c"
#line 259 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_cur_ssdb_next_stop;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_next_stop;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_next_stop_lock;
#endif

#line 123 "ssdb.c"
#line 262 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_cur_ssdb_breakpoints;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_breakpoints;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_breakpoints_lock;
#endif

#line 134 "ssdb.c"
#line 265 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock;
#endif

#line 145 "ssdb.c"
#line 268 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_shadow_stack;
#else
    extern MR_Word ssdb__mutable_variable_shadow_stack;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_shadow_stack_lock;
#endif

#line 156 "ssdb.c"
#line 270 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_shadow_stack_depth;
#else
    extern MR_Word ssdb__mutable_variable_shadow_stack_depth;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_shadow_stack_depth_lock;
#endif

#line 167 "ssdb.c"
#line 273 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_nondet_shadow_stack;
#else
    extern MR_Word ssdb__mutable_variable_nondet_shadow_stack;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_nondet_shadow_stack_lock;
#endif

#line 178 "ssdb.c"
#line 275 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_nondet_shadow_stack_depth;
#else
    extern MR_Word ssdb__mutable_variable_nondet_shadow_stack_depth;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_nondet_shadow_stack_depth_lock;
#endif

#line 189 "ssdb.c"
#line 280 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_browser_state;
#else
    extern MR_Word ssdb__mutable_variable_browser_state;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_browser_state_lock;
#endif

#line 200 "ssdb.c"
#line 289 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_list_params;
#else
    extern MR_Word ssdb__mutable_variable_list_params;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_list_params_lock;
#endif

#line 211 "ssdb.c"
#line 298 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_tty_in;
#else
    extern MR_Word ssdb__mutable_variable_tty_in;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_tty_in_lock;
#endif

#line 222 "ssdb.c"
#line 300 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_tty_out;
#else
    extern MR_Word ssdb__mutable_variable_tty_out;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_tty_out_lock;
#endif

#line 233 "ssdb.c"
#line 303 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_saved_input_stream;
#else
    extern MR_Word ssdb__mutable_variable_saved_input_stream;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_saved_input_stream_lock;
#endif

#line 244 "ssdb.c"
#line 305 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_saved_output_stream;
#else
    extern MR_Word ssdb__mutable_variable_saved_output_stream;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_saved_output_stream_lock;
#endif

#line 255 "ssdb.c"
#line 309 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_debugger_state;
#else
    extern MR_Word ssdb__mutable_variable_debugger_state;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_debugger_state_lock;
#endif

#line 266 "ssdb.c"
#line 267 "ssdb.c"

#endif
#line 270 "ssdb.c"

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
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1[7];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_11 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_10 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_vector_common_10_0[];

MR_STATIC_LINKAGE const struct mercury_type_10 mercury_vector_common_10_1[];

MR_STATIC_LINKAGE const struct mercury_type_10 mercury_vector_common_10_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ssdb__type_ctor_info_bp_state_0,
	mercury_data_ssdb__type_ctor_info_breakpoint_0,
	mercury_data_ssdb__type_ctor_info_cur_ssdb_breakpoints_0,
	mercury_data_ssdb__type_ctor_info_debugger_state_0,
	mercury_data_ssdb__type_ctor_info_format_config_0,
	mercury_data_ssdb__type_ctor_info_list_params_0,
	mercury_data_ssdb__type_ctor_info_list_var_value_0,
	mercury_data_ssdb__type_ctor_info_next_stop_0,
	mercury_data_ssdb__type_ctor_info_pos_0,
	mercury_data_ssdb__type_ctor_info_ssdb_cmd_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ssdb__type_ctor_info_ssdb_event_type_0,
	mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0,
	mercury_data_ssdb__type_ctor_info_ssdb_retry_0,
	mercury_data_ssdb__type_ctor_info_stack_frame_0,
	mercury_data_ssdb__type_ctor_info_var_name_0,
	mercury_data_ssdb__type_ctor_info_var_value_0,
	mercury_data_ssdb__type_ctor_info_what_next_0;
MR_decl_label2(ssdb__IntroducedFrom__pred__print_var_with_name__2607__1_2_0, 11,5)
MR_decl_label10(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0, 3,5,4,7,9,12,13,14,15,16)
MR_decl_label4(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0, 11,18,19,2)
MR_decl_label10(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0, 3,5,4,7,9,12,13,14,15,16)
MR_decl_label5(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0, 11,18,19,20,2)
MR_decl_label10(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0, 4,6,5,8,9,12,13,14,15,2)
MR_decl_label7(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0, 3,23,5,14,16,18,20)
MR_decl_label1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_0, 1)
MR_decl_label3(ssdb__browse_term_3_0, 2,3,4)
MR_decl_label10(ssdb__browse_var_4_0, 3,6,21,9,10,12,13,14,5,2)
MR_decl_label3(ssdb__browse_var_4_0, 28,29,27)
MR_decl_label5(ssdb__compress_stack_frames_6_0, 19,3,5,4,2)
MR_decl_label3(ssdb__exception_handler_exists_2_0, 3,5,2)
MR_decl_label10(ssdb__execute_cmd_7_0, 109,96,9,101,112,111,98,110,26,28)
MR_decl_label10(ssdb__execute_cmd_7_0, 102,103,36,113,100,104,108,105,53,107)
MR_decl_label10(ssdb__execute_cmd_7_0, 95,106,114,67,69,94,74,99,77,97)
MR_decl_label1(ssdb__execute_cmd_7_0, 80)
MR_decl_label10(ssdb__execute_ssdb_break_3_0, 70,3,11,9,15,16,6,24,27,25)
MR_decl_label1(ssdb__execute_ssdb_break_3_0, 32)
MR_decl_label7(ssdb__execute_ssdb_browse_4_0, 2,5,7,8,9,4,11)
MR_decl_label3(ssdb__execute_ssdb_continue_6_0, 15,5,6)
MR_decl_label2(ssdb__execute_ssdb_current_4_0, 16,6)
MR_decl_label10(ssdb__execute_ssdb_delete_3_0, 67,3,10,7,14,21,18,22,24,25)
MR_decl_label7(ssdb__execute_ssdb_delete_3_0, 26,27,17,30,31,65,13)
MR_decl_label10(ssdb__execute_ssdb_disable_3_0, 55,60,3,11,13,12,16,17,7,23)
MR_decl_label1(ssdb__execute_ssdb_disable_3_0, 22)
MR_decl_label4(ssdb__execute_ssdb_down_5_0, 4,3,9,10)
MR_decl_label6(ssdb__execute_ssdb_enable_3_0, 5,3,49,14,48,46)
MR_decl_label2(ssdb__execute_ssdb_exception_6_0, 13,4)
MR_decl_label10(ssdb__execute_ssdb_finish_6_0, 6,7,5,10,4,3,20,23,22,18)
MR_decl_label2(ssdb__execute_ssdb_finish_6_0, 17,33)
MR_decl_label10(ssdb__execute_ssdb_format_3_0, 2,5,6,7,4,13,14,15,12,18)
MR_decl_label1(ssdb__execute_ssdb_format_3_0, 9)
MR_decl_label10(ssdb__execute_ssdb_format_param_3_0, 2,5,6,7,4,14,17,19,21,16)
MR_decl_label2(ssdb__execute_ssdb_format_param_3_0, 25,10)
MR_decl_label6(ssdb__execute_ssdb_goto_6_0, 3,10,12,8,7,20)
MR_decl_label2(ssdb__execute_ssdb_help_3_0, 5,16)
MR_decl_label5(ssdb__execute_ssdb_level_5_0, 6,8,2,3,12)
MR_decl_label9(ssdb__execute_ssdb_list_4_0, 4,5,8,9,10,3,16,15,14)
MR_decl_label5(ssdb__execute_ssdb_list_2_4_0, 2,3,6,7,8)
MR_decl_label7(ssdb__execute_ssdb_list_context_lines_3_0, 4,5,35,3,11,10,9)
MR_decl_label6(ssdb__execute_ssdb_list_path_3_0, 4,6,8,10,3,12)
MR_decl_label7(ssdb__execute_ssdb_next_6_0, 6,7,5,4,3,13,14)
MR_decl_label2(ssdb__execute_ssdb_pop_list_dir_3_0, 4,3)
MR_decl_label10(ssdb__execute_ssdb_print_4_0, 2,5,6,7,4,9,12,10,20,15)
MR_decl_label1(ssdb__execute_ssdb_print_4_0, 23)
MR_decl_label2(ssdb__execute_ssdb_push_list_dir_3_0, 16,6)
MR_decl_label10(ssdb__execute_ssdb_quit_3_0, 4,5,6,10,15,17,13,3,32,56)
MR_decl_label1(ssdb__execute_ssdb_quit_3_0, 54)
MR_decl_label6(ssdb__execute_ssdb_retry_6_0, 53,9,11,7,6,21)
MR_decl_label7(ssdb__execute_ssdb_retry_2_6_0, 2,4,5,7,9,10,12)
MR_decl_label4(ssdb__execute_ssdb_return_6_0, 27,26,9,10)
MR_decl_label4(ssdb__execute_ssdb_stack_4_0, 4,3,9,7)
MR_decl_label5(ssdb__execute_ssdb_step_6_0, 30,7,4,5,10)
MR_decl_label3(ssdb__execute_ssdb_up_5_0, 4,3,8)
MR_decl_label2(ssdb__execute_ssdb_vars_4_0, 4,15)
MR_decl_label3(ssdb__format_options_3_0, 3,5,1)
MR_decl_label10(ssdb__format_param_options_3_0, 3,21,5,6,8,10,12,14,16,18)
MR_decl_label8(ssdb__handle_event_call_2_0, 5,6,9,10,11,12,13,2)
MR_decl_label9(ssdb__handle_event_call_nondet_2_0, 5,6,7,10,11,12,13,14,2)
MR_decl_label10(ssdb__handle_event_exit_3_0, 3,5,4,7,9,13,12,17,18,19)
MR_decl_label5(ssdb__handle_event_exit_3_0, 20,11,22,23,2)
MR_decl_label10(ssdb__handle_event_exit_nondet_2_0, 5,4,7,13,12,17,18,19,20,11)
MR_decl_label2(ssdb__handle_event_exit_nondet_2_0, 8,2)
MR_decl_label1(ssdb__initialise_mutable_browser_state_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0, 3)
MR_decl_label10(ssdb__initialise_mutable_debugger_state_0_0, 2,3,7,6,12,14,15,10,18,5)
MR_decl_label1(ssdb__initialise_mutable_debugger_state_0_0, 19)
MR_decl_label1(ssdb__initialise_mutable_list_params_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_saved_input_stream_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_saved_output_stream_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_tty_in_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_tty_out_0_0, 2)
MR_decl_label1(ssdb__is_same_int_3_0, 2)
MR_decl_label10(ssdb__list_var_value_to_assoc_list_2_0, 32,3,11,12,13,15,5,6,7,8)
MR_decl_label10(ssdb__make_arg_univs_3_0, 46,3,16,17,19,21,5,7,6,10)
MR_decl_label1(ssdb__make_arg_univs_3_0, 11)
MR_decl_label7(ssdb__modify_breakpoint_state_4_0, 7,4,8,11,13,14,15)
MR_decl_label5(ssdb__modify_breakpoint_states_3_0, 4,6,5,9,10)
MR_decl_label4(ssdb__nondet_stack_contains_csn_2_5_0, 15,2,3,4)
MR_decl_label1(ssdb__nondet_stack_pop_2_0, 3)
MR_decl_label1(ssdb__print_breakpoint_3_0, 3)
MR_decl_label2(ssdb__print_browser_term_5_0, 2,4)
MR_decl_label5(ssdb__print_depth_change_3_0, 2,3,4,5,6)
MR_decl_label10(ssdb__print_event_info_4_0, 2,3,4,5,6,7,8,9,11,13)
MR_decl_label10(ssdb__print_event_info_4_0, 15,17,19,20,21,22,23,24,25,26)
MR_decl_label3(ssdb__print_event_info_4_0, 27,28,29)
MR_decl_label1(ssdb__print_help_2_0, 3)
MR_decl_label10(ssdb__print_stack_frame_6_0, 6,10,7,11,13,14,15,16,17,18)
MR_decl_label4(ssdb__print_stack_frame_6_0, 19,20,21,22)
MR_decl_label8(ssdb__print_stack_trace_5_0, 35,2,6,7,8,9,10,38)
MR_decl_label10(ssdb__print_var_5_0, 29,30,32,33,3,5,6,7,4,10)
MR_decl_label7(ssdb__print_var_5_0, 12,17,18,20,22,14,25)
MR_decl_label5(ssdb__print_var_prelude_4_0, 2,3,5,6,4)
MR_decl_label6(ssdb__print_var_with_name_5_0, 3,6,5,2,12,14)
MR_decl_label10(ssdb__print_vars_list_4_0, 43,6,10,8,13,15,16,17,14,19)
MR_decl_label1(ssdb__print_vars_list_4_0, 45)
MR_decl_label10(ssdb__process_options__ho1_5_0, 61,3,6,10,9,13,14,15,5,19)
MR_decl_label5(ssdb__process_options__ho1_5_0, 21,24,26,18,28)
MR_decl_label10(ssdb__process_options__ho2_5_0, 61,3,6,10,9,13,14,15,5,19)
MR_decl_label5(ssdb__process_options__ho2_5_0, 21,24,26,18,28)
MR_decl_label10(ssdb__process_options__ho3_5_0, 61,3,6,10,9,13,14,15,5,19)
MR_decl_label5(ssdb__process_options__ho3_5_0, 21,24,26,18,28)
MR_decl_label8(ssdb__process_short_options__ho4_4_0, 27,3,7,10,8,13,14,15)
MR_decl_label8(ssdb__process_short_options__ho5_4_0, 27,3,7,10,8,13,14,15)
MR_decl_label8(ssdb__process_short_options__ho6_4_0, 27,3,7,10,8,13,14,15)
MR_decl_label10(ssdb__read_and_execute_cmd_5_0, 166,2,3,4,115,14,15,16,18,22)
MR_decl_label10(ssdb__read_and_execute_cmd_5_0, 24,26,28,31,32,33,35,37,40,41)
MR_decl_label10(ssdb__read_and_execute_cmd_5_0, 42,44,46,47,49,50,54,55,56,58)
MR_decl_label10(ssdb__read_and_execute_cmd_5_0, 61,62,64,65,66,68,70,71,73,74)
MR_decl_label10(ssdb__read_and_execute_cmd_5_0, 20,78,80,82,84,77,88,76,92,91)
MR_decl_label6(ssdb__read_and_execute_cmd_5_0, 95,96,8,9,10,11)
MR_decl_label1(ssdb__restore_streams_2_0, 2)
MR_decl_label6(ssdb__safe_write_6_0, 6,7,9,11,3,14)
MR_decl_label2(ssdb__save_streams_2_0, 2,3)
MR_decl_label4(ssdb__search_nondet_stack_frame_2_7_0, 22,2,3,4)
MR_decl_label10(ssdb__should_stop_at_this_event_8_0, 152,71,153,20,155,26,29,156,33,66)
MR_decl_label10(ssdb__should_stop_at_this_event_8_0, 159,42,45,160,49,51,50,158,56,3)
MR_decl_label6(ssdb__should_stop_at_this_event_8_0, 8,10,12,59,154,83)
MR_decl_label1(ssdb__stack_pop_2_0, 3)
MR_decl_label1(ssdb__stack_top_3_0, 3)
MR_decl_label10(ssdb__update_next_stop_6_0, 24,5,13,16,15,14,27,7,32,8)
MR_decl_label5(ssdb__update_next_stop_6_0, 3,4,11,22,2)
MR_decl_label2(__Unify___ssdb__breakpoint_0_0, 4,1)
MR_decl_label2(__Unify___ssdb__format_config_0_0, 4,1)
MR_decl_label3(__Unify___ssdb__list_params_0_0, 4,6,1)
MR_decl_label7(__Unify___ssdb__next_stop_0_0, 17,13,7,20,11,22,1)
MR_decl_label2(__Unify___ssdb__ssdb_proc_id_0_0, 4,1)
MR_decl_label3(__Unify___ssdb__stack_frame_0_0, 4,8,1)
MR_decl_label4(__Unify___ssdb__var_value_0_0, 13,5,17,1)
MR_decl_label7(__Unify___ssdb__what_next_0_0, 7,12,21,9,17,23,1)
MR_decl_label6(__Compare___ssdb__breakpoint_0_0, 3,2,5,9,13,37)
MR_decl_label9(__Compare___ssdb__format_config_0_0, 3,2,5,9,13,17,21,25,61)
MR_decl_label4(__Compare___ssdb__list_params_0_0, 3,2,5,21)
MR_decl_label10(__Compare___ssdb__next_stop_0_0, 139,30,151,33,93,104,100,107,35,51)
MR_decl_label10(__Compare___ssdb__next_stop_0_0, 39,41,54,142,72,75,63,77,88,91)
MR_decl_label10(__Compare___ssdb__next_stop_0_0, 83,5,15,18,109,119,122,179,124,183)
MR_decl_label1(__Compare___ssdb__next_stop_0_0, 144)
MR_decl_label4(__Compare___ssdb__ssdb_proc_id_0_0, 3,2,5,21)
MR_decl_label9(__Compare___ssdb__stack_frame_0_0, 3,2,5,9,13,17,21,25,61)
MR_decl_label10(__Compare___ssdb__var_value_0_0, 3,2,28,36,40,42,5,75,20,7)
MR_decl_label3(__Compare___ssdb__var_value_0_0, 9,13,123)
MR_decl_label10(__Compare___ssdb__what_next_0_0, 153,37,49,52,87,94,102,156,119,163)
MR_decl_label10(__Compare___ssdb__what_next_0_0, 54,69,164,5,16,19,21,32,35,71)
MR_decl_label8(__Compare___ssdb__what_next_0_0, 82,85,121,132,135,137,169,147)
MR_decl_static(ssdb__lock_cur_filename_0_0)
MR_decl_static(ssdb__unlock_cur_filename_0_0)
MR_decl_static(ssdb__unsafe_set_cur_filename_1_0)
MR_decl_static(ssdb__lock_cur_line_number_0_0)
MR_decl_static(ssdb__unlock_cur_line_number_0_0)
MR_decl_static(ssdb__unsafe_set_cur_line_number_1_0)
MR_def_extern_entry(ssdb__set_context_2_0)
MR_decl_static(ssdb__lock_debugger_state_0_0)
MR_decl_static(ssdb__unlock_debugger_state_0_0)
MR_decl_static(ssdb__unsafe_get_debugger_state_1_0)
MR_decl_static(ssdb__unsafe_get_cur_filename_1_0)
MR_decl_static(ssdb__unsafe_get_cur_line_number_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_csn_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_csn_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_csn_1_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_csn_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_event_number_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_event_number_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_event_number_1_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_event_number_1_0)
MR_decl_static(ssdb__lock_shadow_stack_depth_0_0)
MR_decl_static(ssdb__unlock_shadow_stack_depth_0_0)
MR_decl_static(ssdb__unsafe_get_shadow_stack_depth_1_0)
MR_decl_static(ssdb__lock_shadow_stack_0_0)
MR_decl_static(ssdb__unlock_shadow_stack_0_0)
MR_decl_static(ssdb__unsafe_get_shadow_stack_1_0)
MR_decl_static(ssdb__unsafe_set_shadow_stack_1_0)
MR_decl_static(ssdb__unsafe_set_shadow_stack_depth_1_0)
MR_decl_static(ssdb__stack_push_3_0)
MR_decl_static(ssdb__lock_nondet_shadow_stack_0_0)
MR_decl_static(ssdb__unlock_nondet_shadow_stack_0_0)
MR_decl_static(ssdb__unsafe_get_nondet_shadow_stack_1_0)
MR_decl_static(ssdb__unsafe_set_nondet_shadow_stack_1_0)
MR_decl_static(ssdb__lock_nondet_shadow_stack_depth_0_0)
MR_decl_static(ssdb__unlock_nondet_shadow_stack_depth_0_0)
MR_decl_static(ssdb__unsafe_get_nondet_shadow_stack_depth_1_0)
MR_decl_static(ssdb__unsafe_set_nondet_shadow_stack_depth_1_0)
MR_decl_static(ssdb__nondet_stack_push_3_0)
MR_decl_static(ssdb__lock_cur_ssdb_next_stop_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_next_stop_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_next_stop_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_breakpoints_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_breakpoints_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_breakpoints_1_0)
MR_decl_static(ssdb__stack_top_3_0)
MR_decl_static(ssdb__nondet_stack_index_4_0)
MR_decl_static(ssdb__is_same_int_3_0)
MR_decl_static(ssdb__reset_counters_for_retry_3_0)
MR_decl_static(ssdb__exception_handler_exists_2_0)
MR_decl_static(ssdb__should_stop_at_this_event_8_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_next_stop_1_0)
MR_decl_static(ssdb__update_next_stop_6_0)
MR_decl_static(ssdb__print_help_2_0)
MR_decl_static(ssdb__execute_ssdb_help_3_0)
MR_decl_static(ssdb__stack_index_4_0)
MR_decl_static(ssdb__nondet_stack_contains_csn_2_5_0)
MR_decl_static(ssdb__compress_stack_frames_6_0)
MR_decl_static(ssdb__print_stack_frame_6_0)
MR_decl_static(ssdb__print_stack_trace_5_0)
MR_decl_static(ssdb__execute_ssdb_stack_4_0)
MR_decl_static(ssdb__make_arg_univs_3_0)
MR_decl_static(ssdb__print_vars_5_0)
MR_decl_static(ssdb__print_var_prelude_4_0)
MR_decl_static(ssdb__safe_to_write_1_0)
MR_decl_static(ssdb__lock_browser_state_0_0)
MR_decl_static(ssdb__unlock_browser_state_0_0)
MR_decl_static(ssdb__unsafe_get_browser_state_1_0)
MR_decl_static(ssdb__print_browser_term_5_0)
MR_decl_static(ssdb__safe_write_6_0)
MR_decl_static(ssdb__print_var_5_0)
MR_decl_static(ssdb__print_var_with_name_5_0)
MR_decl_static(ssdb__execute_ssdb_print_4_0)
MR_decl_static(ssdb__unsafe_set_browser_state_1_0)
MR_decl_static(ssdb__browse_term_3_0)
MR_decl_static(ssdb__list_var_value_to_assoc_list_2_0)
MR_decl_static(ssdb__browse_var_4_0)
MR_decl_static(ssdb__execute_ssdb_browse_4_0)
MR_decl_static(ssdb__print_vars_list_4_0)
MR_decl_static(ssdb__execute_ssdb_vars_4_0)
MR_decl_static(ssdb__print_depth_change_3_0)
MR_decl_static(ssdb__execute_ssdb_down_5_0)
MR_decl_static(ssdb__execute_ssdb_up_5_0)
MR_decl_static(ssdb__execute_ssdb_level_5_0)
MR_decl_static(ssdb__print_event_info_4_0)
MR_decl_static(ssdb__execute_ssdb_current_4_0)
MR_decl_static(ssdb__execute_ssdb_format_3_0)
MR_decl_static(ssdb__execute_ssdb_format_param_3_0)
MR_decl_static(ssdb__lock_list_params_0_0)
MR_decl_static(ssdb__unlock_list_params_0_0)
MR_decl_static(ssdb__unsafe_get_list_params_1_0)
MR_decl_static(ssdb__execute_ssdb_list_2_4_0)
MR_decl_static(ssdb__execute_ssdb_list_4_0)
MR_decl_static(ssdb__unsafe_set_list_params_1_0)
MR_decl_static(ssdb__execute_ssdb_list_path_3_0)
MR_decl_static(ssdb__execute_ssdb_push_list_dir_3_0)
MR_decl_static(ssdb__execute_ssdb_pop_list_dir_3_0)
MR_decl_static(ssdb__execute_ssdb_list_context_lines_3_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_breakpoints_1_0)
MR_decl_static(ssdb__lock_cur_ssdb_number_of_breakpoint_0_0)
MR_decl_static(ssdb__unlock_cur_ssdb_number_of_breakpoint_0_0)
MR_decl_static(ssdb__unsafe_get_cur_ssdb_number_of_breakpoint_1_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_number_of_breakpoint_1_0)
MR_decl_static(ssdb__print_breakpoint_3_0)
MR_decl_static(ssdb__execute_ssdb_break_3_0)
MR_decl_static(ssdb__modify_breakpoint_states_3_0)
MR_decl_static(ssdb__modify_breakpoint_state_4_0)
MR_decl_static(ssdb__execute_ssdb_enable_3_0)
MR_decl_static(ssdb__execute_ssdb_disable_3_0)
MR_decl_static(ssdb__execute_ssdb_delete_3_0)
MR_decl_static(ssdb__exit_process_2_0)
MR_decl_static(ssdb__execute_ssdb_quit_3_0)
MR_decl_static(ssdb__read_and_execute_cmd_5_0)
MR_decl_static(ssdb__execute_cmd_7_0)
MR_decl_static(ssdb__execute_ssdb_step_6_0)
MR_decl_static(ssdb__execute_ssdb_next_6_0)
MR_decl_static(ssdb__execute_ssdb_goto_6_0)
MR_decl_static(ssdb__execute_ssdb_continue_6_0)
MR_decl_static(ssdb__execute_ssdb_finish_6_0)
MR_decl_static(ssdb__execute_ssdb_return_6_0)
MR_decl_static(ssdb__execute_ssdb_exception_6_0)
MR_decl_static(ssdb__execute_ssdb_retry_6_0)
MR_decl_static(ssdb__execute_ssdb_retry_2_6_0)
MR_decl_static(ssdb__lock_tty_in_0_0)
MR_decl_static(ssdb__unlock_tty_in_0_0)
MR_decl_static(ssdb__unsafe_get_tty_in_1_0)
MR_decl_static(ssdb__lock_tty_out_0_0)
MR_decl_static(ssdb__unlock_tty_out_0_0)
MR_decl_static(ssdb__unsafe_get_tty_out_1_0)
MR_decl_static(ssdb__lock_saved_input_stream_0_0)
MR_decl_static(ssdb__unlock_saved_input_stream_0_0)
MR_decl_static(ssdb__unsafe_set_saved_input_stream_1_0)
MR_decl_static(ssdb__lock_saved_output_stream_0_0)
MR_decl_static(ssdb__unlock_saved_output_stream_0_0)
MR_decl_static(ssdb__unsafe_set_saved_output_stream_1_0)
MR_decl_static(ssdb__save_streams_2_0)
MR_decl_static(ssdb__unsafe_get_saved_input_stream_1_0)
MR_decl_static(ssdb__unsafe_get_saved_output_stream_1_0)
MR_decl_static(ssdb__restore_streams_2_0)
MR_decl_static(ssdb__invent_io_1_0)
MR_decl_static(ssdb__consume_io_1_0)
MR_def_extern_entry(ssdb__handle_event_call_2_0)
MR_def_extern_entry(ssdb__handle_event_call_nondet_2_0)
MR_decl_static(ssdb__stack_pop_2_0)
MR_def_extern_entry(ssdb__handle_event_exit_3_0)
MR_def_extern_entry(ssdb__handle_event_exit_nondet_2_0)
MR_decl_static(ssdb__nondet_stack_pop_2_0)
MR_def_extern_entry(ssdb__handle_event_fail_3_0)
MR_def_extern_entry(ssdb__handle_event_fail_nondet_3_0)
MR_decl_static(ssdb__search_nondet_stack_frame_2_7_0)
MR_def_extern_entry(ssdb__handle_event_redo_nondet_2_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_filename_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_filename_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_line_number_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_line_number_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_event_number_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_event_number_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_csn_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_csn_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_next_stop_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_next_stop_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_breakpoints_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_cur_ssdb_number_of_breakpoint_0_0)
MR_decl_static(ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_shadow_stack_0_0)
MR_decl_static(ssdb__initialise_mutable_shadow_stack_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_shadow_stack_depth_0_0)
MR_decl_static(ssdb__initialise_mutable_shadow_stack_depth_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_nondet_shadow_stack_0_0)
MR_decl_static(ssdb__initialise_mutable_nondet_shadow_stack_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_nondet_shadow_stack_depth_0_0)
MR_decl_static(ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_browser_state_0_0)
MR_decl_static(ssdb__initialise_mutable_browser_state_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_list_params_0_0)
MR_decl_static(ssdb__initialise_mutable_list_params_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_tty_in_0_0)
MR_decl_static(ssdb__unsafe_set_tty_in_1_0)
MR_decl_static(ssdb__initialise_mutable_tty_in_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_tty_out_0_0)
MR_decl_static(ssdb__unsafe_set_tty_out_1_0)
MR_decl_static(ssdb__initialise_mutable_tty_out_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_saved_input_stream_0_0)
MR_decl_static(ssdb__initialise_mutable_saved_input_stream_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_saved_output_stream_0_0)
MR_decl_static(ssdb__initialise_mutable_saved_output_stream_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_debugger_state_0_0)
MR_decl_static(ssdb__unsafe_set_debugger_state_1_0)
MR_decl_static(ssdb__install_sigint_handler_2_0)
MR_decl_static(ssdb__initialise_mutable_debugger_state_0_0)
MR_decl_static(ssdb__step_next_stop_2_0)
MR_decl_static(ssdb__format_options_3_0)
MR_decl_static(ssdb__format_param_options_3_0)
MR_decl_static(__Unify___ssdb__bp_state_0_0)
MR_decl_static(__Compare___ssdb__bp_state_0_0)
MR_decl_static(__Unify___ssdb__breakpoint_0_0)
MR_decl_static(__Compare___ssdb__breakpoint_0_0)
MR_decl_static(__Unify___ssdb__cur_ssdb_breakpoints_0_0)
MR_decl_static(__Compare___ssdb__cur_ssdb_breakpoints_0_0)
MR_decl_static(__Unify___ssdb__debugger_state_0_0)
MR_decl_static(__Compare___ssdb__debugger_state_0_0)
MR_decl_static(__Unify___ssdb__format_config_0_0)
MR_decl_static(__Compare___ssdb__format_config_0_0)
MR_decl_static(__Unify___ssdb__list_params_0_0)
MR_decl_static(__Compare___ssdb__list_params_0_0)
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
MR_decl_static(__Unify___ssdb__stack_frame_0_0)
MR_decl_static(__Compare___ssdb__stack_frame_0_0)
MR_def_extern_entry(__Unify___ssdb__var_name_0_0)
MR_def_extern_entry(__Compare___ssdb__var_name_0_0)
MR_def_extern_entry(__Unify___ssdb__var_value_0_0)
MR_def_extern_entry(__Compare___ssdb__var_value_0_0)
MR_decl_static(__Unify___ssdb__what_next_0_0)
MR_decl_static(__Compare___ssdb__what_next_0_0)
MR_decl_static(fn__ssdb__IntroducedFrom__func__modify_breakpoint_states__2385__1_2_0)
MR_decl_static(ssdb__IntroducedFrom__pred__print_var_with_name__2607__1_2_0)
MR_decl_static(ssdb__process_options__ho1_5_0)
MR_decl_static(ssdb__process_options__ho2_5_0)
MR_decl_static(ssdb__process_options__ho3_5_0)
MR_decl_static(ssdb__process_short_options__ho4_4_0)
MR_decl_static(ssdb__process_short_options__ho5_4_0)
MR_decl_static(ssdb__process_short_options__ho6_4_0)
MR_def_extern_entry(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0)
MR_def_extern_entry(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0)
MR_def_extern_entry(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0)
MR_decl_static(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0)
MR_decl_static(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_0)

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

static const struct mercury_type_1 mercury_common_1[34] =
{
{
MR_string_const("quit [-y] (q)", 13),
MR_tbmkword(0, 0)
},
{
MR_string_const("help (h)", 8),
MR_TAG_COMMON(1,1,0)
},
{
MR_string_const("delete NUM|*", 12),
MR_TAG_COMMON(1,1,1)
},
{
MR_string_const("disable NUM|*", 13),
MR_TAG_COMMON(1,1,2)
},
{
MR_string_const("enable NUM|*", 12),
MR_TAG_COMMON(1,1,3)
},
{
MR_string_const("break info", 10),
MR_TAG_COMMON(1,1,4)
},
{
MR_string_const("break MODULE PRED (b)", 21),
MR_TAG_COMMON(1,1,5)
},
{
MR_string_const("pop_list_dir", 12),
MR_TAG_COMMON(1,1,6)
},
{
MR_string_const("push_list_dir DIR ... (pld)", 27),
MR_TAG_COMMON(1,1,7)
},
{
MR_string_const("list_path [DIR ...]", 19),
MR_TAG_COMMON(1,1,8)
},
{
MR_string_const("list [NUM] (l)", 14),
MR_TAG_COMMON(1,1,9)
},
{
MR_string_const("format_param [-APBfpv] depth|size|width|lines NUM", 49),
MR_TAG_COMMON(1,1,10)
},
{
MR_string_const("format [-APB] flat|raw_pretty|pretty|verbose", 44),
MR_TAG_COMMON(1,1,11)
},
{
MR_string_const("current (cur)", 13),
MR_TAG_COMMON(1,1,12)
},
{
MR_string_const("level NUM (lv)", 14),
MR_TAG_COMMON(1,1,13)
},
{
MR_string_const("down (d)", 8),
MR_TAG_COMMON(1,1,14)
},
{
MR_string_const("up (u)", 6),
MR_TAG_COMMON(1,1,15)
},
{
MR_string_const("stack [NUM] (st)", 16),
MR_TAG_COMMON(1,1,16)
},
{
MR_string_const("vars (v)", 8),
MR_TAG_COMMON(1,1,17)
},
{
MR_string_const("browse VAR|NUM", 14),
MR_TAG_COMMON(1,1,18)
},
{
MR_string_const("print [-fprv] * (P)", 19),
MR_TAG_COMMON(1,1,19)
},
{
MR_string_const("print [-fprv] VAR|NUM", 21),
MR_TAG_COMMON(1,1,20)
},
{
MR_string_const("print [-fprv] (p)", 17),
MR_TAG_COMMON(1,1,21)
},
{
MR_string_const("retry [NUM] (r)", 15),
MR_TAG_COMMON(1,1,22)
},
{
MR_string_const("exception (e)", 13),
MR_TAG_COMMON(1,1,23)
},
{
MR_string_const("continue (c)", 12),
MR_TAG_COMMON(1,1,24)
},
{
MR_string_const("goto NUM (g)", 12),
MR_TAG_COMMON(1,1,25)
},
{
MR_string_const("next (n)", 8),
MR_TAG_COMMON(1,1,26)
},
{
MR_string_const("step [NUM] (s, default)", 23),
MR_TAG_COMMON(1,1,27)
},
{
MR_string_const("*", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("size", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("depth", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const("lines", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const("width", 5),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_help_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_help_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_down_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_current_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_list_path_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_push_list_dir_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_break_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_breakpoint_0;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__modify_breakpoint_states_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_bp_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__modify_breakpoint_states_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_enable_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_next_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_continue_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_return_6_0_1;
static const struct mercury_type_2 mercury_common_2[15] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__print_help_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_help_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_down_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_current_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_list_path_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_push_list_dir_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(4,1),
MR_COMMON(4,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_break_3_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ssdb__modify_breakpoint_states_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ssdb, bp_state),
MR_CTOR0_ADDR(ssdb, breakpoint),
MR_CTOR0_ADDR(ssdb, breakpoint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__modify_breakpoint_states_3_0_2,
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
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_enable_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ssdb, bp_state),
MR_CTOR0_ADDR(ssdb, breakpoint),
MR_CTOR0_ADDR(ssdb, breakpoint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_2,
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
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_next_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_continue_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_return_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(mdb__listing__push_list_path_3_0);
static const struct mercury_type_3 mercury_common_3[13] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(2,5),
MR_ENTRY_AP(mdb__listing__push_list_path_3_0),
0
},
{
MR_COMMON(2,6),
MR_ENTRY_AP(ssdb__print_breakpoint_3_0),
0
},
{
MR_COMMON(2,8),
MR_ENTRY_AP(ssdb__print_breakpoint_3_0),
0
},
{
MR_COMMON(2,9),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(2,11),
MR_ENTRY_AP(ssdb__print_breakpoint_3_0),
0
},
{
MR_COMMON(2,12),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(2,13),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(2,14),
MR_ENTRY_AP(io__write_string_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_portray_format_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(mdb__browser_info, portray_format)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_vars_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_browse_caller_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_var_value_0;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_var_with_name_5_0_2;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__print_vars_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(mdb__browser_info, browse_caller_type),
MR_CTOR0_ADDR(ssdb, var_value),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__print_var_with_name_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(4,0),
MR_CTOR0_ADDR(mdb__browser_info, browse_caller_type),
MR_CTOR0_ADDR(ssdb, var_value),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_var_with_name_5_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__print_var_with_name_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ssdb, var_value)
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
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

static const struct mercury_type_8 mercury_common_8[2] =
{
{
MR_string_const("-", 1)
},
{
MR_string_const("+", 1)
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_COMMON(2,10),
MR_ENTRY_AP(fn__ssdb__IntroducedFrom__func__modify_breakpoint_states__2385__1_2_0),
1,
1
},
};

static const struct mercury_type_11 mercury_common_11[4] =
{
{
2
},
{
1
},
{
3
},
{
0
},
};

static const struct mercury_type_10 mercury_vector_common_10_0[128] =
{
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("list_context_lines", 18),
-1
},
{
MR_string_const("exception", 9),
3
},
{
MR_string_const("?", 1),
-1
},
{
MR_string_const("d", 1),
-1
},
{
MR_string_const("g", 1),
-1
},
{
MR_string_const("level", 5),
8
},
{
MR_string_const("enable", 6),
-1
},
{
MR_string_const("disable", 7),
-1
},
{
MR_string_const("print", 5),
-1
},
{
MR_string_const("goto", 4),
-1
},
{
MR_string_const("stack", 5),
-1
},
{
MR_string_const("return", 6),
-1
},
{
MR_string_const("retry", 5),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("vars", 4),
1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("help", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("lv", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("break", 5),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("quit", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("delete", 6),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("format", 6),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("up", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("continue", 8),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("pop_list_dir", 12),
2
},
{
MR_string_const("ex", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("next", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("cur", 3),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("current", 7),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("step", 4),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("browse", 6),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("c", 1),
-1
},
{
MR_string_const("b", 1),
-1
},
{
MR_string_const("e", 1),
-1
},
{
MR_string_const("st", 2),
4
},
{
MR_string_const("list", 4),
5
},
{
MR_string_const("f", 1),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("h", 1),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("l", 1),
-1
},
{
MR_string_const("push_list_dir", 13),
-1
},
{
MR_string_const("n", 1),
-1
},
{
MR_string_const("q", 1),
-1
},
{
MR_string_const("p", 1),
-1
},
{
MR_string_const("s", 1),
-1
},
{
MR_string_const("r", 1),
6
},
{
MR_string_const("u", 1),
9
},
{
MR_string_const("finish", 6),
-1
},
{
MR_string_const("down", 4),
-1
},
{
MR_string_const("v", 1),
10
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("list_path", 9),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("pld", 3),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("format_param", 12),
-1
},
};

static const struct mercury_type_10 mercury_vector_common_10_1[16] =
{
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("--raw", 5),
-1
},
{
MR_string_const("--print", 7),
4
},
{
MR_string_const("--verbose", 9),
-1
},
{
MR_string_const("--pretty", 8),
5
},
{
MR_string_const("--browse", 8),
-1
},
{
MR_string_const("--print-all", 11),
2
},
{
MR_string_const("--flat", 6),
8
},
{
MR_string_const("-f", 2),
-1
},
{
MR_string_const("-v", 2),
7
},
{
MR_string_const("-B", 2),
-1
},
{
MR_string_const("-p", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("-r", 2),
10
},
{
MR_string_const("-A", 2),
-1
},
{
MR_string_const("-P", 2),
11
},
};

static const struct mercury_type_10 mercury_vector_common_10_2[16] =
{
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("--raw", 5),
-1
},
{
MR_string_const("-f", 2),
4
},
{
MR_string_const("--verbose", 9),
-1
},
{
MR_string_const("--flat", 6),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("--pretty", 8),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("-v", 2),
2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("-r", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("-p", 2),
-1
},
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
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

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_debugger_state_0_0 = {
	"debugger_off",
	0
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_debugger_state_0_1 = {
	"debugger_on",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_value_ordered_debugger_state_0[] = {
	&mercury_data_ssdb__enum_functor_desc_debugger_state_0_0,
	&mercury_data_ssdb__enum_functor_desc_debugger_state_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_name_ordered_debugger_state_0[] = {
	&mercury_data_ssdb__enum_functor_desc_debugger_state_0_0,
	&mercury_data_ssdb__enum_functor_desc_debugger_state_0_1
};

const MR_Integer mercury_data_ssdb__functor_number_map_debugger_state_0[] = {
	0,
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
	2,
	4,
	mercury_data_ssdb__functor_number_map_debugger_state_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_format_config_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_ssdb__field_names_format_config_0_0[] = {
	"print",
	"browse",
	"print_all",
	"f",
	"r",
	"v",
	"p"
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_format_config_0_0 = {
	"format_config",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_format_config_0_0,
	mercury_data_ssdb__field_names_format_config_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_format_config_0_0[] = {
	&mercury_data_ssdb__du_functor_desc_format_config_0_0

};

const MR_DuPtagLayout mercury_data_ssdb__du_ptag_ordered_format_config_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_format_config_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_name_ordered_format_config_0[] = {
	&mercury_data_ssdb__du_functor_desc_format_config_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_format_config_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_format_config_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__format_config_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__format_config_0_0)),
	"ssdb",
	"format_config",
	{ (void *)mercury_data_ssdb__du_name_ordered_format_config_0 },
	{ (void *)mercury_data_ssdb__du_ptag_ordered_format_config_0 },
	1,
	4,
	mercury_data_ssdb__functor_number_map_format_config_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_list_params_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ssdb__field_names_list_params_0_0[] = {
	"list_path",
	"list_context_lines"
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_list_params_0_0 = {
	"list_params",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_list_params_0_0,
	mercury_data_ssdb__field_names_list_params_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_list_params_0_0[] = {
	&mercury_data_ssdb__du_functor_desc_list_params_0_0

};

const MR_DuPtagLayout mercury_data_ssdb__du_ptag_ordered_list_params_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_list_params_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_name_ordered_list_params_0[] = {
	&mercury_data_ssdb__du_functor_desc_list_params_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_list_params_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_list_params_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__list_params_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__list_params_0_0)),
	"ssdb",
	"list_params",
	{ (void *)mercury_data_ssdb__du_name_ordered_list_params_0 },
	{ (void *)mercury_data_ssdb__du_ptag_ordered_list_params_0 },
	1,
	4,
	mercury_data_ssdb__functor_number_map_list_params_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_var_value_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ssdb__type_ctor_info_var_value_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ssdb__type_ctor_info_var_value_0
}};

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

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_next_stop_0_5 = {
	"ns_nonexit",
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

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_next_stop_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_next_stop_0_6 = {
	"ns_goto",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_next_stop_0_6,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_next_stop_0_7 = {
	"ns_exception",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_next_stop_0_0[] = {
	&mercury_data_ssdb__du_functor_desc_next_stop_0_0,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_2,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_5,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_7

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_next_stop_0_1[] = {
	&mercury_data_ssdb__du_functor_desc_next_stop_0_1

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_next_stop_0_2[] = {
	&mercury_data_ssdb__du_functor_desc_next_stop_0_3

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_next_stop_0_3[] = {
	&mercury_data_ssdb__du_functor_desc_next_stop_0_4,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_6

};

const MR_DuPtagLayout mercury_data_ssdb__du_ptag_ordered_next_stop_0[] = {
	{ 4, MR_SECTAG_LOCAL,
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
	&mercury_data_ssdb__du_functor_desc_next_stop_0_7,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_3,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_4,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_6,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_1,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_5,
	&mercury_data_ssdb__du_functor_desc_next_stop_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_next_stop_0[] = {
	7,
	5,
	0,
	2,
	3,
	6,
	4,
	1 };
	
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
	8,
	4,
	mercury_data_ssdb__functor_number_map_next_stop_0
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

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_0 = {
	"ssdb_step",
	0
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_1 = {
	"ssdb_next",
	1
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_2 = {
	"ssdb_goto",
	2
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_3 = {
	"ssdb_continue",
	3
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_4 = {
	"ssdb_finish",
	4
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_5 = {
	"ssdb_return",
	5
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_6 = {
	"ssdb_exception",
	6
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_7 = {
	"ssdb_retry",
	7
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_8 = {
	"ssdb_stack",
	8
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_9 = {
	"ssdb_print",
	9
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_10 = {
	"ssdb_browse",
	10
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_11 = {
	"ssdb_vars",
	11
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_12 = {
	"ssdb_down",
	12
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_13 = {
	"ssdb_up",
	13
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_14 = {
	"ssdb_level",
	14
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_15 = {
	"ssdb_current",
	15
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_16 = {
	"ssdb_format",
	16
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_17 = {
	"ssdb_format_param",
	17
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_18 = {
	"ssdb_list",
	18
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_19 = {
	"ssdb_list_path",
	19
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_20 = {
	"ssdb_push_list_dir",
	20
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_21 = {
	"ssdb_pop_list_dir",
	21
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_22 = {
	"ssdb_list_context_lines",
	22
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_23 = {
	"ssdb_break",
	23
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_24 = {
	"ssdb_enable",
	24
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_25 = {
	"ssdb_disable",
	25
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_26 = {
	"ssdb_delete",
	26
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_27 = {
	"ssdb_help",
	27
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_28 = {
	"ssdb_quit",
	28
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
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_16,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_17,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_18,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_19,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_20,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_21,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_22,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_23,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_24,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_25,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_26,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_27,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_28
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_name_ordered_ssdb_cmd_0[] = {
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_23,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_10,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_3,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_15,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_26,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_25,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_12,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_24,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_6,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_4,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_16,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_17,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_2,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_27,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_14,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_18,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_22,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_19,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_1,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_21,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_9,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_20,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_28,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_7,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_5,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_8,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_0,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_13,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_11
};

const MR_Integer mercury_data_ssdb__functor_number_map_ssdb_cmd_0[] = {
	26,
	18,
	12,
	2,
	9,
	24,
	8,
	23,
	25,
	20,
	1,
	28,
	6,
	27,
	14,
	3,
	10,
	11,
	15,
	17,
	21,
	19,
	16,
	0,
	7,
	5,
	4,
	13,
	22 };
	
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
	29,
	4,
	mercury_data_ssdb__functor_number_map_ssdb_cmd_0
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

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_7 = {
	"ssdb_excp",
	7
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_value_ordered_ssdb_event_type_0[] = {
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_0,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_1,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_2,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_3,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_4,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_5,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_6,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_7
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_name_ordered_ssdb_event_type_0[] = {
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_0,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_3,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_7,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_1,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_4,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_2,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_6,
	&mercury_data_ssdb__enum_functor_desc_ssdb_event_type_0_5
};

const MR_Integer mercury_data_ssdb__functor_number_map_ssdb_event_type_0[] = {
	0,
	3,
	5,
	1,
	4,
	7,
	6,
	2 };
	
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
	8,
	4,
	mercury_data_ssdb__functor_number_map_ssdb_event_type_0
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
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0;

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_stack_frame_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ssdb__type_ctor_info_var_value_0
};

const MR_ConstString mercury_data_ssdb__field_names_stack_frame_0_0[] = {
	"sf_event_number",
	"sf_csn",
	"sf_depth",
	"sf_proc_id",
	"sf_call_site_file",
	"sf_call_site_line",
	"sf_list_var_value"
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_stack_frame_0_0 = {
	"stack_frame",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_stack_frame_0_0,
	mercury_data_ssdb__field_names_stack_frame_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_stack_frame_0_0[] = {
	&mercury_data_ssdb__du_functor_desc_stack_frame_0_0

};

const MR_DuPtagLayout mercury_data_ssdb__du_ptag_ordered_stack_frame_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ssdb__du_stag_ordered_stack_frame_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_name_ordered_stack_frame_0[] = {
	&mercury_data_ssdb__du_functor_desc_stack_frame_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_stack_frame_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_stack_frame_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__stack_frame_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__stack_frame_0_0)),
	"ssdb",
	"stack_frame",
	{ (void *)mercury_data_ssdb__du_name_ordered_stack_frame_0 },
	{ (void *)mercury_data_ssdb__du_ptag_ordered_stack_frame_0 },
	1,
	4,
	mercury_data_ssdb__functor_number_map_stack_frame_0
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

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_what_next_0_4 = {
	"wn_return",
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

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_what_next_0_5 = {
	"wn_exception",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_what_next_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_what_next_0_6 = {
	"wn_retry",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_what_next_0_6,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_what_next_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_what_next_0_7 = {
	"wn_retry_nondet",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	7,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_what_next_0_7,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_what_next_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_what_next_0_8 = {
	"wn_goto",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	8,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_what_next_0_8,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_what_next_0_0[] = {
	&mercury_data_ssdb__du_functor_desc_what_next_0_0,
	&mercury_data_ssdb__du_functor_desc_what_next_0_1,
	&mercury_data_ssdb__du_functor_desc_what_next_0_2,
	&mercury_data_ssdb__du_functor_desc_what_next_0_4,
	&mercury_data_ssdb__du_functor_desc_what_next_0_5

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_what_next_0_1[] = {
	&mercury_data_ssdb__du_functor_desc_what_next_0_3

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_what_next_0_2[] = {
	&mercury_data_ssdb__du_functor_desc_what_next_0_6

};

const MR_DuFunctorDescPtr mercury_data_ssdb__du_stag_ordered_what_next_0_3[] = {
	&mercury_data_ssdb__du_functor_desc_what_next_0_7,
	&mercury_data_ssdb__du_functor_desc_what_next_0_8

};

const MR_DuPtagLayout mercury_data_ssdb__du_ptag_ordered_what_next_0[] = {
	{ 5, MR_SECTAG_LOCAL,
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
	&mercury_data_ssdb__du_functor_desc_what_next_0_5,
	&mercury_data_ssdb__du_functor_desc_what_next_0_3,
	&mercury_data_ssdb__du_functor_desc_what_next_0_8,
	&mercury_data_ssdb__du_functor_desc_what_next_0_1,
	&mercury_data_ssdb__du_functor_desc_what_next_0_6,
	&mercury_data_ssdb__du_functor_desc_what_next_0_7,
	&mercury_data_ssdb__du_functor_desc_what_next_0_4,
	&mercury_data_ssdb__du_functor_desc_what_next_0_0
};

const MR_Integer mercury_data_ssdb__functor_number_map_what_next_0[] = {
	8,
	4,
	0,
	2,
	7,
	1,
	5,
	6,
	3 };
	
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
	9,
	4,
	mercury_data_ssdb__functor_number_map_what_next_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_return_6_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"ssdb",
"ssdb.m",
2880,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_continue_6_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"ssdb",
"ssdb.m",
2880,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_next_6_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"ssdb",
"ssdb.m",
2880,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_2 = {
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
2823,
"d1;c4;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_1 = {
{
MR_FUNCTION,
"ssdb",
"ssdb",
"lambda_ssdb_m_2385",
3,
0
},
"ssdb",
"ssdb.m",
2385,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_enable_3_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"ssdb",
"ssdb.m",
2880,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__modify_breakpoint_states_3_0_2 = {
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
2823,
"d1;c4;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__modify_breakpoint_states_3_0_1 = {
{
MR_FUNCTION,
"ssdb",
"ssdb",
"lambda_ssdb_m_2385",
3,
0
},
"ssdb",
"ssdb.m",
2385,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_break_3_0_1 = {
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
2823,
"d1;c4;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_push_list_dir_3_0_1 = {
{
MR_PREDICATE,
"mdb.listing",
"mdb.listing",
"push_list_path",
3,
0
},
"ssdb",
"ssdb.m",
2183,
"d1;c4;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_list_path_3_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"ssdb",
"ssdb.m",
2161,
"d1;c4;d1;c5;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_current_4_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"ssdb",
"ssdb.m",
2880,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_down_5_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"ssdb",
"ssdb.m",
2880,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_var_with_name_5_0_2 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"print_var",
5,
0
},
"ssdb",
"ssdb.m",
2593,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_var_with_name_5_0_1 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"lambda_ssdb_m_2607",
2,
0
},
"ssdb",
"ssdb.m",
2607,
"d1;c6;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_vars_5_0_1 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"print_var",
5,
0
},
"ssdb",
"ssdb.m",
2593,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_help_3_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"ssdb",
"ssdb.m",
2880,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_help_2_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"ssdb",
"ssdb.m",
2880,
"d1;c5;"
};



MR_BEGIN_MODULE(ssdb_module0)
	MR_init_entry1(ssdb__lock_cur_filename_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_cur_filename_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_cur_filename'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_filename_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_filename_0_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 3696 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module1)
	MR_init_entry1(ssdb__unlock_cur_filename_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_cur_filename_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_cur_filename'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_filename_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_filename_0_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 3729 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module2)
	MR_init_entry1(ssdb__unsafe_set_cur_filename_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_cur_filename_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_cur_filename'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_cur_filename_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_cur_filename_1_0
	X = MR_r1;
{
#line 248 "ssdb.m"
ssdb__mutable_variable_cur_filename = X;
;}
#line 3761 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module3)
	MR_init_entry1(ssdb__lock_cur_line_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_cur_line_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_cur_line_number'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_line_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_line_number_0_0
{
#line 250 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 3794 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module4)
	MR_init_entry1(ssdb__unlock_cur_line_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_cur_line_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_cur_line_number'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_line_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_line_number_0_0
{
#line 250 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 3827 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module5)
	MR_init_entry1(ssdb__unsafe_set_cur_line_number_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_cur_line_number_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_cur_line_number'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_cur_line_number_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_cur_line_number_1_0
	X = MR_r1;
{
#line 250 "ssdb.m"
ssdb__mutable_variable_cur_line_number = X;
;}
#line 3859 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module6)
	MR_init_entry1(ssdb__set_context_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__set_context_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_context'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__set_context_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_context_2_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 3892 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_context_2_0
	X = MR_r1;
{
#line 248 "ssdb.m"
ssdb__mutable_variable_cur_filename = X;
;}
#line 3903 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_context_2_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 3915 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_context_2_0
{
#line 250 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 3927 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_context_2_0
	X = MR_r2;
{
#line 250 "ssdb.m"
ssdb__mutable_variable_cur_line_number = X;
;}
#line 3938 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_context_2_0
{
#line 250 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 3950 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module7)
	MR_init_entry1(ssdb__lock_debugger_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_debugger_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_debugger_state'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_debugger_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_debugger_state_0_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 3983 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module8)
	MR_init_entry1(ssdb__unlock_debugger_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_debugger_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_debugger_state'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_debugger_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_debugger_state_0_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 4016 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module9)
	MR_init_entry1(ssdb__unsafe_get_debugger_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_debugger_state_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_debugger_state'/1 mode 0 */
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
#line 309 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;
;}
#line 4047 "ssdb.c"
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
	MR_init_entry1(ssdb__unsafe_get_cur_filename_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_cur_filename_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_cur_filename'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_cur_filename_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_cur_filename_1_0
{
#line 248 "ssdb.m"
X = ssdb__mutable_variable_cur_filename;
;}
#line 4079 "ssdb.c"
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
	MR_init_entry1(ssdb__unsafe_get_cur_line_number_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_cur_line_number_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_cur_line_number'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_cur_line_number_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_cur_line_number_1_0
{
#line 250 "ssdb.m"
X = ssdb__mutable_variable_cur_line_number;
;}
#line 4111 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module12)
	MR_init_entry1(ssdb__lock_cur_ssdb_csn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_cur_ssdb_csn_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_cur_ssdb_csn'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_csn_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_csn_0_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 4145 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module13)
	MR_init_entry1(ssdb__unlock_cur_ssdb_csn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_cur_ssdb_csn_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_cur_ssdb_csn'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_csn_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_csn_0_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 4178 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module14)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_csn_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_cur_ssdb_csn_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_cur_ssdb_csn'/1 mode 0 */
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
#line 256 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_csn;
;}
#line 4209 "ssdb.c"
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
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_csn_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_cur_ssdb_csn_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_cur_ssdb_csn'/1 mode 0 */
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
#line 256 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn = X;
;}
#line 4242 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module16)
	MR_init_entry1(ssdb__lock_cur_ssdb_event_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_cur_ssdb_event_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_cur_ssdb_event_number'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_event_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_event_number_0_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 4275 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module17)
	MR_init_entry1(ssdb__unlock_cur_ssdb_event_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_cur_ssdb_event_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_cur_ssdb_event_number'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_event_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_event_number_0_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 4308 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module18)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_event_number_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_cur_ssdb_event_number_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_cur_ssdb_event_number'/1 mode 0 */
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
#line 253 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 4339 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module19)
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_event_number_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_cur_ssdb_event_number_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_cur_ssdb_event_number'/1 mode 0 */
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
#line 253 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 4372 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module20)
	MR_init_entry1(ssdb__lock_shadow_stack_depth_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_shadow_stack_depth_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_shadow_stack_depth'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_shadow_stack_depth_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_shadow_stack_depth_0_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 4405 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module21)
	MR_init_entry1(ssdb__unlock_shadow_stack_depth_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_shadow_stack_depth_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_shadow_stack_depth'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_shadow_stack_depth_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_shadow_stack_depth_0_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 4438 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module22)
	MR_init_entry1(ssdb__unsafe_get_shadow_stack_depth_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_shadow_stack_depth_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_shadow_stack_depth'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_shadow_stack_depth_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_shadow_stack_depth_1_0
{
#line 270 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 4469 "ssdb.c"
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
	MR_init_entry1(ssdb__lock_shadow_stack_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_shadow_stack_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_shadow_stack'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_shadow_stack_0_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4503 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module24)
	MR_init_entry1(ssdb__unlock_shadow_stack_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_shadow_stack_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_shadow_stack'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_shadow_stack_0_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4536 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module25)
	MR_init_entry1(ssdb__unsafe_get_shadow_stack_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_shadow_stack_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_shadow_stack'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_shadow_stack_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_shadow_stack_1_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 4567 "ssdb.c"
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
	MR_init_entry1(ssdb__unsafe_set_shadow_stack_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_shadow_stack_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_shadow_stack'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_shadow_stack_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_shadow_stack_1_0
	X = MR_r1;
{
#line 268 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 4600 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module27)
	MR_init_entry1(ssdb__unsafe_set_shadow_stack_depth_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_shadow_stack_depth_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_shadow_stack_depth'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_shadow_stack_depth_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_shadow_stack_depth_1_0
	X = MR_r1;
{
#line 270 "ssdb.m"
ssdb__mutable_variable_shadow_stack_depth = X;
;}
#line 4632 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module28)
	MR_init_entry1(ssdb__stack_push_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__stack_push_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stack_push'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__stack_push_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4665 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 4677 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4690 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4705 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
	X = MR_tempr2;
{
#line 268 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 4716 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4728 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 4740 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 270 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 4750 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 4763 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 4775 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
	X = MR_tempr2;
{
#line 270 "ssdb.m"
ssdb__mutable_variable_shadow_stack_depth = X;
;}
#line 4787 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 4799 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module29)
	MR_init_entry1(ssdb__lock_nondet_shadow_stack_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_nondet_shadow_stack_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_nondet_shadow_stack'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_nondet_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_nondet_shadow_stack_0_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 4833 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module30)
	MR_init_entry1(ssdb__unlock_nondet_shadow_stack_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_nondet_shadow_stack_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_nondet_shadow_stack'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_nondet_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_nondet_shadow_stack_0_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 4866 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module31)
	MR_init_entry1(ssdb__unsafe_get_nondet_shadow_stack_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_nondet_shadow_stack_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_nondet_shadow_stack'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_nondet_shadow_stack_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_nondet_shadow_stack_1_0
{
#line 273 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack;
;}
#line 4897 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module32)
	MR_init_entry1(ssdb__unsafe_set_nondet_shadow_stack_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_nondet_shadow_stack_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_nondet_shadow_stack'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_nondet_shadow_stack_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_nondet_shadow_stack_1_0
	X = MR_r1;
{
#line 273 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack = X;
;}
#line 4930 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module33)
	MR_init_entry1(ssdb__lock_nondet_shadow_stack_depth_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_nondet_shadow_stack_depth_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_nondet_shadow_stack_depth'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_nondet_shadow_stack_depth_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_nondet_shadow_stack_depth_0_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 4963 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module34)
	MR_init_entry1(ssdb__unlock_nondet_shadow_stack_depth_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_nondet_shadow_stack_depth_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_nondet_shadow_stack_depth'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_nondet_shadow_stack_depth_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_nondet_shadow_stack_depth_0_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 4996 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module35)
	MR_init_entry1(ssdb__unsafe_get_nondet_shadow_stack_depth_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_nondet_shadow_stack_depth_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_nondet_shadow_stack_depth'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_nondet_shadow_stack_depth_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_nondet_shadow_stack_depth_1_0
{
#line 275 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack_depth;
;}
#line 5027 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module36)
	MR_init_entry1(ssdb__unsafe_set_nondet_shadow_stack_depth_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_nondet_shadow_stack_depth_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_nondet_shadow_stack_depth'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_nondet_shadow_stack_depth_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_nondet_shadow_stack_depth_1_0
	X = MR_r1;
{
#line 275 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack_depth = X;
;}
#line 5060 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module37)
	MR_init_entry1(ssdb__nondet_stack_push_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__nondet_stack_push_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nondet_stack_push'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__nondet_stack_push_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 5093 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 273 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack;
;}
#line 5105 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 5118 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 5133 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
	X = MR_tempr2;
{
#line 273 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack = X;
;}
#line 5144 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 5156 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 5168 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 275 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack_depth;
;}
#line 5178 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 5191 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 5203 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
	X = MR_tempr2;
{
#line 275 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack_depth = X;
;}
#line 5215 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 5227 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module38)
	MR_init_entry1(ssdb__lock_cur_ssdb_next_stop_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_cur_ssdb_next_stop_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_cur_ssdb_next_stop'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_next_stop_0_0
{
#line 259 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 5261 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module39)
	MR_init_entry1(ssdb__unlock_cur_ssdb_next_stop_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_cur_ssdb_next_stop_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_cur_ssdb_next_stop'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_next_stop_0_0
{
#line 259 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 5294 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module40)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_next_stop_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_cur_ssdb_next_stop_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_cur_ssdb_next_stop'/1 mode 0 */
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
#line 259 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_next_stop;
;}
#line 5325 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module41)
	MR_init_entry1(ssdb__lock_cur_ssdb_breakpoints_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_cur_ssdb_breakpoints_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_cur_ssdb_breakpoints'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_breakpoints_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_breakpoints_0_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 5359 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module42)
	MR_init_entry1(ssdb__unlock_cur_ssdb_breakpoints_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_cur_ssdb_breakpoints_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_cur_ssdb_breakpoints'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_breakpoints_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_breakpoints_0_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 5392 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module43)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_breakpoints_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_cur_ssdb_breakpoints_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_cur_ssdb_breakpoints'/1 mode 0 */
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
#line 262 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;
;}
#line 5423 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(ssdb_module44)
	MR_init_entry1(ssdb__stack_top_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__stack_top_3_0);
	MR_init_label1(ssdb__stack_top_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stack_top'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__stack_top_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_top_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 5459 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_top_3_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 5469 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_top_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 5482 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__stack_top_3_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
MR_def_label(ssdb__stack_top_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_top on empty stack", 30);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__index0_det_3_0);

MR_BEGIN_MODULE(ssdb_module45)
	MR_init_entry1(ssdb__nondet_stack_index_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__nondet_stack_index_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nondet_stack_index'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__nondet_stack_index_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_index_4_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 5524 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_index_4_0
{
#line 273 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack;
;}
#line 5536 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_index_4_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 5549 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__index0_det_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module46)
	MR_init_entry1(ssdb__is_same_int_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__is_same_int_3_0);
	MR_init_label1(ssdb__is_same_int_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_same_int'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__is_same_int_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(ssdb__is_same_int_3_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ssdb__is_same_int_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module47)
	MR_init_entry1(ssdb__reset_counters_for_retry_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__reset_counters_for_retry_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_counters_for_retry'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__reset_counters_for_retry_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__reset_counters_for_retry_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 5617 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_tfield(0, MR_r1, 0) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__reset_counters_for_retry_3_0
	X = MR_tempr1;
{
#line 253 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 5631 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__reset_counters_for_retry_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 5643 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__reset_counters_for_retry_3_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 5655 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = ((MR_Integer) MR_tfield(0, MR_r1, 1) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__reset_counters_for_retry_3_0
	X = MR_tempr1;
{
#line 256 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn = X;
;}
#line 5667 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__reset_counters_for_retry_3_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 5679 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(ssdb_module48)
	MR_init_entry1(ssdb__exception_handler_exists_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__exception_handler_exists_2_0);
	MR_init_label3(ssdb__exception_handler_exists_2_0,3,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'exception_handler_exists'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__exception_handler_exists_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ssdb__exception_handler_exists_2_0_i2);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_np_call_localret_ent(list__member_2_1,
		ssdb__exception_handler_exists_2_0_i3);
MR_def_label(ssdb__exception_handler_exists_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (((MR_Integer) MR_r2 < (MR_Integer) MR_sv(1))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	MR_r3 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("exception", 9)) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("try", 3)) == 0)) {
		MR_GOTO_LAB(ssdb__exception_handler_exists_2_0_i5);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("try_io", 6)) == 0)) {
		MR_GOTO_LAB(ssdb__exception_handler_exists_2_0_i5);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("try_all", 7)) == 0)) {
		MR_GOTO_LAB(ssdb__exception_handler_exists_2_0_i5);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("try_store", 9)) == 0)) {
		MR_GOTO_LAB(ssdb__exception_handler_exists_2_0_i5);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("incremental_try_all", 19)) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	}
MR_def_label(ssdb__exception_handler_exists_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ssdb__exception_handler_exists_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(fn__pair__pair_2_0);
MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(ssdb_module49)
	MR_init_entry1(ssdb__should_stop_at_this_event_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__should_stop_at_this_event_8_0);
	MR_init_label10(ssdb__should_stop_at_this_event_8_0,152,71,153,20,155,26,29,156,33,66)
	MR_init_label10(ssdb__should_stop_at_this_event_8_0,159,42,45,160,49,51,50,158,56,3)
	MR_init_label6(ssdb__should_stop_at_this_event_8_0,8,10,12,59,154,83)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'should_stop_at_this_event'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__should_stop_at_this_event_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 259 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 5801 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 259 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_next_stop;
;}
#line 5811 "ssdb.c"
	MR_r6 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 259 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 5824 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i152) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i153) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i20) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i66));
MR_def_label(ssdb__should_stop_at_this_event_8_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_unmkbody(MR_r6),0)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i71);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r6),1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i3);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r6),2)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i59);
	}
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i83);
	}
MR_def_label(ssdb__should_stop_at_this_event_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__should_stop_at_this_event_8_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r6, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ssdb__is_same_int_3_0,
		ssdb__should_stop_at_this_event_8_0_i56);
MR_def_label(ssdb__should_stop_at_this_event_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i154) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i29) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i29) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i154) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i29) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i154) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i29) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i155));
MR_def_label(ssdb__should_stop_at_this_event_8_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 5885 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 5895 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 5908 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tfield(2, MR_r6, 0);
	MR_np_call_localret_ent(ssdb__exception_handler_exists_2_0,
		ssdb__should_stop_at_this_event_8_0_i26);
MR_def_label(ssdb__should_stop_at_this_event_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i71);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__should_stop_at_this_event_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	if ((MR_r4 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i154);
	}
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i156);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ssdb__should_stop_at_this_event_8_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ssdb__stack_top_3_0,
		ssdb__should_stop_at_this_event_8_0_i33);
MR_def_label(ssdb__should_stop_at_this_event_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__reset_counters_for_retry_3_0,
		ssdb__should_stop_at_this_event_8_0_i51);
MR_def_label(ssdb__should_stop_at_this_event_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r6, 0),0)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i158);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i154) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i154) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i154) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i154) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i154) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i154) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i45) MR_AND
		MR_LABEL_AP(ssdb__should_stop_at_this_event_8_0_i159));
MR_def_label(ssdb__should_stop_at_this_event_8_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 5976 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 5986 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 5999 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tfield(3, MR_r6, 1);
	MR_np_call_localret_ent(ssdb__exception_handler_exists_2_0,
		ssdb__should_stop_at_this_event_8_0_i42);
MR_def_label(ssdb__should_stop_at_this_event_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i71);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__should_stop_at_this_event_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	if ((MR_r4 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i154);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i160);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ssdb__should_stop_at_this_event_8_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__nondet_stack_index_4_0,
		ssdb__should_stop_at_this_event_8_0_i49);
MR_def_label(ssdb__should_stop_at_this_event_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 1);
	if ((MR_sv(1) != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i50);
	}
	MR_np_call_localret_ent(ssdb__reset_counters_for_retry_3_0,
		ssdb__should_stop_at_this_event_8_0_i51);
MR_def_label(ssdb__should_stop_at_this_event_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__should_stop_at_this_event_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: nondet stack frame has unexpected CSN", 43);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(ssdb__should_stop_at_this_event_8_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r6, 1);
	MR_np_call_localret_ent(ssdb__is_same_int_3_0,
		ssdb__should_stop_at_this_event_8_0_i56);
MR_def_label(ssdb__should_stop_at_this_event_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__should_stop_at_this_event_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 6079 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 262 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;
;}
#line 6089 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 6102 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(map__is_empty_1_0,
		ssdb__should_stop_at_this_event_8_0_i8);
MR_def_label(ssdb__should_stop_at_this_event_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i83);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		ssdb__should_stop_at_this_event_8_0_i10);
MR_def_label(ssdb__should_stop_at_this_event_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ssdb__should_stop_at_this_event_8_0_i12);
MR_def_label(ssdb__should_stop_at_this_event_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i83);
	}
	MR_r4 = MR_tfield(0, MR_r2, 3);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i71);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__should_stop_at_this_event_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r1 == (MR_Integer) 1) || ((MR_Integer) MR_r1 == (MR_Integer) 4)))) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i71);
	}
	MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i83);
MR_def_label(ssdb__should_stop_at_this_event_8_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ssdb__should_stop_at_this_event_8_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module50)
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_next_stop_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_cur_ssdb_next_stop_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_cur_ssdb_next_stop'/1 mode 0 */
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
#line 259 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop = X;
;}
#line 6193 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module51)
	MR_init_entry1(ssdb__update_next_stop_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__update_next_stop_6_0);
	MR_init_label10(ssdb__update_next_stop_6_0,24,5,13,16,15,14,27,7,32,8)
	MR_init_label5(ssdb__update_next_stop_6_0,3,4,11,22,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_next_stop'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__update_next_stop_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ssdb__update_next_stop_6_0_i24) MR_AND
		MR_LABEL_AP(ssdb__update_next_stop_6_0_i5) MR_AND
		MR_LABEL_AP(ssdb__update_next_stop_6_0_i13) MR_AND
		MR_LABEL_AP(ssdb__update_next_stop_6_0_i27));
MR_def_label(ssdb__update_next_stop_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(ssdb__update_next_stop_6_0_i32) MR_AND
		MR_LABEL_AP(ssdb__update_next_stop_6_0_i11) MR_AND
		MR_LABEL_AP(ssdb__update_next_stop_6_0_i3) MR_AND
		MR_LABEL_AP(ssdb__update_next_stop_6_0_i22) MR_AND
		MR_LABEL_AP(ssdb__update_next_stop_6_0_i4));
MR_def_label(ssdb__update_next_stop_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_r3, 0);
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 1;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
	}
MR_def_label(ssdb__update_next_stop_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(2, MR_r3, 0);
	if ((MR_r5 != MR_r2)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i14);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 6261 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 6271 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 6284 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i16);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r3 = ((MR_Integer) MR_tfield(0, MR_r1, 0) - (MR_Integer) 1);
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i15);
MR_def_label(ssdb__update_next_stop_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_top on empty stack", 30);
	MR_np_call_localret_ent(require__error_1_0,
		ssdb__update_next_stop_6_0_i15);
MR_def_label(ssdb__update_next_stop_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 6309 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
	X = MR_r3;
{
#line 253 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 6320 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 6332 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 6344 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_tfield(0, MR_r1, 1) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
	X = MR_r3;
{
#line 256 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn = X;
;}
#line 6356 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 6368 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r5;
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 0;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
	}
MR_def_label(ssdb__update_next_stop_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tfield(3, MR_r3, 1);
	MR_tfield(3, MR_r2, 2) = (MR_Integer) 0;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_r2;
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(3, MR_r3, 1);
	if ((MR_r1 != MR_r5)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i8);
	}
MR_def_label(ssdb__update_next_stop_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r5;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
	}
MR_def_label(ssdb__update_next_stop_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 3);
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
MR_def_label(ssdb__update_next_stop_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 259 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 6450 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
	X = MR_r3;
{
#line 259 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop = X;
;}
#line 6461 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 259 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 6473 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(ssdb_module52)
	MR_init_entry1(ssdb__print_help_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_help_2_0);
	MR_init_label1(ssdb__print_help_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_help'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_help_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(io__write_list_5_0,
		ssdb__print_help_2_0_i3);
MR_def_label(ssdb__print_help_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n", 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module53)
	MR_init_entry1(ssdb__execute_ssdb_help_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_help_3_0);
	MR_init_label2(ssdb__execute_ssdb_help_3_0,5,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_help'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_help_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_help_3_0_i16);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_np_call_localret_ent(io__write_list_5_0,
		ssdb__execute_ssdb_help_3_0_i5);
MR_def_label(ssdb__execute_ssdb_help_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n", 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_help_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ssdb__print_help_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module54)
	MR_init_entry1(ssdb__stack_index_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__stack_index_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stack_index'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__stack_index_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_index_4_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 6583 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_index_4_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 6595 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_index_4_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 6608 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__index0_det_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module55)
	MR_init_entry1(ssdb__nondet_stack_contains_csn_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__nondet_stack_contains_csn_2_5_0);
	MR_init_label4(ssdb__nondet_stack_contains_csn_2_5_0,15,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nondet_stack_contains_csn_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__nondet_stack_contains_csn_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ssdb__nondet_stack_contains_csn_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__nondet_stack_contains_csn_2_5_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__nondet_stack_contains_csn_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_contains_csn_2_5_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 6658 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_contains_csn_2_5_0
{
#line 273 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack;
;}
#line 6670 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_contains_csn_2_5_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 6683 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__index0_det_3_0,
		ssdb__nondet_stack_contains_csn_2_5_0_i3);
MR_def_label(ssdb__nondet_stack_contains_csn_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 1);
	if ((MR_sv(1) != MR_r3)) {
		MR_GOTO_LAB(ssdb__nondet_stack_contains_csn_2_5_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__nondet_stack_contains_csn_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ssdb__nondet_stack_contains_csn_2_5_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module56)
	MR_init_entry1(ssdb__compress_stack_frames_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__compress_stack_frames_6_0);
	MR_init_label5(ssdb__compress_stack_frames_6_0,19,3,5,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compress_stack_frames'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__compress_stack_frames_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ssdb__compress_stack_frames_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(ssdb__compress_stack_frames_6_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__compress_stack_frames_6_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 6745 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__compress_stack_frames_6_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 6757 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__compress_stack_frames_6_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 6770 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__index0_det_3_0,
		ssdb__compress_stack_frames_6_0_i3);
MR_def_label(ssdb__compress_stack_frames_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(__Unify___ssdb__ssdb_proc_id_0_0,
		ssdb__compress_stack_frames_6_0_i5);
MR_def_label(ssdb__compress_stack_frames_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__compress_stack_frames_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ssdb__compress_stack_frames_6_0_i19);
MR_def_label(ssdb__compress_stack_frames_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__compress_stack_frames_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__format_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(ssdb_module57)
	MR_init_entry1(ssdb__print_stack_frame_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_stack_frame_6_0);
	MR_init_label10(ssdb__print_stack_frame_6_0,6,10,7,11,13,14,15,16,17,18)
	MR_init_label4(ssdb__print_stack_frame_6_0,19,20,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_stack_frame'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_stack_frame_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_sv(1) = MR_r4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 3);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 5);
	MR_r1 = (MR_Word) MR_string_const("%c%4d", 5);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__print_stack_frame_6_0_i6);
MR_def_label(ssdb__print_stack_frame_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(1),1)) {
		MR_GOTO_LAB(ssdb__print_stack_frame_6_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%5d*", 4);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__print_stack_frame_6_0_i10);
MR_def_label(ssdb__print_stack_frame_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" and others", 11);
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_stack_frame_6_0_i13);
MR_def_label(ssdb__print_stack_frame_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("      ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_stack_frame_6_0_i11);
MR_def_label(ssdb__print_stack_frame_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_stack_frame_6_0_i13);
MR_def_label(ssdb__print_stack_frame_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ssdb__print_stack_frame_6_0_i14);
MR_def_label(ssdb__print_stack_frame_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_stack_frame_6_0_i15);
MR_def_label(ssdb__print_stack_frame_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_stack_frame_6_0_i16);
MR_def_label(ssdb__print_stack_frame_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_stack_frame_6_0_i17);
MR_def_label(ssdb__print_stack_frame_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_stack_frame_6_0_i18);
MR_def_label(ssdb__print_stack_frame_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_stack_frame_6_0_i19);
MR_def_label(ssdb__print_stack_frame_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_stack_frame_6_0_i20);
MR_def_label(ssdb__print_stack_frame_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_stack_frame_6_0_i21);
MR_def_label(ssdb__print_stack_frame_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_stack_frame_6_0_i22);
MR_def_label(ssdb__print_stack_frame_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module58)
	MR_init_entry1(ssdb__print_stack_trace_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_stack_trace_5_0);
	MR_init_label8(ssdb__print_stack_trace_5_0,35,2,6,7,8,9,10,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_stack_trace'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_stack_trace_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ssdb__print_stack_trace_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_stack_trace_5_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 7012 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__print_stack_trace_5_0
{
#line 270 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 7022 "ssdb.c"
	MR_r5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_stack_trace_5_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 7035 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ssdb__print_stack_trace_5_0_i2);
	}
	MR_r6 = ((MR_Integer) MR_r5 - (MR_Integer) 1);
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(ssdb__print_stack_trace_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("<more stack frames snipped>\n", 28);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__print_stack_trace_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(ssdb__print_stack_trace_5_0_i38);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_stack_trace_5_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 7063 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__print_stack_trace_5_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 7075 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_stack_trace_5_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 7088 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__index0_det_3_0,
		ssdb__print_stack_trace_5_0_i6);
MR_def_label(ssdb__print_stack_trace_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(ssdb__compress_stack_frames_6_0,
		ssdb__print_stack_trace_5_0_i7);
MR_def_label(ssdb__print_stack_trace_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_r1 - (MR_Integer) MR_tempr1);
	if (((MR_Integer) MR_sv(2) < (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(ssdb__print_stack_trace_5_0_i8);
	}
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ssdb__print_stack_trace_5_0_i8);
	}
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Integer) 42;
	MR_GOTO_LAB(ssdb__print_stack_trace_5_0_i9);
	}
MR_def_label(ssdb__print_stack_trace_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Integer) 32;
MR_def_label(ssdb__print_stack_trace_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(ssdb__print_stack_frame_6_0,
		ssdb__print_stack_trace_5_0_i10);
MR_def_label(ssdb__print_stack_trace_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_sv(4));
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ssdb__print_stack_trace_5_0_i35);
MR_def_label(ssdb__print_stack_trace_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__max_int_0_0);
MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(ssdb_module59)
	MR_init_entry1(ssdb__execute_ssdb_stack_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_stack_4_0);
	MR_init_label4(ssdb__execute_ssdb_stack_4_0,4,3,9,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_stack'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_stack_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_stack_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__int__max_int_0_0,
		ssdb__execute_ssdb_stack_4_0_i4);
MR_def_label(ssdb__execute_ssdb_stack_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ssdb__print_stack_trace_5_0);
	}
MR_def_label(ssdb__execute_ssdb_stack_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_stack_4_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_stack_4_0_i9);
MR_def_label(ssdb__execute_ssdb_stack_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_stack_4_0_i7);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_stack_4_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ssdb__print_stack_trace_5_0);
	}
MR_def_label(ssdb__execute_ssdb_stack_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: \140stack\' command expects integer argument\n", 47);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browse__type_ctor_info_unbound_0;
MR_decl_entry(univ__type_to_univ_2_0);
MR_decl_entry(univ__type_to_univ_2_1);

MR_BEGIN_MODULE(ssdb_module60)
	MR_init_entry1(ssdb__make_arg_univs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__make_arg_univs_3_0);
	MR_init_label10(ssdb__make_arg_univs_3_0,46,3,16,17,19,21,5,7,6,10)
	MR_init_label1(ssdb__make_arg_univs_3_0,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_arg_univs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__make_arg_univs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ssdb__make_arg_univs_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__make_arg_univs_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__make_arg_univs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(ssdb__make_arg_univs_3_0_i5);
	}
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(ssdb__make_arg_univs_3_0_i16);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ssdb__make_arg_univs_3_0_i46);
	}
MR_def_label(ssdb__make_arg_univs_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 1);
	if ((MR_tempr1 != MR_r2)) {
		MR_GOTO_LAB(ssdb__make_arg_univs_3_0_i17);
	}
	MR_r1 = MR_r4;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ssdb__make_arg_univs_3_0,
		ssdb__make_arg_univs_3_0_i19);
MR_def_label(ssdb__make_arg_univs_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_localcall_lab(ssdb__make_arg_univs_3_0,
		ssdb__make_arg_univs_3_0_i19);
MR_def_label(ssdb__make_arg_univs_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browse, unbound);
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		ssdb__make_arg_univs_3_0_i21);
MR_def_label(ssdb__make_arg_univs_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ssdb__make_arg_univs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 2);
	if ((MR_tempr1 != MR_r2)) {
		MR_GOTO_LAB(ssdb__make_arg_univs_3_0_i6);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_r4;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ssdb__make_arg_univs_3_0,
		ssdb__make_arg_univs_3_0_i7);
MR_def_label(ssdb__make_arg_univs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__make_arg_univs_3_0_i11);
MR_def_label(ssdb__make_arg_univs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_localcall_lab(ssdb__make_arg_univs_3_0,
		ssdb__make_arg_univs_3_0_i10);
MR_def_label(ssdb__make_arg_univs_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browse, unbound);
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		ssdb__make_arg_univs_3_0_i11);
MR_def_label(ssdb__make_arg_univs_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(ssdb_module61)
	MR_init_entry1(ssdb__print_vars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_vars_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ssdb__print_var_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);
MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(ssdb_module62)
	MR_init_entry1(ssdb__print_var_prelude_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_var_prelude_4_0);
	MR_init_label5(ssdb__print_var_prelude_4_0,2,3,5,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_var_prelude'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_var_prelude_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		ssdb__print_var_prelude_4_0_i2);
MR_def_label(ssdb__print_var_prelude_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_prelude_4_0_i3);
MR_def_label(ssdb__print_var_prelude_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(2),0)) {
		MR_GOTO_LAB(ssdb__print_var_prelude_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const(" (arg ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_prelude_4_0_i5);
MR_def_label(ssdb__print_var_prelude_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_var_prelude_4_0_i6);
MR_def_label(ssdb__print_var_prelude_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\t", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__print_var_prelude_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module63)
	MR_init_entry1(ssdb__safe_to_write_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__safe_to_write_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'safe_to_write'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__safe_to_write_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module64)
	MR_init_entry1(ssdb__lock_browser_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_browser_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_browser_state'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_browser_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_browser_state_0_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7509 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module65)
	MR_init_entry1(ssdb__unlock_browser_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_browser_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_browser_state'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_browser_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_browser_state_0_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7542 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module66)
	MR_init_entry1(ssdb__unsafe_get_browser_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_browser_state_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_browser_state'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_browser_state_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_browser_state_1_0
{
#line 280 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 7573 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__stdout_stream_3_0);
MR_decl_entry(mdb__browse__print_browser_term_6_0);
MR_decl_entry(mdb__browse__print_browser_term_format_7_0);

MR_BEGIN_MODULE(ssdb_module67)
	MR_init_entry1(ssdb__print_browser_term_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_browser_term_5_0);
	MR_init_label2(ssdb__print_browser_term_5_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_browser_term'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_browser_term_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		ssdb__print_browser_term_5_0_i2);
MR_def_label(ssdb__print_browser_term_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_browser_term_5_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7620 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__print_browser_term_5_0
{
#line 280 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 7630 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_browser_term_5_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7643 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ssdb__print_browser_term_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browse__print_browser_term_6_0);
	}
MR_def_label(ssdb__print_browser_term_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(1, MR_sv(1), 0);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browse__print_browser_term_format_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module68)
	MR_init_entry1(ssdb__safe_write_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__safe_write_6_0);
	MR_init_label6(ssdb__safe_write_6_0,6,7,9,11,3,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'safe_write'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__safe_write_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word	T;
#define	MR_PROC_LABEL	mercury__ssdb__safe_write_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	T = MR_r5;
{
#line 2687 "ssdb.m"

    SUCCESS_INDICATOR = (T != 0);
;}
#line 7709 "ssdb.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(ssdb__safe_write_6_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__safe_write_6_0_i6);
MR_def_label(ssdb__safe_write_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__safe_write_6_0_i7);
MR_def_label(ssdb__safe_write_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(3), 0) = MR_r1;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		ssdb__safe_write_6_0_i9);
MR_def_label(ssdb__safe_write_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__safe_write_6_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7745 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__safe_write_6_0
{
#line 280 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 7755 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__safe_write_6_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7768 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ssdb__safe_write_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdb__browse__print_browser_term_6_0);
	}
MR_def_label(ssdb__safe_write_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(1, MR_sv(1), 0);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdb__browse__print_browser_term_format_7_0);
	}
MR_def_label(ssdb__safe_write_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__safe_write_6_0_i14);
MR_def_label(ssdb__safe_write_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<>", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module69)
	MR_init_entry1(ssdb__print_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_var_5_0);
	MR_init_label10(ssdb__print_var_5_0,29,30,32,33,3,5,6,7,4,10)
	MR_init_label7(ssdb__print_var_5_0,12,17,18,20,22,14,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_var'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r3,1)) {
		MR_GOTO_LAB(ssdb__print_var_5_0_i3);
	}
	if (MR_PTAG_TEST(MR_r3,0)) {
		MR_GOTO_LAB(ssdb__print_var_5_0_i32);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 0);
	MR_r1 = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_var_5_0_i29);
MR_def_label(ssdb__print_var_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_var_5_0_i30);
MR_def_label(ssdb__print_var_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__safe_write_6_0);
	}
MR_def_label(ssdb__print_var_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ssdb__print_var_prelude_4_0,
		ssdb__print_var_5_0_i33);
MR_def_label(ssdb__print_var_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_\n", 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__print_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 2);
	MR_r5 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,0)) {
		MR_GOTO_LAB(ssdb__print_var_5_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ssdb__print_var_5_0_i5);
MR_def_label(ssdb__print_var_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")\t", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_var_5_0_i6);
MR_def_label(ssdb__print_var_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (arg ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_var_5_0_i7);
MR_def_label(ssdb__print_var_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_var_5_0_i10);
MR_def_label(ssdb__print_var_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_var_5_0_i10);
MR_def_label(ssdb__print_var_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_var_5_0_i12);
MR_def_label(ssdb__print_var_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	T;
#define	MR_PROC_LABEL	mercury__ssdb__print_var_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	T = MR_sv(3);
{
#line 2687 "ssdb.m"

    SUCCESS_INDICATOR = (T != 0);
;}
#line 7968 "ssdb.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(ssdb__print_var_5_0_i14);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_5_0_i17);
MR_def_label(ssdb__print_var_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__print_var_5_0_i18);
MR_def_label(ssdb__print_var_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(3), 0) = MR_r1;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		ssdb__print_var_5_0_i20);
MR_def_label(ssdb__print_var_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_var_5_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7999 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__print_var_5_0
{
#line 280 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 8009 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_var_5_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8022 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ssdb__print_var_5_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mdb__browse__print_browser_term_6_0);
	}
MR_def_label(ssdb__print_var_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(1, MR_sv(1), 0);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mdb__browse__print_browser_term_format_7_0);
	}
MR_def_label(ssdb__print_var_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_5_0_i25);
MR_def_label(ssdb__print_var_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<>", 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__index1_3_0);
MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(ssdb_module70)
	MR_init_entry1(ssdb__print_var_with_name_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_var_with_name_5_0);
	MR_init_label6(ssdb__print_var_with_name_5_0,3,6,5,2,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_var_with_name'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_var_with_name_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__print_var_with_name_5_0_i3);
MR_def_label(ssdb__print_var_with_name_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__print_var_with_name_5_0_i2);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__print_var_with_name_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__index1_3_0,
		ssdb__print_var_with_name_5_0_i6);
MR_def_label(ssdb__print_var_with_name_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__print_var_with_name_5_0_i5);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__print_var_5_0);
	}
MR_def_label(ssdb__print_var_with_name_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: there aren\'t that many variables.\n", 40);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__print_var_with_name_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ssdb__IntroducedFrom__pred__print_var_with_name__2607__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__filter_3_0,
		ssdb__print_var_with_name_5_0_i12);
MR_def_label(ssdb__print_var_with_name_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__print_var_with_name_5_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("ssdb: there is no such variable.\n", 33);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__print_var_with_name_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ssdb__print_var_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(ssdb_module71)
	MR_init_entry1(ssdb__execute_ssdb_print_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_print_4_0);
	MR_init_label10(ssdb__execute_ssdb_print_4_0,2,5,6,7,4,9,12,10,20,15)
	MR_init_label1(ssdb__execute_ssdb_print_4_0,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_print'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_print_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ssdb__process_options__ho3_5_0,
		ssdb__execute_ssdb_print_4_0_i2);
MR_def_label(ssdb__execute_ssdb_print_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_print_4_0_i4);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("ssdb: ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_print_4_0_i5);
MR_def_label(ssdb__execute_ssdb_print_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		ssdb__execute_ssdb_print_4_0_i6);
MR_def_label(ssdb__execute_ssdb_print_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_print_4_0_i7);
MR_def_label(ssdb__execute_ssdb_print_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(ssdb__execute_ssdb_print_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_print_4_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 8239 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_print_4_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 8251 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_print_4_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 8264 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__index0_det_3_0,
		ssdb__execute_ssdb_print_4_0_i9);
MR_def_label(ssdb__execute_ssdb_print_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_print_4_0_i10);
	}
	MR_sv(2) = MR_tfield(0, MR_tfield(0, MR_r1, 3), 1);
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__make_arg_univs_3_0,
		ssdb__execute_ssdb_print_4_0_i12);
MR_def_label(ssdb__execute_ssdb_print_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__print_browser_term_5_0);
	}
MR_def_label(ssdb__execute_ssdb_print_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_print_4_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_print_4_0_i15);
	}
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_print_4_0_i15);
	}
	MR_r3 = MR_tfield(0, MR_r1, 6);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_print_4_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("ssdb: there are no live variables.\n", 35);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ssdb__execute_ssdb_print_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__print_vars_5_0);
MR_def_label(ssdb__execute_ssdb_print_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_print_4_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_r5 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_print_4_0_i23);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 6);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__print_var_with_name_5_0);
	}
MR_def_label(ssdb__execute_ssdb_print_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__print_help_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module72)
	MR_init_entry1(ssdb__unsafe_set_browser_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_browser_state_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_browser_state'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_browser_state_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_browser_state_1_0
	X = MR_r1;
{
#line 280 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 8386 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__stdin_stream_3_0);
MR_decl_entry(mdb__browse__browse_browser_term_no_modes_8_0);

MR_BEGIN_MODULE(ssdb_module73)
	MR_init_entry1(ssdb__browse_term_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__browse_term_3_0);
	MR_init_label3(ssdb__browse_term_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browse_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__browse_term_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__stdin_stream_3_0,
		ssdb__browse_term_3_0_i2);
MR_def_label(ssdb__browse_term_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		ssdb__browse_term_3_0_i3);
MR_def_label(ssdb__browse_term_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__browse_term_3_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8434 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__browse_term_3_0
{
#line 280 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 8444 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__browse_term_3_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8457 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__browse_browser_term_no_modes_8_0,
		ssdb__browse_term_3_0_i4);
MR_def_label(ssdb__browse_term_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__browse_term_3_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8480 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__browse_term_3_0
	X = MR_r2;
{
#line 280 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 8491 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__browse_term_3_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8503 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

MR_BEGIN_MODULE(ssdb_module74)
	MR_init_entry1(ssdb__list_var_value_to_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__list_var_value_to_assoc_list_2_0);
	MR_init_label10(ssdb__list_var_value_to_assoc_list_2_0,32,3,11,12,13,15,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_var_value_to_assoc_list'/2 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i5);
	}
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i15);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__list_var_value_to_assoc_list_2_0_i11);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
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
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i32);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__list_var_value_to_assoc_list_2_0_i6);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__search_3_0);

MR_BEGIN_MODULE(ssdb_module75)
	MR_init_entry1(ssdb__browse_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__browse_var_4_0);
	MR_init_label10(ssdb__browse_var_4_0,3,6,21,9,10,12,13,14,5,2)
	MR_init_label3(ssdb__browse_var_4_0,28,29,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browse_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__browse_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__browse_var_4_0_i3);
MR_def_label(ssdb__browse_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__browse_var_4_0_i2);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__browse_var_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__index1_3_0,
		ssdb__browse_var_4_0_i6);
MR_def_label(ssdb__browse_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__browse_var_4_0_i5);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__browse_var_4_0_i9);
	}
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__browse_var_4_0_i21);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__browse_var_4_0_i10);
MR_def_label(ssdb__browse_var_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: the variable is unbound.\n", 31);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__browse_var_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 3);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__browse_var_4_0_i10);
MR_def_label(ssdb__browse_var_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = MR_r1;
	MR_np_call_localret_ent(io__stdin_stream_3_0,
		ssdb__browse_var_4_0_i12);
MR_def_label(ssdb__browse_var_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		ssdb__browse_var_4_0_i13);
MR_def_label(ssdb__browse_var_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__browse_var_4_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8727 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__browse_var_4_0
{
#line 280 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 8737 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__browse_var_4_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8750 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__browse_browser_term_no_modes_8_0,
		ssdb__browse_var_4_0_i14);
MR_def_label(ssdb__browse_var_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__browse_var_4_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8773 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__browse_var_4_0
	X = MR_r2;
{
#line 280 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 8784 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__browse_var_4_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8796 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__browse_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: there aren\'t that many variables.\n", 40);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__browse_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__list_var_value_to_assoc_list_2_0,
		ssdb__browse_var_4_0_i28);
MR_def_label(ssdb__browse_var_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(assoc_list__search_3_0,
		ssdb__browse_var_4_0_i29);
MR_def_label(ssdb__browse_var_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__browse_var_4_0_i27);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__browse_term_3_0);
MR_def_label(ssdb__browse_var_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: there is no such variable.\n", 33);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module76)
	MR_init_entry1(ssdb__execute_ssdb_browse_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_browse_4_0);
	MR_init_label7(ssdb__execute_ssdb_browse_4_0,2,5,7,8,9,4,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_browse'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_browse_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 8871 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 8883 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 8896 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__index0_det_3_0,
		ssdb__execute_ssdb_browse_4_0_i2);
MR_def_label(ssdb__execute_ssdb_browse_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_browse_4_0_i4);
	}
	MR_sv(1) = MR_tfield(0, MR_tfield(0, MR_r1, 3), 1);
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__make_arg_univs_3_0,
		ssdb__execute_ssdb_browse_4_0_i5);
MR_def_label(ssdb__execute_ssdb_browse_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__stdin_stream_3_0,
		ssdb__execute_ssdb_browse_4_0_i7);
MR_def_label(ssdb__execute_ssdb_browse_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		ssdb__execute_ssdb_browse_4_0_i8);
MR_def_label(ssdb__execute_ssdb_browse_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8942 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 280 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 8952 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8965 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__browse_browser_term_no_modes_8_0,
		ssdb__execute_ssdb_browse_4_0_i9);
MR_def_label(ssdb__execute_ssdb_browse_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8988 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
	X = MR_r2;
{
#line 280 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 8999 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 9011 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__execute_ssdb_browse_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_browse_4_0_i11);
	}
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__browse_var_4_0);
	}
MR_def_label(ssdb__execute_ssdb_browse_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__print_help_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module77)
	MR_init_entry1(ssdb__print_vars_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_vars_list_4_0);
	MR_init_label10(ssdb__print_vars_list_4_0,43,6,10,8,13,15,16,17,14,19)
	MR_init_label1(ssdb__print_vars_list_4_0,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_vars_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_vars_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ssdb__print_vars_list_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__print_vars_list_4_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("\t%2d ", 5);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__print_vars_list_4_0_i6);
MR_def_label(ssdb__print_vars_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(ssdb__print_vars_list_4_0_i8);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(ssdb__print_vars_list_4_0_i10);
	}
	MR_r1 = MR_tfield(2, MR_sv(2), 1);
	MR_sv(2) = (MR_Integer) -1;
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_vars_list_4_0_i13);
MR_def_label(ssdb__print_vars_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_sv(2) = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_vars_list_4_0_i13);
MR_def_label(ssdb__print_vars_list_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(2), 1);
	MR_sv(2) = MR_tfield(1, MR_sv(2), 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_vars_list_4_0_i13);
MR_def_label(ssdb__print_vars_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(2),0)) {
		MR_GOTO_LAB(ssdb__print_vars_list_4_0_i14);
	}
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ssdb__print_vars_list_4_0_i15);
MR_def_label(ssdb__print_vars_list_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_vars_list_4_0_i16);
MR_def_label(ssdb__print_vars_list_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (arg ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_vars_list_4_0_i17);
MR_def_label(ssdb__print_vars_list_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_vars_list_4_0_i19);
MR_def_label(ssdb__print_vars_list_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ssdb__print_vars_list_4_0_i19);
MR_def_label(ssdb__print_vars_list_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ssdb__print_vars_list_4_0_i43);
MR_def_label(ssdb__print_vars_list_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module78)
	MR_init_entry1(ssdb__execute_ssdb_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_vars_4_0);
	MR_init_label2(ssdb__execute_ssdb_vars_4_0,4,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_vars_4_0_i15);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_vars_4_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 9178 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_vars_4_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 9190 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_vars_4_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 9203 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__index0_det_3_0,
		ssdb__execute_ssdb_vars_4_0_i4);
MR_def_label(ssdb__execute_ssdb_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(ssdb__print_vars_list_4_0);
MR_def_label(ssdb__execute_ssdb_vars_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ssdb__print_help_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module79)
	MR_init_entry1(ssdb__print_depth_change_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_depth_change_3_0);
	MR_init_label5(ssdb__print_depth_change_3_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_depth_change'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_depth_change_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ssdb__print_depth_change_3_0_i2);
MR_def_label(ssdb__print_depth_change_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_depth_change_3_0_i3);
MR_def_label(ssdb__print_depth_change_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Ancestor level set to ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_depth_change_3_0_i4);
MR_def_label(ssdb__print_depth_change_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_depth_change_3_0_i5);
MR_def_label(ssdb__print_depth_change_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_depth_change_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 9279 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__print_depth_change_3_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 9289 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_depth_change_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 9302 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__index0_det_3_0,
		ssdb__print_depth_change_3_0_i6);
MR_def_label(ssdb__print_depth_change_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_depth_change_3_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9320 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__print_depth_change_3_0
{
#line 270 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 9332 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_depth_change_3_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9345 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tfield(0, MR_r1, 2));
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr3 = MR_tfield(0, MR_r1, 3);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_tfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_tfield(0, MR_r1, 4);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_tfield(0, MR_r1, 5);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_string_const("%4d  %s.%s (%s:%d)\n", 19);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__format_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module80)
	MR_init_entry1(ssdb__execute_ssdb_down_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_down_5_0);
	MR_init_label4(ssdb__execute_ssdb_down_5_0,4,3,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_down'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_down_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_down_5_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_down_5_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ssdb__print_depth_change_3_0,
		ssdb__execute_ssdb_down_5_0_i10);
MR_def_label(ssdb__execute_ssdb_down_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("Already at bottom stack frame.\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_down_5_0_i10);
MR_def_label(ssdb__execute_ssdb_down_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_np_call_localret_ent(io__write_list_5_0,
		ssdb__execute_ssdb_down_5_0_i9);
MR_def_label(ssdb__execute_ssdb_down_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_down_5_0_i10);
MR_def_label(ssdb__execute_ssdb_down_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module81)
	MR_init_entry1(ssdb__execute_ssdb_up_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_up_5_0);
	MR_init_label3(ssdb__execute_ssdb_up_5_0,4,3,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_up'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_up_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_up_5_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_up_5_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9471 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_up_5_0
{
#line 270 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 9481 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_up_5_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9494 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_up_5_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ssdb__print_depth_change_3_0,
		ssdb__execute_ssdb_up_5_0_i8);
MR_def_label(ssdb__execute_ssdb_up_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("Already at top stack frame.\n", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_5_0_i8);
MR_def_label(ssdb__execute_ssdb_up_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_up_5_0_i8);
MR_def_label(ssdb__execute_ssdb_up_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module82)
	MR_init_entry1(ssdb__execute_ssdb_level_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_level_5_0);
	MR_init_label5(ssdb__execute_ssdb_level_5_0,6,8,2,3,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_level'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_level_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_level_5_0_i3);
	}
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_level_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_level_5_0_i6);
MR_def_label(ssdb__execute_ssdb_level_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_level_5_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_level_5_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9567 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_level_5_0
{
#line 270 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 9577 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_level_5_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9590 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_level_5_0_i8);
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_level_5_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__print_depth_change_3_0,
		ssdb__execute_ssdb_level_5_0_i12);
MR_def_label(ssdb__execute_ssdb_level_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: invalid level\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_level_5_0_i12);
MR_def_label(ssdb__execute_ssdb_level_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(ssdb__execute_ssdb_level_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("ssdb: \140level\' requires integer argument\n", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_level_5_0_i12);
MR_def_label(ssdb__execute_ssdb_level_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module83)
	MR_init_entry1(ssdb__print_event_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_event_info_4_0);
	MR_init_label10(ssdb__print_event_info_4_0,2,3,4,5,6,7,8,9,11,13)
	MR_init_label10(ssdb__print_event_info_4_0,15,17,19,20,21,22,23,24,25,26)
	MR_init_label3(ssdb__print_event_info_4_0,27,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_event_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_event_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ssdb__stack_top_3_0,
		ssdb__print_event_info_4_0_i2);
MR_def_label(ssdb__print_event_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(5) = MR_tfield(0, MR_r1, 2);
	MR_sv(6) = MR_tfield(0, MR_r1, 4);
	MR_sv(7) = MR_tfield(0, MR_r1, 5);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i3);
MR_def_label(ssdb__print_event_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_event_info_4_0_i4);
MR_def_label(ssdb__print_event_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i5);
MR_def_label(ssdb__print_event_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_event_info_4_0_i6);
MR_def_label(ssdb__print_event_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("  ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i7);
MR_def_label(ssdb__print_event_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ssdb__print_event_info_4_0_i8);
MR_def_label(ssdb__print_event_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i9);
MR_def_label(ssdb__print_event_info_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(ssdb__print_event_info_4_0_i11) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_4_0_i15) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_4_0_i17) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_4_0_i11) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_4_0_i15) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_4_0_i19) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_4_0_i17) MR_AND
		MR_LABEL_AP(ssdb__print_event_info_4_0_i13));
MR_def_label(ssdb__print_event_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("CALL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i20);
MR_def_label(ssdb__print_event_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("EXCP", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i20);
MR_def_label(ssdb__print_event_info_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("EXIT", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i20);
MR_def_label(ssdb__print_event_info_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("FAIL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i20);
MR_def_label(ssdb__print_event_info_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("REDO", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i20);
MR_def_label(ssdb__print_event_info_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i21);
MR_def_label(ssdb__print_event_info_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i22);
MR_def_label(ssdb__print_event_info_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i23);
MR_def_label(ssdb__print_event_info_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i24);
MR_def_label(ssdb__print_event_info_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ssdb__print_event_info_4_0_i25);
MR_def_label(ssdb__print_event_info_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_event_info_4_0_i26);
MR_def_label(ssdb__print_event_info_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_event_info_4_0_i27);
MR_def_label(ssdb__print_event_info_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_event_info_4_0_i28);
MR_def_label(ssdb__print_event_info_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_event_info_4_0_i29);
MR_def_label(ssdb__print_event_info_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module84)
	MR_init_entry1(ssdb__execute_ssdb_current_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_current_4_0);
	MR_init_label2(ssdb__execute_ssdb_current_4_0,16,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_current'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_current_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_current_4_0_i16);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_current_4_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 9824 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_current_4_0
{
#line 253 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 9836 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_current_4_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 9849 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(ssdb__print_event_info_4_0);
	}
MR_def_label(ssdb__execute_ssdb_current_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_np_call_localret_ent(io__write_list_5_0,
		ssdb__execute_ssdb_current_4_0_i6);
MR_def_label(ssdb__execute_ssdb_current_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n", 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__browser_info__set_browser_param_11_0);

MR_BEGIN_MODULE(ssdb_module85)
	MR_init_entry1(ssdb__execute_ssdb_format_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_format_3_0);
	MR_init_label10(ssdb__execute_ssdb_format_3_0,2,5,6,7,4,13,14,15,12,18)
	MR_init_label1(ssdb__execute_ssdb_format_3_0,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_format'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_format_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_np_call_localret_ent(ssdb__process_options__ho2_5_0,
		ssdb__execute_ssdb_format_3_0_i2);
MR_def_label(ssdb__execute_ssdb_format_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_3_0_i4);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("ssdb: ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_format_3_0_i5);
MR_def_label(ssdb__execute_ssdb_format_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		ssdb__execute_ssdb_format_3_0_i6);
MR_def_label(ssdb__execute_ssdb_format_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_format_3_0_i7);
MR_def_label(ssdb__execute_ssdb_format_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(ssdb__execute_ssdb_format_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_3_0_i9);
	}
	MR_r11 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_3_0_i9);
	}
	MR_r11 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r11, MR_string_const("flat", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_3_0_i13);
	}
	MR_r9 = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r10 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	MR_r5 = MR_tfield(0, MR_tempr1, 3);
	MR_r6 = MR_tfield(0, MR_tempr1, 4);
	MR_r7 = MR_tfield(0, MR_tempr1, 5);
	MR_r8 = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(ssdb__execute_ssdb_format_3_0_i12);
	}
MR_def_label(ssdb__execute_ssdb_format_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r11, MR_string_const("pretty", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_3_0_i14);
	}
	MR_r9 = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r10 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	MR_r5 = MR_tfield(0, MR_tempr1, 3);
	MR_r6 = MR_tfield(0, MR_tempr1, 4);
	MR_r7 = MR_tfield(0, MR_tempr1, 5);
	MR_r8 = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = (MR_Integer) 3;
	MR_GOTO_LAB(ssdb__execute_ssdb_format_3_0_i12);
	}
MR_def_label(ssdb__execute_ssdb_format_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r11, MR_string_const("verbose", 7)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_3_0_i15);
	}
	MR_r9 = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r10 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	MR_r5 = MR_tfield(0, MR_tempr1, 3);
	MR_r6 = MR_tfield(0, MR_tempr1, 4);
	MR_r7 = MR_tfield(0, MR_tempr1, 5);
	MR_r8 = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(ssdb__execute_ssdb_format_3_0_i12);
	}
MR_def_label(ssdb__execute_ssdb_format_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r11, MR_string_const("raw_pretty", 10)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_3_0_i9);
	}
	MR_r9 = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r10 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	MR_r5 = MR_tfield(0, MR_tempr1, 3);
	MR_r6 = MR_tfield(0, MR_tempr1, 4);
	MR_r7 = MR_tfield(0, MR_tempr1, 5);
	MR_r8 = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = (MR_Integer) 1;
	}
MR_def_label(ssdb__execute_ssdb_format_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_3_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 10021 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_3_0
{
#line 280 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 10031 "ssdb.c"
	MR_r10 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_3_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 10044 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r9 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(mdb__browser_info__set_browser_param_11_0,
		ssdb__execute_ssdb_format_3_0_i18);
MR_def_label(ssdb__execute_ssdb_format_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_3_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 10068 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_3_0
	X = MR_r1;
{
#line 280 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 10079 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_3_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 10091 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__execute_ssdb_format_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ssdb__print_help_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module86)
	MR_init_entry1(ssdb__execute_ssdb_format_param_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_format_param_3_0);
	MR_init_label10(ssdb__execute_ssdb_format_param_3_0,2,5,6,7,4,14,17,19,21,16)
	MR_init_label2(ssdb__execute_ssdb_format_param_3_0,25,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_format_param'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_format_param_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_np_call_localret_ent(ssdb__process_options__ho1_5_0,
		ssdb__execute_ssdb_format_param_3_0_i2);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i4);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("ssdb: ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_format_param_3_0_i5);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		ssdb__execute_ssdb_format_param_3_0_i6);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_format_param_3_0_i7);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i10);
	}
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i10);
	}
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_format_param_3_0_i14);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i10);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("size", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i17);
	}
	MR_tag_alloc_heap(MR_r9, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r9, 0) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i16);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("depth", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i19);
	}
	MR_tag_alloc_heap(MR_r9, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r9, 0) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i16);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("lines", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r9 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i16);
	}
MR_def_label(ssdb__execute_ssdb_format_param_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("width", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i10);
	}
	MR_tag_alloc_heap(MR_r9, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r9, 0) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_param_3_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 10257 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_param_3_0
{
#line 280 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 10267 "ssdb.c"
	MR_r10 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_param_3_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 10280 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(mdb__browser_info__set_browser_param_11_0,
		ssdb__execute_ssdb_format_param_3_0_i25);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_param_3_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 10297 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_param_3_0
	X = MR_r1;
{
#line 280 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 10308 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_param_3_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 10320 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(9);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ssdb__print_help_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module87)
	MR_init_entry1(ssdb__lock_list_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_list_params_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_list_params'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_list_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_list_params_0_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
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


MR_BEGIN_MODULE(ssdb_module88)
	MR_init_entry1(ssdb__unlock_list_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_list_params_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_list_params'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_list_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_list_params_0_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10391 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module89)
	MR_init_entry1(ssdb__unsafe_get_list_params_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_list_params_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_list_params'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_list_params_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_list_params_1_0
{
#line 289 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 10422 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__max_2_0);
MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(mdb__listing__list_file_portable_9_0);

MR_BEGIN_MODULE(ssdb_module90)
	MR_init_entry1(ssdb__execute_ssdb_list_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_list_2_4_0);
	MR_init_label5(ssdb__execute_ssdb_list_2_4_0,2,3,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_list_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_list_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_2_4_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 10462 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_2_4_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 10474 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_2_4_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 10487 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__index0_det_3_0,
		ssdb__execute_ssdb_list_2_4_0_i2);
MR_def_label(ssdb__execute_ssdb_list_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 5);
	MR_sv(2) = MR_tfield(0, MR_r1, 4);
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_2_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("ssdb: sorry, call site is unknown.\n", 35);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_list_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_sv(1));
	MR_np_call_localret_ent(fn__int__max_2_0,
		ssdb__execute_ssdb_list_2_4_0_i6);
MR_def_label(ssdb__execute_ssdb_list_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r2);
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		ssdb__execute_ssdb_list_2_4_0_i7);
MR_def_label(ssdb__execute_ssdb_list_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		ssdb__execute_ssdb_list_2_4_0_i8);
MR_def_label(ssdb__execute_ssdb_list_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_2_4_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10538 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_2_4_0
{
#line 289 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 10550 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_2_4_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10563 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mdb__listing__list_file_portable_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module91)
	MR_init_entry1(ssdb__execute_ssdb_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_list_4_0);
	MR_init_label9(ssdb__execute_ssdb_list_4_0,4,5,8,9,10,3,16,15,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_4_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10613 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 289 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 10625 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10638 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 10650 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 10660 "ssdb.c"
	MR_tempr2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 10673 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__index0_det_3_0,
		ssdb__execute_ssdb_list_4_0_i4);
MR_def_label(ssdb__execute_ssdb_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 5);
	MR_sv(2) = MR_tfield(0, MR_r1, 4);
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("ssdb: sorry, call site is unknown.\n", 35);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_sv(1));
	MR_np_call_localret_ent(fn__int__max_2_0,
		ssdb__execute_ssdb_list_4_0_i8);
MR_def_label(ssdb__execute_ssdb_list_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r2);
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		ssdb__execute_ssdb_list_4_0_i9);
MR_def_label(ssdb__execute_ssdb_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		ssdb__execute_ssdb_list_4_0_i10);
MR_def_label(ssdb__execute_ssdb_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10724 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 289 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 10736 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10749 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mdb__listing__list_file_portable_9_0);
	}
MR_def_label(ssdb__execute_ssdb_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_4_0_i14);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_list_4_0_i16);
MR_def_label(ssdb__execute_ssdb_list_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_4_0_i15);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_4_0_i15);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__execute_ssdb_list_2_4_0);
MR_def_label(ssdb__execute_ssdb_list_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: invalid argument.\n", 24);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_list_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments.\n", 26);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module92)
	MR_init_entry1(ssdb__unsafe_set_list_params_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_list_params_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_list_params'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_list_params_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_list_params_1_0
	X = MR_r1;
{
#line 289 "ssdb.m"
ssdb__mutable_variable_list_params = X;
;}
#line 10827 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__listing__get_list_path_1_0);
MR_decl_entry(mdb__listing__set_list_path_3_0);

MR_BEGIN_MODULE(ssdb_module93)
	MR_init_entry1(ssdb__execute_ssdb_list_path_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_list_path_3_0);
	MR_init_label6(ssdb__execute_ssdb_list_path_3_0,4,6,8,10,3,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_list_path'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_list_path_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_path_3_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10868 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 289 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 10880 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10893 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__mdb__listing__get_list_path_1_0,
		ssdb__execute_ssdb_list_path_3_0_i4);
MR_def_label(ssdb__execute_ssdb_list_path_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_path_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("Context search path is empty\n", 29);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_list_path_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Context search path: ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_list_path_3_0_i8);
MR_def_label(ssdb__execute_ssdb_list_path_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_np_call_localret_ent(io__write_list_5_0,
		ssdb__execute_ssdb_list_path_3_0_i10);
MR_def_label(ssdb__execute_ssdb_list_path_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(ssdb__execute_ssdb_list_path_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10939 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 289 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 10951 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10964 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__listing__set_list_path_3_0,
		ssdb__execute_ssdb_list_path_3_0_i12);
MR_def_label(ssdb__execute_ssdb_list_path_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_sv(1), 1);
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10986 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
	X = MR_r2;
{
#line 289 "ssdb.m"
ssdb__mutable_variable_list_params = X;
;}
#line 10997 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11009 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdb__listing__type_ctor_info_search_path_0;
MR_decl_entry(list__foldr_4_0);

MR_BEGIN_MODULE(ssdb_module94)
	MR_init_entry1(ssdb__execute_ssdb_push_list_dir_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_push_list_dir_3_0);
	MR_init_label2(ssdb__execute_ssdb_push_list_dir_3_0,16,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_push_list_dir'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_push_list_dir_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_push_list_dir_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("ssdb: command expects arguments.\n", 33);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_push_list_dir_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_push_list_dir_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11054 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_push_list_dir_3_0
{
#line 289 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11066 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_push_list_dir_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11079 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__listing, search_path);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__foldr_4_0,
		ssdb__execute_ssdb_push_list_dir_3_0_i6);
MR_def_label(ssdb__execute_ssdb_push_list_dir_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(1), 1);
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_push_list_dir_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11108 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_push_list_dir_3_0
	X = MR_tempr1;
{
#line 289 "ssdb.m"
ssdb__mutable_variable_list_params = X;
;}
#line 11119 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_push_list_dir_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11131 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__listing__pop_list_path_2_0);

MR_BEGIN_MODULE(ssdb_module95)
	MR_init_entry1(ssdb__execute_ssdb_pop_list_dir_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_pop_list_dir_3_0);
	MR_init_label2(ssdb__execute_ssdb_pop_list_dir_3_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_pop_list_dir'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_pop_list_dir_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_pop_list_dir_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_pop_list_dir_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11172 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_pop_list_dir_3_0
{
#line 289 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11184 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_pop_list_dir_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11197 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__listing__pop_list_path_2_0,
		ssdb__execute_ssdb_pop_list_dir_3_0_i4);
MR_def_label(ssdb__execute_ssdb_pop_list_dir_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_sv(1), 1);
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_pop_list_dir_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11219 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_pop_list_dir_3_0
	X = MR_r2;
{
#line 289 "ssdb.m"
ssdb__mutable_variable_list_params = X;
;}
#line 11230 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_pop_list_dir_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11242 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__execute_ssdb_pop_list_dir_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: unexpected argument.\n", 27);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module96)
	MR_init_entry1(ssdb__execute_ssdb_list_context_lines_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_list_context_lines_3_0);
	MR_init_label7(ssdb__execute_ssdb_list_context_lines_3_0,4,5,35,3,11,10,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_list_context_lines'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_list_context_lines_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_context_lines_3_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11285 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 289 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11297 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11310 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ssdb__execute_ssdb_list_context_lines_3_0_i4);
MR_def_label(ssdb__execute_ssdb_list_context_lines_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" lines around each context listing.\n", 36);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_list_context_lines_3_0_i5);
MR_def_label(ssdb__execute_ssdb_list_context_lines_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Printing ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_list_context_lines_3_0_i35);
MR_def_label(ssdb__execute_ssdb_list_context_lines_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_list_context_lines_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_context_lines_3_0_i9);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_list_context_lines_3_0_i11);
MR_def_label(ssdb__execute_ssdb_list_context_lines_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_context_lines_3_0_i10);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_context_lines_3_0_i10);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11365 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 289 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11377 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11390 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11405 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
	X = MR_tempr2;
{
#line 289 "ssdb.m"
ssdb__mutable_variable_list_params = X;
;}
#line 11416 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11428 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
	}
MR_def_label(ssdb__execute_ssdb_list_context_lines_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: invalid argument.\n", 24);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_list_context_lines_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments.\n", 26);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module97)
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_breakpoints_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_cur_ssdb_breakpoints_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_cur_ssdb_breakpoints'/1 mode 0 */
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
#line 262 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints = X;
;}
#line 11471 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module98)
	MR_init_entry1(ssdb__lock_cur_ssdb_number_of_breakpoint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_cur_ssdb_number_of_breakpoint_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_cur_ssdb_number_of_breakpoint'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_cur_ssdb_number_of_breakpoint_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_cur_ssdb_number_of_breakpoint_0_0
{
#line 265 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 11504 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module99)
	MR_init_entry1(ssdb__unlock_cur_ssdb_number_of_breakpoint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_cur_ssdb_number_of_breakpoint_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_cur_ssdb_number_of_breakpoint'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_cur_ssdb_number_of_breakpoint_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_cur_ssdb_number_of_breakpoint_0_0
{
#line 265 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 11537 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module100)
	MR_init_entry1(ssdb__unsafe_get_cur_ssdb_number_of_breakpoint_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_cur_ssdb_number_of_breakpoint_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_cur_ssdb_number_of_breakpoint'/1 mode 0 */
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
#line 265 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;
;}
#line 11568 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module101)
	MR_init_entry1(ssdb__unsafe_set_cur_ssdb_number_of_breakpoint_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_cur_ssdb_number_of_breakpoint_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_cur_ssdb_number_of_breakpoint'/1 mode 0 */
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
#line 265 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_number_of_breakpoint = X;
;}
#line 11601 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module102)
	MR_init_entry1(ssdb__print_breakpoint_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_breakpoint_3_0);
	MR_init_label1(ssdb__print_breakpoint_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_breakpoint'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_breakpoint_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ssdb__print_breakpoint_3_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tfield(0, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_tfield(0, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(2,8,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%2d: %s %s.%s\n", 14);
	MR_np_tailcall_ent(io__format_4_0);
	}
MR_def_label(ssdb__print_breakpoint_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tfield(0, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_tfield(0, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(2,8,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%2d: %s %s.%s\n", 14);
	MR_np_tailcall_ent(io__format_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__values_1_0);
MR_decl_entry(list__sort_2_0);
MR_decl_entry(map__contains_2_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(ssdb_module103)
	MR_init_entry1(ssdb__execute_ssdb_break_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_break_3_0);
	MR_init_label10(ssdb__execute_ssdb_break_3_0,70,3,11,9,15,16,6,24,27,25)
	MR_init_label1(ssdb__execute_ssdb_break_3_0,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_break'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_break_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_3_0_i3);
	}
MR_def_label(ssdb__execute_ssdb_break_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ssdb__print_help_2_0);
MR_def_label(ssdb__execute_ssdb_break_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_3_0_i6);
	}
	MR_r4 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("info", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_3_0_i70);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 11733 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 262 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;
;}
#line 11743 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 11756 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(map__is_empty_1_0,
		ssdb__execute_ssdb_break_3_0_i11);
MR_def_label(ssdb__execute_ssdb_break_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("There are no break points.\n", 27);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_break_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__execute_ssdb_break_3_0_i15);
MR_def_label(ssdb__execute_ssdb_break_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ssdb__execute_ssdb_break_3_0_i16);
MR_def_label(ssdb__execute_ssdb_break_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(ssdb__execute_ssdb_break_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_3_0_i70);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 11825 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 262 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;
;}
#line 11837 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 11850 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r4, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		ssdb__execute_ssdb_break_3_0_i24);
MR_def_label(ssdb__execute_ssdb_break_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__contains_2_0,
		ssdb__execute_ssdb_break_3_0_i27);
MR_def_label(ssdb__execute_ssdb_break_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_3_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("The breakpoint already exists.\n", 31);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_break_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 265 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 11893 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 265 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;
;}
#line 11905 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 265 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 11918 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr5 = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_tempr5;
	MR_tfield(0, MR_r1, 2) = MR_tempr5;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ssdb__execute_ssdb_break_3_0_i32);
MR_def_label(ssdb__execute_ssdb_break_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 11953 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
	X = MR_r1;
{
#line 262 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints = X;
;}
#line 11964 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 11976 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 265 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 11988 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
	X = MR_tempr1;
{
#line 265 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_number_of_breakpoint = X;
;}
#line 12002 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 265 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 12014 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__print_breakpoint_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__map_values_only_2_0);

MR_BEGIN_MODULE(ssdb_module104)
	MR_init_entry1(ssdb__modify_breakpoint_states_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__modify_breakpoint_states_3_0);
	MR_init_label5(ssdb__modify_breakpoint_states_3_0,4,6,5,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modify_breakpoint_states'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__modify_breakpoint_states_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_states_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12055 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_states_3_0
{
#line 262 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;
;}
#line 12065 "ssdb.c"
	MR_r5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_states_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12078 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ssdb__IntroducedFrom__func__modify_breakpoint_states__2385__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__map__map_values_only_2_0,
		ssdb__modify_breakpoint_states_3_0_i4);
MR_def_label(ssdb__modify_breakpoint_states_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_states_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12107 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_states_3_0
	X = MR_r1;
{
#line 262 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints = X;
;}
#line 12118 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_states_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12130 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__is_empty_1_0,
		ssdb__modify_breakpoint_states_3_0_i6);
MR_def_label(ssdb__modify_breakpoint_states_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__modify_breakpoint_states_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("There are no break points.\n", 27);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__modify_breakpoint_states_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__modify_breakpoint_states_3_0_i9);
MR_def_label(ssdb__modify_breakpoint_states_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ssdb__modify_breakpoint_states_3_0_i10);
MR_def_label(ssdb__modify_breakpoint_states_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__member_3_0);
MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(ssdb_module105)
	MR_init_entry1(ssdb__modify_breakpoint_state_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__modify_breakpoint_state_4_0);
	MR_init_label7(ssdb__modify_breakpoint_state_4_0,7,4,8,11,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modify_breakpoint_state'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__modify_breakpoint_state_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12217 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
{
#line 262 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;
;}
#line 12229 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12242 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ssdb__modify_breakpoint_state_4_0_i4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__member_3_0,
		ssdb__modify_breakpoint_state_4_0_i7);
MR_def_label(ssdb__modify_breakpoint_state_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(0, MR_r2, 0);
	if ((MR_sv(1) != MR_r6)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_GOTO_LAB(ssdb__modify_breakpoint_state_4_0_i8);
MR_def_label(ssdb__modify_breakpoint_state_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ssdb__modify_breakpoint_state_4_0_i13);
MR_def_label(ssdb__modify_breakpoint_state_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ssdb__modify_breakpoint_state_4_0_i11);
MR_def_label(ssdb__modify_breakpoint_state_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12306 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
	X = MR_r1;
{
#line 262 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints = X;
;}
#line 12317 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12329 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ssdb__print_breakpoint_3_0);
MR_def_label(ssdb__modify_breakpoint_state_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" does not exist.\n", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__modify_breakpoint_state_4_0_i14);
MR_def_label(ssdb__modify_breakpoint_state_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ssdb: break point #", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__modify_breakpoint_state_4_0_i15);
MR_def_label(ssdb__modify_breakpoint_state_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module106)
	MR_init_entry1(ssdb__execute_ssdb_enable_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_enable_3_0);
	MR_init_label6(ssdb__execute_ssdb_enable_3_0,5,3,49,14,48,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_enable'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_enable_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_3_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_np_call_localret_ent(io__write_list_5_0,
		ssdb__execute_ssdb_enable_3_0_i5);
MR_def_label(ssdb__execute_ssdb_enable_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n", 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_enable_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_3_0_i48);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_3_0_i49);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(ssdb__modify_breakpoint_states_3_0);
MR_def_label(ssdb__execute_ssdb_enable_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_enable_3_0_i14);
MR_def_label(ssdb__execute_ssdb_enable_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_3_0_i46);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(ssdb__modify_breakpoint_state_4_0);
MR_def_label(ssdb__execute_ssdb_enable_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ssdb__print_help_2_0);
MR_def_label(ssdb__execute_ssdb_enable_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(ssdb__print_help_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module107)
	MR_init_entry1(ssdb__execute_ssdb_disable_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_disable_3_0);
	MR_init_label10(ssdb__execute_ssdb_disable_3_0,55,60,3,11,13,12,16,17,7,23)
	MR_init_label1(ssdb__execute_ssdb_disable_3_0,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_disable'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_disable_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ssdb__execute_ssdb_disable_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__print_help_2_0);
MR_def_label(ssdb__execute_ssdb_disable_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ssdb__print_help_2_0);
MR_def_label(ssdb__execute_ssdb_disable_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_3_0_i60);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r6 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_3_0_i7);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12487 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
{
#line 262 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;
;}
#line 12497 "ssdb.c"
	MR_r5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12510 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_np_call_localret_ent(fn__map__map_values_only_2_0,
		ssdb__execute_ssdb_disable_3_0_i11);
MR_def_label(ssdb__execute_ssdb_disable_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12531 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
	X = MR_r1;
{
#line 262 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints = X;
;}
#line 12542 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12554 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__is_empty_1_0,
		ssdb__execute_ssdb_disable_3_0_i13);
MR_def_label(ssdb__execute_ssdb_disable_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("There are no break points.\n", 27);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_disable_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__execute_ssdb_disable_3_0_i16);
MR_def_label(ssdb__execute_ssdb_disable_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ssdb__execute_ssdb_disable_3_0_i17);
MR_def_label(ssdb__execute_ssdb_disable_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(ssdb__execute_ssdb_disable_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_disable_3_0_i23);
MR_def_label(ssdb__execute_ssdb_disable_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_3_0_i22);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__modify_breakpoint_state_4_0);
MR_def_label(ssdb__execute_ssdb_disable_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The number must be an integer\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_disable_3_0_i55);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__delete_3_0);

MR_BEGIN_MODULE(ssdb_module108)
	MR_init_entry1(ssdb__execute_ssdb_delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_delete_3_0);
	MR_init_label10(ssdb__execute_ssdb_delete_3_0,67,3,10,7,14,21,18,22,24,25)
	MR_init_label7(ssdb__execute_ssdb_delete_3_0,26,27,17,30,31,65,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_delete_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_3_0_i3);
	}
MR_def_label(ssdb__execute_ssdb_delete_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ssdb__print_help_2_0);
MR_def_label(ssdb__execute_ssdb_delete_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_3_0_i67);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ssdb__execute_ssdb_delete_3_0_i10);
MR_def_label(ssdb__execute_ssdb_delete_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12684 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
	X = MR_r1;
{
#line 262 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints = X;
;}
#line 12695 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12707 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("All breakpoints have been deleted.\n", 35);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_delete_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_delete_3_0_i14);
MR_def_label(ssdb__execute_ssdb_delete_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_3_0_i13);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12733 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 262 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_breakpoints;
;}
#line 12743 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12756 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ssdb__execute_ssdb_delete_3_0_i18);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(map__member_3_0,
		ssdb__execute_ssdb_delete_3_0_i21);
MR_def_label(ssdb__execute_ssdb_delete_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r2, 0);
	if ((MR_sv(1) != MR_r5)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_GOTO_LAB(ssdb__execute_ssdb_delete_3_0_i22);
MR_def_label(ssdb__execute_ssdb_delete_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_GOTO_LAB(ssdb__execute_ssdb_delete_3_0_i17);
MR_def_label(ssdb__execute_ssdb_delete_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__delete_3_0,
		ssdb__execute_ssdb_delete_3_0_i24);
MR_def_label(ssdb__execute_ssdb_delete_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12806 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
	X = MR_r1;
{
#line 262 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints = X;
;}
#line 12817 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 12829 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_string_const(" deleted.\n", 10);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_delete_3_0_i25);
MR_def_label(ssdb__execute_ssdb_delete_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_delete_3_0_i26);
MR_def_label(ssdb__execute_ssdb_delete_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_delete_3_0_i27);
MR_def_label(ssdb__execute_ssdb_delete_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Breakpoint on ", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_delete_3_0_i65);
MR_def_label(ssdb__execute_ssdb_delete_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ssdb__execute_ssdb_delete_3_0_i30);
MR_def_label(ssdb__execute_ssdb_delete_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" does not exist.\n", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_delete_3_0_i31);
MR_def_label(ssdb__execute_ssdb_delete_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ssdb: break point #", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_delete_3_0_i65);
MR_def_label(ssdb__execute_ssdb_delete_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_delete_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The number must be an integer\n", 30);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module109)
	MR_init_entry1(ssdb__exit_process_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__exit_process_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'exit_process'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__exit_process_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__ssdb__exit_process_2_0
	MR_OBTAIN_GLOBAL_LOCK("exit_process");
{
#line 3027 "ssdb.m"

    exit(0);
    IO = IO0;
;}
#line 12933 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("exit_process");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__flush_output_2_0);
MR_decl_entry(io__read_line_as_string_3_0);
MR_decl_entry(string__prefix_2_0);

MR_BEGIN_MODULE(ssdb_module110)
	MR_init_entry1(ssdb__execute_ssdb_quit_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_quit_3_0);
	MR_init_label10(ssdb__execute_ssdb_quit_3_0,4,5,6,10,15,17,13,3,32,56)
	MR_init_label1(ssdb__execute_ssdb_quit_3_0,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_quit'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_quit_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("ssdb: are you sure you want to quit? ", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_quit_3_0_i4);
MR_def_label(ssdb__execute_ssdb_quit_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		ssdb__execute_ssdb_quit_3_0_i5);
MR_def_label(ssdb__execute_ssdb_quit_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		ssdb__execute_ssdb_quit_3_0_i6);
MR_def_label(ssdb__execute_ssdb_quit_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_3_0_i32);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_3_0_i10);
	}
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_quit_3_0
	MR_OBTAIN_GLOBAL_LOCK("exit_process");
{
#line 3027 "ssdb.m"

    exit(0);
    IO = IO0;
;}
#line 12998 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("exit_process");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__execute_ssdb_quit_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("y", 1);
	}
	MR_np_call_localret_ent(string__prefix_2_0,
		ssdb__execute_ssdb_quit_3_0_i15);
MR_def_label(ssdb__execute_ssdb_quit_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_3_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Y", 1);
	MR_np_call_localret_ent(string__prefix_2_0,
		ssdb__execute_ssdb_quit_3_0_i17);
MR_def_label(ssdb__execute_ssdb_quit_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_3_0_i54);
	}
MR_def_label(ssdb__execute_ssdb_quit_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_quit_3_0
	MR_OBTAIN_GLOBAL_LOCK("exit_process");
{
#line 3027 "ssdb.m"

    exit(0);
    IO = IO0;
;}
#line 13041 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("exit_process");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__execute_ssdb_quit_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("-y", 2)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_3_0_i56);
	}
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_3_0_i56);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ssdb__execute_ssdb_quit_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_quit_3_0
	MR_OBTAIN_GLOBAL_LOCK("exit_process");
{
#line 3027 "ssdb.m"

    exit(0);
    IO = IO0;
;}
#line 13071 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("exit_process");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__execute_ssdb_quit_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ssdb__print_help_2_0);
MR_def_label(ssdb__execute_ssdb_quit_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__chomp_1_0);
MR_decl_entry(fn__string__words_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(io__error_message_2_0);

MR_BEGIN_MODULE(ssdb_module111)
	MR_init_entry1(ssdb__read_and_execute_cmd_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__read_and_execute_cmd_5_0);
	MR_init_label10(ssdb__read_and_execute_cmd_5_0,166,2,3,4,115,14,15,16,18,22)
	MR_init_label10(ssdb__read_and_execute_cmd_5_0,24,26,28,31,32,33,35,37,40,41)
	MR_init_label10(ssdb__read_and_execute_cmd_5_0,42,44,46,47,49,50,54,55,56,58)
	MR_init_label10(ssdb__read_and_execute_cmd_5_0,61,62,64,65,66,68,70,71,73,74)
	MR_init_label10(ssdb__read_and_execute_cmd_5_0,20,78,80,82,84,77,88,76,92,91)
	MR_init_label6(ssdb__read_and_execute_cmd_5_0,95,96,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_and_execute_cmd'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__read_and_execute_cmd_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ssdb__read_and_execute_cmd_5_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("ssdb> ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__read_and_execute_cmd_5_0_i2);
MR_def_label(ssdb__read_and_execute_cmd_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		ssdb__read_and_execute_cmd_5_0_i3);
MR_def_label(ssdb__read_and_execute_cmd_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		ssdb__read_and_execute_cmd_5_0_i4);
MR_def_label(ssdb__read_and_execute_cmd_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i8);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i14);
	}
MR_def_label(ssdb__read_and_execute_cmd_5_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 28;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__chomp_1_0,
		ssdb__read_and_execute_cmd_5_0_i15);
MR_def_label(ssdb__read_and_execute_cmd_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__words_1_0,
		ssdb__read_and_execute_cmd_5_0_i16);
MR_def_label(ssdb__read_and_execute_cmd_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r6 = (MR_hash_string((MR_String) MR_sv(4)) & (MR_Integer) 127);
MR_def_label(ssdb__read_and_execute_cmd_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r6 * (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_10_0)[(MR_Integer) MR_tempr1];
	MR_r8 = MR_tempr2;
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_sv(4)) == 0))) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i24);
	}
	MR_r6 = ((MR_Word *) &mercury_vector_common_10_0)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r6,0))
		continue;
	MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i20);
	}
	break; } /* end while */
MR_def_label(ssdb__read_and_execute_cmd_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r6,
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i47) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i62) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i74) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i66) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i54) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i49) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i61) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i64) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i42) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i54) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i31) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i33) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i35) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i26) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i74) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i49) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i73) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i37) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i65) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i56) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i28) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i70) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i40) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i62) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i44) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i68) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i68) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i32) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i71) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i70) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i73) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i62) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i31) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i50) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i58) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i74) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i50) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i41) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i44) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i37) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i42) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i32) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i35) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i28) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i58) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i66) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i26) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i46) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i41) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i20) MR_AND
		MR_LABEL_AP(ssdb__read_and_execute_cmd_5_0_i55));
MR_def_label(ssdb__read_and_execute_cmd_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 11;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 13;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 8;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 28;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 21;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 20;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 9;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 19;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 22;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 14;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 18;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 17;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 16;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 4;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 24;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 6;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 25;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 26;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 12;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 15;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 23;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 27;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("P", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i78);
	}
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,29);
	MR_r1 = (MR_Integer) 9;
	MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i77);
MR_def_label(ssdb__read_and_execute_cmd_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("size", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i80);
	}
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,30);
	MR_r1 = (MR_Integer) 17;
	MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i77);
MR_def_label(ssdb__read_and_execute_cmd_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("depth", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i82);
	}
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,31);
	MR_r1 = (MR_Integer) 17;
	MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i77);
MR_def_label(ssdb__read_and_execute_cmd_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("lines", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i84);
	}
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,32);
	MR_r1 = (MR_Integer) 17;
	MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i77);
MR_def_label(ssdb__read_and_execute_cmd_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("width", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i76);
	}
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,33);
	MR_r1 = (MR_Integer) 17;
MR_def_label(ssdb__read_and_execute_cmd_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ssdb__read_and_execute_cmd_5_0_i88);
MR_def_label(ssdb__read_and_execute_cmd_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
	}
MR_def_label(ssdb__read_and_execute_cmd_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__read_and_execute_cmd_5_0_i92);
MR_def_label(ssdb__read_and_execute_cmd_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i91);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ssdb__execute_cmd_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(": unknown command (try \"help\")\n", 31);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__read_and_execute_cmd_5_0_i95);
MR_def_label(ssdb__read_and_execute_cmd_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__read_and_execute_cmd_5_0_i96);
MR_def_label(ssdb__read_and_execute_cmd_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i166);
MR_def_label(ssdb__read_and_execute_cmd_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		ssdb__read_and_execute_cmd_5_0_i9);
MR_def_label(ssdb__read_and_execute_cmd_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__read_and_execute_cmd_5_0_i10);
MR_def_label(ssdb__read_and_execute_cmd_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("could not read command: ", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__read_and_execute_cmd_5_0_i11);
MR_def_label(ssdb__read_and_execute_cmd_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__read_and_execute_cmd_5_0_i115);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module112)
	MR_init_entry1(ssdb__execute_cmd_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_cmd_7_0);
	MR_init_label10(ssdb__execute_cmd_7_0,109,96,9,101,112,111,98,110,26,28)
	MR_init_label10(ssdb__execute_cmd_7_0,102,103,36,113,100,104,108,105,53,107)
	MR_init_label10(ssdb__execute_cmd_7_0,95,106,114,67,69,94,74,99,77,97)
	MR_init_label1(ssdb__execute_cmd_7_0,80)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_cmd'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_cmd_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i74) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i53) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i36) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i9) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i28) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i69) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i26) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i67) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i94) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i95) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i96) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i97) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i98) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i99) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i100) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i101) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i102) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i103) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i104) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i105) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i106) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i107) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i108) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i109) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i110) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i111) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i112) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i113) MR_AND
		MR_LABEL_AP(ssdb__execute_cmd_7_0_i114));
MR_def_label(ssdb__execute_cmd_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_break_3_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__execute_ssdb_browse_4_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(ssdb__execute_ssdb_continue_6_0);
MR_def_label(ssdb__execute_cmd_7_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__execute_ssdb_current_4_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_delete_3_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_disable_3_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ssdb__execute_ssdb_down_5_0,
		ssdb__execute_cmd_7_0_i77);
MR_def_label(ssdb__execute_cmd_7_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_enable_3_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(ssdb__execute_ssdb_exception_6_0);
MR_def_label(ssdb__execute_cmd_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(ssdb__execute_ssdb_finish_6_0);
MR_def_label(ssdb__execute_cmd_7_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_format_3_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_format_param_3_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(ssdb__execute_ssdb_goto_6_0);
MR_def_label(ssdb__execute_cmd_7_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_help_3_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ssdb__execute_ssdb_level_5_0,
		ssdb__execute_cmd_7_0_i77);
MR_def_label(ssdb__execute_cmd_7_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__execute_ssdb_list_4_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_list_context_lines_3_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_list_path_3_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(ssdb__execute_ssdb_next_6_0);
MR_def_label(ssdb__execute_cmd_7_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_pop_list_dir_3_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__execute_ssdb_print_4_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_push_list_dir_3_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_quit_3_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(ssdb__execute_ssdb_retry_6_0);
MR_def_label(ssdb__execute_cmd_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(ssdb__execute_ssdb_return_6_0);
MR_def_label(ssdb__execute_cmd_7_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__execute_ssdb_stack_4_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(ssdb__execute_ssdb_step_6_0);
MR_def_label(ssdb__execute_cmd_7_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ssdb__execute_ssdb_up_5_0,
		ssdb__execute_cmd_7_0_i77);
MR_def_label(ssdb__execute_cmd_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
	}
MR_def_label(ssdb__execute_cmd_7_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__execute_ssdb_vars_4_0,
		ssdb__execute_cmd_7_0_i80);
MR_def_label(ssdb__execute_cmd_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module113)
	MR_init_entry1(ssdb__execute_ssdb_step_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_step_6_0);
	MR_init_label5(ssdb__execute_ssdb_step_6_0,30,7,4,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_step'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_step_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_step_6_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ssdb__execute_ssdb_step_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_step_6_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_step_6_0_i7);
MR_def_label(ssdb__execute_ssdb_step_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_step_6_0_i4);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_step_6_0_i4);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_step_6_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 14103 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_step_6_0
{
#line 253 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 14115 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_step_6_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 14128 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_r2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(ssdb__execute_ssdb_step_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(ssdb__execute_ssdb_step_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_step_6_0_i10);
MR_def_label(ssdb__execute_ssdb_step_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module114)
	MR_init_entry1(ssdb__execute_ssdb_next_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_next_6_0);
	MR_init_label7(ssdb__execute_ssdb_next_6_0,6,7,5,4,3,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_next'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_next_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_next_6_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_next_6_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(ssdb__execute_ssdb_next_6_0_i5);
MR_def_label(ssdb__execute_ssdb_next_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_next_6_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(ssdb__execute_ssdb_next_6_0_i5);
MR_def_label(ssdb__execute_ssdb_next_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,5)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_next_6_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
MR_def_label(ssdb__execute_ssdb_next_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__execute_ssdb_next_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("The \140next\' command can be executed only at a call or redo port.\n", 64);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_next_6_0_i14);
MR_def_label(ssdb__execute_ssdb_next_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_np_call_localret_ent(io__write_list_5_0,
		ssdb__execute_ssdb_next_6_0_i13);
MR_def_label(ssdb__execute_ssdb_next_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_next_6_0_i14);
MR_def_label(ssdb__execute_ssdb_next_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module115)
	MR_init_entry1(ssdb__execute_ssdb_goto_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_goto_6_0);
	MR_init_label6(ssdb__execute_ssdb_goto_6_0,3,10,12,8,7,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_goto'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_goto_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_goto_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_goto_6_0_i20);
MR_def_label(ssdb__execute_ssdb_goto_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_goto_6_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_goto_6_0_i10);
MR_def_label(ssdb__execute_ssdb_goto_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_goto_6_0_i8);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_goto_6_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 14288 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_goto_6_0
{
#line 253 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 14298 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_goto_6_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 14311 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_goto_6_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__execute_ssdb_goto_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The debugger cannot go to a past event.\n", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_goto_6_0_i20);
MR_def_label(ssdb__execute_ssdb_goto_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const("The event number to go to must be an integer.\n", 46);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_goto_6_0_i20);
MR_def_label(ssdb__execute_ssdb_goto_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_goto_6_0_i20);
MR_def_label(ssdb__execute_ssdb_goto_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module116)
	MR_init_entry1(ssdb__execute_ssdb_continue_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_continue_6_0);
	MR_init_label3(ssdb__execute_ssdb_continue_6_0,15,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_continue'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_continue_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_continue_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_proceed();
MR_def_label(ssdb__execute_ssdb_continue_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_np_call_localret_ent(io__write_list_5_0,
		ssdb__execute_ssdb_continue_6_0_i5);
MR_def_label(ssdb__execute_ssdb_continue_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_continue_6_0_i6);
MR_def_label(ssdb__execute_ssdb_continue_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module117)
	MR_init_entry1(ssdb__execute_ssdb_finish_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_finish_6_0);
	MR_init_label10(ssdb__execute_ssdb_finish_6_0,6,7,5,10,4,3,20,23,22,18)
	MR_init_label2(ssdb__execute_ssdb_finish_6_0,17,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_finish'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_finish_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i5);
MR_def_label(ssdb__execute_ssdb_finish_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i5);
MR_def_label(ssdb__execute_ssdb_finish_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,5)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
MR_def_label(ssdb__execute_ssdb_finish_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_6_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 14458 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_6_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 14468 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_6_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 14481 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(0, MR_tfield(1, MR_r2, 0), 1);
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__execute_ssdb_finish_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_top on empty stack", 30);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(ssdb__execute_ssdb_finish_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("The \140finish\' command can be executed only at a call or redo port.\n", 66);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_finish_6_0_i33);
MR_def_label(ssdb__execute_ssdb_finish_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i17);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_finish_6_0_i20);
MR_def_label(ssdb__execute_ssdb_finish_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i18);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_6_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 14528 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_6_0
{
#line 270 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 14538 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_6_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 14551 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i22);
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i22);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__stack_index_4_0,
		ssdb__execute_ssdb_finish_6_0_i23);
MR_def_label(ssdb__execute_ssdb_finish_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ssdb__execute_ssdb_finish_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("The depth must be between 0 and %i.\n", 36);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__execute_ssdb_finish_6_0_i33);
MR_def_label(ssdb__execute_ssdb_finish_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const("The depth must be an integer.\n", 30);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_finish_6_0_i33);
MR_def_label(ssdb__execute_ssdb_finish_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_finish_6_0_i33);
MR_def_label(ssdb__execute_ssdb_finish_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module118)
	MR_init_entry1(ssdb__execute_ssdb_return_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_return_6_0);
	MR_init_label4(ssdb__execute_ssdb_return_6_0,27,26,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_return'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_return_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_return_6_0_i26);
	}
	if (!((((MR_Integer) MR_r2 == (MR_Integer) 1) || ((MR_Integer) MR_r2 == (MR_Integer) 4)))) {
		MR_GOTO_LAB(ssdb__execute_ssdb_return_6_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_proceed();
MR_def_label(ssdb__execute_ssdb_return_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("This command is a no-op from this port.\n", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_return_6_0_i10);
MR_def_label(ssdb__execute_ssdb_return_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_np_call_localret_ent(io__write_list_5_0,
		ssdb__execute_ssdb_return_6_0_i9);
MR_def_label(ssdb__execute_ssdb_return_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_return_6_0_i10);
MR_def_label(ssdb__execute_ssdb_return_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module119)
	MR_init_entry1(ssdb__execute_ssdb_exception_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_exception_6_0);
	MR_init_label2(ssdb__execute_ssdb_exception_6_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_exception'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_exception_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_exception_6_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_proceed();
MR_def_label(ssdb__execute_ssdb_exception_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("The exception command accepts no arguments.\n", 44);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_exception_6_0_i4);
MR_def_label(ssdb__execute_ssdb_exception_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module120)
	MR_init_entry1(ssdb__execute_ssdb_retry_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_retry_6_0);
	MR_init_label6(ssdb__execute_ssdb_retry_6_0,53,9,11,7,6,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_retry'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_retry_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_6_0_i53);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(ssdb__execute_ssdb_retry_2_6_0);
MR_def_label(ssdb__execute_ssdb_retry_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_6_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_retry_6_0_i9);
MR_def_label(ssdb__execute_ssdb_retry_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_6_0_i7);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_6_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 14765 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_6_0
{
#line 270 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 14775 "ssdb.c"
	MR_r5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_6_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 14788 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_6_0_i11);
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_6_0_i11);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__execute_ssdb_retry_2_6_0);
MR_def_label(ssdb__execute_ssdb_retry_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_r5 - (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("The depth must be between 0 and %i.\n", 36);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__execute_ssdb_retry_6_0_i21);
MR_def_label(ssdb__execute_ssdb_retry_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const("The depth must be an integer.\n", 30);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_retry_6_0_i21);
MR_def_label(ssdb__execute_ssdb_retry_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ssdb__print_help_2_0,
		ssdb__execute_ssdb_retry_6_0_i21);
MR_def_label(ssdb__execute_ssdb_retry_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module121)
	MR_init_entry1(ssdb__execute_ssdb_retry_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_retry_2_6_0);
	MR_init_label7(ssdb__execute_ssdb_retry_2_6_0,2,4,5,7,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_retry_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_retry_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_2_6_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 14871 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_2_6_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 14883 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_2_6_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 14896 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__index0_det_3_0,
		ssdb__execute_ssdb_retry_2_6_0_i2);
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(ssdb__execute_ssdb_retry_2_6_0_i4) MR_AND
		MR_LABEL_AP(ssdb__execute_ssdb_retry_2_6_0_i7) MR_AND
		MR_LABEL_AP(ssdb__execute_ssdb_retry_2_6_0_i7) MR_AND
		MR_LABEL_AP(ssdb__execute_ssdb_retry_2_6_0_i4) MR_AND
		MR_LABEL_AP(ssdb__execute_ssdb_retry_2_6_0_i9) MR_AND
		MR_LABEL_AP(ssdb__execute_ssdb_retry_2_6_0_i4) MR_AND
		MR_LABEL_AP(ssdb__execute_ssdb_retry_2_6_0_i7) MR_AND
		MR_LABEL_AP(ssdb__execute_ssdb_retry_2_6_0_i4));
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Cannot retry at call or redo port.\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_retry_2_6_0_i5);
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_2_6_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 14951 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_2_6_0
{
#line 275 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack_depth;
;}
#line 14963 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_2_6_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 14976 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(ssdb__nondet_stack_contains_csn_2_5_0,
		ssdb__execute_ssdb_retry_2_6_0_i10);
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_2_6_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module122)
	MR_init_entry1(ssdb__lock_tty_in_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_tty_in_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_tty_in'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_tty_in_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_tty_in_0_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 15028 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module123)
	MR_init_entry1(ssdb__unlock_tty_in_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_tty_in_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_tty_in'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_tty_in_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_tty_in_0_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 15061 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module124)
	MR_init_entry1(ssdb__unsafe_get_tty_in_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_tty_in_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_tty_in'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_tty_in_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_tty_in_1_0
{
#line 298 "ssdb.m"
X = ssdb__mutable_variable_tty_in;
;}
#line 15092 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module125)
	MR_init_entry1(ssdb__lock_tty_out_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_tty_out_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_tty_out'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_tty_out_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_tty_out_0_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 15126 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module126)
	MR_init_entry1(ssdb__unlock_tty_out_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_tty_out_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_tty_out'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_tty_out_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_tty_out_0_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 15159 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module127)
	MR_init_entry1(ssdb__unsafe_get_tty_out_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_tty_out_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_tty_out'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_tty_out_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_tty_out_1_0
{
#line 300 "ssdb.m"
X = ssdb__mutable_variable_tty_out;
;}
#line 15190 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module128)
	MR_init_entry1(ssdb__lock_saved_input_stream_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_saved_input_stream_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_saved_input_stream'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_saved_input_stream_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_saved_input_stream_0_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 15224 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module129)
	MR_init_entry1(ssdb__unlock_saved_input_stream_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_saved_input_stream_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_saved_input_stream'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_saved_input_stream_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_saved_input_stream_0_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 15257 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module130)
	MR_init_entry1(ssdb__unsafe_set_saved_input_stream_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_saved_input_stream_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_saved_input_stream'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_saved_input_stream_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_saved_input_stream_1_0
	X = MR_r1;
{
#line 303 "ssdb.m"
ssdb__mutable_variable_saved_input_stream = X;
;}
#line 15289 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module131)
	MR_init_entry1(ssdb__lock_saved_output_stream_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_saved_output_stream_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_saved_output_stream'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_saved_output_stream_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_saved_output_stream_0_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 15322 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module132)
	MR_init_entry1(ssdb__unlock_saved_output_stream_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_saved_output_stream_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_saved_output_stream'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_saved_output_stream_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_saved_output_stream_0_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 15355 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module133)
	MR_init_entry1(ssdb__unsafe_set_saved_output_stream_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_saved_output_stream_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_saved_output_stream'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_saved_output_stream_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_saved_output_stream_1_0
	X = MR_r1;
{
#line 305 "ssdb.m"
ssdb__mutable_variable_saved_output_stream = X;
;}
#line 15387 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__set_input_stream_4_0);
MR_decl_entry(io__set_output_stream_4_0);

MR_BEGIN_MODULE(ssdb_module134)
	MR_init_entry1(ssdb__save_streams_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__save_streams_2_0);
	MR_init_label2(ssdb__save_streams_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_streams'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__save_streams_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 15425 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 298 "ssdb.m"
X = ssdb__mutable_variable_tty_in;
;}
#line 15437 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 15450 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 15462 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 300 "ssdb.m"
X = ssdb__mutable_variable_tty_out;
;}
#line 15472 "ssdb.c"
	MR_tempr2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 15485 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		ssdb__save_streams_2_0_i2);
MR_def_label(ssdb__save_streams_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ssdb__save_streams_2_0_i3);
MR_def_label(ssdb__save_streams_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 15514 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
	X = MR_sv(1);
{
#line 303 "ssdb.m"
ssdb__mutable_variable_saved_input_stream = X;
;}
#line 15525 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 15537 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 15549 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
	X = MR_r1;
{
#line 305 "ssdb.m"
ssdb__mutable_variable_saved_output_stream = X;
;}
#line 15560 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 15572 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module135)
	MR_init_entry1(ssdb__unsafe_get_saved_input_stream_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_saved_input_stream_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_saved_input_stream'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_saved_input_stream_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_saved_input_stream_1_0
{
#line 303 "ssdb.m"
X = ssdb__mutable_variable_saved_input_stream;
;}
#line 15603 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module136)
	MR_init_entry1(ssdb__unsafe_get_saved_output_stream_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_saved_output_stream_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_saved_output_stream'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_saved_output_stream_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_saved_output_stream_1_0
{
#line 305 "ssdb.m"
X = ssdb__mutable_variable_saved_output_stream;
;}
#line 15635 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module137)
	MR_init_entry1(ssdb__restore_streams_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__restore_streams_2_0);
	MR_init_label1(ssdb__restore_streams_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_streams'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__restore_streams_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__restore_streams_2_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 15672 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__restore_streams_2_0
{
#line 303 "ssdb.m"
X = ssdb__mutable_variable_saved_input_stream;
;}
#line 15684 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__restore_streams_2_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 15697 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__restore_streams_2_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 15709 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__restore_streams_2_0
{
#line 305 "ssdb.m"
X = ssdb__mutable_variable_saved_output_stream;
;}
#line 15719 "ssdb.c"
	MR_tempr2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__restore_streams_2_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 15732 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		ssdb__restore_streams_2_0_i2);
MR_def_label(ssdb__restore_streams_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__set_output_stream_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module138)
	MR_init_entry1(ssdb__invent_io_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__invent_io_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'invent_io'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__invent_io_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__invent_io_1_0
{
#line 2950 "ssdb.m"

;}
#line 15772 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module139)
	MR_init_entry1(ssdb__consume_io_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__consume_io_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'consume_io'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__consume_io_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__consume_io_1_0
{
#line 2978 "ssdb.m"

;}
#line 15802 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module140)
	MR_init_entry1(ssdb__handle_event_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__handle_event_call_2_0);
	MR_init_label8(ssdb__handle_event_call_2_0,5,6,9,10,11,12,13,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_event_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_call_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 2950 "ssdb.m"

;}
#line 15835 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 15847 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 309 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;
;}
#line 15857 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 15870 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_2_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 15885 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 253 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 15897 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 15910 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 15922 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_tempr2;
{
#line 253 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 15934 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 15946 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 15958 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 256 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_csn;
;}
#line 15968 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 15981 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 15993 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_tempr3;
{
#line 256 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn = X;
;}
#line 16005 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 16017 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 16029 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 270 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 16039 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 16052 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 16064 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 248 "ssdb.m"
X = ssdb__mutable_variable_cur_filename;
;}
#line 16074 "ssdb.c"
	MR_tempr4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 16087 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 250 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 16099 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 250 "ssdb.m"
X = ssdb__mutable_variable_cur_line_number;
;}
#line 16109 "ssdb.c"
	MR_tempr5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 250 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 16122 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr6, 2) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr6, 3) = MR_r1;
	MR_tfield(0, MR_tempr6, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr6, 5) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 6) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_r1 = MR_tempr6;
	}
	MR_np_call_localret_ent(ssdb__stack_push_3_0,
		ssdb__handle_event_call_2_0_i5);
MR_def_label(ssdb__handle_event_call_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		ssdb__handle_event_call_2_0_i6);
MR_def_label(ssdb__handle_event_call_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_2_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 16162 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 298 "ssdb.m"
X = ssdb__mutable_variable_tty_in;
;}
#line 16172 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 16185 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 16197 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 300 "ssdb.m"
X = ssdb__mutable_variable_tty_out;
;}
#line 16209 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 16222 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		ssdb__handle_event_call_2_0_i9);
MR_def_label(ssdb__handle_event_call_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ssdb__handle_event_call_2_0_i10);
MR_def_label(ssdb__handle_event_call_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 16250 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_sv(1);
{
#line 303 "ssdb.m"
ssdb__mutable_variable_saved_input_stream = X;
;}
#line 16261 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 16273 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 16285 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_r1;
{
#line 305 "ssdb.m"
ssdb__mutable_variable_saved_output_stream = X;
;}
#line 16296 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 16308 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		ssdb__handle_event_call_2_0_i11);
MR_def_label(ssdb__handle_event_call_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_5_0,
		ssdb__handle_event_call_2_0_i12);
MR_def_label(ssdb__handle_event_call_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		ssdb__handle_event_call_2_0_i13);
MR_def_label(ssdb__handle_event_call_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__restore_streams_2_0,
		ssdb__handle_event_call_2_0_i2);
MR_def_label(ssdb__handle_event_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 2978 "ssdb.m"

;}
#line 16344 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module141)
	MR_init_entry1(ssdb__handle_event_call_nondet_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__handle_event_call_nondet_2_0);
	MR_init_label9(ssdb__handle_event_call_nondet_2_0,5,6,7,10,11,12,13,14,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_event_call_nondet'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_call_nondet_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 2950 "ssdb.m"

;}
#line 16377 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 16389 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 309 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;
;}
#line 16399 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 16412 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_nondet_2_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 16427 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 253 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 16439 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 16452 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 16464 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_tempr2;
{
#line 253 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 16476 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 16488 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 16500 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 256 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_csn;
;}
#line 16510 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 16523 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 16535 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_tempr3;
{
#line 256 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn = X;
;}
#line 16547 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 16559 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 16571 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 270 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 16581 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 16594 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 16606 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 248 "ssdb.m"
X = ssdb__mutable_variable_cur_filename;
;}
#line 16616 "ssdb.c"
	MR_tempr4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 16629 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 250 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 16641 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 250 "ssdb.m"
X = ssdb__mutable_variable_cur_line_number;
;}
#line 16651 "ssdb.c"
	MR_tempr5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 250 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 16664 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr6, 2) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr6, 3) = MR_r1;
	MR_tfield(0, MR_tempr6, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr6, 5) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 6) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr6;
	MR_r1 = MR_tempr6;
	}
	MR_np_call_localret_ent(ssdb__stack_push_3_0,
		ssdb__handle_event_call_nondet_2_0_i5);
MR_def_label(ssdb__handle_event_call_nondet_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ssdb__nondet_stack_push_3_0,
		ssdb__handle_event_call_nondet_2_0_i6);
MR_def_label(ssdb__handle_event_call_nondet_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		ssdb__handle_event_call_nondet_2_0_i7);
MR_def_label(ssdb__handle_event_call_nondet_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_nondet_2_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 16710 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 298 "ssdb.m"
X = ssdb__mutable_variable_tty_in;
;}
#line 16720 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 16733 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 16745 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 300 "ssdb.m"
X = ssdb__mutable_variable_tty_out;
;}
#line 16757 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 16770 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		ssdb__handle_event_call_nondet_2_0_i10);
MR_def_label(ssdb__handle_event_call_nondet_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ssdb__handle_event_call_nondet_2_0_i11);
MR_def_label(ssdb__handle_event_call_nondet_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 16798 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_sv(1);
{
#line 303 "ssdb.m"
ssdb__mutable_variable_saved_input_stream = X;
;}
#line 16809 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 16821 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 16833 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_r1;
{
#line 305 "ssdb.m"
ssdb__mutable_variable_saved_output_stream = X;
;}
#line 16844 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 16856 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		ssdb__handle_event_call_nondet_2_0_i12);
MR_def_label(ssdb__handle_event_call_nondet_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_5_0,
		ssdb__handle_event_call_nondet_2_0_i13);
MR_def_label(ssdb__handle_event_call_nondet_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		ssdb__handle_event_call_nondet_2_0_i14);
MR_def_label(ssdb__handle_event_call_nondet_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__restore_streams_2_0,
		ssdb__handle_event_call_nondet_2_0_i2);
MR_def_label(ssdb__handle_event_call_nondet_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 2978 "ssdb.m"

;}
#line 16892 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module142)
	MR_init_entry1(ssdb__stack_pop_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__stack_pop_2_0);
	MR_init_label1(ssdb__stack_pop_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stack_pop'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__stack_pop_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 16926 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 16936 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 16949 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 16961 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 270 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 16971 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 16984 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__stack_pop_2_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 16999 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
	X = MR_tempr1;
{
#line 268 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 17013 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17025 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 17037 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
	X = MR_r2;
{
#line 270 "ssdb.m"
ssdb__mutable_variable_shadow_stack_depth = X;
;}
#line 17049 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 17061 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
MR_def_label(ssdb__stack_pop_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_pop on empty stack", 30);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module143)
	MR_init_entry1(ssdb__handle_event_exit_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__handle_event_exit_3_0);
	MR_init_label10(ssdb__handle_event_exit_3_0,3,5,4,7,9,13,12,17,18,19)
	MR_init_label5(ssdb__handle_event_exit_3_0,20,11,22,23,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_event_exit'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_exit_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 2950 "ssdb.m"

;}
#line 17100 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 17112 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 309 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;
;}
#line 17122 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 17135 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i2);
MR_def_label(ssdb__handle_event_exit_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17154 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 253 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 17164 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17177 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17189 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r5 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_r5;
{
#line 253 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 17201 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17213 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17225 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 17235 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17248 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i5);
	}
	MR_r6 = MR_r4;
	MR_r4 = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r7 = MR_r5;
	MR_r2 = MR_r7;
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_r6, 0), 1);
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i4);
MR_def_label(ssdb__handle_event_exit_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_top on empty stack", 30);
	}
	MR_np_call_localret_ent(require__error_1_0,
		ssdb__handle_event_exit_3_0_i4);
MR_def_label(ssdb__handle_event_exit_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		ssdb__handle_event_exit_3_0_i7);
MR_def_label(ssdb__handle_event_exit_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i9);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		ssdb__handle_event_exit_3_0_i23);
MR_def_label(ssdb__handle_event_exit_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i11);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17299 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 17309 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17322 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(1, MR_r2, 1);
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17351 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_tempr2;
{
#line 268 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 17362 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17374 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	}
	MR_np_call_localret_ent(ssdb__save_streams_2_0,
		ssdb__handle_event_exit_3_0_i17);
MR_def_label(ssdb__handle_event_exit_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: update_top_var_list on empty stack", 40);
	MR_np_call_localret_ent(require__error_1_0,
		ssdb__handle_event_exit_3_0_i12);
MR_def_label(ssdb__handle_event_exit_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__save_streams_2_0,
		ssdb__handle_event_exit_3_0_i17);
MR_def_label(ssdb__handle_event_exit_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		ssdb__handle_event_exit_3_0_i18);
MR_def_label(ssdb__handle_event_exit_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_5_0,
		ssdb__handle_event_exit_3_0_i19);
MR_def_label(ssdb__handle_event_exit_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ssdb__restore_streams_2_0,
		ssdb__handle_event_exit_3_0_i20);
MR_def_label(ssdb__handle_event_exit_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		ssdb__handle_event_exit_3_0_i22);
MR_def_label(ssdb__handle_event_exit_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tfield(2, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		ssdb__handle_event_exit_3_0_i22);
MR_def_label(ssdb__handle_event_exit_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		ssdb__handle_event_exit_3_0_i23);
MR_def_label(ssdb__handle_event_exit_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ssdb__handle_event_exit_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 2978 "ssdb.m"

;}
#line 17443 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module144)
	MR_init_entry1(ssdb__handle_event_exit_nondet_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__handle_event_exit_nondet_2_0);
	MR_init_label10(ssdb__handle_event_exit_nondet_2_0,5,4,7,13,12,17,18,19,20,11)
	MR_init_label2(ssdb__handle_event_exit_nondet_2_0,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_event_exit_nondet'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_exit_nondet_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 2950 "ssdb.m"

;}
#line 17477 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 17489 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 309 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;
;}
#line 17499 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 17512 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17527 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 253 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 17537 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17550 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17562 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r5 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
	X = MR_r5;
{
#line 253 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 17574 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17586 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17598 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 17608 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17621 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i5);
	}
	MR_r6 = MR_r4;
	MR_r4 = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r7 = MR_r5;
	MR_r2 = MR_r7;
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_r6, 0), 1);
	MR_r1 = (MR_Integer) 4;
	MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i4);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_top on empty stack", 30);
	}
	MR_np_call_localret_ent(require__error_1_0,
		ssdb__handle_event_exit_nondet_2_0_i4);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		ssdb__handle_event_exit_nondet_2_0_i7);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i8);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i11);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17667 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 17677 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17690 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(1, MR_r2, 1);
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17719 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
	X = MR_tempr2;
{
#line 268 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 17730 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17742 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	}
	MR_np_call_localret_ent(ssdb__save_streams_2_0,
		ssdb__handle_event_exit_nondet_2_0_i17);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: update_top_var_list on empty stack", 40);
	MR_np_call_localret_ent(require__error_1_0,
		ssdb__handle_event_exit_nondet_2_0_i12);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__save_streams_2_0,
		ssdb__handle_event_exit_nondet_2_0_i17);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		ssdb__handle_event_exit_nondet_2_0_i18);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_5_0,
		ssdb__handle_event_exit_nondet_2_0_i19);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ssdb__restore_streams_2_0,
		ssdb__handle_event_exit_nondet_2_0_i20);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		ssdb__handle_event_exit_nondet_2_0_i8);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tfield(2, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		ssdb__handle_event_exit_nondet_2_0_i8);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		ssdb__handle_event_exit_nondet_2_0_i2);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 2978 "ssdb.m"

;}
#line 17807 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module145)
	MR_init_entry1(ssdb__nondet_stack_pop_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__nondet_stack_pop_2_0);
	MR_init_label1(ssdb__nondet_stack_pop_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nondet_stack_pop'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__nondet_stack_pop_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 17841 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 273 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack;
;}
#line 17851 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 17864 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 17876 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 275 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack_depth;
;}
#line 17886 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 17899 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__nondet_stack_pop_2_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 17914 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
	X = MR_tempr1;
{
#line 273 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack = X;
;}
#line 17928 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 17940 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 17952 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
	X = MR_r2;
{
#line 275 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack_depth = X;
;}
#line 17964 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 17976 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
MR_def_label(ssdb__nondet_stack_pop_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: nondet_stack_pop on empty stack", 37);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module146)
	MR_init_entry1(ssdb__handle_event_fail_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__handle_event_fail_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_event_fail'/3 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module147)
	MR_init_entry1(ssdb__handle_event_fail_nondet_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__handle_event_fail_nondet_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_event_fail_nondet'/3 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module148)
	MR_init_entry1(ssdb__search_nondet_stack_frame_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__search_nondet_stack_frame_2_7_0);
	MR_init_label4(ssdb__search_nondet_stack_frame_2_7_0,22,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_nondet_stack_frame_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__search_nondet_stack_frame_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ssdb__search_nondet_stack_frame_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 < (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(ssdb__search_nondet_stack_frame_2_7_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(ssdb__search_nondet_stack_frame_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__search_nondet_stack_frame_2_7_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 18068 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__search_nondet_stack_frame_2_7_0
{
#line 273 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack;
;}
#line 18080 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__search_nondet_stack_frame_2_7_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 18093 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__index0_det_3_0,
		ssdb__search_nondet_stack_frame_2_7_0_i3);
MR_def_label(ssdb__search_nondet_stack_frame_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 2);
	if ((MR_sv(2) != MR_r3)) {
		MR_GOTO_LAB(ssdb__search_nondet_stack_frame_2_7_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_r3, (char *) (MR_Word *) MR_r5) != 0)) {
		MR_GOTO_LAB(ssdb__search_nondet_stack_frame_2_7_0_i4);
	}
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr3, 1);
	if ((strcmp((char *) (MR_Word *) MR_r3, (char *) (MR_Word *) MR_r4) != 0)) {
		MR_GOTO_LAB(ssdb__search_nondet_stack_frame_2_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ssdb__search_nondet_stack_frame_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ssdb__search_nondet_stack_frame_2_7_0_i22);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module149)
	MR_init_entry1(ssdb__handle_event_redo_nondet_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__handle_event_redo_nondet_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_event_redo_nondet'/2 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module150)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_filename_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_cur_filename_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_cur_filename'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_cur_filename_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_cur_filename_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_filename");
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_filename_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18189 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_filename");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module151)
	MR_init_entry1(ssdb__initialise_mutable_cur_filename_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_cur_filename_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_cur_filename'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_cur_filename_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_filename_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_filename");
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_filename_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18223 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_filename");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_filename_0_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 18236 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_filename_0_0
	X = (MR_Word) MR_string_const("", 0);
{
#line 248 "ssdb.m"
ssdb__mutable_variable_cur_filename = X;
;}
#line 18247 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_filename_0_0
{
#line 248 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 18259 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module152)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_line_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_cur_line_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_cur_line_number'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_cur_line_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_cur_line_number_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_line_number");
{
#line 250 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_line_number_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18292 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_line_number");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module153)
	MR_init_entry1(ssdb__initialise_mutable_cur_line_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_cur_line_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_cur_line_number'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_cur_line_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_line_number_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_cur_line_number");
{
#line 250 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_line_number_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18326 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_line_number");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_line_number_0_0
{
#line 250 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 18339 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_line_number_0_0
	X = (MR_Integer) 0;
{
#line 250 "ssdb.m"
ssdb__mutable_variable_cur_line_number = X;
;}
#line 18350 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_line_number_0_0
{
#line 250 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 18362 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module154)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_event_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_cur_ssdb_event_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_cur_ssdb_event_number'/0 mode 0 */
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
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_event_number_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18395 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_event_number");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module155)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_event_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_cur_ssdb_event_number'/0 mode 0 */
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
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_event_number_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18429 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_event_number");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 18442 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
	X = (MR_Integer) 0;
{
#line 253 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 18453 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 18465 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module156)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_csn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_cur_ssdb_csn_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_cur_ssdb_csn'/0 mode 0 */
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
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_csn_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18498 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_csn");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module157)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_csn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_cur_ssdb_csn'/0 mode 0 */
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
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_csn_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18532 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_csn");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 18545 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
	X = (MR_Integer) 0;
{
#line 256 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn = X;
;}
#line 18556 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
{
#line 256 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 18568 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module158)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_next_stop_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_cur_ssdb_next_stop_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_cur_ssdb_next_stop'/0 mode 0 */
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
#line 259 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_next_stop_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18601 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_next_stop");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module159)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_next_stop_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_cur_ssdb_next_stop'/0 mode 0 */
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
#line 259 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_next_stop_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18635 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_next_stop");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
{
#line 259 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 18648 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
	X = (MR_Word) MR_tbmkword(0, 0);
{
#line 259 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop = X;
;}
#line 18659 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
{
#line 259 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 18671 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module160)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_breakpoints_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_cur_ssdb_breakpoints_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_cur_ssdb_breakpoints'/0 mode 0 */
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
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18704 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_breakpoints");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module161)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0);
	MR_init_label1(ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_cur_ssdb_breakpoints'/0 mode 0 */
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
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18741 "ssdb.c"
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
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 18760 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0
	X = MR_r1;
{
#line 262 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_breakpoints = X;
;}
#line 18771 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_breakpoints_0_0
{
#line 262 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_breakpoints_lock,
                "ssdb__mutable_variable_cur_ssdb_breakpoints_lock");
#endif
;}
#line 18783 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module162)
	MR_init_entry1(ssdb__pre_initialise_mutable_cur_ssdb_number_of_breakpoint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_cur_ssdb_number_of_breakpoint_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_cur_ssdb_number_of_breakpoint'/0 mode 0 */
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
#line 265 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18816 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_number_of_breakpoint");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module163)
	MR_init_entry1(ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_cur_ssdb_number_of_breakpoint'/0 mode 0 */
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
#line 265 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18850 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_number_of_breakpoint");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0
{
#line 265 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 18863 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0
	X = (MR_Integer) 0;
{
#line 265 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_number_of_breakpoint = X;
;}
#line 18874 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_number_of_breakpoint_0_0
{
#line 265 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock,
                "ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock");
#endif
;}
#line 18886 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module164)
	MR_init_entry1(ssdb__pre_initialise_mutable_shadow_stack_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_shadow_stack_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_shadow_stack'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_shadow_stack_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_shadow_stack");
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_shadow_stack_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18919 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_shadow_stack");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module165)
	MR_init_entry1(ssdb__initialise_mutable_shadow_stack_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_shadow_stack_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_shadow_stack'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_shadow_stack");
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_shadow_stack_lock, MR_MUTEX_ATTR);
#endif
;}
#line 18953 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_shadow_stack");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_0_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18966 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_0_0
	X = (MR_Word) MR_tbmkword(0, 0);
{
#line 268 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 18977 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_0_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18989 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module166)
	MR_init_entry1(ssdb__pre_initialise_mutable_shadow_stack_depth_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_shadow_stack_depth_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_shadow_stack_depth'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_shadow_stack_depth_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_shadow_stack_depth_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_shadow_stack_depth");
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_shadow_stack_depth_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19022 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_shadow_stack_depth");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module167)
	MR_init_entry1(ssdb__initialise_mutable_shadow_stack_depth_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_shadow_stack_depth_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_shadow_stack_depth'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_shadow_stack_depth_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_depth_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_shadow_stack_depth");
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_shadow_stack_depth_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19056 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_shadow_stack_depth");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_depth_0_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 19069 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_depth_0_0
	X = (MR_Integer) 0;
{
#line 270 "ssdb.m"
ssdb__mutable_variable_shadow_stack_depth = X;
;}
#line 19080 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_depth_0_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 19092 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module168)
	MR_init_entry1(ssdb__pre_initialise_mutable_nondet_shadow_stack_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_nondet_shadow_stack_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_nondet_shadow_stack'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_nondet_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_nondet_shadow_stack_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_nondet_shadow_stack");
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_nondet_shadow_stack_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19125 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_nondet_shadow_stack");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module169)
	MR_init_entry1(ssdb__initialise_mutable_nondet_shadow_stack_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_nondet_shadow_stack_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_nondet_shadow_stack'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_nondet_shadow_stack_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_nondet_shadow_stack");
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_nondet_shadow_stack_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19159 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_nondet_shadow_stack");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_0_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 19172 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_0_0
	X = (MR_Word) MR_tbmkword(0, 0);
{
#line 273 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack = X;
;}
#line 19183 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_0_0
{
#line 273 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 19195 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module170)
	MR_init_entry1(ssdb__pre_initialise_mutable_nondet_shadow_stack_depth_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_nondet_shadow_stack_depth_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_nondet_shadow_stack_depth'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_nondet_shadow_stack_depth_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_nondet_shadow_stack_depth_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_nondet_shadow_stack_depth");
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19228 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_nondet_shadow_stack_depth");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module171)
	MR_init_entry1(ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_nondet_shadow_stack_depth'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_nondet_shadow_stack_depth");
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19262 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_nondet_shadow_stack_depth");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 19275 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0
	X = (MR_Integer) 0;
{
#line 275 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack_depth = X;
;}
#line 19286 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 19298 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module172)
	MR_init_entry1(ssdb__pre_initialise_mutable_browser_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_browser_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_browser_state'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_browser_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_browser_state_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_browser_state");
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_browser_state_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19331 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_browser_state");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__browser_info__init_persistent_state_1_0);

MR_BEGIN_MODULE(ssdb_module173)
	MR_init_entry1(ssdb__initialise_mutable_browser_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_browser_state_0_0);
	MR_init_label1(ssdb__initialise_mutable_browser_state_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_browser_state'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_browser_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_browser_state_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_browser_state");
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_browser_state_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19369 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_browser_state");
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(mdb__browser_info__init_persistent_state_1_0,
		ssdb__initialise_mutable_browser_state_0_0_i2);
MR_def_label(ssdb__initialise_mutable_browser_state_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_browser_state_0_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 19386 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_browser_state_0_0
	X = MR_r1;
{
#line 280 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 19397 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_browser_state_0_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 19409 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module174)
	MR_init_entry1(ssdb__pre_initialise_mutable_list_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_list_params_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_list_params'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_list_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_list_params_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_list_params");
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_list_params_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19442 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_list_params");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__listing__new_list_path_0_0);

MR_BEGIN_MODULE(ssdb_module175)
	MR_init_entry1(ssdb__initialise_mutable_list_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_list_params_0_0);
	MR_init_label1(ssdb__initialise_mutable_list_params_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_list_params'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_list_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_list_params_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_list_params");
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_list_params_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19480 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_list_params");
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(fn__mdb__listing__new_list_path_0_0,
		ssdb__initialise_mutable_list_params_0_0_i2);
MR_def_label(ssdb__initialise_mutable_list_params_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 2;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_list_params_0_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 19500 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_list_params_0_0
	X = MR_r2;
{
#line 289 "ssdb.m"
ssdb__mutable_variable_list_params = X;
;}
#line 19511 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_list_params_0_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 19523 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module176)
	MR_init_entry1(ssdb__pre_initialise_mutable_tty_in_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_tty_in_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_tty_in'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_tty_in_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_tty_in_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_tty_in");
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_tty_in_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19556 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_tty_in");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module177)
	MR_init_entry1(ssdb__unsafe_set_tty_in_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_tty_in_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_tty_in'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_tty_in_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_tty_in_1_0
	X = MR_r1;
{
#line 298 "ssdb.m"
ssdb__mutable_variable_tty_in = X;
;}
#line 19589 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__io__stdin_stream_0_0);

MR_BEGIN_MODULE(ssdb_module178)
	MR_init_entry1(ssdb__initialise_mutable_tty_in_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_tty_in_0_0);
	MR_init_label1(ssdb__initialise_mutable_tty_in_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_tty_in'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_tty_in_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_tty_in_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_tty_in");
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_tty_in_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19626 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_tty_in");
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(fn__io__stdin_stream_0_0,
		ssdb__initialise_mutable_tty_in_0_0_i2);
MR_def_label(ssdb__initialise_mutable_tty_in_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_tty_in_0_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 19643 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_tty_in_0_0
	X = MR_r1;
{
#line 298 "ssdb.m"
ssdb__mutable_variable_tty_in = X;
;}
#line 19654 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_tty_in_0_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 19666 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module179)
	MR_init_entry1(ssdb__pre_initialise_mutable_tty_out_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_tty_out_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_tty_out'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_tty_out_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_tty_out_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_tty_out");
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_tty_out_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19699 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_tty_out");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module180)
	MR_init_entry1(ssdb__unsafe_set_tty_out_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_tty_out_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_tty_out'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_tty_out_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_tty_out_1_0
	X = MR_r1;
{
#line 300 "ssdb.m"
ssdb__mutable_variable_tty_out = X;
;}
#line 19732 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__io__stdout_stream_0_0);

MR_BEGIN_MODULE(ssdb_module181)
	MR_init_entry1(ssdb__initialise_mutable_tty_out_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_tty_out_0_0);
	MR_init_label1(ssdb__initialise_mutable_tty_out_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_tty_out'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_tty_out_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_tty_out_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_tty_out");
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_tty_out_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19769 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_tty_out");
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(fn__io__stdout_stream_0_0,
		ssdb__initialise_mutable_tty_out_0_0_i2);
MR_def_label(ssdb__initialise_mutable_tty_out_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_tty_out_0_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 19786 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_tty_out_0_0
	X = MR_r1;
{
#line 300 "ssdb.m"
ssdb__mutable_variable_tty_out = X;
;}
#line 19797 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_tty_out_0_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 19809 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module182)
	MR_init_entry1(ssdb__pre_initialise_mutable_saved_input_stream_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_saved_input_stream_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_saved_input_stream'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_saved_input_stream_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_saved_input_stream_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_saved_input_stream");
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_saved_input_stream_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19842 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_saved_input_stream");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module183)
	MR_init_entry1(ssdb__initialise_mutable_saved_input_stream_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_saved_input_stream_0_0);
	MR_init_label1(ssdb__initialise_mutable_saved_input_stream_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_saved_input_stream'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_saved_input_stream_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_saved_input_stream_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_saved_input_stream");
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_saved_input_stream_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19879 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_saved_input_stream");
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(fn__io__stdin_stream_0_0,
		ssdb__initialise_mutable_saved_input_stream_0_0_i2);
MR_def_label(ssdb__initialise_mutable_saved_input_stream_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_saved_input_stream_0_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 19896 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_saved_input_stream_0_0
	X = MR_r1;
{
#line 303 "ssdb.m"
ssdb__mutable_variable_saved_input_stream = X;
;}
#line 19907 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_saved_input_stream_0_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 19919 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module184)
	MR_init_entry1(ssdb__pre_initialise_mutable_saved_output_stream_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_saved_output_stream_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_saved_output_stream'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_saved_output_stream_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_saved_output_stream_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_saved_output_stream");
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_saved_output_stream_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19952 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_saved_output_stream");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module185)
	MR_init_entry1(ssdb__initialise_mutable_saved_output_stream_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_saved_output_stream_0_0);
	MR_init_label1(ssdb__initialise_mutable_saved_output_stream_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_saved_output_stream'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_saved_output_stream_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_saved_output_stream_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_saved_output_stream");
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_saved_output_stream_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19989 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_saved_output_stream");
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(fn__io__stdout_stream_0_0,
		ssdb__initialise_mutable_saved_output_stream_0_0_i2);
MR_def_label(ssdb__initialise_mutable_saved_output_stream_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_saved_output_stream_0_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 20006 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_saved_output_stream_0_0
	X = MR_r1;
{
#line 305 "ssdb.m"
ssdb__mutable_variable_saved_output_stream = X;
;}
#line 20017 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_saved_output_stream_0_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 20029 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module186)
	MR_init_entry1(ssdb__pre_initialise_mutable_debugger_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_debugger_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_debugger_state'/0 mode 0 */
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
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_debugger_state_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20062 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_debugger_state");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module187)
	MR_init_entry1(ssdb__unsafe_set_debugger_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_debugger_state_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_debugger_state'/1 mode 0 */
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
#line 309 "ssdb.m"
ssdb__mutable_variable_debugger_state = X;
;}
#line 20095 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module188)
	MR_init_entry1(ssdb__install_sigint_handler_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__install_sigint_handler_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'install_sigint_handler'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__install_sigint_handler_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__ssdb__install_sigint_handler_2_0
{
#line 361 "ssdb.m"

    MR_setup_signal(SIGINT, (MR_Code *) MR_ssdb_sigint_handler,
        MR_FALSE, "ssdb: cannot install SIGINT signal handler");
    IO = IO0;
;}
#line 20130 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__get_environment_var_4_0);
MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__open_output_4_0);

MR_BEGIN_MODULE(ssdb_module189)
	MR_init_entry1(ssdb__initialise_mutable_debugger_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_debugger_state_0_0);
	MR_init_label10(ssdb__initialise_mutable_debugger_state_0_0,2,3,7,6,12,14,15,10,18,5)
	MR_init_label1(ssdb__initialise_mutable_debugger_state_0_0,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_debugger_state'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_debugger_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_debugger_state");
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_debugger_state_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20170 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_debugger_state");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 2950 "ssdb.m"

;}
#line 20180 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("SSDB", 4);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		ssdb__initialise_mutable_debugger_state_0_0_i2);
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("SSDB_TTY", 8);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		ssdb__initialise_mutable_debugger_state_0_0_i3);
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ssdb__initialise_mutable_debugger_state_0_0_i7);
	}
	MR_r2 = MR_r1;
	MR_GOTO_LAB(ssdb__initialise_mutable_debugger_state_0_0_i6);
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__initialise_mutable_debugger_state_0_0_i5);
	}
	MR_r2 = MR_r1;
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__initialise_mutable_debugger_state_0_0_i10);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__open_input_4_0,
		ssdb__initialise_mutable_debugger_state_0_0_i12);
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__initialise_mutable_debugger_state_0_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__open_output_4_0,
		ssdb__initialise_mutable_debugger_state_0_0_i15);
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 20233 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
	X = MR_tempr1;
{
#line 298 "ssdb.m"
ssdb__mutable_variable_tty_in = X;
;}
#line 20247 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 20259 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(io__open_output_4_0,
		ssdb__initialise_mutable_debugger_state_0_0_i15);
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__initialise_mutable_debugger_state_0_0_i10);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 20280 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
	X = MR_r3;
{
#line 300 "ssdb.m"
ssdb__mutable_variable_tty_out = X;
;}
#line 20292 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 20304 "ssdb.c"
#undef	MR_PROC_LABEL
	}
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__install_sigint_handler_2_0,
		ssdb__initialise_mutable_debugger_state_0_0_i18);
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__initialise_mutable_debugger_state_0_0_i19);
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(ssdb__initialise_mutable_debugger_state_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 2978 "ssdb.m"

;}
#line 20326 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 20338 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
	X = MR_r1;
{
#line 309 "ssdb.m"
ssdb__mutable_variable_debugger_state = X;
;}
#line 20349 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 20361 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module190)
	MR_init_entry1(ssdb__step_next_stop_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__step_next_stop_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'step_next_stop'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__step_next_stop_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__step_next_stop_2_0
{
#line 259 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 20394 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__step_next_stop_2_0
	X = (MR_Word) MR_tbmkword(0, 0);
{
#line 259 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop = X;
;}
#line 20405 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__step_next_stop_2_0
{
#line 259 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 20417 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module191)
	MR_init_entry1(ssdb__format_options_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__format_options_3_0);
	MR_init_label3(ssdb__format_options_3_0,3,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_options'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__format_options_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--print", 7)) == 0) || (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-P", 2)) == 0)))) {
		MR_GOTO_LAB(ssdb__format_options_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_options_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--browse", 8)) == 0) || (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-B", 2)) == 0)))) {
		MR_GOTO_LAB(ssdb__format_options_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_options_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--print-all", 11)) == 0) || (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-A", 2)) == 0)))) {
		MR_GOTO_LAB(ssdb__format_options_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_options_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module192)
	MR_init_entry1(ssdb__format_param_options_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__format_param_options_3_0);
	MR_init_label10(ssdb__format_param_options_3_0,3,21,5,6,8,10,12,14,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_param_options'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__format_param_options_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 15);
MR_def_label(ssdb__format_param_options_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r3 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_10_1)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(ssdb__format_param_options_3_0_i5);
	}
	MR_r3 = ((MR_Word *) &mercury_vector_common_10_1)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(ssdb__format_param_options_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(ssdb__format_param_options_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(ssdb__format_param_options_3_0_i21) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i8) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i12) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i6) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i14) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i18) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i10) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i16) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i16) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i6) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i18) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i14) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i21) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i8) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i10) MR_AND
		MR_LABEL_AP(ssdb__format_param_options_3_0_i12));
MR_def_label(ssdb__format_param_options_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module193)
	MR_init_entry1(__Unify___ssdb__bp_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__bp_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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

MR_BEGIN_MODULE(ssdb_module194)
	MR_init_entry1(__Compare___ssdb__bp_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__bp_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module195)
	MR_init_entry1(__Unify___ssdb__breakpoint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__breakpoint_0_0);
	MR_init_label2(__Unify___ssdb__breakpoint_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__breakpoint_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__breakpoint_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__breakpoint_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_r2);
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

MR_BEGIN_MODULE(ssdb_module196)
	MR_init_entry1(__Compare___ssdb__breakpoint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__breakpoint_0_0);
	MR_init_label6(__Compare___ssdb__breakpoint_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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

MR_BEGIN_MODULE(ssdb_module197)
	MR_init_entry1(__Unify___ssdb__cur_ssdb_breakpoints_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__cur_ssdb_breakpoints_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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

MR_BEGIN_MODULE(ssdb_module198)
	MR_init_entry1(__Compare___ssdb__cur_ssdb_breakpoints_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__cur_ssdb_breakpoints_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module199)
	MR_init_entry1(__Unify___ssdb__debugger_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__debugger_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module200)
	MR_init_entry1(__Compare___ssdb__debugger_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__debugger_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module201)
	MR_init_entry1(__Unify___ssdb__format_config_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__format_config_0_0);
	MR_init_label2(__Unify___ssdb__format_config_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__format_config_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__format_config_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__format_config_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module202)
	MR_init_entry1(__Compare___ssdb__format_config_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__format_config_0_0);
	MR_init_label9(__Compare___ssdb__format_config_0_0,3,2,5,9,13,17,21,25,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__format_config_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ssdb__format_config_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ssdb__format_config_0_0_i2);
MR_def_label(__Compare___ssdb__format_config_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ssdb__format_config_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__format_config_0_0_i5);
MR_def_label(__Compare___ssdb__format_config_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__format_config_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__format_config_0_0_i9);
MR_def_label(__Compare___ssdb__format_config_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__format_config_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__format_config_0_0_i13);
MR_def_label(__Compare___ssdb__format_config_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__format_config_0_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__format_config_0_0_i17);
MR_def_label(__Compare___ssdb__format_config_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__format_config_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__format_config_0_0_i21);
MR_def_label(__Compare___ssdb__format_config_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__format_config_0_0_i61);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__format_config_0_0_i25);
MR_def_label(__Compare___ssdb__format_config_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__format_config_0_0_i61);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__format_config_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(ssdb_module203)
	MR_init_entry1(__Unify___ssdb__list_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__list_params_0_0);
	MR_init_label3(__Unify___ssdb__list_params_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__list_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__list_params_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__listing, search_path);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ssdb__list_params_0_0_i4);
MR_def_label(__Unify___ssdb__list_params_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ssdb__list_params_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ssdb__list_params_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__list_params_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(ssdb_module204)
	MR_init_entry1(__Compare___ssdb__list_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__list_params_0_0);
	MR_init_label4(__Compare___ssdb__list_params_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__list_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ssdb__list_params_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ssdb__list_params_0_0_i2);
MR_def_label(__Compare___ssdb__list_params_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ssdb__list_params_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__listing, search_path);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ssdb__list_params_0_0_i5);
MR_def_label(__Compare___ssdb__list_params_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__list_params_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__list_params_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ssdb_module205)
	MR_init_entry1(__Unify___ssdb__list_var_value_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__list_var_value_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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

MR_BEGIN_MODULE(ssdb_module206)
	MR_init_entry1(__Compare___ssdb__list_var_value_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__list_var_value_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module207)
	MR_init_entry1(__Unify___ssdb__next_stop_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__next_stop_0_0);
	MR_init_label7(__Unify___ssdb__next_stop_0_0,17,13,7,20,11,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i22);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___ssdb__next_stop_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___ssdb__next_stop_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___ssdb__next_stop_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___ssdb__next_stop_0_0_i20));
MR_def_label(__Unify___ssdb__next_stop_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_unmkbody(MR_tempr1);
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__next_stop_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__next_stop_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__next_stop_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i11);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__next_stop_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__next_stop_0_0,22)
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


MR_BEGIN_MODULE(ssdb_module208)
	MR_init_entry1(__Compare___ssdb__next_stop_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__next_stop_0_0);
	MR_init_label10(__Compare___ssdb__next_stop_0_0,139,30,151,33,93,104,100,107,35,51)
	MR_init_label10(__Compare___ssdb__next_stop_0_0,39,41,54,142,72,75,63,77,88,91)
	MR_init_label10(__Compare___ssdb__next_stop_0_0,83,5,15,18,109,119,122,179,124,183)
	MR_init_label1(__Compare___ssdb__next_stop_0_0,144)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__next_stop_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i151);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i139) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i93) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i142));
MR_def_label(__Compare___ssdb__next_stop_0_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(1)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i124);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(1)),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i5);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(1)),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i109);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i30) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i33));
MR_def_label(__Compare___ssdb__next_stop_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
MR_def_label(__Compare___ssdb__next_stop_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i104) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i100) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i183) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i107));
MR_def_label(__Compare___ssdb__next_stop_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i51) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i39) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i54));
MR_def_label(__Compare___ssdb__next_stop_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__next_stop_0_0_i41);
MR_def_label(__Compare___ssdb__next_stop_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i144);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i77);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i72) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i75));
MR_def_label(__Compare___ssdb__next_stop_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__next_stop_0_0_i63);
MR_def_label(__Compare___ssdb__next_stop_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i144);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i88) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i91));
MR_def_label(__Compare___ssdb__next_stop_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i83);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i15) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i183) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i18));
MR_def_label(__Compare___ssdb__next_stop_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i151);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i119) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i179) MR_AND
		MR_LABEL_AP(__Compare___ssdb__next_stop_0_0_i122));
MR_def_label(__Compare___ssdb__next_stop_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i179);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i151);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
MR_def_label(__Compare___ssdb__next_stop_0_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i151);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i183);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
MR_def_label(__Compare___ssdb__next_stop_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module209)
	MR_init_entry1(__Unify___ssdb__pos_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__pos_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module210)
	MR_init_entry1(__Compare___ssdb__pos_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__pos_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module211)
	MR_init_entry1(__Unify___ssdb__ssdb_cmd_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__ssdb_cmd_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module212)
	MR_init_entry1(__Compare___ssdb__ssdb_cmd_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__ssdb_cmd_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module213)
	MR_init_entry1(__Unify___ssdb__ssdb_event_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__ssdb_event_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module214)
	MR_init_entry1(__Compare___ssdb__ssdb_event_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__ssdb_event_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module215)
	MR_init_entry1(__Unify___ssdb__ssdb_proc_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__ssdb_proc_id_0_0);
	MR_init_label2(__Unify___ssdb__ssdb_proc_id_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__ssdb_proc_id_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
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


MR_BEGIN_MODULE(ssdb_module216)
	MR_init_entry1(__Compare___ssdb__ssdb_proc_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__ssdb_proc_id_0_0);
	MR_init_label4(__Compare___ssdb__ssdb_proc_id_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
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


MR_BEGIN_MODULE(ssdb_module217)
	MR_init_entry1(__Unify___ssdb__ssdb_retry_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__ssdb_retry_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module218)
	MR_init_entry1(__Compare___ssdb__ssdb_retry_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__ssdb_retry_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module219)
	MR_init_entry1(__Unify___ssdb__stack_frame_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__stack_frame_0_0);
	MR_init_label3(__Unify___ssdb__stack_frame_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__stack_frame_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__stack_frame_0_0_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ssdb__stack_frame_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ssdb__stack_frame_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ssdb__stack_frame_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 4);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 6);
	MR_r1 = MR_tfield(0, MR_tempr3, 3);
	MR_r2 = MR_tfield(0, MR_tempr4, 3);
	}
	MR_np_call_localret_ent(__Unify___ssdb__ssdb_proc_id_0_0,
		__Unify___ssdb__stack_frame_0_0_i4);
MR_def_label(__Unify___ssdb__stack_frame_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ssdb__stack_frame_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(4)) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__stack_frame_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___ssdb__stack_frame_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ssdb__stack_frame_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__stack_frame_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module220)
	MR_init_entry1(__Compare___ssdb__stack_frame_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__stack_frame_0_0);
	MR_init_label9(__Compare___ssdb__stack_frame_0_0,3,2,5,9,13,17,21,25,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__stack_frame_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ssdb__stack_frame_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ssdb__stack_frame_0_0_i2);
MR_def_label(__Compare___ssdb__stack_frame_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ssdb__stack_frame_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__stack_frame_0_0_i5);
MR_def_label(__Compare___ssdb__stack_frame_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__stack_frame_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__stack_frame_0_0_i9);
MR_def_label(__Compare___ssdb__stack_frame_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__stack_frame_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__stack_frame_0_0_i13);
MR_def_label(__Compare___ssdb__stack_frame_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__stack_frame_0_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___ssdb__ssdb_proc_id_0_0,
		__Compare___ssdb__stack_frame_0_0_i17);
MR_def_label(__Compare___ssdb__stack_frame_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__stack_frame_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ssdb__stack_frame_0_0_i21);
MR_def_label(__Compare___ssdb__stack_frame_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__stack_frame_0_0_i61);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__stack_frame_0_0_i25);
MR_def_label(__Compare___ssdb__stack_frame_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__stack_frame_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, var_value);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ssdb__stack_frame_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module221)
	MR_init_entry1(__Unify___ssdb__var_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__var_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(ssdb_module222)
	MR_init_entry1(__Compare___ssdb__var_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__var_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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

MR_BEGIN_MODULE(ssdb_module223)
	MR_init_entry1(__Unify___ssdb__var_value_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__var_value_0_0);
	MR_init_label4(__Unify___ssdb__var_value_0_0,13,5,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i5);
	}
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_tempr3 = MR_tfield(2, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(2, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 2);
	MR_r4 = MR_tfield(2, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_0);
	}
MR_def_label(__Unify___ssdb__var_value_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ssdb__var_value_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	MR_r3 = MR_tfield(1, MR_tempr3, 3);
	MR_r4 = MR_tfield(1, MR_tempr4, 3);
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

MR_BEGIN_MODULE(ssdb_module224)
	MR_init_entry1(__Compare___ssdb__var_value_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__var_value_0_0);
	MR_init_label10(__Compare___ssdb__var_value_0_0,3,2,28,36,40,42,5,75,20,7)
	MR_init_label3(__Compare___ssdb__var_value_0_0,9,13,123)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	if (MR_PTAG_TEST(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i5);
	}
	if (MR_PTAG_TEST(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i36);
	}
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i20);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(2, MR_tempr5, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 0);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 1);
	MR_r2 = MR_tfield(2, MR_tempr4, 1);
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
MR_def_label(__Compare___ssdb__var_value_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i75);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i40);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ssdb__var_value_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
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
MR_def_label(__Compare___ssdb__var_value_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i7);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i20);
	}
MR_def_label(__Compare___ssdb__var_value_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ssdb__var_value_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ssdb__var_value_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 0);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 3);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 1);
	MR_r2 = MR_tfield(1, MR_tempr4, 1);
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


MR_BEGIN_MODULE(ssdb_module225)
	MR_init_entry1(__Unify___ssdb__what_next_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__what_next_0_0);
	MR_init_label7(__Unify___ssdb__what_next_0_0,7,12,21,9,17,23,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
		MR_LABEL_AP(__Unify___ssdb__what_next_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___ssdb__what_next_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___ssdb__what_next_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___ssdb__what_next_0_0_i21));
MR_def_label(__Unify___ssdb__what_next_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i9);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
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


MR_BEGIN_MODULE(ssdb_module226)
	MR_init_entry1(__Compare___ssdb__what_next_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__what_next_0_0);
	MR_init_label10(__Compare___ssdb__what_next_0_0,153,37,49,52,87,94,102,156,119,163)
	MR_init_label10(__Compare___ssdb__what_next_0_0,54,69,164,5,16,19,21,32,35,71)
	MR_init_label8(__Compare___ssdb__what_next_0_0,82,85,121,132,135,137,169,147)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__what_next_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i147);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i87) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i156));
MR_def_label(__Compare___ssdb__what_next_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(1)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i137) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i71) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i121) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i21));
MR_def_label(__Compare___ssdb__what_next_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i94) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i52));
MR_def_label(__Compare___ssdb__what_next_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169));
MR_def_label(__Compare___ssdb__what_next_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i169);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i94) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i102));
MR_def_label(__Compare___ssdb__what_next_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__what_next_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i169);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i54);
	}
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i119);
	}
	MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i164);
MR_def_label(__Compare___ssdb__what_next_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i169);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__what_next_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i69);
	}
	MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i164);
MR_def_label(__Compare___ssdb__what_next_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i163);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i16) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i19));
MR_def_label(__Compare___ssdb__what_next_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i147) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169));
MR_def_label(__Compare___ssdb__what_next_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i169);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i32) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i35));
MR_def_label(__Compare___ssdb__what_next_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),4)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i147);
	}
	MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i164);
MR_def_label(__Compare___ssdb__what_next_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i169);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i85));
MR_def_label(__Compare___ssdb__what_next_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i147) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169));
MR_def_label(__Compare___ssdb__what_next_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i169);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i132) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i135));
MR_def_label(__Compare___ssdb__what_next_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i147) MR_AND
		MR_LABEL_AP(__Compare___ssdb__what_next_0_0_i169));
MR_def_label(__Compare___ssdb__what_next_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i169);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i169);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i147);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module227)
	MR_init_entry1(fn__ssdb__IntroducedFrom__func__modify_breakpoint_states__2385__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ssdb__IntroducedFrom__func__modify_breakpoint_states__2385__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__modify_breakpoint_states__2385__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ssdb__IntroducedFrom__func__modify_breakpoint_states__2385__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module228)
	MR_init_entry1(ssdb__IntroducedFrom__pred__print_var_with_name__2607__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__IntroducedFrom__pred__print_var_with_name__2607__1_2_0);
	MR_init_label2(ssdb__IntroducedFrom__pred__print_var_with_name__2607__1_2_0,11,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__print_var_with_name__2607__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__IntroducedFrom__pred__print_var_with_name__2607__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__IntroducedFrom__pred__print_var_with_name__2607__1_2_0_i11);
	}
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__IntroducedFrom__pred__print_var_with_name__2607__1_2_0_i5);
	}
MR_def_label(ssdb__IntroducedFrom__pred__print_var_with_name__2607__1_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_mask_field(MR_tempr1, 1);
	MR_np_tailcall_ent(string__prefix_2_0);
	}
MR_def_label(ssdb__IntroducedFrom__pred__print_var_with_name__2607__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(string__prefix_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__io__make_io_error_1_0);
MR_decl_entry(string__to_char_list_2_0);

MR_BEGIN_MODULE(ssdb_module229)
	MR_init_entry1(ssdb__process_options__ho1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__process_options__ho1_5_0);
	MR_init_label10(ssdb__process_options__ho1_5_0,61,3,6,10,9,13,14,15,5,19)
	MR_init_label5(ssdb__process_options__ho1_5_0,21,24,26,18,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_options__ho1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__process_options__ho1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ssdb__process_options__ho1_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__process_options__ho1_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ssdb__process_options__ho1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("--", 2);
	}
	MR_np_call_localret_ent(string__prefix_2_0,
		ssdb__process_options__ho1_5_0_i6);
MR_def_label(ssdb__process_options__ho1_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_options__ho1_5_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__format_param_options_3_0,
		ssdb__process_options__ho1_5_0_i10);
MR_def_label(ssdb__process_options__ho1_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_options__ho1_5_0_i9);
	}
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ssdb__process_options__ho1_5_0_i61);
MR_def_label(ssdb__process_options__ho1_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__process_options__ho1_5_0_i13);
MR_def_label(ssdb__process_options__ho1_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognised option \140", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__process_options__ho1_5_0_i14);
MR_def_label(ssdb__process_options__ho1_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__io__make_io_error_1_0,
		ssdb__process_options__ho1_5_0_i15);
MR_def_label(ssdb__process_options__ho1_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(ssdb__process_options__ho1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("-", 1);
	MR_np_call_localret_ent(string__prefix_2_0,
		ssdb__process_options__ho1_5_0_i19);
MR_def_label(ssdb__process_options__ho1_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_options__ho1_5_0_i18);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ssdb__process_options__ho1_5_0_i21);
MR_def_label(ssdb__process_options__ho1_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__process_options__ho1_5_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__process_options__ho1_5_0_i18);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ssdb__process_short_options__ho6_4_0,
		ssdb__process_options__ho1_5_0_i24);
MR_def_label(ssdb__process_options__ho1_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__process_options__ho1_5_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ssdb__process_options__ho1_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ssdb__process_options__ho1_5_0_i61);
	}
MR_def_label(ssdb__process_options__ho1_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(ssdb__process_options__ho1_5_0,
		ssdb__process_options__ho1_5_0_i28);
MR_def_label(ssdb__process_options__ho1_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module230)
	MR_init_entry1(ssdb__process_options__ho2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__process_options__ho2_5_0);
	MR_init_label10(ssdb__process_options__ho2_5_0,61,3,6,10,9,13,14,15,5,19)
	MR_init_label5(ssdb__process_options__ho2_5_0,21,24,26,18,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_options__ho2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__process_options__ho2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ssdb__process_options__ho2_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__process_options__ho2_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ssdb__process_options__ho2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("--", 2);
	}
	MR_np_call_localret_ent(string__prefix_2_0,
		ssdb__process_options__ho2_5_0_i6);
MR_def_label(ssdb__process_options__ho2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_options__ho2_5_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__format_options_3_0,
		ssdb__process_options__ho2_5_0_i10);
MR_def_label(ssdb__process_options__ho2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_options__ho2_5_0_i9);
	}
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ssdb__process_options__ho2_5_0_i61);
MR_def_label(ssdb__process_options__ho2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__process_options__ho2_5_0_i13);
MR_def_label(ssdb__process_options__ho2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognised option \140", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__process_options__ho2_5_0_i14);
MR_def_label(ssdb__process_options__ho2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__io__make_io_error_1_0,
		ssdb__process_options__ho2_5_0_i15);
MR_def_label(ssdb__process_options__ho2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(ssdb__process_options__ho2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("-", 1);
	MR_np_call_localret_ent(string__prefix_2_0,
		ssdb__process_options__ho2_5_0_i19);
MR_def_label(ssdb__process_options__ho2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_options__ho2_5_0_i18);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ssdb__process_options__ho2_5_0_i21);
MR_def_label(ssdb__process_options__ho2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__process_options__ho2_5_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__process_options__ho2_5_0_i18);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ssdb__process_short_options__ho5_4_0,
		ssdb__process_options__ho2_5_0_i24);
MR_def_label(ssdb__process_options__ho2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__process_options__ho2_5_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ssdb__process_options__ho2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ssdb__process_options__ho2_5_0_i61);
	}
MR_def_label(ssdb__process_options__ho2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(ssdb__process_options__ho2_5_0,
		ssdb__process_options__ho2_5_0_i28);
MR_def_label(ssdb__process_options__ho2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module231)
	MR_init_entry1(ssdb__process_options__ho3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__process_options__ho3_5_0);
	MR_init_label10(ssdb__process_options__ho3_5_0,61,3,6,10,9,13,14,15,5,19)
	MR_init_label5(ssdb__process_options__ho3_5_0,21,24,26,18,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_options__ho3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__process_options__ho3_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ssdb__process_options__ho3_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__process_options__ho3_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ssdb__process_options__ho3_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("--", 2);
	}
	MR_np_call_localret_ent(string__prefix_2_0,
		ssdb__process_options__ho3_5_0_i6);
MR_def_label(ssdb__process_options__ho3_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_options__ho3_5_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,
		ssdb__process_options__ho3_5_0_i10);
MR_def_label(ssdb__process_options__ho3_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_options__ho3_5_0_i9);
	}
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ssdb__process_options__ho3_5_0_i61);
MR_def_label(ssdb__process_options__ho3_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__process_options__ho3_5_0_i13);
MR_def_label(ssdb__process_options__ho3_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognised option \140", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__process_options__ho3_5_0_i14);
MR_def_label(ssdb__process_options__ho3_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__io__make_io_error_1_0,
		ssdb__process_options__ho3_5_0_i15);
MR_def_label(ssdb__process_options__ho3_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(ssdb__process_options__ho3_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("-", 1);
	MR_np_call_localret_ent(string__prefix_2_0,
		ssdb__process_options__ho3_5_0_i19);
MR_def_label(ssdb__process_options__ho3_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_options__ho3_5_0_i18);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ssdb__process_options__ho3_5_0_i21);
MR_def_label(ssdb__process_options__ho3_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__process_options__ho3_5_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ssdb__process_options__ho3_5_0_i18);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ssdb__process_short_options__ho4_4_0,
		ssdb__process_options__ho3_5_0_i24);
MR_def_label(ssdb__process_options__ho3_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__process_options__ho3_5_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ssdb__process_options__ho3_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ssdb__process_options__ho3_5_0_i61);
	}
MR_def_label(ssdb__process_options__ho3_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(ssdb__process_options__ho3_5_0,
		ssdb__process_options__ho3_5_0_i28);
MR_def_label(ssdb__process_options__ho3_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__from_char_list_1_0);

MR_BEGIN_MODULE(ssdb_module232)
	MR_init_entry1(ssdb__process_short_options__ho4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__process_short_options__ho4_4_0);
	MR_init_label8(ssdb__process_short_options__ho4_4_0,27,3,7,10,8,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_short_options__ho4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__process_short_options__ho4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ssdb__process_short_options__ho4_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__process_short_options__ho4_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__process_short_options__ho4_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 45;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		ssdb__process_short_options__ho4_4_0_i7);
MR_def_label(ssdb__process_short_options__ho4_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,
		ssdb__process_short_options__ho4_4_0_i10);
MR_def_label(ssdb__process_short_options__ho4_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_short_options__ho4_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ssdb__process_short_options__ho4_4_0_i27);
MR_def_label(ssdb__process_short_options__ho4_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__process_short_options__ho4_4_0_i13);
MR_def_label(ssdb__process_short_options__ho4_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognised option \140", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__process_short_options__ho4_4_0_i14);
MR_def_label(ssdb__process_short_options__ho4_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__io__make_io_error_1_0,
		ssdb__process_short_options__ho4_4_0_i15);
MR_def_label(ssdb__process_short_options__ho4_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module233)
	MR_init_entry1(ssdb__process_short_options__ho5_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__process_short_options__ho5_4_0);
	MR_init_label8(ssdb__process_short_options__ho5_4_0,27,3,7,10,8,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_short_options__ho5'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__process_short_options__ho5_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ssdb__process_short_options__ho5_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__process_short_options__ho5_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__process_short_options__ho5_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 45;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		ssdb__process_short_options__ho5_4_0_i7);
MR_def_label(ssdb__process_short_options__ho5_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__format_options_3_0,
		ssdb__process_short_options__ho5_4_0_i10);
MR_def_label(ssdb__process_short_options__ho5_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_short_options__ho5_4_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ssdb__process_short_options__ho5_4_0_i27);
MR_def_label(ssdb__process_short_options__ho5_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__process_short_options__ho5_4_0_i13);
MR_def_label(ssdb__process_short_options__ho5_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognised option \140", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__process_short_options__ho5_4_0_i14);
MR_def_label(ssdb__process_short_options__ho5_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__io__make_io_error_1_0,
		ssdb__process_short_options__ho5_4_0_i15);
MR_def_label(ssdb__process_short_options__ho5_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module234)
	MR_init_entry1(ssdb__process_short_options__ho6_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__process_short_options__ho6_4_0);
	MR_init_label8(ssdb__process_short_options__ho6_4_0,27,3,7,10,8,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_short_options__ho6'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__process_short_options__ho6_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ssdb__process_short_options__ho6_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__process_short_options__ho6_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__process_short_options__ho6_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 45;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		ssdb__process_short_options__ho6_4_0_i7);
MR_def_label(ssdb__process_short_options__ho6_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__format_param_options_3_0,
		ssdb__process_short_options__ho6_4_0_i10);
MR_def_label(ssdb__process_short_options__ho6_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_short_options__ho6_4_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ssdb__process_short_options__ho6_4_0_i27);
MR_def_label(ssdb__process_short_options__ho6_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__process_short_options__ho6_4_0_i13);
MR_def_label(ssdb__process_short_options__ho6_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unrecognised option \140", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__process_short_options__ho6_4_0_i14);
MR_def_label(ssdb__process_short_options__ho6_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__io__make_io_error_1_0,
		ssdb__process_short_options__ho6_4_0_i15);
MR_def_label(ssdb__process_short_options__ho6_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module235)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0);
	MR_init_label10(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,3,5,4,7,9,12,13,14,15,16)
	MR_init_label4(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,11,18,19,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__handle_event_fail__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 2950 "ssdb.m"

;}
#line 23780 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 23792 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 309 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;
;}
#line 23802 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 23815 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i2);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 23834 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 253 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 23844 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 23857 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 23869 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r4 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_r4;
{
#line 253 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 23881 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 23893 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 23905 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 23915 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 23928 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i5);
	}
	MR_r6 = MR_r4;
	MR_r4 = MR_r1;
	MR_r2 = MR_r6;
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_r3, 0), 1);
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i4);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_top on empty stack", 30);
	}
	MR_np_call_localret_ent(require__error_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i4);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i7);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i9);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i19);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i11);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 23977 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 298 "ssdb.m"
X = ssdb__mutable_variable_tty_in;
;}
#line 23987 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 24000 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 24012 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 300 "ssdb.m"
X = ssdb__mutable_variable_tty_out;
;}
#line 24024 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 24037 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i12);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 24065 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_sv(3);
{
#line 303 "ssdb.m"
ssdb__mutable_variable_saved_input_stream = X;
;}
#line 24076 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 24088 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 24100 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_r1;
{
#line 305 "ssdb.m"
ssdb__mutable_variable_saved_output_stream = X;
;}
#line 24111 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 24123 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i14);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_5_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i15);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ssdb__restore_streams_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i16);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i18);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr2 = MR_sv(2);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i18);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i19);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 2978 "ssdb.m"

;}
#line 24177 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module236)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0);
	MR_init_label10(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,3,5,4,7,9,12,13,14,15,16)
	MR_init_label5(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,11,18,19,20,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__handle_event_fail_nondet__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 2950 "ssdb.m"

;}
#line 24211 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 24223 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 309 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;
;}
#line 24233 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 24246 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i2);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 24265 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 253 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 24275 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 24288 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 24300 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r4 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_r4;
{
#line 253 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 24312 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 24324 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 24336 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 268 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 24346 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 268 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 24359 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i5);
	}
	MR_r6 = MR_r4;
	MR_r4 = MR_r1;
	MR_r2 = MR_r6;
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_r3, 0), 1);
	MR_r1 = (MR_Integer) 6;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i4);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_top on empty stack", 30);
	}
	MR_np_call_localret_ent(require__error_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i4);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i7);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i9);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i19);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i11);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 24408 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 298 "ssdb.m"
X = ssdb__mutable_variable_tty_in;
;}
#line 24418 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 298 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 24431 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 24443 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 300 "ssdb.m"
X = ssdb__mutable_variable_tty_out;
;}
#line 24455 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 300 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 24468 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i12);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 24496 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_sv(3);
{
#line 303 "ssdb.m"
ssdb__mutable_variable_saved_input_stream = X;
;}
#line 24507 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 303 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 24519 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 24531 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_r1;
{
#line 305 "ssdb.m"
ssdb__mutable_variable_saved_output_stream = X;
;}
#line 24542 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 24554 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 6;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i14);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_5_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i15);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ssdb__restore_streams_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i16);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i18);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr2 = MR_sv(2);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i18);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i19);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__nondet_stack_pop_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i20);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 2978 "ssdb.m"

;}
#line 24612 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module237)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0);
	MR_init_label10(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,4,6,5,8,9,12,13,14,15,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__handle_event_redo_nondet__[2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 2950 "ssdb.m"

;}
#line 24645 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 24657 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 309 "ssdb.m"
X = ssdb__mutable_variable_debugger_state;
;}
#line 24667 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 309 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_debugger_state_lock,
                "ssdb__mutable_variable_debugger_state_lock");
#endif
;}
#line 24680 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 24695 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 253 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 24707 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 24720 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 24732 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
	X = MR_tempr2;
{
#line 253 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 24744 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 253 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 24756 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 24768 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 270 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 24778 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 270 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 24791 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 24803 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 275 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack_depth;
;}
#line 24813 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 275 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 24826 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ssdb__search_nondet_stack_frame_2_7_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i4);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: lookup_nondet_stack_frame", 31);
	MR_np_call_localret_ent(require__error_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ssdb__stack_push_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i8);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_sv(3), 1);
	MR_r1 = (MR_Integer) 5;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i9);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i2);
	}
	MR_np_call_localret_ent(ssdb__save_streams_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i12);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i13);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_5_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i14);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i15);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__restore_streams_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i2);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 2978 "ssdb.m"

;}
#line 24908 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module238)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0);
	MR_init_label7(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,3,23,5,14,16,18,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__print_options__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 15);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r3 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_10_2)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i5);
	}
	MR_r3 = ((MR_Word *) &mercury_vector_common_10_2)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i23) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i16) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i20) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i14) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i20) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i23) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i18) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i23) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i23) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i14) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i23) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i23) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i23) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i16) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i23) MR_AND
		MR_LABEL_AP(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i18));
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,11,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,11,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,11,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module239)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_0);
	MR_init_label1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__safe_to_write__[1]_0'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	T;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	T = MR_r1;
{
#line 2687 "ssdb.m"

    SUCCESS_INDICATOR = (T != 0);
;}
#line 25025 "ssdb.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 309 "ssdb.m"
MR_Word ssdb__mutable_variable_debugger_state;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_debugger_state_lock;
#endif

#line 25048 "ssdb.c"
#line 305 "ssdb.m"
MR_Word ssdb__mutable_variable_saved_output_stream;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_saved_output_stream_lock;
#endif

#line 25055 "ssdb.c"
#line 303 "ssdb.m"
MR_Word ssdb__mutable_variable_saved_input_stream;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_saved_input_stream_lock;
#endif

#line 25062 "ssdb.c"
#line 300 "ssdb.m"
MR_Word ssdb__mutable_variable_tty_out;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_tty_out_lock;
#endif

#line 25069 "ssdb.c"
#line 298 "ssdb.m"
MR_Word ssdb__mutable_variable_tty_in;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_tty_in_lock;
#endif

#line 25076 "ssdb.c"
#line 289 "ssdb.m"
MR_Word ssdb__mutable_variable_list_params;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_list_params_lock;
#endif

#line 25083 "ssdb.c"
#line 280 "ssdb.m"
MR_Word ssdb__mutable_variable_browser_state;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_browser_state_lock;
#endif

#line 25090 "ssdb.c"
#line 275 "ssdb.m"
MR_Word ssdb__mutable_variable_nondet_shadow_stack_depth;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_nondet_shadow_stack_depth_lock;
#endif

#line 25097 "ssdb.c"
#line 273 "ssdb.m"
MR_Word ssdb__mutable_variable_nondet_shadow_stack;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_nondet_shadow_stack_lock;
#endif

#line 25104 "ssdb.c"
#line 270 "ssdb.m"
MR_Word ssdb__mutable_variable_shadow_stack_depth;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_shadow_stack_depth_lock;
#endif

#line 25111 "ssdb.c"
#line 268 "ssdb.m"
MR_Word ssdb__mutable_variable_shadow_stack;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_shadow_stack_lock;
#endif

#line 25118 "ssdb.c"
#line 265 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_number_of_breakpoint;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_number_of_breakpoint_lock;
#endif

#line 25125 "ssdb.c"
#line 262 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_breakpoints;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_breakpoints_lock;
#endif

#line 25132 "ssdb.c"
#line 259 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_next_stop;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_next_stop_lock;
#endif

#line 25139 "ssdb.c"
#line 256 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_csn;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_csn_lock;
#endif

#line 25146 "ssdb.c"
#line 253 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_event_number;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_event_number_lock;
#endif

#line 25153 "ssdb.c"
#line 250 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_line_number;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_line_number_lock;
#endif

#line 25160 "ssdb.c"
#line 248 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_filename;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_filename_lock;
#endif

#line 25167 "ssdb.c"
#line 367 "ssdb.m"

static void MR_ssdb_sigint_handler(void)
{
    SSDB_step_next_stop();
}

#line 25175 "ssdb.c"

MR_declare_static(mercury__ssdb__step_next_stop_2_0);

void
SSDB_step_next_stop(void);

void
SSDB_step_next_stop(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__step_next_stop_2_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__step_next_stop_2_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_debugger_state_0_0);

void
ssdb__user_init_pred_17(void);

void
ssdb__user_init_pred_17(void)
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


MR_declare_static(mercury__ssdb__initialise_mutable_saved_output_stream_0_0);

void
ssdb__user_init_pred_16(void);

void
ssdb__user_init_pred_16(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_saved_output_stream_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_saved_output_stream_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_saved_input_stream_0_0);

void
ssdb__user_init_pred_15(void);

void
ssdb__user_init_pred_15(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_saved_input_stream_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_saved_input_stream_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_tty_out_0_0);

void
ssdb__user_init_pred_14(void);

void
ssdb__user_init_pred_14(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_tty_out_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_tty_out_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_tty_in_0_0);

void
ssdb__user_init_pred_13(void);

void
ssdb__user_init_pred_13(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_tty_in_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_tty_in_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_list_params_0_0);

void
ssdb__user_init_pred_12(void);

void
ssdb__user_init_pred_12(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_list_params_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_list_params_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_browser_state_0_0);

void
ssdb__user_init_pred_11(void);

void
ssdb__user_init_pred_11(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_browser_state_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_browser_state_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0);

void
ssdb__user_init_pred_10(void);

void
ssdb__user_init_pred_10(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_nondet_shadow_stack_0_0);

void
ssdb__user_init_pred_9(void);

void
ssdb__user_init_pred_9(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_nondet_shadow_stack_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_nondet_shadow_stack_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_shadow_stack_depth_0_0);

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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_shadow_stack_depth_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_shadow_stack_depth_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_shadow_stack_0_0);

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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_shadow_stack_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_shadow_stack_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0);

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


MR_declare_static(mercury__ssdb__initialise_mutable_cur_line_number_0_0);

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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_line_number_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_line_number_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_cur_filename_0_0);

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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_filename_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_cur_filename_0_0), MR_FALSE);
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
	ssdb_module153();
	ssdb_module154();
	ssdb_module155();
	ssdb_module156();
	ssdb_module157();
	ssdb_module158();
	ssdb_module159();
}

static void mercury__ssdb_maybe_bunch_4(void)
{
	ssdb_module160();
	ssdb_module161();
	ssdb_module162();
	ssdb_module163();
	ssdb_module164();
	ssdb_module165();
	ssdb_module166();
	ssdb_module167();
	ssdb_module168();
	ssdb_module169();
	ssdb_module170();
	ssdb_module171();
	ssdb_module172();
	ssdb_module173();
	ssdb_module174();
	ssdb_module175();
	ssdb_module176();
	ssdb_module177();
	ssdb_module178();
	ssdb_module179();
	ssdb_module180();
	ssdb_module181();
	ssdb_module182();
	ssdb_module183();
	ssdb_module184();
	ssdb_module185();
	ssdb_module186();
	ssdb_module187();
	ssdb_module188();
	ssdb_module189();
	ssdb_module190();
	ssdb_module191();
	ssdb_module192();
	ssdb_module193();
	ssdb_module194();
	ssdb_module195();
	ssdb_module196();
	ssdb_module197();
	ssdb_module198();
	ssdb_module199();
}

static void mercury__ssdb_maybe_bunch_5(void)
{
	ssdb_module200();
	ssdb_module201();
	ssdb_module202();
	ssdb_module203();
	ssdb_module204();
	ssdb_module205();
	ssdb_module206();
	ssdb_module207();
	ssdb_module208();
	ssdb_module209();
	ssdb_module210();
	ssdb_module211();
	ssdb_module212();
	ssdb_module213();
	ssdb_module214();
	ssdb_module215();
	ssdb_module216();
	ssdb_module217();
	ssdb_module218();
	ssdb_module219();
	ssdb_module220();
	ssdb_module221();
	ssdb_module222();
	ssdb_module223();
	ssdb_module224();
	ssdb_module225();
	ssdb_module226();
	ssdb_module227();
	ssdb_module228();
	ssdb_module229();
	ssdb_module230();
	ssdb_module231();
	ssdb_module232();
	ssdb_module233();
	ssdb_module234();
	ssdb_module235();
	ssdb_module236();
	ssdb_module237();
	ssdb_module238();
	ssdb_module239();
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
	mercury__ssdb_maybe_bunch_4();
	mercury__ssdb_maybe_bunch_5();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_bp_state_0,
		ssdb__bp_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_breakpoint_0,
		ssdb__breakpoint_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_cur_ssdb_breakpoints_0,
		ssdb__cur_ssdb_breakpoints_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_debugger_state_0,
		ssdb__debugger_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_format_config_0,
		ssdb__format_config_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_list_params_0,
		ssdb__list_params_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_list_var_value_0,
		ssdb__list_var_value_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_next_stop_0,
		ssdb__next_stop_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_pos_0,
		ssdb__pos_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_ssdb_cmd_0,
		ssdb__ssdb_cmd_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_ssdb_event_type_0,
		ssdb__ssdb_event_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0,
		ssdb__ssdb_proc_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_ssdb_retry_0,
		ssdb__ssdb_retry_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_stack_frame_0,
		ssdb__stack_frame_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_var_name_0,
		ssdb__var_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_var_value_0,
		ssdb__var_value_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_what_next_0,
		ssdb__what_next_0_0);
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
		&mercury_data_ssdb__type_ctor_info_bp_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_breakpoint_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_cur_ssdb_breakpoints_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_debugger_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_format_config_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_list_params_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_list_var_value_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_next_stop_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_pos_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_ssdb_cmd_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_ssdb_event_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_ssdb_retry_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_stack_frame_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_var_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_var_value_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_what_next_0);
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
	ssdb__user_init_pred_9();
	ssdb__user_init_pred_10();
	ssdb__user_init_pred_11();
	ssdb__user_init_pred_12();
	ssdb__user_init_pred_13();
	ssdb__user_init_pred_14();
	ssdb__user_init_pred_15();
	ssdb__user_init_pred_16();
	ssdb__user_init_pred_17();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
