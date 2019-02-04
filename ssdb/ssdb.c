/*
** Automatically generated from `ssdb.m'
** by the Mercury compiler,
** version rotd-2011-08-21, configured for x86_64-unknown-linux-gnu.
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
#line 526 "../library/io.int"
#include "io.mh"

#line 33 "ssdb.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 37 "ssdb.c"
#line 151 "../library/bitmap.int"
#include "bitmap.mh"

#line 41 "ssdb.c"
#line 58 "../library/dir.int"
#include "dir.mh"

#line 45 "ssdb.c"
#line 31 "../browser/mdb.listing.int"
#include "mdb.listing.mh"

#line 49 "ssdb.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 53 "ssdb.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 57 "ssdb.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 61 "ssdb.c"
#line 62 "ssdb.c"
#ifndef SSDB_DECL_GUARD
#define SSDB_DECL_GUARD

#line 66 "ssdb.c"
#line 160 "ssdb.m"

    #include "mercury_signal.h"
    static void MR_ssdb_sigint_handler(void);

#line 72 "ssdb.c"
#line 278 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_String ssdb__mutable_variable_cur_filename;
#else
    extern MR_Word ssdb__mutable_variable_cur_filename;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_filename_lock;
#endif

#line 83 "ssdb.c"
#line 280 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_cur_line_number;
#else
    extern MR_Word ssdb__mutable_variable_cur_line_number;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_line_number_lock;
#endif

#line 94 "ssdb.c"
#line 283 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_cur_ssdb_event_number;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_event_number;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_event_number_lock;
#endif

#line 105 "ssdb.c"
#line 286 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_cur_ssdb_csn;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_csn;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_csn_lock;
#endif

#line 116 "ssdb.c"
#line 289 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_cur_ssdb_next_stop;
#else
    extern MR_Word ssdb__mutable_variable_cur_ssdb_next_stop;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_cur_ssdb_next_stop_lock;
#endif

#line 127 "ssdb.c"
#line 292 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_shadow_stack;
#else
    extern MR_Word ssdb__mutable_variable_shadow_stack;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_shadow_stack_lock;
#endif

#line 138 "ssdb.c"
#line 294 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_shadow_stack_depth;
#else
    extern MR_Word ssdb__mutable_variable_shadow_stack_depth;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_shadow_stack_depth_lock;
#endif

#line 149 "ssdb.c"
#line 297 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_nondet_shadow_stack;
#else
    extern MR_Word ssdb__mutable_variable_nondet_shadow_stack;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_nondet_shadow_stack_lock;
#endif

#line 160 "ssdb.c"
#line 299 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer ssdb__mutable_variable_nondet_shadow_stack_depth;
#else
    extern MR_Word ssdb__mutable_variable_nondet_shadow_stack_depth;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_nondet_shadow_stack_depth_lock;
#endif

#line 171 "ssdb.c"
#line 302 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_command_queue;
#else
    extern MR_Word ssdb__mutable_variable_command_queue;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_command_queue_lock;
#endif

#line 182 "ssdb.c"
#line 305 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_aliases;
#else
    extern MR_Word ssdb__mutable_variable_aliases;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_aliases_lock;
#endif

#line 193 "ssdb.c"
#line 308 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_breakpoints_map;
#else
    extern MR_Word ssdb__mutable_variable_breakpoints_map;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_breakpoints_map_lock;
#endif

#line 204 "ssdb.c"
#line 310 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_BitmapPtr ssdb__mutable_variable_breakpoints_filter;
#else
    extern MR_Word ssdb__mutable_variable_breakpoints_filter;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_breakpoints_filter_lock;
#endif

#line 215 "ssdb.c"
#line 315 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_browser_state;
#else
    extern MR_Word ssdb__mutable_variable_browser_state;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_browser_state_lock;
#endif

#line 226 "ssdb.c"
#line 324 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_list_params;
#else
    extern MR_Word ssdb__mutable_variable_list_params;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_list_params_lock;
#endif

#line 237 "ssdb.c"
#line 333 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_tty_in;
#else
    extern MR_Word ssdb__mutable_variable_tty_in;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_tty_in_lock;
#endif

#line 248 "ssdb.c"
#line 335 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_tty_out;
#else
    extern MR_Word ssdb__mutable_variable_tty_out;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_tty_out_lock;
#endif

#line 259 "ssdb.c"
#line 338 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_saved_input_stream;
#else
    extern MR_Word ssdb__mutable_variable_saved_input_stream;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_saved_input_stream_lock;
#endif

#line 270 "ssdb.c"
#line 340 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ssdb__mutable_variable_saved_output_stream;
#else
    extern MR_Word ssdb__mutable_variable_saved_output_stream;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ssdb__mutable_variable_saved_output_stream_lock;
#endif

#line 281 "ssdb.c"
#line 348 "ssdb.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Unsigned ssdb__mutable_variable_debugger_state;
#else
    extern MR_Unsigned ssdb__mutable_variable_debugger_state;
#endif

#line 289 "ssdb.c"
#line 290 "ssdb.c"

#endif
#line 293 "ssdb.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
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

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ssdb__type_ctor_info_bp_state_0,
	mercury_data_ssdb__type_ctor_info_breakpoint_0,
	mercury_data_ssdb__type_ctor_info_breakpoints_map_0,
	mercury_data_ssdb__type_ctor_info_debugger_state_0,
	mercury_data_ssdb__type_ctor_info_debugging_paused_0,
	mercury_data_ssdb__type_ctor_info_format_config_0,
	mercury_data_ssdb__type_ctor_info_list_params_0,
	mercury_data_ssdb__type_ctor_info_list_var_value_0,
	mercury_data_ssdb__type_ctor_info_next_stop_0,
	mercury_data_ssdb__type_ctor_info_pos_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ssdb__type_ctor_info_ssdb_cmd_0,
	mercury_data_ssdb__type_ctor_info_ssdb_event_type_0,
	mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0,
	mercury_data_ssdb__type_ctor_info_ssdb_retry_0,
	mercury_data_ssdb__type_ctor_info_stack_frame_0,
	mercury_data_ssdb__type_ctor_info_var_name_0,
	mercury_data_ssdb__type_ctor_info_var_value_0,
	mercury_data_ssdb__type_ctor_info_what_next_0;
MR_decl_label2(ssdb__IntroducedFrom__pred__print_var_with_name__3014__1_2_0, 3,4)
MR_decl_label10(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0, 2,4,6,5,8,10,13,14,15,16)
MR_decl_label6(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0, 17,18,12,20,3,22)
MR_decl_label10(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0, 2,4,6,5,8,10,13,14,15,16)
MR_decl_label7(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0, 17,18,12,20,21,3,23)
MR_decl_label10(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0, 2,5,7,6,9,10,13,14,15,16)
MR_decl_label1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0, 3)
MR_decl_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0, 3,5,7,9,11,13,15,1)
MR_decl_label1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_102_101_95_116_111_95_119_114_105_116_101_95_95_91_49_93_95_48_1_0, 1)
MR_decl_label8(ssdb__add_breakpoint_3_0, 3,2,6,8,9,10,12,13)
MR_decl_label10(ssdb__add_source_commands_2_0, 2,4,6,8,11,13,10,14,18,15)
MR_decl_label10(ssdb__browse_var_4_0, 3,6,9,16,15,5,2,25,26,29)
MR_decl_label3(ssdb__browse_var_4_0, 30,31,24)
MR_decl_label4(ssdb__compress_stack_frames_4_0, 18,3,5,4)
MR_decl_label9(ssdb__delete_breakpoint_3_0, 6,4,7,8,9,11,13,14,15)
MR_decl_label3(ssdb__exception_handler_exists_2_0, 3,5,2)
MR_decl_label10(ssdb__execute_cmd_8_0, 3,6,9,12,16,14,20,23,26,29)
MR_decl_label10(ssdb__execute_cmd_8_0, 32,34,36,39,42,44,47,50,53,56)
MR_decl_label10(ssdb__execute_cmd_8_0, 59,61,64,67,70,73,75,77,80,293)
MR_decl_label4(ssdb__execute_cmd_8_0, 85,89,88,91)
MR_decl_label10(ssdb__execute_cmd_string_8_0, 4,5,6,7,8,9,10,11,12,13)
MR_decl_label10(ssdb__execute_cmd_string_8_0, 14,15,16,17,18,19,20,21,22,23)
MR_decl_label10(ssdb__execute_cmd_string_8_0, 24,25,26,27,28,29,30,31,32,33)
MR_decl_label5(ssdb__execute_cmd_string_8_0, 34,236,37,38,39)
MR_decl_label10(ssdb__execute_ssdb_alias_4_0, 283,11,9,8,18,19,20,21,22,23)
MR_decl_label10(ssdb__execute_ssdb_alias_4_0, 24,25,26,27,28,29,30,31,32,33)
MR_decl_label10(ssdb__execute_ssdb_alias_4_0, 34,35,36,37,38,39,40,41,42,43)
MR_decl_label10(ssdb__execute_ssdb_alias_4_0, 44,45,46,47,48,17,51,16,55,281)
MR_decl_label1(ssdb__execute_ssdb_alias_4_0, 282)
MR_decl_label10(ssdb__execute_ssdb_break_3_0, 3,10,9,13,14,7,20,21,22,25)
MR_decl_label3(ssdb__execute_ssdb_break_3_0, 26,18,6)
MR_decl_label7(ssdb__execute_ssdb_browse_4_0, 2,5,7,8,9,4,11)
MR_decl_label2(ssdb__execute_ssdb_continue_6_0, 16,4)
MR_decl_label10(ssdb__execute_ssdb_delete_3_0, 3,10,9,13,14,16,18,19,7,21)
MR_decl_label2(ssdb__execute_ssdb_delete_3_0, 20,6)
MR_decl_label10(ssdb__execute_ssdb_disable_3_0, 3,10,11,13,15,14,18,19,7,24)
MR_decl_label2(ssdb__execute_ssdb_disable_3_0, 23,76)
MR_decl_label10(ssdb__execute_ssdb_enable_3_0, 3,10,11,13,15,14,18,19,7,24)
MR_decl_label2(ssdb__execute_ssdb_enable_3_0, 23,76)
MR_decl_label2(ssdb__execute_ssdb_exception_6_0, 16,4)
MR_decl_label10(ssdb__execute_ssdb_finish_6_0, 6,7,5,10,4,3,19,22,21,18)
MR_decl_label2(ssdb__execute_ssdb_finish_6_0, 17,32)
MR_decl_label10(ssdb__execute_ssdb_format_3_0, 2,5,6,7,4,13,14,15,12,18)
MR_decl_label1(ssdb__execute_ssdb_format_3_0, 9)
MR_decl_label10(ssdb__execute_ssdb_format_param_3_0, 2,5,6,7,4,14,17,19,21,16)
MR_decl_label2(ssdb__execute_ssdb_format_param_3_0, 25,10)
MR_decl_label6(ssdb__execute_ssdb_goto_6_0, 3,9,11,8,7,19)
MR_decl_label2(ssdb__execute_ssdb_help_3_0, 5,3)
MR_decl_label7(ssdb__execute_ssdb_level_5_0, 3,8,10,12,7,6,19)
MR_decl_label9(ssdb__execute_ssdb_list_4_0, 4,5,8,9,10,3,16,15,14)
MR_decl_label5(ssdb__execute_ssdb_list_2_4_0, 2,3,6,7,8)
MR_decl_label7(ssdb__execute_ssdb_list_context_lines_3_0, 4,5,35,3,11,10,9)
MR_decl_label6(ssdb__execute_ssdb_list_path_3_0, 4,6,8,10,3,12)
MR_decl_label6(ssdb__execute_ssdb_next_6_0, 6,7,5,4,3,12)
MR_decl_label2(ssdb__execute_ssdb_pop_list_dir_3_0, 4,3)
MR_decl_label10(ssdb__execute_ssdb_print_4_0, 2,5,6,7,4,9,12,10,20,15)
MR_decl_label1(ssdb__execute_ssdb_print_4_0, 23)
MR_decl_label2(ssdb__execute_ssdb_push_list_dir_3_0, 18,6)
MR_decl_label10(ssdb__execute_ssdb_quit_4_0, 6,7,8,10,11,16,18,14,3,21)
MR_decl_label2(ssdb__execute_ssdb_quit_4_0, 62,61)
MR_decl_label6(ssdb__execute_ssdb_retry_6_0, 57,8,10,7,6,20)
MR_decl_label6(ssdb__execute_ssdb_retry_2_6_0, 2,5,7,4,10,12)
MR_decl_label3(ssdb__execute_ssdb_return_6_0, 27,26,8)
MR_decl_label10(ssdb__execute_ssdb_source_3_0, 5,8,9,10,11,7,13,14,15,16)
MR_decl_label1(ssdb__execute_ssdb_source_3_0, 2)
MR_decl_label4(ssdb__execute_ssdb_stack_4_0, 4,3,9,7)
MR_decl_label5(ssdb__execute_ssdb_step_6_0, 42,7,4,5,10)
MR_decl_label6(ssdb__execute_ssdb_unalias_4_0, 7,5,14,46,2,48)
MR_decl_label10(ssdb__execute_ssdb_up_down_6_0, 4,6,3,14,16,18,20,13,12,25)
MR_decl_label2(ssdb__execute_ssdb_vars_4_0, 4,3)
MR_decl_label10(ssdb__expand_alias_and_execute_7_0, 6,4,3,13,16,19,12,23,26,21)
MR_decl_label2(ssdb__first_unseen_3_0, 9,3)
MR_decl_label3(ssdb__format_options_3_0, 3,5,1)
MR_decl_label7(ssdb__format_param_options_3_0, 3,5,7,9,11,13,1)
MR_decl_label7(ssdb__handle_event_call_2_0, 2,7,10,11,12,13,3)
MR_decl_label8(ssdb__handle_event_call_nondet_2_0, 2,7,8,11,12,13,14,3)
MR_decl_label10(ssdb__handle_event_exit_3_0, 2,4,6,5,8,10,14,13,18,19)
MR_decl_label6(ssdb__handle_event_exit_3_0, 20,21,12,23,3,25)
MR_decl_label10(ssdb__handle_event_exit_nondet_2_0, 2,6,5,8,14,13,18,19,20,21)
MR_decl_label3(ssdb__handle_event_exit_nondet_2_0, 12,9,3)
MR_decl_label10(ssdb__init_debugger_state_2_0, 2,3,7,6,12,14,15,10,18,19)
MR_decl_label2(ssdb__init_debugger_state_2_0, 31,20)
MR_decl_label1(ssdb__initialise_mutable_aliases_0_0, 3)
MR_decl_label1(ssdb__initialise_mutable_breakpoints_filter_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_breakpoints_map_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_browser_state_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_list_params_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_saved_input_stream_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_saved_output_stream_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_tty_in_0_0, 2)
MR_decl_label1(ssdb__initialise_mutable_tty_out_0_0, 2)
MR_decl_label1(ssdb__is_same_int_3_0, 2)
MR_decl_label10(ssdb__list_var_value_to_assoc_list_2_0, 35,3,6,7,8,5,11,12,13,10)
MR_decl_label10(ssdb__make_arg_univs_3_0, 53,3,7,6,10,11,5,14,16,18)
MR_decl_label1(ssdb__make_arg_univs_3_0, 20)
MR_decl_label9(ssdb__modify_breakpoint_state_4_0, 6,4,7,9,10,12,14,15,16)
MR_decl_label4(ssdb__nondet_stack_contains_csn_2_5_0, 15,2,3,4)
MR_decl_label1(ssdb__nondet_stack_pop_2_0, 3)
MR_decl_label1(ssdb__pause_debugging_3_0, 3)
MR_decl_label3(ssdb__print_alias_4_0, 2,3,5)
MR_decl_label1(ssdb__print_breakpoint_3_0, 3)
MR_decl_label2(ssdb__print_browser_term_5_0, 2,4)
MR_decl_label5(ssdb__print_depth_change_3_0, 2,3,4,5,6)
MR_decl_label10(ssdb__print_event_info_4_0, 2,3,4,5,6,7,8,9,11,13)
MR_decl_label10(ssdb__print_event_info_4_0, 15,17,19,20,21,22,23,24,25,26)
MR_decl_label2(ssdb__print_event_info_4_0, 27,28)
MR_decl_label10(ssdb__print_stack_frame_6_0, 6,10,7,11,13,14,15,16,17,18)
MR_decl_label4(ssdb__print_stack_frame_6_0, 19,20,21,22)
MR_decl_label8(ssdb__print_stack_trace_5_0, 36,2,6,7,8,9,11,39)
MR_decl_label10(ssdb__print_var_5_0, 5,6,7,4,10,12,17,18,20,22)
MR_decl_label7(ssdb__print_var_5_0, 14,25,3,29,30,28,32)
MR_decl_label5(ssdb__print_var_prelude_4_0, 2,3,5,6,4)
MR_decl_label6(ssdb__print_var_with_name_5_0, 3,6,5,2,12,14)
MR_decl_label10(ssdb__print_vars_list_4_0, 44,6,8,9,10,12,13,14,11,16)
MR_decl_label1(ssdb__print_vars_list_4_0, 46)
MR_decl_label10(ssdb__process_options__ho1_5_0, 75,3,6,10,9,13,14,15,5,19)
MR_decl_label5(ssdb__process_options__ho1_5_0, 21,24,26,18,28)
MR_decl_label10(ssdb__process_options__ho2_5_0, 75,3,6,10,9,13,14,15,5,19)
MR_decl_label5(ssdb__process_options__ho2_5_0, 21,24,26,18,28)
MR_decl_label10(ssdb__process_options__ho3_5_0, 75,3,6,10,9,13,14,15,5,19)
MR_decl_label5(ssdb__process_options__ho3_5_0, 21,24,26,18,28)
MR_decl_label8(ssdb__process_short_options__ho4_4_0, 31,3,7,10,8,13,14,15)
MR_decl_label8(ssdb__process_short_options__ho5_4_0, 31,3,7,10,8,13,14,15)
MR_decl_label8(ssdb__process_short_options__ho6_4_0, 31,3,7,10,8,13,14,15)
MR_decl_label10(ssdb__read_and_execute_cmd_5_0, 4,5,6,8,11,12,13,14,10,17)
MR_decl_label2(ssdb__read_and_execute_cmd_5_0, 3,19)
MR_decl_label10(ssdb__read_command_lines_5_0, 34,2,20,4,6,7,8,9,5,11)
MR_decl_label3(ssdb__read_command_lines_5_0, 13,15,14)
MR_decl_label1(ssdb__restore_streams_2_0, 2)
MR_decl_label1(ssdb__resume_debugging_3_0, 2)
MR_decl_label6(ssdb__safe_write_6_0, 6,7,9,11,3,14)
MR_decl_label2(ssdb__save_streams_2_0, 2,3)
MR_decl_label4(ssdb__search_nondet_stack_frame_2_7_0, 34,2,3,4)
MR_decl_label4(ssdb__set_breakpoints_filter_bits_3_0, 15,4,5,6)
MR_decl_label10(ssdb__should_stop_at_this_event_8_0, 5,6,8,9,12,3,67,17,20,23)
MR_decl_label10(ssdb__should_stop_at_this_event_8_0, 29,26,32,196,36,24,40,39,46,195)
MR_decl_label8(ssdb__should_stop_at_this_event_8_0, 80,43,200,53,55,54,41,85)
MR_decl_label1(ssdb__stack_pop_2_0, 3)
MR_decl_label1(ssdb__stack_top_3_0, 3)
MR_decl_label10(ssdb__update_next_stop_6_0, 3,4,5,7,8,9,14,13,12,11)
MR_decl_label3(ssdb__update_next_stop_6_0, 19,18,2)
MR_decl_label3(__Unify___ssdb__breakpoint_0_0, 4,6,1)
MR_decl_label2(__Unify___ssdb__format_config_0_0, 4,1)
MR_decl_label3(__Unify___ssdb__list_params_0_0, 4,6,1)
MR_decl_label9(__Unify___ssdb__next_stop_0_0, 5,6,7,8,9,11,36,13,1)
MR_decl_label2(__Unify___ssdb__ssdb_proc_id_0_0, 4,1)
MR_decl_label3(__Unify___ssdb__stack_frame_0_0, 4,8,1)
MR_decl_label4(__Unify___ssdb__var_value_0_0, 5,24,9,1)
MR_decl_label10(__Unify___ssdb__what_next_0_0, 5,6,7,8,9,10,12,37,14,1)
MR_decl_label5(__Compare___ssdb__breakpoint_0_0, 3,2,5,9,29)
MR_decl_label9(__Compare___ssdb__format_config_0_0, 3,2,5,9,13,17,21,25,61)
MR_decl_label4(__Compare___ssdb__list_params_0_0, 3,2,5,21)
MR_decl_label10(__Compare___ssdb__next_stop_0_0, 7,8,9,10,11,12,5,16,17,18)
MR_decl_label10(__Compare___ssdb__next_stop_0_0, 19,20,21,14,25,26,27,28,29,30)
MR_decl_label10(__Compare___ssdb__next_stop_0_0, 23,34,35,36,186,37,38,39,32,43)
MR_decl_label10(__Compare___ssdb__next_stop_0_0, 44,45,46,49,47,54,41,58,59,60)
MR_decl_label10(__Compare___ssdb__next_stop_0_0, 61,62,63,56,68,69,70,71,72,73)
MR_decl_label10(__Compare___ssdb__next_stop_0_0, 76,66,82,151,83,84,85,86,87,156)
MR_decl_label2(__Compare___ssdb__next_stop_0_0, 88,90)
MR_decl_label4(__Compare___ssdb__ssdb_proc_id_0_0, 3,2,5,21)
MR_decl_label9(__Compare___ssdb__stack_frame_0_0, 3,2,5,9,13,17,21,25,61)
MR_decl_label10(__Compare___ssdb__var_value_0_0, 3,2,9,13,7,5,60,22,25,20)
MR_decl_label4(__Compare___ssdb__var_value_0_0, 31,32,34,112)
MR_decl_label10(__Compare___ssdb__what_next_0_0, 7,8,9,10,11,12,13,5,17,18)
MR_decl_label10(__Compare___ssdb__what_next_0_0, 19,20,21,22,23,15,27,28,29,30)
MR_decl_label10(__Compare___ssdb__what_next_0_0, 31,32,33,25,37,38,39,40,41,42)
MR_decl_label10(__Compare___ssdb__what_next_0_0, 43,35,47,48,49,50,222,51,52,53)
MR_decl_label10(__Compare___ssdb__what_next_0_0, 45,57,58,59,60,61,62,64,55,68)
MR_decl_label10(__Compare___ssdb__what_next_0_0, 69,70,71,72,73,74,66,79,80,81)
MR_decl_label10(__Compare___ssdb__what_next_0_0, 82,83,84,85,252,77,89,90,91,92)
MR_decl_label5(__Compare___ssdb__what_next_0_0, 93,94,178,95,179)
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
MR_decl_static(ssdb__stack_top_3_0)
MR_decl_static(ssdb__nondet_stack_index_4_0)
MR_decl_static(ssdb__is_same_int_3_0)
MR_decl_static(ssdb__reset_counters_for_retry_3_0)
MR_decl_static(ssdb__exception_handler_exists_2_0)
MR_decl_static(ssdb__lock_breakpoints_map_0_0)
MR_decl_static(ssdb__unlock_breakpoints_map_0_0)
MR_decl_static(ssdb__unsafe_get_breakpoints_map_1_0)
MR_decl_static(ssdb__lock_breakpoints_filter_0_0)
MR_decl_static(ssdb__unlock_breakpoints_filter_0_0)
MR_decl_static(ssdb__unsafe_get_breakpoints_filter_1_0)
MR_decl_static(ssdb__should_stop_at_this_event_8_0)
MR_decl_static(ssdb__unsafe_set_cur_ssdb_next_stop_1_0)
MR_decl_static(ssdb__update_next_stop_6_0)
MR_decl_static(ssdb__lock_command_queue_0_0)
MR_decl_static(ssdb__unlock_command_queue_0_0)
MR_decl_static(ssdb__unsafe_get_command_queue_1_0)
MR_decl_static(ssdb__unsafe_set_command_queue_1_0)
MR_decl_static(ssdb__lock_aliases_0_0)
MR_decl_static(ssdb__unlock_aliases_0_0)
MR_decl_static(ssdb__unsafe_get_aliases_1_0)
MR_decl_static(ssdb__print_too_many_arguments_2_0)
MR_decl_static(ssdb__execute_ssdb_help_3_0)
MR_decl_static(ssdb__stack_index_4_0)
MR_decl_static(ssdb__nondet_stack_contains_csn_2_5_0)
MR_decl_static(ssdb__compress_stack_frames_4_0)
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
MR_decl_static(ssdb__list_var_value_to_assoc_list_2_0)
MR_decl_static(ssdb__browse_var_4_0)
MR_decl_static(ssdb__execute_ssdb_browse_4_0)
MR_decl_static(ssdb__print_vars_list_4_0)
MR_decl_static(ssdb__execute_ssdb_vars_4_0)
MR_decl_static(ssdb__print_depth_change_3_0)
MR_decl_static(ssdb__execute_ssdb_up_down_6_0)
MR_decl_static(ssdb__execute_ssdb_down_5_0)
MR_decl_static(ssdb__execute_ssdb_up_5_0)
MR_decl_static(ssdb__execute_ssdb_level_5_0)
MR_decl_static(ssdb__print_event_info_4_0)
MR_decl_static(ssdb__execute_ssdb_format_3_0)
MR_decl_static(ssdb__execute_ssdb_format_param_3_0)
MR_decl_static(ssdb__unsafe_set_aliases_1_0)
MR_decl_static(ssdb__print_alias_4_0)
MR_decl_static(ssdb__execute_ssdb_alias_4_0)
MR_decl_static(ssdb__execute_ssdb_unalias_4_0)
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
MR_decl_static(ssdb__unsafe_set_breakpoints_map_1_0)
MR_decl_static(ssdb__unsafe_set_breakpoints_filter_1_0)
MR_decl_static(ssdb__first_unseen_3_0)
MR_decl_static(ssdb__set_breakpoints_filter_bits_3_0)
MR_decl_static(ssdb__print_breakpoint_3_0)
MR_decl_static(ssdb__add_breakpoint_3_0)
MR_decl_static(ssdb__execute_ssdb_break_3_0)
MR_decl_static(fn__ssdb__bp_number_1_0)
MR_decl_static(ssdb__modify_breakpoint_state_4_0)
MR_decl_static(ssdb__execute_ssdb_enable_3_0)
MR_decl_static(ssdb__execute_ssdb_disable_3_0)
MR_decl_static(ssdb__delete_breakpoint_3_0)
MR_decl_static(ssdb__execute_ssdb_delete_3_0)
MR_decl_static(ssdb__read_command_lines_5_0)
MR_decl_static(ssdb__execute_ssdb_source_3_0)
MR_decl_static(ssdb__exit_process_2_0)
MR_decl_static(ssdb__execute_ssdb_quit_4_0)
MR_decl_static(ssdb__read_and_execute_cmd_5_0)
MR_decl_static(ssdb__expand_alias_and_execute_7_0)
MR_decl_static(ssdb__execute_cmd_string_8_0)
MR_decl_static(ssdb__execute_cmd_8_0)
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
MR_decl_static(ssdb__unsafe_set_debugger_state_1_0)
MR_def_extern_entry(ssdb__pause_debugging_3_0)
MR_def_extern_entry(ssdb__resume_debugging_3_0)
MR_def_extern_entry(ssdb__enable_debugging_2_0)
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
MR_decl_static(ssdb__pre_initialise_mutable_shadow_stack_0_0)
MR_decl_static(ssdb__initialise_mutable_shadow_stack_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_shadow_stack_depth_0_0)
MR_decl_static(ssdb__initialise_mutable_shadow_stack_depth_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_nondet_shadow_stack_0_0)
MR_decl_static(ssdb__initialise_mutable_nondet_shadow_stack_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_nondet_shadow_stack_depth_0_0)
MR_decl_static(ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_command_queue_0_0)
MR_decl_static(ssdb__initialise_mutable_command_queue_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_aliases_0_0)
MR_decl_static(ssdb__initialise_mutable_aliases_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_breakpoints_map_0_0)
MR_decl_static(ssdb__initialise_mutable_breakpoints_map_0_0)
MR_decl_static(ssdb__pre_initialise_mutable_breakpoints_filter_0_0)
MR_decl_static(ssdb__initialise_mutable_breakpoints_filter_0_0)
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
MR_decl_static(ssdb__initialise_mutable_debugger_state_0_0)
MR_decl_static(ssdb__add_source_commands_2_0)
MR_decl_static(ssdb__install_sigint_handler_2_0)
MR_decl_static(ssdb__init_debugger_state_2_0)
MR_decl_static(ssdb__step_next_stop_2_0)
MR_decl_static(ssdb__format_options_3_0)
MR_decl_static(ssdb__format_param_options_3_0)
MR_decl_static(ssdb__non_dot_1_0)
MR_decl_static(__Unify___ssdb__bp_state_0_0)
MR_decl_static(__Compare___ssdb__bp_state_0_0)
MR_decl_static(__Unify___ssdb__breakpoint_0_0)
MR_decl_static(__Compare___ssdb__breakpoint_0_0)
MR_decl_static(__Unify___ssdb__breakpoints_map_0_0)
MR_decl_static(__Compare___ssdb__breakpoints_map_0_0)
MR_def_extern_entry(__Unify___ssdb__debugger_state_0_0)
MR_def_extern_entry(__Compare___ssdb__debugger_state_0_0)
MR_def_extern_entry(__Unify___ssdb__debugging_paused_0_0)
MR_def_extern_entry(__Compare___ssdb__debugging_paused_0_0)
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
MR_decl_static(fn__ssdb__IntroducedFrom__func__modify_breakpoint_states__2708__1_2_0)
MR_decl_static(ssdb__IntroducedFrom__pred__print_var_with_name__3014__1_2_0)
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

static const struct mercury_type_0 mercury_common_0[52] =
{
{
MR_string_const("quit [-y]", 9),
MR_tbmkword(0, 0)
},
{
MR_string_const("source FILENAME", 15),
MR_TAG_COMMON(1,0,0)
},
{
MR_string_const("help", 4),
MR_TAG_COMMON(1,0,1)
},
{
MR_string_const("delete NUM|*", 12),
MR_TAG_COMMON(1,0,2)
},
{
MR_string_const("disable NUM|*", 13),
MR_TAG_COMMON(1,0,3)
},
{
MR_string_const("enable NUM|*", 12),
MR_TAG_COMMON(1,0,4)
},
{
MR_string_const("break info", 10),
MR_TAG_COMMON(1,0,5)
},
{
MR_string_const("break MODULE.PRED", 17),
MR_TAG_COMMON(1,0,6)
},
{
MR_string_const("pop_list_dir", 12),
MR_TAG_COMMON(1,0,7)
},
{
MR_string_const("push_list_dir DIR ...", 21),
MR_TAG_COMMON(1,0,8)
},
{
MR_string_const("list_path [DIR ...]", 19),
MR_TAG_COMMON(1,0,9)
},
{
MR_string_const("list [NUM]", 10),
MR_TAG_COMMON(1,0,10)
},
{
MR_string_const("unalias NAME", 12),
MR_TAG_COMMON(1,0,11)
},
{
MR_string_const("alias NAME COMMAND [COMMAND-PARAMETER ...]", 42),
MR_TAG_COMMON(1,0,12)
},
{
MR_string_const("alias [NAME]", 12),
MR_TAG_COMMON(1,0,13)
},
{
MR_string_const("format_param [-APBfpv] depth|size|width|lines NUM", 49),
MR_TAG_COMMON(1,0,14)
},
{
MR_string_const("format [-APB] flat|raw_pretty|pretty|verbose", 44),
MR_TAG_COMMON(1,0,15)
},
{
MR_string_const("current", 7),
MR_TAG_COMMON(1,0,16)
},
{
MR_string_const("level NUM", 9),
MR_TAG_COMMON(1,0,17)
},
{
MR_string_const("down [NUM]", 10),
MR_TAG_COMMON(1,0,18)
},
{
MR_string_const("up [NUM]", 8),
MR_TAG_COMMON(1,0,19)
},
{
MR_string_const("stack [NUM]", 11),
MR_TAG_COMMON(1,0,20)
},
{
MR_string_const("vars", 4),
MR_TAG_COMMON(1,0,21)
},
{
MR_string_const("browse VAR|NUM", 14),
MR_TAG_COMMON(1,0,22)
},
{
MR_string_const("print [-fprv] *", 15),
MR_TAG_COMMON(1,0,23)
},
{
MR_string_const("print [-fprv] VAR|NUM", 21),
MR_TAG_COMMON(1,0,24)
},
{
MR_string_const("print [-fprv]", 13),
MR_TAG_COMMON(1,0,25)
},
{
MR_string_const("retry [NUM]", 11),
MR_TAG_COMMON(1,0,26)
},
{
MR_string_const("exception", 9),
MR_TAG_COMMON(1,0,27)
},
{
MR_string_const("continue", 8),
MR_TAG_COMMON(1,0,28)
},
{
MR_string_const("goto NUM", 8),
MR_TAG_COMMON(1,0,29)
},
{
MR_string_const("next", 4),
MR_TAG_COMMON(1,0,30)
},
{
MR_string_const("step [NUM]", 10),
MR_TAG_COMMON(1,0,31)
},
{
MR_string_const("Supported commands: (type \140alias\' to show aliases)", 50),
MR_TAG_COMMON(1,0,32)
},
{
MR_string_const("-y", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("alias NUMBER step", 17),
MR_tbmkword(0, 0)
},
{
MR_string_const("alias EMPTY step", 16),
MR_TAG_COMMON(1,0,35)
},
{
MR_string_const("alias e exception", 17),
MR_TAG_COMMON(1,0,36)
},
{
MR_string_const("alias excp exception", 20),
MR_TAG_COMMON(1,0,37)
},
{
MR_string_const("alias \? help", 12),
MR_TAG_COMMON(1,0,38)
},
{
MR_string_const("alias h help", 12),
MR_TAG_COMMON(1,0,39)
},
{
MR_string_const("alias b break", 13),
MR_TAG_COMMON(1,0,40)
},
{
MR_string_const("alias c continue", 16),
MR_TAG_COMMON(1,0,41)
},
{
MR_string_const("alias d stack", 13),
MR_TAG_COMMON(1,0,42)
},
{
MR_string_const("alias P print *", 15),
MR_TAG_COMMON(1,0,43)
},
{
MR_string_const("alias p print", 13),
MR_TAG_COMMON(1,0,44)
},
{
MR_string_const("alias v vars", 12),
MR_TAG_COMMON(1,0,45)
},
{
MR_string_const("alias r retry", 13),
MR_TAG_COMMON(1,0,46)
},
{
MR_string_const("alias f finish", 14),
MR_TAG_COMMON(1,0,47)
},
{
MR_string_const("alias g goto", 12),
MR_TAG_COMMON(1,0,48)
},
{
MR_string_const("alias s step", 12),
MR_TAG_COMMON(1,0,49)
},
{
MR_string_const("source .ssdbrc", 14),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_help_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_alias_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_list_path_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_push_list_dir_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_break_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_breakpoint_0;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__modify_breakpoint_state_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_bitmap_0;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_enable_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_bp_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_enable_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_enable_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__delete_breakpoint_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_delete_3_0_1;
static const struct mercury_type_1 mercury_common_1[14] =
{
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
(MR_Word *) &mercury_data__closure_layout__ssdb__print_alias_4_0_1,
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
MR_COMMON(3,2),
MR_COMMON(3,2)
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
(MR_Word *) &mercury_data__closure_layout__ssdb__modify_breakpoint_state_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ssdb, breakpoint),
MR_CTOR0_ADDR(bitmap, bitmap),
MR_CTOR0_ADDR(bitmap, bitmap)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_enable_3_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_enable_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ssdb, breakpoint),
MR_CTOR0_ADDR(bitmap, bitmap),
MR_CTOR0_ADDR(bitmap, bitmap)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_enable_3_0_3,
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
MR_CTOR0_ADDR(bitmap, bitmap),
MR_CTOR0_ADDR(bitmap, bitmap)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_3,
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
(MR_Word *) &mercury_data__closure_layout__ssdb__delete_breakpoint_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ssdb, breakpoint),
MR_CTOR0_ADDR(bitmap, bitmap),
MR_CTOR0_ADDR(bitmap, bitmap)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_delete_3_0_1,
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

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(mdb__listing__push_list_path_3_0);
static const struct mercury_type_2 mercury_common_2[15] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(ssdb__print_alias_4_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(mdb__listing__push_list_path_3_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(fn__ssdb__bp_number_1_0),
0
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(ssdb__print_breakpoint_3_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(ssdb__non_dot_1_0),
0
},
{
MR_COMMON(1,5),
MR_ENTRY_AP(ssdb__set_breakpoints_filter_bits_3_0),
0
},
{
MR_COMMON(1,7),
MR_ENTRY_AP(ssdb__set_breakpoints_filter_bits_3_0),
0
},
{
MR_COMMON(1,8),
MR_ENTRY_AP(ssdb__print_breakpoint_3_0),
0
},
{
MR_COMMON(1,10),
MR_ENTRY_AP(ssdb__set_breakpoints_filter_bits_3_0),
0
},
{
MR_COMMON(1,11),
MR_ENTRY_AP(ssdb__print_breakpoint_3_0),
0
},
{
MR_COMMON(1,12),
MR_ENTRY_AP(ssdb__set_breakpoints_filter_bits_3_0),
0
},
{
MR_COMMON(1,13),
MR_ENTRY_AP(ssdb__print_breakpoint_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_portray_format_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_3 mercury_common_3[3] =
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
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__print_vars_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(3,0),
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
MR_COMMON(3,0),
MR_CTOR0_ADDR(mdb__browser_info, browse_caller_type),
MR_CTOR0_ADDR(ssdb, var_value),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_var_with_name_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ssdb__add_breakpoint_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__print_var_with_name_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ssdb, var_value)
},
{
(MR_Word *) &mercury_data__closure_layout__ssdb__add_breakpoint_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ssdb, breakpoint),
MR_INT_CTOR_ADDR
},
};

static const struct mercury_type_6 mercury_common_6[5] =
{
{
((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1) | (((MR_Integer) 0 << (MR_Integer) 2) | (((MR_Integer) 0 << (MR_Integer) 3) | (((MR_Integer) 0 << (MR_Integer) 4) | (((MR_Integer) 0 << (MR_Integer) 5) | ((MR_Integer) 0 << (MR_Integer) 6)))))))
},
{
0
},
{
3
},
{
1
},
{
2
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_alias_4_0_1;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_alias_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(3,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
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

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_break_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ssdb__execute_ssdb_break_3_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
};

static const struct mercury_type_10 mercury_common_10[2] =
{
{
MR_COMMON(1,6),
MR_ENTRY_AP(fn__ssdb__IntroducedFrom__func__modify_breakpoint_states__2708__1_2_0),
1,
0
},
{
MR_COMMON(1,9),
MR_ENTRY_AP(fn__ssdb__IntroducedFrom__func__modify_breakpoint_states__2708__1_2_0),
1,
1
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
0,
MR_tbmkword(0, 0)
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
	15,
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
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_bp_state_0;

const MR_PseudoTypeInfo mercury_data_ssdb__field_types_breakpoint_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_ssdb__type_ctor_info_bp_state_0
};

const MR_ConstString mercury_data_ssdb__field_names_breakpoint_0_0[] = {
	"bp_number",
	"bp_proc_id",
	"bp_state"
};

static const MR_DuFunctorDesc mercury_data_ssdb__du_functor_desc_breakpoint_0_0 = {
	"breakpoint",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ssdb__field_types_breakpoint_0_0,
	mercury_data_ssdb__field_names_breakpoint_0_0,
	NULL,
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
	15,
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
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_breakpoint_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ssdb__type_ctor_info_ssdb_proc_id_0ssdb__type_ctor_info_breakpoint_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ssdb__type_ctor_info_ssdb_proc_id_0,
	(MR_TypeInfo) &mercury_data_ssdb__type_ctor_info_breakpoint_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_breakpoints_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__breakpoints_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__breakpoints_map_0_0)),
	"ssdb",
	"breakpoints_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ssdb__type_ctor_info_ssdb_proc_id_0ssdb__type_ctor_info_breakpoint_0 },
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
	15,
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
extern const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_debugger_state_0;

const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_debugging_paused_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__debugging_paused_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__debugging_paused_0_0)),
	"ssdb",
	"debugging_paused",
	{ 0 },
	{ (void *)&mercury_data_ssdb__type_ctor_info_debugger_state_0 },
	-1,
	0,
	NULL
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

const MR_DuArgLocn mercury_data_ssdb__field_locns_format_config_0_0[] = {
	{ 0, 0, 1 },
	{ 0, 1, 1 },
	{ 0, 2, 1 },
	{ 0, 3, 1 },
	{ 0, 4, 1 },
	{ 0, 5, 1 },
	{ 0, 6, 1 },
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
	mercury_data_ssdb__field_locns_format_config_0_0,
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
	15,
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
	NULL,
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
	15,
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
	15,
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
	15,
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
	15,
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
	"ssdb_alias",
	18
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_19 = {
	"ssdb_unalias",
	19
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_20 = {
	"ssdb_list",
	20
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_21 = {
	"ssdb_list_path",
	21
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_22 = {
	"ssdb_push_list_dir",
	22
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_23 = {
	"ssdb_pop_list_dir",
	23
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_24 = {
	"ssdb_list_context_lines",
	24
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_25 = {
	"ssdb_break",
	25
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_26 = {
	"ssdb_enable",
	26
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_27 = {
	"ssdb_disable",
	27
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_28 = {
	"ssdb_delete",
	28
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_29 = {
	"ssdb_help",
	29
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_30 = {
	"ssdb_source",
	30
};

static const MR_EnumFunctorDesc mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_31 = {
	"ssdb_quit",
	31
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
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_28,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_29,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_30,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_31
};

const MR_EnumFunctorDescPtr mercury_data_ssdb__enum_name_ordered_ssdb_cmd_0[] = {
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_18,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_25,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_10,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_3,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_15,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_28,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_27,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_12,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_26,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_6,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_4,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_16,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_17,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_2,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_29,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_14,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_20,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_24,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_21,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_1,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_23,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_9,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_22,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_31,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_7,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_5,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_30,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_8,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_0,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_19,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_13,
	&mercury_data_ssdb__enum_functor_desc_ssdb_cmd_0_11
};

const MR_Integer mercury_data_ssdb__functor_number_map_ssdb_cmd_0[] = {
	28,
	19,
	13,
	3,
	10,
	25,
	9,
	24,
	27,
	21,
	2,
	31,
	7,
	30,
	15,
	4,
	11,
	12,
	0,
	29,
	16,
	18,
	22,
	20,
	17,
	1,
	8,
	6,
	5,
	14,
	26,
	23 };
	
const MR_TypeCtorInfo_Struct mercury_data_ssdb__type_ctor_info_ssdb_cmd_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ssdb__ssdb_cmd_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ssdb__ssdb_cmd_0_0)),
	"ssdb",
	"ssdb_cmd",
	{ (void *)mercury_data_ssdb__enum_name_ordered_ssdb_cmd_0 },
	{ (void *)mercury_data_ssdb__enum_value_ordered_ssdb_cmd_0 },
	32,
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
	15,
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
	NULL,
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
	15,
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
	15,
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
	NULL,
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
	15,
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
	15,
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
	15,
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
	15,
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
mercury_data__closure_layout__ssdb__execute_ssdb_delete_3_0_1 = {
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
3229,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__delete_breakpoint_3_0_1 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"set_breakpoints_filter_bits",
3,
0
},
"ssdb",
"ssdb.m",
2794,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_3 = {
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
3229,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_2 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"set_breakpoints_filter_bits",
3,
0
},
"ssdb",
"ssdb.m",
2794,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_disable_3_0_1 = {
{
MR_FUNCTION,
"ssdb",
"ssdb",
"lambda_ssdb_m_2708",
3,
0
},
"ssdb",
"ssdb.m",
2708,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_enable_3_0_3 = {
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
3229,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_enable_3_0_2 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"set_breakpoints_filter_bits",
3,
0
},
"ssdb",
"ssdb.m",
2794,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_enable_3_0_1 = {
{
MR_FUNCTION,
"ssdb",
"ssdb",
"lambda_ssdb_m_2708",
3,
0
},
"ssdb",
"ssdb.m",
2708,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__modify_breakpoint_state_4_0_1 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"set_breakpoints_filter_bits",
3,
0
},
"ssdb",
"ssdb.m",
2794,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_break_3_0_2 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"non_dot",
1,
0
},
"ssdb",
"ssdb.m",
2486,
"6"
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
3229,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__add_breakpoint_3_0_1 = {
{
MR_FUNCTION,
"ssdb",
"ssdb",
"bp_number",
2,
0
},
"ssdb",
"ssdb.m",
2686,
"6"
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
2414,
"13"
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
2392,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__execute_ssdb_alias_4_0_1 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"print_alias",
4,
0
},
"ssdb",
"ssdb.m",
2283,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_alias_4_0_1 = {
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
2335,
"10"
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
3000,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__ssdb__print_var_with_name_5_0_1 = {
{
MR_PREDICATE,
"ssdb",
"ssdb",
"lambda_ssdb_m_3014",
2,
0
},
"ssdb",
"ssdb.m",
3014,
"14"
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
3000,
"7"
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
3290,
"76"
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
#line 278 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 3330 "ssdb.c"
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
#line 278 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 3363 "ssdb.c"
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
#line 278 "ssdb.m"
ssdb__mutable_variable_cur_filename = X;
;}
#line 3395 "ssdb.c"
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
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 3428 "ssdb.c"
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
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
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
#line 280 "ssdb.m"
ssdb__mutable_variable_cur_line_number = X;
;}
#line 3493 "ssdb.c"
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
#line 278 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 3526 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_context_2_0
	X = MR_r1;
{
#line 278 "ssdb.m"
ssdb__mutable_variable_cur_filename = X;
;}
#line 3537 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_context_2_0
{
#line 278 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 3549 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_context_2_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 3561 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__set_context_2_0
	X = MR_r2;
{
#line 280 "ssdb.m"
ssdb__mutable_variable_cur_line_number = X;
;}
#line 3572 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__set_context_2_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 3584 "ssdb.c"
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
#line 348 "ssdb.m"
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 3665 "ssdb.c"
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
#line 278 "ssdb.m"
X = ssdb__mutable_variable_cur_filename;
;}
#line 3697 "ssdb.c"
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
#line 280 "ssdb.m"
X = ssdb__mutable_variable_cur_line_number;
;}
#line 3729 "ssdb.c"
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
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 3763 "ssdb.c"
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
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 3796 "ssdb.c"
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
#line 286 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_csn;
;}
#line 3827 "ssdb.c"
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
#line 286 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn = X;
;}
#line 3860 "ssdb.c"
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
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 3893 "ssdb.c"
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
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 3926 "ssdb.c"
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
#line 283 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 3957 "ssdb.c"
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
#line 283 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 3990 "ssdb.c"
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
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 4023 "ssdb.c"
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
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 4056 "ssdb.c"
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
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 4087 "ssdb.c"
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4121 "ssdb.c"
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4154 "ssdb.c"
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
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 4185 "ssdb.c"
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
#line 292 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 4218 "ssdb.c"
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
#line 294 "ssdb.m"
ssdb__mutable_variable_shadow_stack_depth = X;
;}
#line 4250 "ssdb.c"
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4283 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 4295 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4308 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4323 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
	X = MR_tempr2;
{
#line 292 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 4334 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4346 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 4358 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 4368 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 4381 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 4393 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
	X = MR_tempr2;
{
#line 294 "ssdb.m"
ssdb__mutable_variable_shadow_stack_depth = X;
;}
#line 4405 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_push_3_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 4417 "ssdb.c"
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
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 4451 "ssdb.c"
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
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 4484 "ssdb.c"
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
#line 297 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack;
;}
#line 4515 "ssdb.c"
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
#line 297 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack = X;
;}
#line 4548 "ssdb.c"
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
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 4581 "ssdb.c"
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
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 4614 "ssdb.c"
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
#line 299 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack_depth;
;}
#line 4645 "ssdb.c"
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
#line 299 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack_depth = X;
;}
#line 4678 "ssdb.c"
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
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 4711 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 297 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack;
;}
#line 4723 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 4736 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 4751 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
	X = MR_tempr2;
{
#line 297 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack = X;
;}
#line 4762 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 4774 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 4786 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 299 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack_depth;
;}
#line 4796 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 4809 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 4821 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
	X = MR_tempr2;
{
#line 299 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack_depth = X;
;}
#line 4833 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_push_3_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 4845 "ssdb.c"
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
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 4879 "ssdb.c"
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
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 4912 "ssdb.c"
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
#line 289 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_next_stop;
;}
#line 4943 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module41)
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 4979 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_top_3_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 4989 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_top_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 5002 "ssdb.c"
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

MR_decl_entry(list__det_index0_3_0);

MR_BEGIN_MODULE(ssdb_module42)
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
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 5044 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_index_4_0
{
#line 297 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack;
;}
#line 5056 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_index_4_0
{
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 5069 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__det_index0_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module43)
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


MR_BEGIN_MODULE(ssdb_module44)
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
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 5137 "ssdb.c"
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
#line 283 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 5151 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__reset_counters_for_retry_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 5163 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__reset_counters_for_retry_3_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 5175 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = ((MR_Integer) MR_tfield(0, MR_r1, 1) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__reset_counters_for_retry_3_0
	X = MR_tempr1;
{
#line 286 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn = X;
;}
#line 5187 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__reset_counters_for_retry_3_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 5199 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module45)
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


MR_BEGIN_MODULE(ssdb_module46)
	MR_init_entry1(ssdb__lock_breakpoints_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_breakpoints_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_breakpoints_map'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_breakpoints_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_breakpoints_map_0_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 5315 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module47)
	MR_init_entry1(ssdb__unlock_breakpoints_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_breakpoints_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_breakpoints_map'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_breakpoints_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_breakpoints_map_0_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 5348 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module48)
	MR_init_entry1(ssdb__unsafe_get_breakpoints_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_breakpoints_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_breakpoints_map'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_breakpoints_map_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_breakpoints_map_1_0
{
#line 308 "ssdb.m"
X = ssdb__mutable_variable_breakpoints_map;
;}
#line 5379 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module49)
	MR_init_entry1(ssdb__lock_breakpoints_filter_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_breakpoints_filter_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_breakpoints_filter'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_breakpoints_filter_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_breakpoints_filter_0_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 5413 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module50)
	MR_init_entry1(ssdb__unlock_breakpoints_filter_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_breakpoints_filter_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_breakpoints_filter'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_breakpoints_filter_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_breakpoints_filter_0_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 5446 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module51)
	MR_init_entry1(ssdb__unsafe_get_breakpoints_filter_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_breakpoints_filter_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_breakpoints_filter'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_breakpoints_filter_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_breakpoints_filter_1_0
{
#line 310 "ssdb.m"
X = ssdb__mutable_variable_breakpoints_filter;
;}
#line 5477 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__hash_1_0);
MR_decl_entry(fn__bitmap__unsafe_bit_2_0);
MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(ssdb_module52)
	MR_init_entry1(ssdb__should_stop_at_this_event_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__should_stop_at_this_event_8_0);
	MR_init_label10(ssdb__should_stop_at_this_event_8_0,5,6,8,9,12,3,67,17,20,23)
	MR_init_label10(ssdb__should_stop_at_this_event_8_0,29,26,32,196,36,24,40,39,46,195)
	MR_init_label8(ssdb__should_stop_at_this_event_8_0,80,43,200,53,55,54,41,85)
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
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 5517 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 289 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_next_stop;
;}
#line 5527 "ssdb.c"
	MR_r6 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 5540 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r6,0,1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 5557 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 310 "ssdb.m"
X = ssdb__mutable_variable_breakpoints_filter;
;}
#line 5567 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 5580 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__hash_1_0,
		ssdb__should_stop_at_this_event_8_0_i5);
MR_def_label(ssdb__should_stop_at_this_event_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 & (MR_Integer) 65535);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__bitmap__unsafe_bit_2_0,
		ssdb__should_stop_at_this_event_8_0_i6);
MR_def_label(ssdb__should_stop_at_this_event_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i80);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__hash_1_0,
		ssdb__should_stop_at_this_event_8_0_i8);
MR_def_label(ssdb__should_stop_at_this_event_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 & (MR_Integer) 65535);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__bitmap__unsafe_bit_2_0,
		ssdb__should_stop_at_this_event_8_0_i9);
MR_def_label(ssdb__should_stop_at_this_event_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i80);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 5627 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 308 "ssdb.m"
X = ssdb__mutable_variable_breakpoints_map;
;}
#line 5637 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 5650 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		ssdb__should_stop_at_this_event_8_0_i12);
MR_def_label(ssdb__should_stop_at_this_event_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i80);
	}
	MR_r4 = MR_tfield(0, MR_r2, 2);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i80);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__should_stop_at_this_event_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i17);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i80);
	}
MR_def_label(ssdb__should_stop_at_this_event_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__should_stop_at_this_event_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,2)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i20);
	}
	if (!((((MR_Integer) MR_r1 == (MR_Integer) 1) || ((MR_Integer) MR_r1 == (MR_Integer) 4)))) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i85);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i24);
	}
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i26);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 5723 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 5733 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 5746 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tfield(2, MR_r6, 0);
	MR_np_call_localret_ent(ssdb__exception_handler_exists_2_0,
		ssdb__should_stop_at_this_event_8_0_i29);
MR_def_label(ssdb__should_stop_at_this_event_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i67);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__should_stop_at_this_event_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_r1 == (MR_Integer) 0) || ((MR_Integer) MR_r1 == (MR_Integer) 3)) || ((MR_Integer) MR_r1 == (MR_Integer) 5)))) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i32);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ssdb__should_stop_at_this_event_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	if ((MR_r4 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i195);
	}
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i196);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ssdb__should_stop_at_this_event_8_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ssdb__stack_top_3_0,
		ssdb__should_stop_at_this_event_8_0_i36);
MR_def_label(ssdb__should_stop_at_this_event_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__reset_counters_for_retry_3_0,
		ssdb__should_stop_at_this_event_8_0_i55);
MR_def_label(ssdb__should_stop_at_this_event_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i39);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r6, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ssdb__is_same_int_3_0,
		ssdb__should_stop_at_this_event_8_0_i40);
MR_def_label(ssdb__should_stop_at_this_event_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__should_stop_at_this_event_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,0)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i41);
	}
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i43);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 5829 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 5839 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__should_stop_at_this_event_8_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 5852 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tfield(3, MR_r6, 1);
	MR_np_call_localret_ent(ssdb__exception_handler_exists_2_0,
		ssdb__should_stop_at_this_event_8_0_i46);
MR_def_label(ssdb__should_stop_at_this_event_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i67);
	}
	MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i80);
MR_def_label(ssdb__should_stop_at_this_event_8_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ssdb__should_stop_at_this_event_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__should_stop_at_this_event_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i195);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	if ((MR_r4 != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i195);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i200);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(ssdb__should_stop_at_this_event_8_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__nondet_stack_index_4_0,
		ssdb__should_stop_at_this_event_8_0_i53);
MR_def_label(ssdb__should_stop_at_this_event_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 1);
	if ((MR_sv(1) != MR_r3)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i54);
	}
	MR_np_call_localret_ent(ssdb__reset_counters_for_retry_3_0,
		ssdb__should_stop_at_this_event_8_0_i55);
MR_def_label(ssdb__should_stop_at_this_event_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__should_stop_at_this_event_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: nondet stack frame has unexpected CSN", 43);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(ssdb__should_stop_at_this_event_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r6, 1);
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(ssdb__should_stop_at_this_event_8_0_i195);
	}
MR_def_label(ssdb__should_stop_at_this_event_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module53)
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
#line 289 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop = X;
;}
#line 5959 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module54)
	MR_init_entry1(ssdb__update_next_stop_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__update_next_stop_6_0);
	MR_init_label10(ssdb__update_next_stop_6_0,3,4,5,7,8,9,14,13,12,11)
	MR_init_label3(ssdb__update_next_stop_6_0,19,18,2)
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
	if (MR_LTAGS_TESTR(MR_r3,0,2)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,4)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 3);
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i5);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,3)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i9);
	}
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
MR_def_label(ssdb__update_next_stop_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i11);
	}
	MR_r5 = MR_tfield(2, MR_r3, 0);
	if ((MR_r5 != MR_r2)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i12);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 6059 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 6069 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 6082 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i14);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r3 = ((MR_Integer) MR_tfield(0, MR_r1, 0) - (MR_Integer) 1);
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i13);
MR_def_label(ssdb__update_next_stop_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_top on empty stack", 30);
	MR_np_call_localret_ent(require__error_1_0,
		ssdb__update_next_stop_6_0_i13);
MR_def_label(ssdb__update_next_stop_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 6107 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
	X = MR_r3;
{
#line 283 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 6118 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 6130 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 6142 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_tfield(0, MR_r1, 1) - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
	X = MR_r3;
{
#line 286 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn = X;
;}
#line 6154 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 6166 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,12)
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
MR_def_label(ssdb__update_next_stop_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i18);
	}
	MR_r5 = MR_tfield(3, MR_r3, 1);
	if ((MR_r1 != MR_r5)) {
		MR_GOTO_LAB(ssdb__update_next_stop_6_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ssdb__update_next_stop_6_0_i2);
MR_def_label(ssdb__update_next_stop_6_0,19)
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
MR_def_label(ssdb__update_next_stop_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tfield(3, MR_r3, 1);
	MR_tfield(3, MR_r2, 2) = (MR_Integer) 0;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_r2;
MR_def_label(ssdb__update_next_stop_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 6225 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
	X = MR_r3;
{
#line 289 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop = X;
;}
#line 6236 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__update_next_stop_6_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 6248 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module55)
	MR_init_entry1(ssdb__lock_command_queue_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_command_queue_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_command_queue'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_command_queue_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_command_queue_0_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 6281 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module56)
	MR_init_entry1(ssdb__unlock_command_queue_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_command_queue_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_command_queue'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_command_queue_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_command_queue_0_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 6314 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module57)
	MR_init_entry1(ssdb__unsafe_get_command_queue_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_command_queue_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_command_queue'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_command_queue_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_command_queue_1_0
{
#line 302 "ssdb.m"
X = ssdb__mutable_variable_command_queue;
;}
#line 6345 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module58)
	MR_init_entry1(ssdb__unsafe_set_command_queue_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_command_queue_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_command_queue'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_command_queue_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_command_queue_1_0
	X = MR_r1;
{
#line 302 "ssdb.m"
ssdb__mutable_variable_command_queue = X;
;}
#line 6378 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module59)
	MR_init_entry1(ssdb__lock_aliases_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__lock_aliases_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_aliases'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__lock_aliases_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__lock_aliases_0_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 6411 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module60)
	MR_init_entry1(ssdb__unlock_aliases_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unlock_aliases_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_aliases'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unlock_aliases_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__unlock_aliases_0_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 6444 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module61)
	MR_init_entry1(ssdb__unsafe_get_aliases_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_get_aliases_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_aliases'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_get_aliases_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_get_aliases_1_0
{
#line 305 "ssdb.m"
X = ssdb__mutable_variable_aliases;
;}
#line 6475 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module62)
	MR_init_entry1(ssdb__print_too_many_arguments_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_too_many_arguments_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_too_many_arguments'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_too_many_arguments_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(ssdb_module63)
	MR_init_entry1(ssdb__execute_ssdb_help_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_help_3_0);
	MR_init_label2(ssdb__execute_ssdb_help_3_0,5,3)
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
		MR_GOTO_LAB(ssdb__execute_ssdb_help_3_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,33);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(io__write_list_5_0,
		ssdb__execute_ssdb_help_3_0_i5);
MR_def_label(ssdb__execute_ssdb_help_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n", 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_help_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module64)
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 6574 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_index_4_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 6586 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_index_4_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 6599 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__det_index0_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module65)
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
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 6649 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_contains_csn_2_5_0
{
#line 297 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack;
;}
#line 6661 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_contains_csn_2_5_0
{
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 6674 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__det_index0_3_0,
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


MR_BEGIN_MODULE(ssdb_module66)
	MR_init_entry1(ssdb__compress_stack_frames_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__compress_stack_frames_4_0);
	MR_init_label4(ssdb__compress_stack_frames_4_0,18,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compress_stack_frames'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__compress_stack_frames_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ssdb__compress_stack_frames_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__compress_stack_frames_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__compress_stack_frames_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 3);
	MR_np_call_localret_ent(__Unify___ssdb__ssdb_proc_id_0_0,
		ssdb__compress_stack_frames_4_0_i5);
MR_def_label(ssdb__compress_stack_frames_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__compress_stack_frames_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ssdb__compress_stack_frames_4_0_i18);
MR_def_label(ssdb__compress_stack_frames_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__format_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(ssdb_module67)
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
	MR_r1 = (MR_Word) MR_string_const("%c%4d ", 6);
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
	MR_r1 = (MR_Word) MR_string_const("%4d*", 4);
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
	MR_r1 = (MR_Word) MR_string_const("     ", 5);
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

MR_decl_entry(list__det_drop_3_0);
MR_decl_entry(fn__list__det_head_1_0);

MR_BEGIN_MODULE(ssdb_module68)
	MR_init_entry1(ssdb__print_stack_trace_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_stack_trace_5_0);
	MR_init_label8(ssdb__print_stack_trace_5_0,36,2,6,7,8,9,11,39)
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
MR_def_label(ssdb__print_stack_trace_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_stack_trace_5_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 6957 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__print_stack_trace_5_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 6967 "ssdb.c"
	MR_r5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_stack_trace_5_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 6980 "ssdb.c"
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
		MR_GOTO_LAB(ssdb__print_stack_trace_5_0_i39);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_stack_trace_5_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 7008 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__print_stack_trace_5_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 7020 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_stack_trace_5_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 7033 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__det_drop_3_0,
		ssdb__print_stack_trace_5_0_i6);
MR_def_label(ssdb__print_stack_trace_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		ssdb__print_stack_trace_5_0_i7);
MR_def_label(ssdb__print_stack_trace_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ssdb__compress_stack_frames_4_0,
		ssdb__print_stack_trace_5_0_i8);
MR_def_label(ssdb__print_stack_trace_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = ((MR_Integer) MR_tempr2 + (MR_Integer) MR_r1);
	MR_r6 = MR_tempr1;
	if (((MR_Integer) MR_sv(1) < (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(ssdb__print_stack_trace_5_0_i9);
	}
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(ssdb__print_stack_trace_5_0_i9);
	}
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Integer) 42;
	}
	MR_np_call_localret_ent(ssdb__print_stack_frame_6_0,
		ssdb__print_stack_trace_5_0_i11);
MR_def_label(ssdb__print_stack_trace_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_sv(3) = MR_r6;
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(ssdb__print_stack_frame_6_0,
		ssdb__print_stack_trace_5_0_i11);
MR_def_label(ssdb__print_stack_trace_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ssdb__print_stack_trace_5_0_i36);
MR_def_label(ssdb__print_stack_trace_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__max_int_0_0);
MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(ssdb_module69)
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
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires integer argument.\n", 41);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browse__type_ctor_info_unbound_0;
MR_decl_entry(univ__type_to_univ_2_0);

MR_BEGIN_MODULE(ssdb_module70)
	MR_init_entry1(ssdb__make_arg_univs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__make_arg_univs_3_0);
	MR_init_label10(ssdb__make_arg_univs_3_0,53,3,7,6,10,11,5,14,16,18)
	MR_init_label1(ssdb__make_arg_univs_3_0,20)
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
MR_def_label(ssdb__make_arg_univs_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__make_arg_univs_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__make_arg_univs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ssdb__make_arg_univs_3_0_i5);
	}
	MR_r4 = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 2);
	if ((MR_tempr2 != MR_r2)) {
		MR_GOTO_LAB(ssdb__make_arg_univs_3_0_i6);
	}
	MR_sv(2) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_r4;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ssdb__make_arg_univs_3_0,
		ssdb__make_arg_univs_3_0_i7);
MR_def_label(ssdb__make_arg_univs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
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
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browse, unbound);
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		ssdb__make_arg_univs_3_0_i11);
MR_def_label(ssdb__make_arg_univs_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__make_arg_univs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ssdb__make_arg_univs_3_0_i14);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ssdb__make_arg_univs_3_0_i53);
MR_def_label(ssdb__make_arg_univs_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 1);
	if ((MR_tempr1 != MR_r2)) {
		MR_GOTO_LAB(ssdb__make_arg_univs_3_0_i16);
	}
	MR_r1 = MR_r4;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ssdb__make_arg_univs_3_0,
		ssdb__make_arg_univs_3_0_i18);
MR_def_label(ssdb__make_arg_univs_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_localcall_lab(ssdb__make_arg_univs_3_0,
		ssdb__make_arg_univs_3_0_i18);
MR_def_label(ssdb__make_arg_univs_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browse, unbound);
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		ssdb__make_arg_univs_3_0_i20);
MR_def_label(ssdb__make_arg_univs_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(ssdb_module71)
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
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

MR_BEGIN_MODULE(ssdb_module72)
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


MR_BEGIN_MODULE(ssdb_module73)
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


MR_BEGIN_MODULE(ssdb_module74)
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
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7459 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module75)
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
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7492 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module76)
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
#line 315 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 7523 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__output_stream_3_0);
MR_decl_entry(mdb__browse__print_browser_term_6_0);
MR_decl_entry(mdb__browse__print_browser_term_format_7_0);

MR_BEGIN_MODULE(ssdb_module77)
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
	MR_np_call_localret_ent(io__output_stream_3_0,
		ssdb__print_browser_term_5_0_i2);
MR_def_label(ssdb__print_browser_term_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_browser_term_5_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7570 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__print_browser_term_5_0
{
#line 315 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 7580 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_browser_term_5_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7593 "ssdb.c"
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


MR_BEGIN_MODULE(ssdb_module78)
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
#line 3093 "ssdb.m"

    SUCCESS_INDICATOR = (T != 0);
;}
#line 7659 "ssdb.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(ssdb__safe_write_6_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
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
	MR_np_call_localret_ent(io__output_stream_3_0,
		ssdb__safe_write_6_0_i9);
MR_def_label(ssdb__safe_write_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__safe_write_6_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7695 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__safe_write_6_0
{
#line 315 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 7705 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__safe_write_6_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7718 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ssdb__safe_write_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
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
	MR_r3 = MR_sv(1);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(1, MR_sv(2), 0);
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
	MR_r1 = (MR_Word) MR_string_const("(unsafe)\n", 9);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module79)
	MR_init_entry1(ssdb__print_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_var_5_0);
	MR_init_label10(ssdb__print_var_5_0,5,6,7,4,10,12,17,18,20,22)
	MR_init_label7(ssdb__print_var_5_0,14,25,3,29,30,28,32)
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
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ssdb__print_var_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 2);
	MR_r5 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,0)) {
		MR_GOTO_LAB(ssdb__print_var_5_0_i4);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
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
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_var_5_0_i10);
MR_def_label(ssdb__print_var_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(5);
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
#line 3093 "ssdb.m"

    SUCCESS_INDICATOR = (T != 0);
;}
#line 7861 "ssdb.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(ssdb__print_var_5_0_i14);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_var_5_0_i17);
MR_def_label(ssdb__print_var_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__print_var_5_0_i18);
MR_def_label(ssdb__print_var_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(3), 0) = MR_r1;
	MR_np_call_localret_ent(io__output_stream_3_0,
		ssdb__print_var_5_0_i20);
MR_def_label(ssdb__print_var_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_var_5_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7892 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__print_var_5_0
{
#line 315 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 7902 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_var_5_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 7915 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ssdb__print_var_5_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
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
	MR_r3 = MR_sv(1);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(1, MR_sv(2), 0);
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
	MR_r1 = (MR_Word) MR_string_const("(unsafe)\n", 9);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__print_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ssdb__print_var_5_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 0);
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
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__safe_write_6_0);
	}
MR_def_label(ssdb__print_var_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ssdb__print_var_prelude_4_0,
		ssdb__print_var_5_0_i32);
MR_def_label(ssdb__print_var_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_\n", 2);
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

MR_BEGIN_MODULE(ssdb_module80)
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
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ssdb__IntroducedFrom__pred__print_var_with_name__3014__1_2_0);
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
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

MR_BEGIN_MODULE(ssdb_module81)
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 8189 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_print_4_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 8201 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_print_4_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 8214 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__det_index0_3_0,
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
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module82)
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
#line 315 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 8337 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
MR_decl_entry(fn__pair__pair_2_0);

MR_BEGIN_MODULE(ssdb_module83)
	MR_init_entry1(ssdb__list_var_value_to_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__list_var_value_to_assoc_list_2_0);
	MR_init_label10(ssdb__list_var_value_to_assoc_list_2_0,35,3,6,7,8,5,11,12,13,10)
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
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,35)
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
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i5);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__list_var_value_to_assoc_list_2_0_i6);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(ssdb__list_var_value_to_assoc_list_2_0,
		ssdb__list_var_value_to_assoc_list_2_0_i7);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pair__pair_2_0,
		ssdb__list_var_value_to_assoc_list_2_0_i8);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i10);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__list_var_value_to_assoc_list_2_0_i11);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(ssdb__list_var_value_to_assoc_list_2_0,
		ssdb__list_var_value_to_assoc_list_2_0_i12);
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_sv(1);
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
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ssdb__list_var_value_to_assoc_list_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ssdb__list_var_value_to_assoc_list_2_0_i35);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__input_stream_3_0);
MR_decl_entry(assoc_list__search_3_0);
MR_decl_entry(mdb__browse__browse_browser_term_no_modes_8_0);

MR_BEGIN_MODULE(ssdb_module84)
	MR_init_entry1(ssdb__browse_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__browse_var_4_0);
	MR_init_label10(ssdb__browse_var_4_0,3,6,9,16,15,5,2,25,26,29)
	MR_init_label3(ssdb__browse_var_4_0,30,31,24)
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
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
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
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__index1_3_0,
		ssdb__browse_var_4_0_i6);
MR_def_label(ssdb__browse_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__browse_var_4_0_i5);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__browse_var_4_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 3);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__browse_var_4_0_i16);
MR_def_label(ssdb__browse_var_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ssdb__browse_var_4_0_i15);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		ssdb__browse_var_4_0_i16);
MR_def_label(ssdb__browse_var_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_r1;
	MR_np_call_localret_ent(io__input_stream_3_0,
		ssdb__browse_var_4_0_i29);
MR_def_label(ssdb__browse_var_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: the variable is unbound.\n", 31);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__browse_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: there aren\'t that many variables.\n", 40);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__browse_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__list_var_value_to_assoc_list_2_0,
		ssdb__browse_var_4_0_i25);
MR_def_label(ssdb__browse_var_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(assoc_list__search_3_0,
		ssdb__browse_var_4_0_i26);
MR_def_label(ssdb__browse_var_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__browse_var_4_0_i24);
	}
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_r2;
	MR_np_call_localret_ent(io__input_stream_3_0,
		ssdb__browse_var_4_0_i29);
MR_def_label(ssdb__browse_var_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__output_stream_3_0,
		ssdb__browse_var_4_0_i30);
MR_def_label(ssdb__browse_var_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__browse_var_4_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8596 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__browse_var_4_0
{
#line 315 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 8606 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__browse_var_4_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8619 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browse__browse_browser_term_no_modes_8_0,
		ssdb__browse_var_4_0_i31);
MR_def_label(ssdb__browse_var_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__browse_var_4_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8642 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__browse_var_4_0
	X = MR_r2;
{
#line 315 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 8653 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__browse_var_4_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8665 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__browse_var_4_0,24)
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


MR_BEGIN_MODULE(ssdb_module85)
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 8707 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 8719 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 8732 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__det_index0_3_0,
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
	MR_np_call_localret_ent(io__input_stream_3_0,
		ssdb__execute_ssdb_browse_4_0_i7);
MR_def_label(ssdb__execute_ssdb_browse_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__output_stream_3_0,
		ssdb__execute_ssdb_browse_4_0_i8);
MR_def_label(ssdb__execute_ssdb_browse_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8778 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 315 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 8788 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8801 "ssdb.c"
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
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8824 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
	X = MR_r2;
{
#line 315 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 8835 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_browse_4_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 8847 "ssdb.c"
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
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module86)
	MR_init_entry1(ssdb__print_vars_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_vars_list_4_0);
	MR_init_label10(ssdb__print_vars_list_4_0,44,6,8,9,10,12,13,14,11,16)
	MR_init_label1(ssdb__print_vars_list_4_0,46)
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
MR_def_label(ssdb__print_vars_list_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__print_vars_list_4_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("\t%2d ", 5);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__format_4_0,
		ssdb__print_vars_list_4_0_i6);
MR_def_label(ssdb__print_vars_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ssdb__print_vars_list_4_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_sv(3), 1);
	MR_sv(3) = MR_tfield(1, MR_sv(3), 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_vars_list_4_0_i10);
MR_def_label(ssdb__print_vars_list_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(ssdb__print_vars_list_4_0_i9);
	}
	MR_r1 = MR_tfield(2, MR_sv(3), 1);
	MR_sv(3) = (MR_Integer) -1;
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_vars_list_4_0_i10);
MR_def_label(ssdb__print_vars_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_sv(3) = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_vars_list_4_0_i10);
MR_def_label(ssdb__print_vars_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(3),0)) {
		MR_GOTO_LAB(ssdb__print_vars_list_4_0_i11);
	}
	MR_r1 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ssdb__print_vars_list_4_0_i12);
MR_def_label(ssdb__print_vars_list_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_vars_list_4_0_i13);
MR_def_label(ssdb__print_vars_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (arg ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_vars_list_4_0_i14);
MR_def_label(ssdb__print_vars_list_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_vars_list_4_0_i16);
MR_def_label(ssdb__print_vars_list_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ssdb__print_vars_list_4_0_i16);
MR_def_label(ssdb__print_vars_list_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ssdb__print_vars_list_4_0_i44);
MR_def_label(ssdb__print_vars_list_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module87)
	MR_init_entry1(ssdb__execute_ssdb_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_vars_4_0);
	MR_init_label2(ssdb__execute_ssdb_vars_4_0,4,3)
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
		MR_GOTO_LAB(ssdb__execute_ssdb_vars_4_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_vars_4_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 9015 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_vars_4_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 9027 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_vars_4_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 9040 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__det_index0_3_0,
		ssdb__execute_ssdb_vars_4_0_i4);
MR_def_label(ssdb__execute_ssdb_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(ssdb__print_vars_list_4_0);
MR_def_label(ssdb__execute_ssdb_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module88)
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 9117 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__print_depth_change_3_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 9127 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_depth_change_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 9140 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__det_index0_3_0,
		ssdb__print_depth_change_3_0_i6);
MR_def_label(ssdb__print_depth_change_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_depth_change_3_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9158 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__print_depth_change_3_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 9170 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__print_depth_change_3_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9183 "ssdb.c"
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


MR_BEGIN_MODULE(ssdb_module89)
	MR_init_entry1(ssdb__execute_ssdb_up_down_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_up_down_6_0);
	MR_init_label10(ssdb__execute_ssdb_up_down_6_0,4,6,3,14,16,18,20,13,12,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_up_down'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_up_down_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_up_down_6_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_up_down_6_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9252 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_up_down_6_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 9262 "ssdb.c"
	MR_r5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_up_down_6_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9275 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_r2);
	if (MR_INT_GE(MR_sv(2),0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_up_down_6_0_i4);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("ssdb: that stack frame does not exist.\n", 39);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_down_6_0_i25);
MR_def_label(ssdb__execute_ssdb_up_down_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) < (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_up_down_6_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ssdb: not that many ancestors.\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_down_6_0_i25);
MR_def_label(ssdb__execute_ssdb_up_down_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__print_depth_change_3_0,
		ssdb__execute_ssdb_up_down_6_0_i20);
MR_def_label(ssdb__execute_ssdb_up_down_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_up_down_6_0_i12);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_up_down_6_0_i14);
MR_def_label(ssdb__execute_ssdb_up_down_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_up_down_6_0_i13);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_up_down_6_0_i13);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_up_down_6_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9332 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_up_down_6_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 9342 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_up_down_6_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9355 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r4 = ((MR_Integer) MR_sv(1) + ((MR_Integer) MR_r2 * (MR_Integer) MR_sv(2)));
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_up_down_6_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("ssdb: that stack frame does not exist.\n", 39);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_down_6_0_i25);
MR_def_label(ssdb__execute_ssdb_up_down_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 < (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_up_down_6_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("ssdb: not that many ancestors.\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_down_6_0_i25);
MR_def_label(ssdb__execute_ssdb_up_down_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__print_depth_change_3_0,
		ssdb__execute_ssdb_up_down_6_0_i20);
MR_def_label(ssdb__execute_ssdb_up_down_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__execute_ssdb_up_down_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires integer argument.\n", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_down_6_0_i25);
MR_def_label(ssdb__execute_ssdb_up_down_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_up_down_6_0_i25);
MR_def_label(ssdb__execute_ssdb_up_down_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module90)
	MR_init_entry1(ssdb__execute_ssdb_down_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_down_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_down'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_down_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) -1;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(ssdb__execute_ssdb_up_down_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module91)
	MR_init_entry1(ssdb__execute_ssdb_up_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_up_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_up'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_up_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(ssdb__execute_ssdb_up_down_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module92)
	MR_init_entry1(ssdb__execute_ssdb_level_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_level_5_0);
	MR_init_label7(ssdb__execute_ssdb_level_5_0,3,8,10,12,7,6,19)
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
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_level_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires argument.\n", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_level_5_0_i19);
MR_def_label(ssdb__execute_ssdb_level_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_level_5_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_level_5_0_i8);
MR_def_label(ssdb__execute_ssdb_level_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_level_5_0_i7);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_level_5_0_i7);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_level_5_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9513 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_level_5_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 9523 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_level_5_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 9536 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_level_5_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("ssdb: that stack frame does not exist.\n", 39);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_level_5_0_i19);
MR_def_label(ssdb__execute_ssdb_level_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 < (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_level_5_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("ssdb: not that many ancestors.\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_level_5_0_i19);
MR_def_label(ssdb__execute_ssdb_level_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__print_depth_change_3_0,
		ssdb__execute_ssdb_level_5_0_i19);
MR_def_label(ssdb__execute_ssdb_level_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires integer argument.\n", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_level_5_0_i19);
MR_def_label(ssdb__execute_ssdb_level_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_level_5_0_i19);
MR_def_label(ssdb__execute_ssdb_level_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module93)
	MR_init_entry1(ssdb__print_event_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_event_info_4_0);
	MR_init_label10(ssdb__print_event_info_4_0,2,3,4,5,6,7,8,9,11,13)
	MR_init_label10(ssdb__print_event_info_4_0,15,17,19,20,21,22,23,24,25,26)
	MR_init_label2(ssdb__print_event_info_4_0,27,28)
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
	if (MR_INT_NE(MR_sv(1),7)) {
		MR_GOTO_LAB(ssdb__print_event_info_4_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("EXCP", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i19);
MR_def_label(ssdb__print_event_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),5)) {
		MR_GOTO_LAB(ssdb__print_event_info_4_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("REDO", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i19);
MR_def_label(ssdb__print_event_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_sv(1) == (MR_Integer) 0) || ((MR_Integer) MR_sv(1) == (MR_Integer) 3)))) {
		MR_GOTO_LAB(ssdb__print_event_info_4_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("CALL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i19);
MR_def_label(ssdb__print_event_info_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_sv(1) == (MR_Integer) 1) || ((MR_Integer) MR_sv(1) == (MR_Integer) 4)))) {
		MR_GOTO_LAB(ssdb__print_event_info_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("EXIT", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i19);
MR_def_label(ssdb__print_event_info_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("FAIL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i19);
MR_def_label(ssdb__print_event_info_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i20);
MR_def_label(ssdb__print_event_info_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i21);
MR_def_label(ssdb__print_event_info_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i22);
MR_def_label(ssdb__print_event_info_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_event_info_4_0_i23);
MR_def_label(ssdb__print_event_info_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ssdb__print_event_info_4_0_i24);
MR_def_label(ssdb__print_event_info_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_event_info_4_0_i25);
MR_def_label(ssdb__print_event_info_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_event_info_4_0_i26);
MR_def_label(ssdb__print_event_info_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_event_info_4_0_i27);
MR_def_label(ssdb__print_event_info_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__print_event_info_4_0_i28);
MR_def_label(ssdb__print_event_info_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__browser_info__set_browser_param_11_0);

MR_BEGIN_MODULE(ssdb_module94)
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
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,0);
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
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_r3 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_r4 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_r5 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_r6 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_r7 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_r8 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
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
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_r3 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_r4 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_r5 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_r6 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_r7 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_r8 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
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
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_r3 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_r4 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_r5 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_r6 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_r7 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_r8 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
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
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_r3 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_r4 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_r5 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_r6 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_r7 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_r8 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_r1 = (MR_Integer) 1;
	}
MR_def_label(ssdb__execute_ssdb_format_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_3_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 9894 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_3_0
{
#line 315 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 9904 "ssdb.c"
	MR_r10 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_3_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 9917 "ssdb.c"
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
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 9941 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_3_0
	X = MR_r1;
{
#line 315 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 9952 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_3_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 9964 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__execute_ssdb_format_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: cannot set to unknown format.\n", 36);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module95)
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
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_np_call_localret_ent(ssdb__process_options__ho1_5_0,
		ssdb__execute_ssdb_format_param_3_0_i2);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i4);
	}
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("ssdb: ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_format_param_3_0_i5);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
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
	MR_sv(7) = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) & (MR_Integer) 1);
	MR_sv(1) = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(3) = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(4) = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(5) = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(6) = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
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
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i10);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("size", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i17);
	}
	MR_tag_alloc_heap(MR_r9, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r9, 0) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i16);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("depth", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i19);
	}
	MR_tag_alloc_heap(MR_r9, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r9, 0) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
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
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i16);
	}
MR_def_label(ssdb__execute_ssdb_format_param_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("width", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_format_param_3_0_i10);
	}
	MR_tag_alloc_heap(MR_r9, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r9, 0) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_param_3_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 10134 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_param_3_0
{
#line 315 "ssdb.m"
X = ssdb__mutable_variable_browser_state;
;}
#line 10144 "ssdb.c"
	MR_r10 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_param_3_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 10157 "ssdb.c"
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
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 10174 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_param_3_0
	X = MR_r1;
{
#line 315 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 10185 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_format_param_3_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 10197 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(9);
MR_def_label(ssdb__execute_ssdb_format_param_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: invalid format parameter.\n", 32);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module96)
	MR_init_entry1(ssdb__unsafe_set_aliases_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_aliases_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_aliases'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_aliases_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_aliases_1_0
	X = MR_r1;
{
#line 305 "ssdb.m"
ssdb__mutable_variable_aliases = X;
;}
#line 10235 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module97)
	MR_init_entry1(ssdb__print_alias_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__print_alias_4_0);
	MR_init_label3(ssdb__print_alias_4_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_alias'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__print_alias_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_alias_4_0_i2);
MR_def_label(ssdb__print_alias_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t=>\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__print_alias_4_0_i3);
MR_def_label(ssdb__print_alias_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_np_call_localret_ent(io__write_list_5_0,
		ssdb__print_alias_4_0_i5);
MR_def_label(ssdb__print_alias_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl_4_2);
MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(ssdb_module98)
	MR_init_entry1(ssdb__execute_ssdb_alias_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_alias_4_0);
	MR_init_label10(ssdb__execute_ssdb_alias_4_0,283,11,9,8,18,19,20,21,22,23)
	MR_init_label10(ssdb__execute_ssdb_alias_4_0,24,25,26,27,28,29,30,31,32,33)
	MR_init_label10(ssdb__execute_ssdb_alias_4_0,34,35,36,37,38,39,40,41,42,43)
	MR_init_label10(ssdb__execute_ssdb_alias_4_0,44,45,46,47,48,17,51,16,55,281)
	MR_init_label1(ssdb__execute_ssdb_alias_4_0,282)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_alias'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_alias_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_alias_4_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 10319 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_alias_4_0
{
#line 305 "ssdb.m"
X = ssdb__mutable_variable_aliases;
;}
#line 10329 "ssdb.c"
	MR_r5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_alias_4_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 10342 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i283);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_np_tailcall_ent(map__foldl_4_2);
MR_def_label(ssdb__execute_ssdb_alias_4_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i8);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_r5;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		ssdb__execute_ssdb_alias_4_0_i11);
MR_def_label(ssdb__execute_ssdb_alias_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__print_alias_4_0);
MR_def_label(ssdb__execute_ssdb_alias_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("There is no such alias.\n", 24);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_alias_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_r7 = MR_tempr1;
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("up", 2)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i18);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
	}
MR_def_label(ssdb__execute_ssdb_alias_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("down", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i19);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("goto", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i20);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("help", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i21);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("list", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("next", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i23);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("quit", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i24);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("step", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i25);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("vars", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i26);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("alias", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i27);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("break", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i28);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("level", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i29);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("print", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i30);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("retry", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i31);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("stack", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i32);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("browse", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i33);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("delete", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i34);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("enable", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i35);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("finish", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i36);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("format", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i37);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("return", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i38);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("source", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i39);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("current", 7)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i40);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("disable", 7)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i41);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("unalias", 7)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i42);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("continue", 8)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i43);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("exception", 9)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i44);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("list_path", 9)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i45);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("format_param", 12)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i46);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("pop_list_dir", 12)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i47);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("push_list_dir", 13)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i48);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
	MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i17);
MR_def_label(ssdb__execute_ssdb_alias_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("list_context_lines", 18)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i16);
	}
	MR_sv(1) = MR_r2;
	MR_r8 = MR_r1;
	MR_r1 = MR_r7;
	MR_r4 = MR_r6;
	MR_r3 = MR_tfield(1, MR_r8, 0);
MR_def_label(ssdb__execute_ssdb_alias_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_np_call_localret_ent(map__set_4_0,
		ssdb__execute_ssdb_alias_4_0_i51);
MR_def_label(ssdb__execute_ssdb_alias_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_alias_4_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 10759 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_alias_4_0
	X = MR_r1;
{
#line 305 "ssdb.m"
ssdb__mutable_variable_aliases = X;
;}
#line 10770 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_alias_4_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 10782 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_alias_4_0_i282);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__print_alias_4_0);
MR_def_label(ssdb__execute_ssdb_alias_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("\' is not a valid command.\n", 26);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_alias_4_0_i55);
MR_def_label(ssdb__execute_ssdb_alias_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_alias_4_0_i281);
MR_def_label(ssdb__execute_ssdb_alias_4_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_alias_4_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__remove_4_0);

MR_BEGIN_MODULE(ssdb_module99)
	MR_init_entry1(ssdb__execute_ssdb_unalias_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_unalias_4_0);
	MR_init_label6(ssdb__execute_ssdb_unalias_4_0,7,5,14,46,2,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_unalias'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_unalias_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_unalias_4_0_i2);
	}
	MR_r5 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_unalias_4_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_unalias_4_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 10857 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_unalias_4_0
{
#line 305 "ssdb.m"
X = ssdb__mutable_variable_aliases;
;}
#line 10867 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_unalias_4_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 10880 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__remove_4_0,
		ssdb__execute_ssdb_unalias_4_0_i7);
MR_def_label(ssdb__execute_ssdb_unalias_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_unalias_4_0_i5);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_unalias_4_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 10908 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_unalias_4_0
	X = MR_r3;
{
#line 305 "ssdb.m"
ssdb__mutable_variable_aliases = X;
;}
#line 10919 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_unalias_4_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 10931 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_unalias_4_0_i48);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\' removed.\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_unalias_4_0_i14);
MR_def_label(ssdb__execute_ssdb_unalias_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\' cannot be removed, since it does not exist.\n", 46);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_unalias_4_0_i14);
MR_def_label(ssdb__execute_ssdb_unalias_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Alias \140", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_ssdb_unalias_4_0_i46);
MR_def_label(ssdb__execute_ssdb_unalias_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_unalias_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires argument.\n", 33);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_unalias_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module100)
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 10998 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module101)
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11031 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module102)
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
#line 324 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11062 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module103)
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 11102 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_2_4_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 11114 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_2_4_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 11127 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__det_index0_3_0,
		ssdb__execute_ssdb_list_2_4_0_i2);
MR_def_label(ssdb__execute_ssdb_list_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 5);
	MR_sv(1) = MR_tfield(0, MR_r1, 4);
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_2_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("ssdb: sorry, call site is unknown.\n", 35);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_list_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) MR_sv(3));
	MR_np_call_localret_ent(fn__int__max_2_0,
		ssdb__execute_ssdb_list_2_4_0_i6);
MR_def_label(ssdb__execute_ssdb_list_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r2);
	MR_np_call_localret_ent(io__output_stream_3_0,
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11178 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_2_4_0
{
#line 324 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11190 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_2_4_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11203 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
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


MR_BEGIN_MODULE(ssdb_module104)
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11253 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 324 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11265 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11278 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 11290 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 11300 "ssdb.c"
	MR_tempr2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 11313 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__det_index0_3_0,
		ssdb__execute_ssdb_list_4_0_i4);
MR_def_label(ssdb__execute_ssdb_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 5);
	MR_sv(1) = MR_tfield(0, MR_r1, 4);
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_list_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("ssdb: sorry, call site is unknown.\n", 35);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) MR_sv(3));
	MR_np_call_localret_ent(fn__int__max_2_0,
		ssdb__execute_ssdb_list_4_0_i8);
MR_def_label(ssdb__execute_ssdb_list_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r2);
	MR_np_call_localret_ent(io__output_stream_3_0,
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11364 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 324 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11376 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_4_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11389 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
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
	MR_sv(3) = MR_r2;
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
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__execute_ssdb_list_2_4_0);
MR_def_label(ssdb__execute_ssdb_list_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires integer argument.\n", 41);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_list_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module105)
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
#line 324 "ssdb.m"
ssdb__mutable_variable_list_params = X;
;}
#line 11467 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module106)
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11508 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 324 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11520 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11533 "ssdb.c"
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
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,3);
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11579 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 324 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11591 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11604 "ssdb.c"
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11626 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
	X = MR_r2;
{
#line 324 "ssdb.m"
ssdb__mutable_variable_list_params = X;
;}
#line 11637 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_path_3_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11649 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module107)
	MR_init_entry1(ssdb__execute_ssdb_push_list_dir_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_push_list_dir_3_0);
	MR_init_label2(ssdb__execute_ssdb_push_list_dir_3_0,18,6)
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
		MR_GOTO_LAB(ssdb__execute_ssdb_push_list_dir_3_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires argument.\n", 33);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_push_list_dir_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_push_list_dir_3_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11694 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_push_list_dir_3_0
{
#line 324 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11706 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_push_list_dir_3_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11719 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__listing, search_path);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11748 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_push_list_dir_3_0
	X = MR_tempr1;
{
#line 324 "ssdb.m"
ssdb__mutable_variable_list_params = X;
;}
#line 11759 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_push_list_dir_3_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11771 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module108)
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11812 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_pop_list_dir_3_0
{
#line 324 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11824 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_pop_list_dir_3_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11837 "ssdb.c"
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11859 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_pop_list_dir_3_0
	X = MR_r2;
{
#line 324 "ssdb.m"
ssdb__mutable_variable_list_params = X;
;}
#line 11870 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_pop_list_dir_3_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11882 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__execute_ssdb_pop_list_dir_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module109)
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11925 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 324 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 11937 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 11950 "ssdb.c"
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 12005 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 324 "ssdb.m"
X = ssdb__mutable_variable_list_params;
;}
#line 12017 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 12030 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 12045 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
	X = MR_tempr2;
{
#line 324 "ssdb.m"
ssdb__mutable_variable_list_params = X;
;}
#line 12056 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_list_context_lines_3_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 12068 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
	}
MR_def_label(ssdb__execute_ssdb_list_context_lines_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires integer argument.\n", 41);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_list_context_lines_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module110)
	MR_init_entry1(ssdb__unsafe_set_breakpoints_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_breakpoints_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_breakpoints_map'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_breakpoints_map_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_breakpoints_map_1_0
	X = MR_r1;
{
#line 308 "ssdb.m"
ssdb__mutable_variable_breakpoints_map = X;
;}
#line 12111 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module111)
	MR_init_entry1(ssdb__unsafe_set_breakpoints_filter_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__unsafe_set_breakpoints_filter_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_breakpoints_filter'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__unsafe_set_breakpoints_filter_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__unsafe_set_breakpoints_filter_1_0
	X = MR_r1;
{
#line 310 "ssdb.m"
ssdb__mutable_variable_breakpoints_filter = X;
;}
#line 12143 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module112)
	MR_init_entry1(ssdb__first_unseen_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__first_unseen_3_0);
	MR_init_label2(ssdb__first_unseen_3_0,9,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'first_unseen'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__first_unseen_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__first_unseen_3_0_i3);
	}
MR_def_label(ssdb__first_unseen_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ssdb__first_unseen_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if ((MR_tempr1 != MR_r2)) {
		MR_GOTO_LAB(ssdb__first_unseen_3_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_localtailcall(ssdb__first_unseen_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bitmap__set_3_0);

MR_BEGIN_MODULE(ssdb_module113)
	MR_init_entry1(ssdb__set_breakpoints_filter_bits_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__set_breakpoints_filter_bits_3_0);
	MR_init_label4(ssdb__set_breakpoints_filter_bits_3_0,15,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_breakpoints_filter_bits'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__set_breakpoints_filter_bits_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ssdb__set_breakpoints_filter_bits_3_0_i15);
	}
	MR_r1 = MR_r2;
	MR_proceed();
	}
MR_def_label(ssdb__set_breakpoints_filter_bits_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__hash_1_0,
		ssdb__set_breakpoints_filter_bits_3_0_i4);
MR_def_label(ssdb__set_breakpoints_filter_bits_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 & (MR_Integer) 65535);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(bitmap__set_3_0,
		ssdb__set_breakpoints_filter_bits_3_0_i5);
MR_def_label(ssdb__set_breakpoints_filter_bits_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__hash_1_0,
		ssdb__set_breakpoints_filter_bits_3_0_i6);
MR_def_label(ssdb__set_breakpoints_filter_bits_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 & (MR_Integer) 65535);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(bitmap__set_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module114)
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
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ssdb__print_breakpoint_3_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tempr3 = MR_tfield(0, MR_r1, 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_tfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(2,8,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
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
	MR_tempr3 = MR_tfield(0, MR_r1, 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_tfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(2,8,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
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

MR_decl_entry(map__contains_2_0);
MR_decl_entry(map__values_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__sort_2_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(ssdb_module115)
	MR_init_entry1(ssdb__add_breakpoint_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__add_breakpoint_3_0);
	MR_init_label8(ssdb__add_breakpoint_3_0,3,2,6,8,9,10,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_breakpoint'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__add_breakpoint_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_breakpoint_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 12366 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__add_breakpoint_3_0
{
#line 308 "ssdb.m"
X = ssdb__mutable_variable_breakpoints_map;
;}
#line 12376 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_breakpoint_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 12389 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__contains_2_0,
		ssdb__add_breakpoint_3_0_i3);
MR_def_label(ssdb__add_breakpoint_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__add_breakpoint_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("The breakpoint already exists.\n", 31);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__add_breakpoint_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__values_2_0,
		ssdb__add_breakpoint_3_0_i6);
MR_def_label(ssdb__add_breakpoint_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ssdb__add_breakpoint_3_0_i8);
MR_def_label(ssdb__add_breakpoint_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ssdb__add_breakpoint_3_0_i9);
MR_def_label(ssdb__add_breakpoint_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__first_unseen_3_0,
		ssdb__add_breakpoint_3_0_i10);
MR_def_label(ssdb__add_breakpoint_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ssdb__add_breakpoint_3_0_i12);
MR_def_label(ssdb__add_breakpoint_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_breakpoint_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 12472 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__add_breakpoint_3_0
	X = MR_r1;
{
#line 308 "ssdb.m"
ssdb__mutable_variable_breakpoints_map = X;
;}
#line 12483 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_breakpoint_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 12495 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_breakpoint_3_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 12507 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__add_breakpoint_3_0
{
#line 310 "ssdb.m"
X = ssdb__mutable_variable_breakpoints_filter;
;}
#line 12517 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_breakpoint_3_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 12530 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ssdb__set_breakpoints_filter_bits_3_0,
		ssdb__add_breakpoint_3_0_i13);
MR_def_label(ssdb__add_breakpoint_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_breakpoint_3_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 12547 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__add_breakpoint_3_0
	X = MR_r1;
{
#line 310 "ssdb.m"
ssdb__mutable_variable_breakpoints_filter = X;
;}
#line 12558 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_breakpoint_3_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 12570 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__print_breakpoint_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(fn__map__values_1_0);
MR_decl_entry(fn__string__rstrip_pred_2_0);
MR_decl_entry(fn__string__length_1_0);
MR_decl_entry(fn__string__left_2_0);
MR_decl_entry(fn__string__right_2_0);

MR_BEGIN_MODULE(ssdb_module116)
	MR_init_entry1(ssdb__execute_ssdb_break_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_break_3_0);
	MR_init_label10(ssdb__execute_ssdb_break_3_0,3,10,9,13,14,7,20,21,22,25)
	MR_init_label3(ssdb__execute_ssdb_break_3_0,26,18,6)
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
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires argument.\n", 33);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_break_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_3_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("info", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_3_0_i7);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 12631 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 308 "ssdb.m"
X = ssdb__mutable_variable_breakpoints_map;
;}
#line 12641 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_break_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 12654 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(map__is_empty_1_0,
		ssdb__execute_ssdb_break_3_0_i10);
MR_def_label(ssdb__execute_ssdb_break_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("There are no break points.\n", 27);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_break_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__execute_ssdb_break_3_0_i13);
MR_def_label(ssdb__execute_ssdb_break_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ssdb__execute_ssdb_break_3_0_i14);
MR_def_label(ssdb__execute_ssdb_break_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(ssdb__execute_ssdb_break_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__rstrip_pred_2_0,
		ssdb__execute_ssdb_break_3_0_i20);
MR_def_label(ssdb__execute_ssdb_break_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__length_1_0,
		ssdb__execute_ssdb_break_3_0_i21);
MR_def_label(ssdb__execute_ssdb_break_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__left_2_0,
		ssdb__execute_ssdb_break_3_0_i22);
MR_def_label(ssdb__execute_ssdb_break_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_3_0_i18);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__length_1_0,
		ssdb__execute_ssdb_break_3_0_i25);
MR_def_label(ssdb__execute_ssdb_break_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(3));
	}
	MR_np_call_localret_ent(fn__string__right_2_0,
		ssdb__execute_ssdb_break_3_0_i26);
MR_def_label(ssdb__execute_ssdb_break_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_break_3_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ssdb__add_breakpoint_3_0);
	}
MR_def_label(ssdb__execute_ssdb_break_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: invalid argument.\n", 24);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_break_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module117)
	MR_init_entry1(fn__ssdb__bp_number_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ssdb__bp_number_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bp_number'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ssdb__bp_number_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__member_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(fn__bitmap__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_bitmap_0;
MR_decl_entry(map__foldl_values_4_0);

MR_BEGIN_MODULE(ssdb_module118)
	MR_init_entry1(ssdb__modify_breakpoint_state_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__modify_breakpoint_state_4_0);
	MR_init_label9(ssdb__modify_breakpoint_state_4_0,6,4,7,9,10,12,14,15,16)
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
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 12826 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
{
#line 308 "ssdb.m"
X = ssdb__mutable_variable_breakpoints_map;
;}
#line 12838 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 12851 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ssdb__modify_breakpoint_state_4_0_i4);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__member_3_0,
		ssdb__modify_breakpoint_state_4_0_i6);
MR_def_label(ssdb__modify_breakpoint_state_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(0, MR_r2, 0);
	if ((MR_sv(2) != MR_r6)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_GOTO_LAB(ssdb__modify_breakpoint_state_4_0_i7);
MR_def_label(ssdb__modify_breakpoint_state_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ssdb__modify_breakpoint_state_4_0_i14);
MR_def_label(ssdb__modify_breakpoint_state_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tempr2;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ssdb__modify_breakpoint_state_4_0_i9);
MR_def_label(ssdb__modify_breakpoint_state_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 12914 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
	X = MR_r1;
{
#line 308 "ssdb.m"
ssdb__mutable_variable_breakpoints_map = X;
;}
#line 12925 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 12937 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 65536;
	MR_np_call_localret_ent(fn__bitmap__init_1_0,
		ssdb__modify_breakpoint_state_4_0_i10);
MR_def_label(ssdb__modify_breakpoint_state_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_values_4_0,
		ssdb__modify_breakpoint_state_4_0_i12);
MR_def_label(ssdb__modify_breakpoint_state_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 12969 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
	X = MR_r1;
{
#line 310 "ssdb.m"
ssdb__mutable_variable_breakpoints_filter = X;
;}
#line 12980 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__modify_breakpoint_state_4_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 12992 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ssdb__print_breakpoint_3_0);
MR_def_label(ssdb__modify_breakpoint_state_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" does not exist.\n", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__modify_breakpoint_state_4_0_i15);
MR_def_label(ssdb__modify_breakpoint_state_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ssdb: break point #", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__modify_breakpoint_state_4_0_i16);
MR_def_label(ssdb__modify_breakpoint_state_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__map_values_only_2_0);

MR_BEGIN_MODULE(ssdb_module119)
	MR_init_entry1(ssdb__execute_ssdb_enable_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_enable_3_0);
	MR_init_label10(ssdb__execute_ssdb_enable_3_0,3,10,11,13,15,14,18,19,7,24)
	MR_init_label2(ssdb__execute_ssdb_enable_3_0,23,76)
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
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires argument.\n", 33);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_enable_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_3_0_i76);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r6 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_3_0_i7);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13068 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_3_0
{
#line 308 "ssdb.m"
X = ssdb__mutable_variable_breakpoints_map;
;}
#line 13078 "ssdb.c"
	MR_r5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13091 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_np_call_localret_ent(fn__map__map_values_only_2_0,
		ssdb__execute_ssdb_enable_3_0_i10);
MR_def_label(ssdb__execute_ssdb_enable_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13111 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_3_0
	X = MR_r1;
{
#line 308 "ssdb.m"
ssdb__mutable_variable_breakpoints_map = X;
;}
#line 13122 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13134 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 65536;
	MR_np_call_localret_ent(fn__bitmap__init_1_0,
		ssdb__execute_ssdb_enable_3_0_i11);
MR_def_label(ssdb__execute_ssdb_enable_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_values_4_0,
		ssdb__execute_ssdb_enable_3_0_i13);
MR_def_label(ssdb__execute_ssdb_enable_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_3_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 13166 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_3_0
	X = MR_r1;
{
#line 310 "ssdb.m"
ssdb__mutable_variable_breakpoints_filter = X;
;}
#line 13177 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_enable_3_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 13189 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__is_empty_1_0,
		ssdb__execute_ssdb_enable_3_0_i15);
MR_def_label(ssdb__execute_ssdb_enable_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("There are no break points.\n", 27);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_enable_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__execute_ssdb_enable_3_0_i18);
MR_def_label(ssdb__execute_ssdb_enable_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ssdb__execute_ssdb_enable_3_0_i19);
MR_def_label(ssdb__execute_ssdb_enable_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(ssdb__execute_ssdb_enable_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_enable_3_0_i24);
MR_def_label(ssdb__execute_ssdb_enable_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_3_0_i23);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_enable_3_0_i23);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ssdb__modify_breakpoint_state_4_0);
MR_def_label(ssdb__execute_ssdb_enable_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: invalid argument to command.\n", 35);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_enable_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ssdb__print_too_many_arguments_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module120)
	MR_init_entry1(ssdb__execute_ssdb_disable_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_disable_3_0);
	MR_init_label10(ssdb__execute_ssdb_disable_3_0,3,10,11,13,15,14,18,19,7,24)
	MR_init_label2(ssdb__execute_ssdb_disable_3_0,23,76)
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
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires argument.\n", 33);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_disable_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_3_0_i76);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r6 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_3_0_i7);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13316 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
{
#line 308 "ssdb.m"
X = ssdb__mutable_variable_breakpoints_map;
;}
#line 13326 "ssdb.c"
	MR_r5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13339 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,10,1);
	MR_np_call_localret_ent(fn__map__map_values_only_2_0,
		ssdb__execute_ssdb_disable_3_0_i10);
MR_def_label(ssdb__execute_ssdb_disable_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13359 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
	X = MR_r1;
{
#line 308 "ssdb.m"
ssdb__mutable_variable_breakpoints_map = X;
;}
#line 13370 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13382 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 65536;
	MR_np_call_localret_ent(fn__bitmap__init_1_0,
		ssdb__execute_ssdb_disable_3_0_i11);
MR_def_label(ssdb__execute_ssdb_disable_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_values_4_0,
		ssdb__execute_ssdb_disable_3_0_i13);
MR_def_label(ssdb__execute_ssdb_disable_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 13414 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
	X = MR_r1;
{
#line 310 "ssdb.m"
ssdb__mutable_variable_breakpoints_filter = X;
;}
#line 13425 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_disable_3_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 13437 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__is_empty_1_0,
		ssdb__execute_ssdb_disable_3_0_i15);
MR_def_label(ssdb__execute_ssdb_disable_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("There are no break points.\n", 27);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_disable_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__execute_ssdb_disable_3_0_i18);
MR_def_label(ssdb__execute_ssdb_disable_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ssdb__execute_ssdb_disable_3_0_i19);
MR_def_label(ssdb__execute_ssdb_disable_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(ssdb__execute_ssdb_disable_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_disable_3_0_i24);
MR_def_label(ssdb__execute_ssdb_disable_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_3_0_i23);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_disable_3_0_i23);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ssdb__modify_breakpoint_state_4_0);
MR_def_label(ssdb__execute_ssdb_disable_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: invalid argument to command.\n", 35);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_disable_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ssdb__print_too_many_arguments_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__delete_3_0);

MR_BEGIN_MODULE(ssdb_module121)
	MR_init_entry1(ssdb__delete_breakpoint_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__delete_breakpoint_3_0);
	MR_init_label9(ssdb__delete_breakpoint_3_0,6,4,7,8,9,11,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_breakpoint'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__delete_breakpoint_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13549 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_3_0
{
#line 308 "ssdb.m"
X = ssdb__mutable_variable_breakpoints_map;
;}
#line 13559 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13572 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ssdb__delete_breakpoint_3_0_i4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(map__member_3_0,
		ssdb__delete_breakpoint_3_0_i6);
MR_def_label(ssdb__delete_breakpoint_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r2, 0);
	if ((MR_sv(1) != MR_r5)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_GOTO_LAB(ssdb__delete_breakpoint_3_0_i7);
MR_def_label(ssdb__delete_breakpoint_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ssdb__delete_breakpoint_3_0_i13);
MR_def_label(ssdb__delete_breakpoint_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__delete_3_0,
		ssdb__delete_breakpoint_3_0_i8);
MR_def_label(ssdb__delete_breakpoint_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13627 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_3_0
	X = MR_r1;
{
#line 308 "ssdb.m"
ssdb__mutable_variable_breakpoints_map = X;
;}
#line 13638 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13650 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 65536;
	MR_np_call_localret_ent(fn__bitmap__init_1_0,
		ssdb__delete_breakpoint_3_0_i9);
MR_def_label(ssdb__delete_breakpoint_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,13);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_values_4_0,
		ssdb__delete_breakpoint_3_0_i11);
MR_def_label(ssdb__delete_breakpoint_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_3_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 13682 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_3_0
	X = MR_r1;
{
#line 310 "ssdb.m"
ssdb__mutable_variable_breakpoints_filter = X;
;}
#line 13693 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__delete_breakpoint_3_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 13705 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ssdb__print_breakpoint_3_0);
MR_def_label(ssdb__delete_breakpoint_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" does not exist.\n", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__delete_breakpoint_3_0_i14);
MR_def_label(ssdb__delete_breakpoint_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ssdb: break point #", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__delete_breakpoint_3_0_i15);
MR_def_label(ssdb__delete_breakpoint_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(ssdb_module122)
	MR_init_entry1(ssdb__execute_ssdb_delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_delete_3_0);
	MR_init_label10(ssdb__execute_ssdb_delete_3_0,3,10,9,13,14,16,18,19,7,21)
	MR_init_label2(ssdb__execute_ssdb_delete_3_0,20,6)
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
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires argument.\n", 33);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_delete_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_3_0_i6);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_3_0_i7);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13781 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 308 "ssdb.m"
X = ssdb__mutable_variable_breakpoints_map;
;}
#line 13791 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13804 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(map__is_empty_1_0,
		ssdb__execute_ssdb_delete_3_0_i10);
MR_def_label(ssdb__execute_ssdb_delete_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("There are no break points.\n", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_delete_3_0_i16);
MR_def_label(ssdb__execute_ssdb_delete_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		ssdb__execute_ssdb_delete_3_0_i13);
MR_def_label(ssdb__execute_ssdb_delete_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ssdb__execute_ssdb_delete_3_0_i14);
MR_def_label(ssdb__execute_ssdb_delete_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,14);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ssdb__execute_ssdb_delete_3_0_i16);
MR_def_label(ssdb__execute_ssdb_delete_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ssdb__execute_ssdb_delete_3_0_i18);
MR_def_label(ssdb__execute_ssdb_delete_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13871 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
	X = MR_r1;
{
#line 308 "ssdb.m"
ssdb__mutable_variable_breakpoints_map = X;
;}
#line 13882 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 13894 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 65536;
	MR_np_call_localret_ent(fn__bitmap__init_1_0,
		ssdb__execute_ssdb_delete_3_0_i19);
MR_def_label(ssdb__execute_ssdb_delete_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 13911 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
	X = MR_r1;
{
#line 310 "ssdb.m"
ssdb__mutable_variable_breakpoints_filter = X;
;}
#line 13922 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_delete_3_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 13934 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__execute_ssdb_delete_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__execute_ssdb_delete_3_0_i21);
MR_def_label(ssdb__execute_ssdb_delete_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_3_0_i20);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_delete_3_0_i20);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ssdb__delete_breakpoint_3_0);
MR_def_label(ssdb__execute_ssdb_delete_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: invalid argument to command.\n", 35);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_delete_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_line_as_string_4_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__nl_3_0);
MR_decl_entry(fn__string__words_1_0);
MR_decl_entry(string__prefix_2_0);

MR_BEGIN_MODULE(ssdb_module123)
	MR_init_entry1(ssdb__read_command_lines_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__read_command_lines_5_0);
	MR_init_label10(ssdb__read_command_lines_5_0,34,2,20,4,6,7,8,9,5,11)
	MR_init_label3(ssdb__read_command_lines_5_0,13,15,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_command_lines'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__read_command_lines_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ssdb__read_command_lines_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(io__read_line_as_string_4_0,
		ssdb__read_command_lines_5_0_i2);
MR_def_label(ssdb__read_command_lines_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__read_command_lines_5_0_i4);
	}
MR_def_label(ssdb__read_command_lines_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ssdb__read_command_lines_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ssdb__read_command_lines_5_0_i5);
	}
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		ssdb__read_command_lines_5_0_i6);
MR_def_label(ssdb__read_command_lines_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("ssdb: ", 6);
	MR_np_call_localret_ent(io__write_string_4_0,
		ssdb__read_command_lines_5_0_i7);
MR_def_label(ssdb__read_command_lines_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		ssdb__read_command_lines_5_0_i8);
MR_def_label(ssdb__read_command_lines_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		ssdb__read_command_lines_5_0_i9);
MR_def_label(ssdb__read_command_lines_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__nl_3_0,
		ssdb__read_command_lines_5_0_i20);
MR_def_label(ssdb__read_command_lines_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__words_1_0,
		ssdb__read_command_lines_5_0_i11);
MR_def_label(ssdb__read_command_lines_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__read_command_lines_5_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ssdb__read_command_lines_5_0_i34);
MR_def_label(ssdb__read_command_lines_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const("#", 1);
	MR_np_call_localret_ent(string__prefix_2_0,
		ssdb__read_command_lines_5_0_i15);
MR_def_label(ssdb__read_command_lines_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__read_command_lines_5_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ssdb__read_command_lines_5_0_i34);
MR_def_label(ssdb__read_command_lines_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ssdb__read_command_lines_5_0_i34);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__close_input_3_0);
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ssdb_module124)
	MR_init_entry1(ssdb__execute_ssdb_source_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_source_3_0);
	MR_init_label10(ssdb__execute_ssdb_source_3_0,5,8,9,10,11,7,13,14,15,16)
	MR_init_label1(ssdb__execute_ssdb_source_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_source'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_source_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_source_3_0_i2);
	}
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_source_3_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__open_input_4_0,
		ssdb__execute_ssdb_source_3_0_i5);
MR_def_label(ssdb__execute_ssdb_source_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_source_3_0_i7);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		ssdb__execute_ssdb_source_3_0_i8);
MR_def_label(ssdb__execute_ssdb_source_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("ssdb: ", 6);
	MR_np_call_localret_ent(io__write_string_4_0,
		ssdb__execute_ssdb_source_3_0_i9);
MR_def_label(ssdb__execute_ssdb_source_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		ssdb__execute_ssdb_source_3_0_i10);
MR_def_label(ssdb__execute_ssdb_source_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		ssdb__execute_ssdb_source_3_0_i11);
MR_def_label(ssdb__execute_ssdb_source_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_3_0);
MR_def_label(ssdb__execute_ssdb_source_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ssdb__read_command_lines_5_0,
		ssdb__execute_ssdb_source_3_0_i13);
MR_def_label(ssdb__execute_ssdb_source_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		ssdb__execute_ssdb_source_3_0_i14);
MR_def_label(ssdb__execute_ssdb_source_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_source_3_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 14182 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_source_3_0
{
#line 302 "ssdb.m"
X = ssdb__mutable_variable_command_queue;
;}
#line 14194 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_source_3_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 14207 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ssdb__execute_ssdb_source_3_0_i15);
MR_def_label(ssdb__execute_ssdb_source_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ssdb__execute_ssdb_source_3_0_i16);
MR_def_label(ssdb__execute_ssdb_source_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_source_3_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 14240 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_source_3_0
	X = MR_r1;
{
#line 302 "ssdb.m"
ssdb__mutable_variable_command_queue = X;
;}
#line 14251 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_source_3_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 14263 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__execute_ssdb_source_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: \140source\' command expects filename argument.\n", 50);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module125)
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
#line 3417 "ssdb.m"

    exit(0);
    IO = IO0;
;}
#line 14302 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module126)
	MR_init_entry1(ssdb__execute_ssdb_quit_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_quit_4_0);
	MR_init_label10(ssdb__execute_ssdb_quit_4_0,6,7,8,10,11,16,18,14,3,21)
	MR_init_label2(ssdb__execute_ssdb_quit_4_0,62,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_ssdb_quit'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_ssdb_quit_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_4_0_i3);
	}
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_4_0_i62);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("ssdb: are you sure you want to quit\? ", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_quit_4_0_i6);
MR_def_label(ssdb__execute_ssdb_quit_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		ssdb__execute_ssdb_quit_4_0_i7);
MR_def_label(ssdb__execute_ssdb_quit_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		ssdb__execute_ssdb_quit_4_0_i8);
MR_def_label(ssdb__execute_ssdb_quit_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_4_0_i10);
	}
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_quit_4_0
	MR_OBTAIN_GLOBAL_LOCK("exit_process");
{
#line 3417 "ssdb.m"

    exit(0);
    IO = IO0;
;}
#line 14366 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("exit_process");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__execute_ssdb_quit_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_4_0_i11);
	}
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_quit_4_0
	MR_OBTAIN_GLOBAL_LOCK("exit_process");
{
#line 3417 "ssdb.m"

    exit(0);
    IO = IO0;
;}
#line 14387 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("exit_process");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__execute_ssdb_quit_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("y", 1);
	}
	MR_np_call_localret_ent(string__prefix_2_0,
		ssdb__execute_ssdb_quit_4_0_i16);
MR_def_label(ssdb__execute_ssdb_quit_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_4_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Y", 1);
	MR_np_call_localret_ent(string__prefix_2_0,
		ssdb__execute_ssdb_quit_4_0_i18);
MR_def_label(ssdb__execute_ssdb_quit_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_4_0_i61);
	}
MR_def_label(ssdb__execute_ssdb_quit_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_quit_4_0
	MR_OBTAIN_GLOBAL_LOCK("exit_process");
{
#line 3417 "ssdb.m"

    exit(0);
    IO = IO0;
;}
#line 14430 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("exit_process");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
MR_def_label(ssdb__execute_ssdb_quit_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("-y", 2)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_4_0_i21);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_quit_4_0_i21);
	}
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_quit_4_0
	MR_OBTAIN_GLOBAL_LOCK("exit_process");
{
#line 3417 "ssdb.m"

    exit(0);
    IO = IO0;
;}
#line 14456 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("exit_process");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(ssdb__execute_ssdb_quit_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: invalid argument.\n", 24);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ssdb__execute_ssdb_quit_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(ssdb__execute_ssdb_quit_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__error_message_2_0);

MR_BEGIN_MODULE(ssdb_module127)
	MR_init_entry1(ssdb__read_and_execute_cmd_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__read_and_execute_cmd_5_0);
	MR_init_label10(ssdb__read_and_execute_cmd_5_0,4,5,6,8,11,12,13,14,10,17)
	MR_init_label2(ssdb__read_and_execute_cmd_5_0,3,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_and_execute_cmd'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__read_and_execute_cmd_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__read_and_execute_cmd_5_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 14505 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__read_and_execute_cmd_5_0
{
#line 302 "ssdb.m"
X = ssdb__mutable_variable_command_queue;
;}
#line 14515 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__read_and_execute_cmd_5_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 14528 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("ssdb> ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__read_and_execute_cmd_5_0_i4);
MR_def_label(ssdb__read_and_execute_cmd_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		ssdb__read_and_execute_cmd_5_0_i5);
MR_def_label(ssdb__read_and_execute_cmd_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__read_line_as_string_3_0,
		ssdb__read_and_execute_cmd_5_0_i6);
MR_def_label(ssdb__read_and_execute_cmd_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i8);
	}
	MR_r1 = (MR_Integer) 31;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ssdb__read_and_execute_cmd_5_0_i10);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		ssdb__read_and_execute_cmd_5_0_i11);
MR_def_label(ssdb__read_and_execute_cmd_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__read_and_execute_cmd_5_0_i12);
MR_def_label(ssdb__read_and_execute_cmd_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("could not read command: ", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__read_and_execute_cmd_5_0_i13);
MR_def_label(ssdb__read_and_execute_cmd_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__read_and_execute_cmd_5_0_i14);
MR_def_label(ssdb__read_and_execute_cmd_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 31;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,34);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__words_1_0,
		ssdb__read_and_execute_cmd_5_0_i17);
MR_def_label(ssdb__read_and_execute_cmd_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__expand_alias_and_execute_7_0);
MR_def_label(ssdb__read_and_execute_cmd_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__read_and_execute_cmd_5_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 14621 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r4, 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__read_and_execute_cmd_5_0
	X = MR_tempr1;
{
#line 302 "ssdb.m"
ssdb__mutable_variable_command_queue = X;
;}
#line 14635 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__read_and_execute_cmd_5_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 14647 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r4, 0);
	}
	MR_np_call_localret_ent(fn__string__words_1_0,
		ssdb__read_and_execute_cmd_5_0_i19);
MR_def_label(ssdb__read_and_execute_cmd_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__expand_alias_and_execute_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module128)
	MR_init_entry1(ssdb__expand_alias_and_execute_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__expand_alias_and_execute_7_0);
	MR_init_label10(ssdb__expand_alias_and_execute_7_0,6,4,3,13,16,19,12,23,26,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_alias_and_execute'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__expand_alias_and_execute_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__expand_alias_and_execute_7_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 14696 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__expand_alias_and_execute_7_0
{
#line 305 "ssdb.m"
X = ssdb__mutable_variable_aliases;
;}
#line 14706 "ssdb.c"
	MR_r6 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__expand_alias_and_execute_7_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 14719 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__expand_alias_and_execute_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_r6;
	MR_r4 = (MR_Word) MR_string_const("EMPTY", 5);
	MR_np_call_localret_ent(map__search_3_0,
		ssdb__expand_alias_and_execute_7_0_i6);
MR_def_label(ssdb__expand_alias_and_execute_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__expand_alias_and_execute_7_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__expand_alias_and_execute_7_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ssdb__execute_cmd_string_8_0);
MR_def_label(ssdb__expand_alias_and_execute_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
MR_def_label(ssdb__expand_alias_and_execute_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		ssdb__expand_alias_and_execute_7_0_i13);
MR_def_label(ssdb__expand_alias_and_execute_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__expand_alias_and_execute_7_0_i12);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__expand_alias_and_execute_7_0_i12);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_string_const("NUMBER", 6);
	MR_np_call_localret_ent(map__search_3_0,
		ssdb__expand_alias_and_execute_7_0_i16);
MR_def_label(ssdb__expand_alias_and_execute_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__expand_alias_and_execute_7_0_i12);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__expand_alias_and_execute_7_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ssdb__expand_alias_and_execute_7_0_i19);
MR_def_label(ssdb__expand_alias_and_execute_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ssdb__execute_cmd_string_8_0);
	}
MR_def_label(ssdb__expand_alias_and_execute_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		ssdb__expand_alias_and_execute_7_0_i23);
MR_def_label(ssdb__expand_alias_and_execute_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__expand_alias_and_execute_7_0_i21);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__expand_alias_and_execute_7_0_i21);
	}
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ssdb__expand_alias_and_execute_7_0_i26);
MR_def_label(ssdb__expand_alias_and_execute_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ssdb__execute_cmd_string_8_0);
	}
MR_def_label(ssdb__expand_alias_and_execute_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ssdb__execute_cmd_string_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module129)
	MR_init_entry1(ssdb__execute_cmd_string_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_cmd_string_8_0);
	MR_init_label10(ssdb__execute_cmd_string_8_0,4,5,6,7,8,9,10,11,12,13)
	MR_init_label10(ssdb__execute_cmd_string_8_0,14,15,16,17,18,19,20,21,22,23)
	MR_init_label10(ssdb__execute_cmd_string_8_0,24,25,26,27,28,29,30,31,32,33)
	MR_init_label5(ssdb__execute_cmd_string_8_0,34,236,37,38,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_cmd_string'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_cmd_string_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("up", 2)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 13;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("down", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 12;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("goto", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("help", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 29;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("list", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 20;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("next", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("quit", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 31;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("step", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("vars", 4)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 11;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("alias", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 18;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("break", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 25;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("level", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 14;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("print", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 9;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("retry", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("stack", 5)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 8;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("browse", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 10;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("delete", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 28;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("enable", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 26;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("finish", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 4;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("format", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 16;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("return", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 5;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("source", 6)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 30;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("current", 7)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 15;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("disable", 7)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 27;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("unalias", 7)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 19;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("continue", 8)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("exception", 9)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 6;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("list_path", 9)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 21;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("format_param", 12)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 17;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pop_list_dir", 12)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 23;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("push_list_dir", 13)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 22;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("list_context_lines", 18)) != 0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_string_8_0_i236);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 24;
	MR_np_tailcall_ent(ssdb__execute_cmd_8_0);
	}
MR_def_label(ssdb__execute_cmd_string_8_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r2 = (MR_Word) MR_string_const("\' (try \"help\").\n", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_cmd_string_8_0_i37);
MR_def_label(ssdb__execute_cmd_string_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Unknown command \140", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__execute_cmd_string_8_0_i38);
MR_def_label(ssdb__execute_cmd_string_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_cmd_string_8_0_i39);
MR_def_label(ssdb__execute_cmd_string_8_0,39)
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


MR_BEGIN_MODULE(ssdb_module130)
	MR_init_entry1(ssdb__execute_cmd_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_cmd_8_0);
	MR_init_label10(ssdb__execute_cmd_8_0,3,6,9,12,16,14,20,23,26,29)
	MR_init_label10(ssdb__execute_cmd_8_0,32,34,36,39,42,44,47,50,53,56)
	MR_init_label10(ssdb__execute_cmd_8_0,59,61,64,67,70,73,75,77,80,293)
	MR_init_label4(ssdb__execute_cmd_8_0,85,89,88,91)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'execute_cmd'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__execute_cmd_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,18)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ssdb__execute_ssdb_alias_4_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,25)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_break_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__execute_ssdb_browse_4_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i12);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_continue_6_0);
MR_def_label(ssdb__execute_cmd_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,15)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i16);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_cmd_8_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 15361 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_cmd_8_0
{
#line 283 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 15371 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_cmd_8_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 15384 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,28)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i20);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_delete_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,27)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i23);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_disable_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,12)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i26);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(ssdb__execute_ssdb_down_5_0,
		ssdb__execute_cmd_8_0_i89);
MR_def_label(ssdb__execute_cmd_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,26)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i29);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_enable_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i32);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_exception_6_0);
MR_def_label(ssdb__execute_cmd_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i34);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_finish_6_0);
MR_def_label(ssdb__execute_cmd_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,16)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i36);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_format_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,17)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i39);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_format_param_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i42);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_goto_6_0);
MR_def_label(ssdb__execute_cmd_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,29)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i44);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_help_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,14)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i47);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(ssdb__execute_ssdb_level_5_0,
		ssdb__execute_cmd_8_0_i89);
MR_def_label(ssdb__execute_cmd_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,20)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i50);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__execute_ssdb_list_4_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,24)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i53);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_list_context_lines_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,21)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i56);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_list_path_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i59);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_next_6_0);
MR_def_label(ssdb__execute_cmd_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,23)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i61);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_pop_list_dir_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i64);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__execute_ssdb_print_4_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,22)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i67);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_push_list_dir_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,31)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i70);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ssdb__execute_ssdb_quit_4_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i73);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_retry_6_0);
MR_def_label(ssdb__execute_cmd_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i75);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_return_6_0);
MR_def_label(ssdb__execute_cmd_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,30)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i77);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__execute_ssdb_source_3_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i80);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__execute_ssdb_stack_4_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i293);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(ssdb__execute_ssdb_step_6_0);
MR_def_label(ssdb__execute_cmd_8_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,19)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i85);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ssdb__execute_ssdb_unalias_4_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,13)) {
		MR_GOTO_LAB(ssdb__execute_cmd_8_0_i88);
	}
	MR_sv(1) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(ssdb__execute_ssdb_up_5_0,
		ssdb__execute_cmd_8_0_i89);
MR_def_label(ssdb__execute_cmd_8_0,89)
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
MR_def_label(ssdb__execute_cmd_8_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__execute_ssdb_vars_4_0,
		ssdb__execute_cmd_8_0_i91);
MR_def_label(ssdb__execute_cmd_8_0,91)
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


MR_BEGIN_MODULE(ssdb_module131)
	MR_init_entry1(ssdb__execute_ssdb_step_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_step_6_0);
	MR_init_label5(ssdb__execute_ssdb_step_6_0,42,7,4,5,10)
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
		MR_GOTO_LAB(ssdb__execute_ssdb_step_6_0_i42);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ssdb__execute_ssdb_step_6_0,42)
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
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 15795 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_step_6_0
{
#line 283 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 15807 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_step_6_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 15820 "ssdb.c"
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
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires integer argument.\n", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
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


MR_BEGIN_MODULE(ssdb_module132)
	MR_init_entry1(ssdb__execute_ssdb_next_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_next_6_0);
	MR_init_label6(ssdb__execute_ssdb_next_6_0,6,7,5,4,3,12)
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
		ssdb__execute_ssdb_next_6_0_i12);
MR_def_label(ssdb__execute_ssdb_next_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_next_6_0_i12);
MR_def_label(ssdb__execute_ssdb_next_6_0,12)
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


MR_BEGIN_MODULE(ssdb_module133)
	MR_init_entry1(ssdb__execute_ssdb_goto_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_goto_6_0);
	MR_init_label6(ssdb__execute_ssdb_goto_6_0,3,9,11,8,7,19)
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
	MR_r1 = (MR_Word) MR_string_const("ssdb: command requires integer argument.\n", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_goto_6_0_i19);
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
		ssdb__execute_ssdb_goto_6_0_i9);
MR_def_label(ssdb__execute_ssdb_goto_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_goto_6_0_i8);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_goto_6_0_i8);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_goto_6_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 15977 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_goto_6_0
{
#line 283 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 15987 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_goto_6_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 16000 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_goto_6_0_i11);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__execute_ssdb_goto_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The debugger cannot go to a past event.\n", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_goto_6_0_i19);
MR_def_label(ssdb__execute_ssdb_goto_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: invalid argument to command.\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_goto_6_0_i19);
MR_def_label(ssdb__execute_ssdb_goto_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_goto_6_0_i19);
MR_def_label(ssdb__execute_ssdb_goto_6_0,19)
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


MR_BEGIN_MODULE(ssdb_module134)
	MR_init_entry1(ssdb__execute_ssdb_continue_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_continue_6_0);
	MR_init_label2(ssdb__execute_ssdb_continue_6_0,16,4)
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
		MR_GOTO_LAB(ssdb__execute_ssdb_continue_6_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_proceed();
MR_def_label(ssdb__execute_ssdb_continue_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_continue_6_0_i4);
MR_def_label(ssdb__execute_ssdb_continue_6_0,4)
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


MR_BEGIN_MODULE(ssdb_module135)
	MR_init_entry1(ssdb__execute_ssdb_finish_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_finish_6_0);
	MR_init_label10(ssdb__execute_ssdb_finish_6_0,6,7,5,10,4,3,19,22,21,18)
	MR_init_label2(ssdb__execute_ssdb_finish_6_0,17,32)
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 16135 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_6_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 16145 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_6_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 16158 "ssdb.c"
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
		ssdb__execute_ssdb_finish_6_0_i32);
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
		ssdb__execute_ssdb_finish_6_0_i19);
MR_def_label(ssdb__execute_ssdb_finish_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i18);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i18);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_6_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 16208 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_6_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 16218 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_finish_6_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 16231 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_finish_6_0_i21);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ssdb__stack_index_4_0,
		ssdb__execute_ssdb_finish_6_0_i22);
MR_def_label(ssdb__execute_ssdb_finish_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ssdb__execute_ssdb_finish_6_0,21)
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
		ssdb__execute_ssdb_finish_6_0_i32);
MR_def_label(ssdb__execute_ssdb_finish_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: invalid argument to command.\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_finish_6_0_i32);
MR_def_label(ssdb__execute_ssdb_finish_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_finish_6_0_i32);
MR_def_label(ssdb__execute_ssdb_finish_6_0,32)
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


MR_BEGIN_MODULE(ssdb_module136)
	MR_init_entry1(ssdb__execute_ssdb_return_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_return_6_0);
	MR_init_label3(ssdb__execute_ssdb_return_6_0,27,26,8)
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
		ssdb__execute_ssdb_return_6_0_i8);
MR_def_label(ssdb__execute_ssdb_return_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_return_6_0_i8);
MR_def_label(ssdb__execute_ssdb_return_6_0,8)
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


MR_BEGIN_MODULE(ssdb_module137)
	MR_init_entry1(ssdb__execute_ssdb_exception_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_exception_6_0);
	MR_init_label2(ssdb__execute_ssdb_exception_6_0,16,4)
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
		MR_GOTO_LAB(ssdb__execute_ssdb_exception_6_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_proceed();
MR_def_label(ssdb__execute_ssdb_exception_6_0,16)
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


MR_BEGIN_MODULE(ssdb_module138)
	MR_init_entry1(ssdb__execute_ssdb_retry_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_retry_6_0);
	MR_init_label6(ssdb__execute_ssdb_retry_6_0,57,8,10,7,6,20)
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
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_6_0_i57);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(ssdb__execute_ssdb_retry_2_6_0);
MR_def_label(ssdb__execute_ssdb_retry_6_0,57)
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
		ssdb__execute_ssdb_retry_6_0_i8);
MR_def_label(ssdb__execute_ssdb_retry_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_6_0_i7);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_6_0_i7);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_6_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 16433 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_6_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 16443 "ssdb.c"
	MR_r5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_6_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 16456 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_6_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__execute_ssdb_retry_2_6_0);
MR_def_label(ssdb__execute_ssdb_retry_6_0,10)
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
		ssdb__execute_ssdb_retry_6_0_i20);
MR_def_label(ssdb__execute_ssdb_retry_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: invalid argument to command.\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_retry_6_0_i20);
MR_def_label(ssdb__execute_ssdb_retry_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ssdb: too many arguments to command.\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_retry_6_0_i20);
MR_def_label(ssdb__execute_ssdb_retry_6_0,20)
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


MR_BEGIN_MODULE(ssdb_module139)
	MR_init_entry1(ssdb__execute_ssdb_retry_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__execute_ssdb_retry_2_6_0);
	MR_init_label6(ssdb__execute_ssdb_retry_2_6_0,2,5,7,4,10,12)
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 16532 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_2_6_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 16544 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_2_6_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 16557 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__det_index0_3_0,
		ssdb__execute_ssdb_retry_2_6_0_i2);
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),4)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_2_6_0_i4);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_2_6_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 16583 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_2_6_0
{
#line 299 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack_depth;
;}
#line 16595 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__execute_ssdb_retry_2_6_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 16608 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(ssdb__nondet_stack_contains_csn_2_5_0,
		ssdb__execute_ssdb_retry_2_6_0_i5);
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_2_6_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_Integer) MR_sv(2) == (MR_Integer) 1) || ((MR_Integer) MR_sv(2) == (MR_Integer) 2)) || ((MR_Integer) MR_sv(2) == (MR_Integer) 6)))) {
		MR_GOTO_LAB(ssdb__execute_ssdb_retry_2_6_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Cannot retry at call or redo port.\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		ssdb__execute_ssdb_retry_2_6_0_i12);
MR_def_label(ssdb__execute_ssdb_retry_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ssdb__read_and_execute_cmd_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module140)
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
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 16684 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module141)
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
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 16717 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module142)
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
#line 333 "ssdb.m"
X = ssdb__mutable_variable_tty_in;
;}
#line 16748 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module143)
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
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 16782 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module144)
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
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 16815 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module145)
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
#line 335 "ssdb.m"
X = ssdb__mutable_variable_tty_out;
;}
#line 16846 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module146)
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
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 16880 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module147)
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
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 16913 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module148)
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
#line 338 "ssdb.m"
ssdb__mutable_variable_saved_input_stream = X;
;}
#line 16945 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module149)
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
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 16978 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module150)
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
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 17011 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module151)
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
#line 340 "ssdb.m"
ssdb__mutable_variable_saved_output_stream = X;
;}
#line 17043 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module152)
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
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 17081 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 333 "ssdb.m"
X = ssdb__mutable_variable_tty_in;
;}
#line 17093 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 17106 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 17118 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 335 "ssdb.m"
X = ssdb__mutable_variable_tty_out;
;}
#line 17128 "ssdb.c"
	MR_tempr2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 17141 "ssdb.c"
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
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 17170 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
	X = MR_sv(1);
{
#line 338 "ssdb.m"
ssdb__mutable_variable_saved_input_stream = X;
;}
#line 17181 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 17193 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 17205 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
	X = MR_r1;
{
#line 340 "ssdb.m"
ssdb__mutable_variable_saved_output_stream = X;
;}
#line 17216 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__save_streams_2_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 17228 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module153)
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
#line 338 "ssdb.m"
X = ssdb__mutable_variable_saved_input_stream;
;}
#line 17259 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module154)
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
#line 340 "ssdb.m"
X = ssdb__mutable_variable_saved_output_stream;
;}
#line 17291 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module155)
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
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 17328 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__restore_streams_2_0
{
#line 338 "ssdb.m"
X = ssdb__mutable_variable_saved_input_stream;
;}
#line 17340 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__restore_streams_2_0
{
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 17353 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__restore_streams_2_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 17365 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__restore_streams_2_0
{
#line 340 "ssdb.m"
X = ssdb__mutable_variable_saved_output_stream;
;}
#line 17375 "ssdb.c"
	MR_tempr2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__restore_streams_2_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 17388 "ssdb.c"
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

MR_decl_entry(builtin__impure_true_0_0);

MR_BEGIN_MODULE(ssdb_module156)
	MR_init_entry1(ssdb__handle_event_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__handle_event_call_2_0);
	MR_init_label7(ssdb__handle_event_call_2_0,2,7,10,11,12,13,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_event_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_call_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		ssdb__handle_event_call_2_0_i2);
MR_def_label(ssdb__handle_event_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 348 "ssdb.m"
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 17443 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_2_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17463 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 283 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 17475 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17488 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17500 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_r2;
{
#line 283 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 17512 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17524 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 17536 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 286 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_csn;
;}
#line 17546 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 17559 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 17571 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_r3;
{
#line 286 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn = X;
;}
#line 17583 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 17595 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 17607 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 17617 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 17630 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 278 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 17642 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 278 "ssdb.m"
X = ssdb__mutable_variable_cur_filename;
;}
#line 17652 "ssdb.c"
	MR_tempr2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 278 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 17665 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 17677 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 280 "ssdb.m"
X = ssdb__mutable_variable_cur_line_number;
;}
#line 17687 "ssdb.c"
	MR_tempr3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 17700 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr4, 0) = MR_r2;
	MR_tfield(0, MR_tempr4, 1) = MR_r3;
	MR_tfield(0, MR_tempr4, 2) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr4, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 5) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 6) = MR_sv(2);
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17720 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 17730 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17743 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17758 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_tempr2;
{
#line 292 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 17769 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 17781 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 17793 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 17803 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 17816 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 17828 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
	X = MR_tempr2;
{
#line 294 "ssdb.m"
ssdb__mutable_variable_shadow_stack_depth = X;
;}
#line 17840 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 17852 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_r4 = MR_tfield(0, MR_tempr4, 3);
	}
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		ssdb__handle_event_call_2_0_i7);
MR_def_label(ssdb__handle_event_call_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_2_0_i3);
	}
	MR_np_call_localret_ent(ssdb__save_streams_2_0,
		ssdb__handle_event_call_2_0_i10);
MR_def_label(ssdb__handle_event_call_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
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
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		ssdb__handle_event_call_2_0_i13);
MR_def_label(ssdb__handle_event_call_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__restore_streams_2_0,
		ssdb__handle_event_call_2_0_i3);
MR_def_label(ssdb__handle_event_call_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__impure_true_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module157)
	MR_init_entry1(ssdb__handle_event_call_nondet_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__handle_event_call_nondet_2_0);
	MR_init_label8(ssdb__handle_event_call_nondet_2_0,2,7,8,11,12,13,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_event_call_nondet'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__handle_event_call_nondet_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		ssdb__handle_event_call_nondet_2_0_i2);
MR_def_label(ssdb__handle_event_call_nondet_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 348 "ssdb.m"
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 17941 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_nondet_2_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17961 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 283 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 17973 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17986 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 17998 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_tempr2;
{
#line 283 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 18010 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 18022 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 18034 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 286 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_csn;
;}
#line 18044 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 18057 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 18069 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_tempr3;
{
#line 286 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn = X;
;}
#line 18081 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 18093 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 18105 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 18115 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 18128 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 278 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 18140 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 278 "ssdb.m"
X = ssdb__mutable_variable_cur_filename;
;}
#line 18150 "ssdb.c"
	MR_tempr4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 278 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 18163 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 18175 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 280 "ssdb.m"
X = ssdb__mutable_variable_cur_line_number;
;}
#line 18185 "ssdb.c"
	MR_tempr5 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 18198 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_tempr3;
	MR_tfield(0, MR_r1, 2) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_tfield(0, MR_r1, 3) = MR_sv(1);
	MR_tfield(0, MR_r1, 4) = MR_tempr4;
	MR_tfield(0, MR_r1, 5) = MR_tempr5;
	MR_tfield(0, MR_r1, 6) = MR_sv(2);
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18218 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 18228 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18241 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18256 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_tempr4;
{
#line 292 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 18267 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18279 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 18291 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 18301 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 18314 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 18326 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr5 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
	X = MR_tempr5;
{
#line 294 "ssdb.m"
ssdb__mutable_variable_shadow_stack_depth = X;
;}
#line 18338 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_call_nondet_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 18350 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	}
	MR_np_call_localret_ent(ssdb__nondet_stack_push_3_0,
		ssdb__handle_event_call_nondet_2_0_i7);
MR_def_label(ssdb__handle_event_call_nondet_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		ssdb__handle_event_call_nondet_2_0_i8);
MR_def_label(ssdb__handle_event_call_nondet_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_call_nondet_2_0_i3);
	}
	MR_np_call_localret_ent(ssdb__save_streams_2_0,
		ssdb__handle_event_call_nondet_2_0_i11);
MR_def_label(ssdb__handle_event_call_nondet_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		ssdb__handle_event_call_nondet_2_0_i3);
MR_def_label(ssdb__handle_event_call_nondet_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__impure_true_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module158)
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18435 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 18445 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18458 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 18470 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 18480 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 18493 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__stack_pop_2_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18508 "ssdb.c"
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
#line 292 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 18522 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18534 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 18546 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
	X = MR_r2;
{
#line 294 "ssdb.m"
ssdb__mutable_variable_shadow_stack_depth = X;
;}
#line 18558 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__stack_pop_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 18570 "ssdb.c"
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


MR_BEGIN_MODULE(ssdb_module159)
	MR_init_entry1(ssdb__handle_event_exit_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__handle_event_exit_3_0);
	MR_init_label10(ssdb__handle_event_exit_3_0,2,4,6,5,8,10,14,13,18,19)
	MR_init_label6(ssdb__handle_event_exit_3_0,20,21,12,23,3,25)
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
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		ssdb__handle_event_exit_3_0_i2);
MR_def_label(ssdb__handle_event_exit_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 348 "ssdb.m"
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 18620 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i4);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		ssdb__handle_event_exit_3_0_i25);
MR_def_label(ssdb__handle_event_exit_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 18645 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 283 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 18655 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 18668 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 18680 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_r3;
{
#line 283 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 18692 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 18704 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18716 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 18726 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18739 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i6);
	}
	MR_r4 = MR_sv(1);
	MR_r6 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_r6, 0), 1);
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i5);
MR_def_label(ssdb__handle_event_exit_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_top on empty stack", 30);
	MR_np_call_localret_ent(require__error_1_0,
		ssdb__handle_event_exit_3_0_i5);
MR_def_label(ssdb__handle_event_exit_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		ssdb__handle_event_exit_3_0_i8);
MR_def_label(ssdb__handle_event_exit_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i10);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		ssdb__handle_event_exit_3_0_i3);
MR_def_label(ssdb__handle_event_exit_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i12);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18784 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 18794 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18807 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_3_0_i14);
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
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(1, MR_r2, 1);
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18836 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
	X = MR_tempr2;
{
#line 292 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 18847 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 18859 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	}
	MR_np_call_localret_ent(ssdb__save_streams_2_0,
		ssdb__handle_event_exit_3_0_i18);
MR_def_label(ssdb__handle_event_exit_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: update_top_var_list on empty stack", 40);
	MR_np_call_localret_ent(require__error_1_0,
		ssdb__handle_event_exit_3_0_i13);
MR_def_label(ssdb__handle_event_exit_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__save_streams_2_0,
		ssdb__handle_event_exit_3_0_i18);
MR_def_label(ssdb__handle_event_exit_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		ssdb__handle_event_exit_3_0_i19);
MR_def_label(ssdb__handle_event_exit_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_5_0,
		ssdb__handle_event_exit_3_0_i20);
MR_def_label(ssdb__handle_event_exit_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ssdb__restore_streams_2_0,
		ssdb__handle_event_exit_3_0_i21);
MR_def_label(ssdb__handle_event_exit_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		ssdb__handle_event_exit_3_0_i23);
MR_def_label(ssdb__handle_event_exit_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tfield(2, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		ssdb__handle_event_exit_3_0_i23);
MR_def_label(ssdb__handle_event_exit_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		ssdb__handle_event_exit_3_0_i3);
MR_def_label(ssdb__handle_event_exit_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		ssdb__handle_event_exit_3_0_i25);
MR_def_label(ssdb__handle_event_exit_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module160)
	MR_init_entry1(ssdb__handle_event_exit_nondet_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__handle_event_exit_nondet_2_0);
	MR_init_label10(ssdb__handle_event_exit_nondet_2_0,2,6,5,8,14,13,18,19,20,21)
	MR_init_label3(ssdb__handle_event_exit_nondet_2_0,12,9,3)
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
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		ssdb__handle_event_exit_nondet_2_0_i2);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 348 "ssdb.m"
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 18966 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 18986 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 283 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 18996 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 19009 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 19021 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
	X = MR_r3;
{
#line 283 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 19033 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 19045 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 19057 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 19067 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 19080 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i6);
	}
	MR_r4 = MR_sv(1);
	MR_r6 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_r6, 0), 1);
	MR_r1 = (MR_Integer) 4;
	MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i5);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_top on empty stack", 30);
	MR_np_call_localret_ent(require__error_1_0,
		ssdb__handle_event_exit_nondet_2_0_i5);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		ssdb__handle_event_exit_nondet_2_0_i8);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i9);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i12);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 19120 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 19130 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 19143 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__handle_event_exit_nondet_2_0_i14);
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
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(1, MR_r2, 1);
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 19172 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
	X = MR_tempr2;
{
#line 292 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 19183 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__handle_event_exit_nondet_2_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 19195 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	}
	MR_np_call_localret_ent(ssdb__save_streams_2_0,
		ssdb__handle_event_exit_nondet_2_0_i18);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: update_top_var_list on empty stack", 40);
	MR_np_call_localret_ent(require__error_1_0,
		ssdb__handle_event_exit_nondet_2_0_i13);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__save_streams_2_0,
		ssdb__handle_event_exit_nondet_2_0_i18);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		ssdb__handle_event_exit_nondet_2_0_i19);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_5_0,
		ssdb__handle_event_exit_nondet_2_0_i20);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ssdb__restore_streams_2_0,
		ssdb__handle_event_exit_nondet_2_0_i21);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		ssdb__handle_event_exit_nondet_2_0_i9);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tfield(2, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		ssdb__handle_event_exit_nondet_2_0_i9);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		ssdb__handle_event_exit_nondet_2_0_i3);
MR_def_label(ssdb__handle_event_exit_nondet_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__impure_true_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module161)
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
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 19287 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 297 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack;
;}
#line 19297 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 19310 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 19322 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 299 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack_depth;
;}
#line 19332 "ssdb.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 19345 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__nondet_stack_pop_2_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 19360 "ssdb.c"
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
#line 297 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack = X;
;}
#line 19374 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 19386 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 19398 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
	X = MR_r2;
{
#line 299 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack_depth = X;
;}
#line 19410 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__nondet_stack_pop_2_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 19422 "ssdb.c"
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


MR_BEGIN_MODULE(ssdb_module162)
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


MR_BEGIN_MODULE(ssdb_module163)
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


MR_BEGIN_MODULE(ssdb_module164)
	MR_init_entry1(ssdb__search_nondet_stack_frame_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__search_nondet_stack_frame_2_7_0);
	MR_init_label4(ssdb__search_nondet_stack_frame_2_7_0,34,2,3,4)
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
MR_def_label(ssdb__search_nondet_stack_frame_2_7_0,34)
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
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 19514 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__search_nondet_stack_frame_2_7_0
{
#line 297 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack;
;}
#line 19526 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__search_nondet_stack_frame_2_7_0
{
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 19539 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, stack_frame);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__det_index0_3_0,
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
	MR_GOTO_LAB(ssdb__search_nondet_stack_frame_2_7_0_i34);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module165)
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


MR_BEGIN_MODULE(ssdb_module166)
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
#line 348 "ssdb.m"
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 19634 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module167)
	MR_init_entry1(ssdb__pause_debugging_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pause_debugging_3_0);
	MR_init_label1(ssdb__pause_debugging_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pause_debugging'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__pause_debugging_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pause_debugging_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__pause_debugging_3_0
{
#line 348 "ssdb.m"
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 19672 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	{
#define	MR_PROC_LABEL	mercury__ssdb__pause_debugging_3_0
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ssdb__pause_debugging_3_0_i3);
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ssdb__pause_debugging_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pause_debugging_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__pause_debugging_3_0
	X = (MR_Integer) 0;
{
#line 348 "ssdb.m"
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 19701 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__pause_debugging_3_0
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module168)
	MR_init_entry1(ssdb__resume_debugging_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__resume_debugging_3_0);
	MR_init_label1(ssdb__resume_debugging_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'resume_debugging'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__resume_debugging_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ssdb__resume_debugging_3_0_i2);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__resume_debugging_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__resume_debugging_3_0
	X = (MR_Integer) 1;
{
#line 348 "ssdb.m"
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 19746 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__resume_debugging_3_0
#undef	MR_PROC_LABEL
	}
MR_def_label(ssdb__resume_debugging_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module169)
	MR_init_entry1(ssdb__enable_debugging_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__enable_debugging_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'enable_debugging'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ssdb__enable_debugging_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__enable_debugging_2_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__enable_debugging_2_0
	X = (MR_Integer) 1;
{
#line 348 "ssdb.m"
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 19788 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__enable_debugging_2_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module170)
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
#line 278 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_filename_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19825 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_filename");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module171)
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
#line 278 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_filename_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19859 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_filename");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_filename_0_0
{
#line 278 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 19872 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_filename_0_0
	X = (MR_Word) MR_string_const("", 0);
{
#line 278 "ssdb.m"
ssdb__mutable_variable_cur_filename = X;
;}
#line 19883 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_filename_0_0
{
#line 278 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_filename_lock,
                "ssdb__mutable_variable_cur_filename_lock");
#endif
;}
#line 19895 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module172)
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
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_line_number_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19928 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_line_number");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module173)
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
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_line_number_lock, MR_MUTEX_ATTR);
#endif
;}
#line 19962 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_line_number");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_line_number_0_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 19975 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_line_number_0_0
	X = (MR_Integer) 0;
{
#line 280 "ssdb.m"
ssdb__mutable_variable_cur_line_number = X;
;}
#line 19986 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_line_number_0_0
{
#line 280 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_line_number_lock,
                "ssdb__mutable_variable_cur_line_number_lock");
#endif
;}
#line 19998 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module174)
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
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_event_number_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20031 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_event_number");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module175)
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
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_event_number_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20065 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_event_number");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 20078 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
	X = (MR_Integer) 0;
{
#line 283 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 20089 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_event_number_0_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 20101 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module176)
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
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_csn_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20134 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_csn");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module177)
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
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_csn_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20168 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_csn");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 20181 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
	X = (MR_Integer) 0;
{
#line 286 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_csn = X;
;}
#line 20192 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_csn_0_0
{
#line 286 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_csn_lock,
                "ssdb__mutable_variable_cur_ssdb_csn_lock");
#endif
;}
#line 20204 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module178)
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
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_next_stop_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20237 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_next_stop");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module179)
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
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_cur_ssdb_next_stop_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20271 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_cur_ssdb_next_stop");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 20284 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
	X = (MR_Word) MR_tbmkword(0, 0);
{
#line 289 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop = X;
;}
#line 20295 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_cur_ssdb_next_stop_0_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 20307 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module180)
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_shadow_stack_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20340 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_shadow_stack");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module181)
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
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_shadow_stack_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20374 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_shadow_stack");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_0_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 20387 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_0_0
	X = (MR_Word) MR_tbmkword(0, 0);
{
#line 292 "ssdb.m"
ssdb__mutable_variable_shadow_stack = X;
;}
#line 20398 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_0_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 20410 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module182)
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
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_shadow_stack_depth_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20443 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_shadow_stack_depth");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module183)
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
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_shadow_stack_depth_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20477 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_shadow_stack_depth");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_depth_0_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 20490 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_depth_0_0
	X = (MR_Integer) 0;
{
#line 294 "ssdb.m"
ssdb__mutable_variable_shadow_stack_depth = X;
;}
#line 20501 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_shadow_stack_depth_0_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 20513 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module184)
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
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_nondet_shadow_stack_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20546 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_nondet_shadow_stack");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module185)
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
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_nondet_shadow_stack_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20580 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_nondet_shadow_stack");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_0_0
{
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 20593 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_0_0
	X = (MR_Word) MR_tbmkword(0, 0);
{
#line 297 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack = X;
;}
#line 20604 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_0_0
{
#line 297 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_lock");
#endif
;}
#line 20616 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module186)
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
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20649 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_nondet_shadow_stack_depth");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module187)
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
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20683 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_nondet_shadow_stack_depth");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 20696 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0
	X = (MR_Integer) 0;
{
#line 299 "ssdb.m"
ssdb__mutable_variable_nondet_shadow_stack_depth = X;
;}
#line 20707 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_nondet_shadow_stack_depth_0_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 20719 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module188)
	MR_init_entry1(ssdb__pre_initialise_mutable_command_queue_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_command_queue_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_command_queue'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_command_queue_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_command_queue_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_command_queue");
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_command_queue_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20752 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_command_queue");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module189)
	MR_init_entry1(ssdb__initialise_mutable_command_queue_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_command_queue_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_command_queue'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_command_queue_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_command_queue_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_command_queue");
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_command_queue_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20786 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_command_queue");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_command_queue_0_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 20799 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_command_queue_0_0
	X = (MR_Word) MR_TAG_COMMON(1,0,50);
{
#line 302 "ssdb.m"
ssdb__mutable_variable_command_queue = X;
;}
#line 20810 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_command_queue_0_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 20822 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module190)
	MR_init_entry1(ssdb__pre_initialise_mutable_aliases_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_aliases_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_aliases'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_aliases_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_aliases_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_aliases");
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_aliases_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20855 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_aliases");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module191)
	MR_init_entry1(ssdb__initialise_mutable_aliases_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_aliases_0_0);
	MR_init_label1(ssdb__initialise_mutable_aliases_0_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_aliases'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_aliases_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_aliases_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_aliases");
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_aliases_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20892 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_aliases");
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ssdb__initialise_mutable_aliases_0_0_i3);
MR_def_label(ssdb__initialise_mutable_aliases_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_aliases_0_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 20911 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_aliases_0_0
	X = MR_r1;
{
#line 305 "ssdb.m"
ssdb__mutable_variable_aliases = X;
;}
#line 20922 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_aliases_0_0
{
#line 305 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_aliases_lock,
                "ssdb__mutable_variable_aliases_lock");
#endif
;}
#line 20934 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module192)
	MR_init_entry1(ssdb__pre_initialise_mutable_breakpoints_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_breakpoints_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_breakpoints_map'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_breakpoints_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_breakpoints_map_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_breakpoints_map");
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_breakpoints_map_lock, MR_MUTEX_ATTR);
#endif
;}
#line 20967 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_breakpoints_map");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module193)
	MR_init_entry1(ssdb__initialise_mutable_breakpoints_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_breakpoints_map_0_0);
	MR_init_label1(ssdb__initialise_mutable_breakpoints_map_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_breakpoints_map'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_breakpoints_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_breakpoints_map_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_breakpoints_map");
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_breakpoints_map_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21004 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_breakpoints_map");
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ssdb, breakpoint);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ssdb__initialise_mutable_breakpoints_map_0_0_i2);
MR_def_label(ssdb__initialise_mutable_breakpoints_map_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_breakpoints_map_0_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 21023 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_breakpoints_map_0_0
	X = MR_r1;
{
#line 308 "ssdb.m"
ssdb__mutable_variable_breakpoints_map = X;
;}
#line 21034 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_breakpoints_map_0_0
{
#line 308 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_map_lock,
                "ssdb__mutable_variable_breakpoints_map_lock");
#endif
;}
#line 21046 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module194)
	MR_init_entry1(ssdb__pre_initialise_mutable_breakpoints_filter_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__pre_initialise_mutable_breakpoints_filter_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_breakpoints_filter'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__pre_initialise_mutable_breakpoints_filter_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__pre_initialise_mutable_breakpoints_filter_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_breakpoints_filter");
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_breakpoints_filter_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21079 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_breakpoints_filter");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module195)
	MR_init_entry1(ssdb__initialise_mutable_breakpoints_filter_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_breakpoints_filter_0_0);
	MR_init_label1(ssdb__initialise_mutable_breakpoints_filter_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_breakpoints_filter'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_breakpoints_filter_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_breakpoints_filter_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_breakpoints_filter");
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_breakpoints_filter_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21116 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_breakpoints_filter");
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 65536;
	MR_np_call_localret_ent(fn__bitmap__init_1_0,
		ssdb__initialise_mutable_breakpoints_filter_0_0_i2);
MR_def_label(ssdb__initialise_mutable_breakpoints_filter_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_breakpoints_filter_0_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 21134 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_breakpoints_filter_0_0
	X = MR_r1;
{
#line 310 "ssdb.m"
ssdb__mutable_variable_breakpoints_filter = X;
;}
#line 21145 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_breakpoints_filter_0_0
{
#line 310 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_breakpoints_filter_lock,
                "ssdb__mutable_variable_breakpoints_filter_lock");
#endif
;}
#line 21157 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module196)
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
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_browser_state_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21190 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module197)
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
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_browser_state_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21228 "ssdb.c"
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
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 21245 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_browser_state_0_0
	X = MR_r1;
{
#line 315 "ssdb.m"
ssdb__mutable_variable_browser_state = X;
;}
#line 21256 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_browser_state_0_0
{
#line 315 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_browser_state_lock,
                "ssdb__mutable_variable_browser_state_lock");
#endif
;}
#line 21268 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module198)
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_list_params_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21301 "ssdb.c"
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

MR_BEGIN_MODULE(ssdb_module199)
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_list_params_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21339 "ssdb.c"
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
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 21359 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_list_params_0_0
	X = MR_r2;
{
#line 324 "ssdb.m"
ssdb__mutable_variable_list_params = X;
;}
#line 21370 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_list_params_0_0
{
#line 324 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_list_params_lock,
                "ssdb__mutable_variable_list_params_lock");
#endif
;}
#line 21382 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module200)
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
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_tty_in_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21415 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_tty_in");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module201)
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
#line 333 "ssdb.m"
ssdb__mutable_variable_tty_in = X;
;}
#line 21448 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__io__stdin_stream_0_0);

MR_BEGIN_MODULE(ssdb_module202)
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
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_tty_in_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21485 "ssdb.c"
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
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 21502 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_tty_in_0_0
	X = MR_r1;
{
#line 333 "ssdb.m"
ssdb__mutable_variable_tty_in = X;
;}
#line 21513 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_tty_in_0_0
{
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 21525 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module203)
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
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_tty_out_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21558 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_tty_out");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module204)
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
#line 335 "ssdb.m"
ssdb__mutable_variable_tty_out = X;
;}
#line 21591 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__io__stdout_stream_0_0);

MR_BEGIN_MODULE(ssdb_module205)
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
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_tty_out_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21628 "ssdb.c"
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
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 21645 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_tty_out_0_0
	X = MR_r1;
{
#line 335 "ssdb.m"
ssdb__mutable_variable_tty_out = X;
;}
#line 21656 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_tty_out_0_0
{
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 21668 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module206)
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
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_saved_input_stream_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21701 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_saved_input_stream");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module207)
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
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_saved_input_stream_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21738 "ssdb.c"
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
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 21755 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_saved_input_stream_0_0
	X = MR_r1;
{
#line 338 "ssdb.m"
ssdb__mutable_variable_saved_input_stream = X;
;}
#line 21766 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_saved_input_stream_0_0
{
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 21778 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module208)
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
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_saved_output_stream_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21811 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_saved_output_stream");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module209)
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
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ssdb__mutable_variable_saved_output_stream_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21848 "ssdb.c"
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
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 21865 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_saved_output_stream_0_0
	X = MR_r1;
{
#line 340 "ssdb.m"
ssdb__mutable_variable_saved_output_stream = X;
;}
#line 21876 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_saved_output_stream_0_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 21888 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module210)
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
#line 348 "ssdb.m"
ssdb__mutable_variable_debugger_state = MR_new_thread_local_mutable_index();
;}
#line 21919 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_debugger_state");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module211)
	MR_init_entry1(ssdb__initialise_mutable_debugger_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__initialise_mutable_debugger_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_debugger_state'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__initialise_mutable_debugger_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_debugger_state");
{
#line 348 "ssdb.m"
ssdb__mutable_variable_debugger_state = MR_new_thread_local_mutable_index();
;}
#line 21951 "ssdb.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_debugger_state");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
	X = (MR_Integer) 0;
{
#line 348 "ssdb.m"
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 21967 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__initialise_mutable_debugger_state_0_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__get_environment_var_4_0);
MR_decl_entry(io__check_file_accessibility_5_0);
MR_decl_entry(fn__f_100_105_114_95_95_47_2_0);

MR_BEGIN_MODULE(ssdb_module212)
	MR_init_entry1(ssdb__add_source_commands_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__add_source_commands_2_0);
	MR_init_label10(ssdb__add_source_commands_2_0,2,4,6,8,11,13,10,14,18,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_source_commands'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__add_source_commands_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("HOME", 4);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		ssdb__add_source_commands_2_0_i2);
MR_def_label(ssdb__add_source_commands_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__add_source_commands_2_0_i4);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_r1 = (MR_Word) MR_string_const(".ssdbrc", 7);
	MR_np_call_localret_ent(io__check_file_accessibility_5_0,
		ssdb__add_source_commands_2_0_i14);
MR_def_label(ssdb__add_source_commands_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const(".ssdbrc", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		ssdb__add_source_commands_2_0_i6);
MR_def_label(ssdb__add_source_commands_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__check_file_accessibility_5_0,
		ssdb__add_source_commands_2_0_i8);
MR_def_label(ssdb__add_source_commands_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__add_source_commands_2_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("source ", 7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ssdb__add_source_commands_2_0_i11);
MR_def_label(ssdb__add_source_commands_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_source_commands_2_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 22046 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__add_source_commands_2_0
{
#line 302 "ssdb.m"
X = ssdb__mutable_variable_command_queue;
;}
#line 22056 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_source_commands_2_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 22069 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ssdb__add_source_commands_2_0_i13);
MR_def_label(ssdb__add_source_commands_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_source_commands_2_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 22093 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__add_source_commands_2_0
	X = MR_r1;
{
#line 302 "ssdb.m"
ssdb__mutable_variable_command_queue = X;
;}
#line 22104 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_source_commands_2_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 22116 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const(".ssdbrc", 7);
	MR_np_call_localret_ent(io__check_file_accessibility_5_0,
		ssdb__add_source_commands_2_0_i14);
MR_def_label(ssdb__add_source_commands_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const(".ssdbrc", 7);
	MR_np_call_localret_ent(io__check_file_accessibility_5_0,
		ssdb__add_source_commands_2_0_i14);
MR_def_label(ssdb__add_source_commands_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__add_source_commands_2_0_i15);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_source_commands_2_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 22143 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__add_source_commands_2_0
{
#line 302 "ssdb.m"
X = ssdb__mutable_variable_command_queue;
;}
#line 22155 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_source_commands_2_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 22168 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,51);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ssdb__add_source_commands_2_0_i18);
MR_def_label(ssdb__add_source_commands_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_source_commands_2_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 22188 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__add_source_commands_2_0
	X = MR_r1;
{
#line 302 "ssdb.m"
ssdb__mutable_variable_command_queue = X;
;}
#line 22199 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__add_source_commands_2_0
{
#line 302 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_command_queue_lock,
                "ssdb__mutable_variable_command_queue_lock");
#endif
;}
#line 22211 "ssdb.c"
#undef	MR_PROC_LABEL
	}
MR_def_label(ssdb__add_source_commands_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module213)
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
#line 459 "ssdb.m"

    MR_setup_signal(SIGINT, (MR_Code *) MR_ssdb_sigint_handler,
        MR_FALSE, "ssdb: cannot install SIGINT signal handler");
    IO = IO0;
;}
#line 22248 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_output_4_0);

MR_BEGIN_MODULE(ssdb_module214)
	MR_init_entry1(ssdb__init_debugger_state_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__init_debugger_state_2_0);
	MR_init_label10(ssdb__init_debugger_state_2_0,2,3,7,6,12,14,15,10,18,19)
	MR_init_label2(ssdb__init_debugger_state_2_0,31,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_debugger_state'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__init_debugger_state_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("SSDB", 4);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		ssdb__init_debugger_state_2_0_i2);
MR_def_label(ssdb__init_debugger_state_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("SSDB_TTY", 8);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		ssdb__init_debugger_state_2_0_i3);
MR_def_label(ssdb__init_debugger_state_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ssdb__init_debugger_state_2_0_i7);
	}
	MR_r2 = MR_r1;
	MR_GOTO_LAB(ssdb__init_debugger_state_2_0_i6);
MR_def_label(ssdb__init_debugger_state_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ssdb__init_debugger_state_2_0_i31);
	}
	MR_r2 = MR_r1;
MR_def_label(ssdb__init_debugger_state_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ssdb__init_debugger_state_2_0_i10);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__open_input_4_0,
		ssdb__init_debugger_state_2_0_i12);
MR_def_label(ssdb__init_debugger_state_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__init_debugger_state_2_0_i14);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__open_output_4_0,
		ssdb__init_debugger_state_2_0_i15);
MR_def_label(ssdb__init_debugger_state_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__init_debugger_state_2_0
{
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 22327 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__init_debugger_state_2_0
	X = MR_tempr1;
{
#line 333 "ssdb.m"
ssdb__mutable_variable_tty_in = X;
;}
#line 22341 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__init_debugger_state_2_0
{
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 22353 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(io__open_output_4_0,
		ssdb__init_debugger_state_2_0_i15);
MR_def_label(ssdb__init_debugger_state_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ssdb__init_debugger_state_2_0_i10);
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__init_debugger_state_2_0
{
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 22374 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__init_debugger_state_2_0
	X = MR_r3;
{
#line 335 "ssdb.m"
ssdb__mutable_variable_tty_out = X;
;}
#line 22386 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__init_debugger_state_2_0
{
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 22398 "ssdb.c"
#undef	MR_PROC_LABEL
	}
MR_def_label(ssdb__init_debugger_state_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__install_sigint_handler_2_0,
		ssdb__init_debugger_state_2_0_i18);
MR_def_label(ssdb__init_debugger_state_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__add_source_commands_2_0,
		ssdb__init_debugger_state_2_0_i19);
MR_def_label(ssdb__init_debugger_state_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ssdb__init_debugger_state_2_0_i20);
	}
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("0", 1)) != 0)) {
		MR_GOTO_LAB(ssdb__init_debugger_state_2_0_i20);
	}
MR_def_label(ssdb__init_debugger_state_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__init_debugger_state_2_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__init_debugger_state_2_0
	X = (MR_Integer) 0;
{
#line 348 "ssdb.m"
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 22432 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__init_debugger_state_2_0
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(ssdb__init_debugger_state_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ssdb__init_debugger_state_2_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__init_debugger_state_2_0
	X = (MR_Integer) 1;
{
#line 348 "ssdb.m"
MR_set_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 22454 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__init_debugger_state_2_0
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module215)
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
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 22491 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ssdb__step_next_stop_2_0
	X = (MR_Word) MR_tbmkword(0, 0);
{
#line 289 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_next_stop = X;
;}
#line 22502 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ssdb__step_next_stop_2_0
{
#line 289 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_next_stop_lock,
                "ssdb__mutable_variable_cur_ssdb_next_stop_lock");
#endif
;}
#line 22514 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module216)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) 1 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | (((MR_Integer) MR_tempr5 << (MR_Integer) 2) | (((MR_Integer) MR_tempr4 << (MR_Integer) 3) | (((MR_Integer) MR_tempr3 << (MR_Integer) 4) | (((MR_Integer) MR_tempr2 << (MR_Integer) 5) | ((MR_Integer) MR_tempr1 << (MR_Integer) 6)))))));
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_options_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--browse", 8)) == 0) || (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-B", 2)) == 0)))) {
		MR_GOTO_LAB(ssdb__format_options_3_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_tempr6 | (((MR_Integer) 1 << (MR_Integer) 1) | (((MR_Integer) MR_tempr5 << (MR_Integer) 2) | (((MR_Integer) MR_tempr4 << (MR_Integer) 3) | (((MR_Integer) MR_tempr3 << (MR_Integer) 4) | (((MR_Integer) MR_tempr2 << (MR_Integer) 5) | ((MR_Integer) MR_tempr1 << (MR_Integer) 6)))))));
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_options_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--print-all", 11)) == 0) || (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-A", 2)) == 0)))) {
		MR_GOTO_LAB(ssdb__format_options_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | (((MR_Integer) 1 << (MR_Integer) 2) | (((MR_Integer) MR_tempr4 << (MR_Integer) 3) | (((MR_Integer) MR_tempr3 << (MR_Integer) 4) | (((MR_Integer) MR_tempr2 << (MR_Integer) 5) | ((MR_Integer) MR_tempr1 << (MR_Integer) 6)))))));
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


MR_BEGIN_MODULE(ssdb_module217)
	MR_init_entry1(ssdb__format_param_options_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__format_param_options_3_0);
	MR_init_label7(ssdb__format_param_options_3_0,3,5,7,9,11,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_param_options'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__format_param_options_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--raw", 5)) == 0) || (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-r", 2)) == 0)))) {
		MR_GOTO_LAB(ssdb__format_param_options_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | (((MR_Integer) MR_tempr4 << (MR_Integer) 2) | (((MR_Integer) MR_tempr3 << (MR_Integer) 3) | (((MR_Integer) 1 << (MR_Integer) 4) | (((MR_Integer) MR_tempr2 << (MR_Integer) 5) | ((MR_Integer) MR_tempr1 << (MR_Integer) 6)))))));
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--flat", 6)) == 0) || (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-f", 2)) == 0)))) {
		MR_GOTO_LAB(ssdb__format_param_options_3_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | (((MR_Integer) MR_tempr4 << (MR_Integer) 2) | (((MR_Integer) 1 << (MR_Integer) 3) | (((MR_Integer) MR_tempr3 << (MR_Integer) 4) | (((MR_Integer) MR_tempr2 << (MR_Integer) 5) | ((MR_Integer) MR_tempr1 << (MR_Integer) 6)))))));
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--print", 7)) == 0) || (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-P", 2)) == 0)))) {
		MR_GOTO_LAB(ssdb__format_param_options_3_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) 1 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | (((MR_Integer) MR_tempr5 << (MR_Integer) 2) | (((MR_Integer) MR_tempr4 << (MR_Integer) 3) | (((MR_Integer) MR_tempr3 << (MR_Integer) 4) | (((MR_Integer) MR_tempr2 << (MR_Integer) 5) | ((MR_Integer) MR_tempr1 << (MR_Integer) 6)))))));
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--browse", 8)) == 0) || (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-B", 2)) == 0)))) {
		MR_GOTO_LAB(ssdb__format_param_options_3_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_tempr6 | (((MR_Integer) 1 << (MR_Integer) 1) | (((MR_Integer) MR_tempr5 << (MR_Integer) 2) | (((MR_Integer) MR_tempr4 << (MR_Integer) 3) | (((MR_Integer) MR_tempr3 << (MR_Integer) 4) | (((MR_Integer) MR_tempr2 << (MR_Integer) 5) | ((MR_Integer) MR_tempr1 << (MR_Integer) 6)))))));
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--pretty", 8)) == 0) || (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-p", 2)) == 0)))) {
		MR_GOTO_LAB(ssdb__format_param_options_3_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | (((MR_Integer) MR_tempr4 << (MR_Integer) 2) | (((MR_Integer) MR_tempr3 << (MR_Integer) 3) | (((MR_Integer) MR_tempr2 << (MR_Integer) 4) | (((MR_Integer) MR_tempr1 << (MR_Integer) 5) | ((MR_Integer) 1 << (MR_Integer) 6)))))));
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--verbose", 9)) == 0) || (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-v", 2)) == 0)))) {
		MR_GOTO_LAB(ssdb__format_param_options_3_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | (((MR_Integer) MR_tempr4 << (MR_Integer) 2) | (((MR_Integer) MR_tempr3 << (MR_Integer) 3) | (((MR_Integer) MR_tempr2 << (MR_Integer) 4) | (((MR_Integer) 1 << (MR_Integer) 5) | ((MR_Integer) MR_tempr1 << (MR_Integer) 6)))))));
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--print-all", 11)) == 0) || (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-A", 2)) == 0)))) {
		MR_GOTO_LAB(ssdb__format_param_options_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | (((MR_Integer) 1 << (MR_Integer) 2) | (((MR_Integer) MR_tempr4 << (MR_Integer) 3) | (((MR_Integer) MR_tempr3 << (MR_Integer) 4) | (((MR_Integer) MR_tempr2 << (MR_Integer) 5) | ((MR_Integer) MR_tempr1 << (MR_Integer) 6)))))));
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ssdb__format_param_options_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module218)
	MR_init_entry1(ssdb__non_dot_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__non_dot_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'non_dot'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__non_dot_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 != (MR_Integer) 46);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module219)
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

MR_BEGIN_MODULE(ssdb_module220)
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


MR_BEGIN_MODULE(ssdb_module221)
	MR_init_entry1(__Unify___ssdb__breakpoint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__breakpoint_0_0);
	MR_init_label3(__Unify___ssdb__breakpoint_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__breakpoint_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__breakpoint_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ssdb__breakpoint_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___ssdb__ssdb_proc_id_0_0,
		__Unify___ssdb__breakpoint_0_0_i4);
MR_def_label(__Unify___ssdb__breakpoint_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ssdb__breakpoint_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ssdb__breakpoint_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__breakpoint_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module222)
	MR_init_entry1(__Compare___ssdb__breakpoint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__breakpoint_0_0);
	MR_init_label5(__Compare___ssdb__breakpoint_0_0,3,2,5,9,29)
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
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__breakpoint_0_0_i5);
MR_def_label(__Compare___ssdb__breakpoint_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__breakpoint_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ssdb__ssdb_proc_id_0_0,
		__Compare___ssdb__breakpoint_0_0_i9);
MR_def_label(__Compare___ssdb__breakpoint_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__breakpoint_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__breakpoint_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ssdb_module223)
	MR_init_entry1(__Unify___ssdb__breakpoints_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__breakpoints_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ssdb__breakpoints_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
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

MR_BEGIN_MODULE(ssdb_module224)
	MR_init_entry1(__Compare___ssdb__breakpoints_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__breakpoints_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ssdb__breakpoints_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ssdb, ssdb_proc_id);
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


MR_BEGIN_MODULE(ssdb_module225)
	MR_init_entry1(__Unify___ssdb__debugger_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__debugger_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ssdb__debugger_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module226)
	MR_init_entry1(__Compare___ssdb__debugger_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__debugger_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ssdb__debugger_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module227)
	MR_init_entry1(__Unify___ssdb__debugging_paused_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__debugging_paused_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ssdb__debugging_paused_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module228)
	MR_init_entry1(__Compare___ssdb__debugging_paused_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__debugging_paused_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ssdb__debugging_paused_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module229)
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
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ssdb__format_config_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
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


MR_BEGIN_MODULE(ssdb_module230)
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
	MR_sv(12) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_sv(11) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(10) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(9) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(8) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(7) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(6) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_sv(5) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(4) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(3) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_tempr3, 0) & (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 0) & (MR_Integer) 1);
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

MR_BEGIN_MODULE(ssdb_module231)
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

MR_BEGIN_MODULE(ssdb_module232)
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

MR_BEGIN_MODULE(ssdb_module233)
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

MR_BEGIN_MODULE(ssdb_module234)
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


MR_BEGIN_MODULE(ssdb_module235)
	MR_init_entry1(__Unify___ssdb__next_stop_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__next_stop_0_0);
	MR_init_label9(__Unify___ssdb__next_stop_0_0,5,6,7,8,9,11,36,13,1)
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
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__next_stop_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__next_stop_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__next_stop_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__next_stop_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i9);
	}
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
MR_def_label(__Unify___ssdb__next_stop_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__next_stop_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i13);
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
MR_def_label(__Unify___ssdb__next_stop_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__next_stop_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ssdb__next_stop_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
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


MR_BEGIN_MODULE(ssdb_module236)
	MR_init_entry1(__Compare___ssdb__next_stop_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__next_stop_0_0);
	MR_init_label10(__Compare___ssdb__next_stop_0_0,7,8,9,10,11,12,5,16,17,18)
	MR_init_label10(__Compare___ssdb__next_stop_0_0,19,20,21,14,25,26,27,28,29,30)
	MR_init_label10(__Compare___ssdb__next_stop_0_0,23,34,35,36,186,37,38,39,32,43)
	MR_init_label10(__Compare___ssdb__next_stop_0_0,44,45,46,49,47,54,41,58,59,60)
	MR_init_label10(__Compare___ssdb__next_stop_0_0,61,62,63,56,68,69,70,71,72,73)
	MR_init_label10(__Compare___ssdb__next_stop_0_0,76,66,82,151,83,84,85,86,87,156)
	MR_init_label2(__Compare___ssdb__next_stop_0_0,88,90)
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
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i186);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___ssdb__next_stop_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i151);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i156);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i23);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i25);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i30);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i151);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i32);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i37);
	}
MR_def_label(__Compare___ssdb__next_stop_0_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i151);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i41);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i43);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i45);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i46);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i47);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__next_stop_0_0_i49);
MR_def_label(__Compare___ssdb__next_stop_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i90);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i54);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i151);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i56);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i58);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i59);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i60);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i61);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i62);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i63);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i151);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i66);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i68);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i69);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i70);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i71);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i72);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i73);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i151);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__next_stop_0_0_i76);
MR_def_label(__Compare___ssdb__next_stop_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i90);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i82);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i83);
	}
MR_def_label(__Compare___ssdb__next_stop_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i84);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i85);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i86);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i87);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ssdb__next_stop_0_0_i88);
	}
MR_def_label(__Compare___ssdb__next_stop_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__next_stop_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__next_stop_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module237)
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


MR_BEGIN_MODULE(ssdb_module238)
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


MR_BEGIN_MODULE(ssdb_module239)
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


MR_BEGIN_MODULE(ssdb_module240)
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


MR_BEGIN_MODULE(ssdb_module241)
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


MR_BEGIN_MODULE(ssdb_module242)
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


MR_BEGIN_MODULE(ssdb_module243)
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

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(ssdb_module244)
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


MR_BEGIN_MODULE(ssdb_module245)
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


MR_BEGIN_MODULE(ssdb_module246)
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


MR_BEGIN_MODULE(ssdb_module247)
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


MR_BEGIN_MODULE(ssdb_module248)
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


MR_BEGIN_MODULE(ssdb_module249)
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


MR_BEGIN_MODULE(ssdb_module250)
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

MR_BEGIN_MODULE(ssdb_module251)
	MR_init_entry1(__Unify___ssdb__var_value_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__var_value_0_0);
	MR_init_label4(__Unify___ssdb__var_value_0_0,5,24,9,1)
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
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i24);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 3);
	MR_r4 = MR_tfield(1, MR_tempr2, 3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_0);
	}
MR_def_label(__Unify___ssdb__var_value_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ssdb__var_value_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	MR_r3 = MR_tfield(2, MR_tempr3, 2);
	MR_r4 = MR_tfield(2, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_0);
	}
MR_def_label(__Unify___ssdb__var_value_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__var_value_0_0,9)
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

MR_BEGIN_MODULE(ssdb_module252)
	MR_init_entry1(__Compare___ssdb__var_value_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__var_value_0_0);
	MR_init_label10(__Compare___ssdb__var_value_0_0,3,2,9,13,7,5,60,22,25,20)
	MR_init_label4(__Compare___ssdb__var_value_0_0,31,32,34,112)
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
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 0);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 2);
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
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i112);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ssdb__var_value_0_0_i13);
MR_def_label(__Compare___ssdb__var_value_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i112);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__typed_compare_3_0);
MR_def_label(__Compare___ssdb__var_value_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i60);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ssdb__var_value_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i20);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i22);
	}
MR_def_label(__Compare___ssdb__var_value_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ssdb__var_value_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i60);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(2, MR_tempr5, 0);
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
		__Compare___ssdb__var_value_0_0_i25);
MR_def_label(__Compare___ssdb__var_value_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i112);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__typed_compare_3_0);
MR_def_label(__Compare___ssdb__var_value_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ssdb__var_value_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ssdb__var_value_0_0,32)
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
		__Compare___ssdb__var_value_0_0_i34);
MR_def_label(__Compare___ssdb__var_value_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ssdb__var_value_0_0_i112);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__var_value_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module253)
	MR_init_entry1(__Unify___ssdb__what_next_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ssdb__what_next_0_0);
	MR_init_label10(__Unify___ssdb__what_next_0_0,5,6,7,8,9,10,12,37,14,1)
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
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ssdb__what_next_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ssdb__what_next_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ssdb__what_next_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
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


MR_BEGIN_MODULE(ssdb_module254)
	MR_init_entry1(__Compare___ssdb__what_next_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ssdb__what_next_0_0);
	MR_init_label10(__Compare___ssdb__what_next_0_0,7,8,9,10,11,12,13,5,17,18)
	MR_init_label10(__Compare___ssdb__what_next_0_0,19,20,21,22,23,15,27,28,29,30)
	MR_init_label10(__Compare___ssdb__what_next_0_0,31,32,33,25,37,38,39,40,41,42)
	MR_init_label10(__Compare___ssdb__what_next_0_0,43,35,47,48,49,50,222,51,52,53)
	MR_init_label10(__Compare___ssdb__what_next_0_0,45,57,58,59,60,61,62,64,55,68)
	MR_init_label10(__Compare___ssdb__what_next_0_0,69,70,71,72,73,74,66,79,80,81)
	MR_init_label10(__Compare___ssdb__what_next_0_0,82,83,84,85,252,77,89,90,91,92)
	MR_init_label5(__Compare___ssdb__what_next_0_0,93,94,178,95,179)
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
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i222);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___ssdb__what_next_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i25);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i29);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i31);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i35);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i37);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i39);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i40);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i42);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i43);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i45);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i47);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i49);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i50);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i51);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i53);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i55);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i57);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i58);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i59);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i60);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i61);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i62);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__what_next_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i66);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i68);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i69);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i70);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i71);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i72);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i73);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i74);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__what_next_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i77);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i79);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i80);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i81);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i82);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i83);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i84);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i85);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i178);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ssdb__what_next_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i89);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i90);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i91);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i92);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i93);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i94);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i95);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ssdb__what_next_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ssdb__what_next_0_0_i252);
	}
MR_def_label(__Compare___ssdb__what_next_0_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module255)
	MR_init_entry1(fn__ssdb__IntroducedFrom__func__modify_breakpoint_states__2708__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ssdb__IntroducedFrom__func__modify_breakpoint_states__2708__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__modify_breakpoint_states__2708__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ssdb__IntroducedFrom__func__modify_breakpoint_states__2708__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module256)
	MR_init_entry1(ssdb__IntroducedFrom__pred__print_var_with_name__3014__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__IntroducedFrom__pred__print_var_with_name__3014__1_2_0);
	MR_init_label2(ssdb__IntroducedFrom__pred__print_var_with_name__3014__1_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__print_var_with_name__3014__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ssdb__IntroducedFrom__pred__print_var_with_name__3014__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ssdb__IntroducedFrom__pred__print_var_with_name__3014__1_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_np_tailcall_ent(string__prefix_2_0);
	}
MR_def_label(ssdb__IntroducedFrom__pred__print_var_with_name__3014__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ssdb__IntroducedFrom__pred__print_var_with_name__3014__1_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tfield(2, MR_tempr1, 1);
	MR_np_tailcall_ent(string__prefix_2_0);
	}
MR_def_label(ssdb__IntroducedFrom__pred__print_var_with_name__3014__1_2_0,4)
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

MR_BEGIN_MODULE(ssdb_module257)
	MR_init_entry1(ssdb__process_options__ho1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__process_options__ho1_5_0);
	MR_init_label10(ssdb__process_options__ho1_5_0,75,3,6,10,9,13,14,15,5,19)
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
MR_def_label(ssdb__process_options__ho1_5_0,75)
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
	MR_GOTO_LAB(ssdb__process_options__ho1_5_0_i75);
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
	MR_GOTO_LAB(ssdb__process_options__ho1_5_0_i75);
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


MR_BEGIN_MODULE(ssdb_module258)
	MR_init_entry1(ssdb__process_options__ho2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__process_options__ho2_5_0);
	MR_init_label10(ssdb__process_options__ho2_5_0,75,3,6,10,9,13,14,15,5,19)
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
MR_def_label(ssdb__process_options__ho2_5_0,75)
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
	MR_GOTO_LAB(ssdb__process_options__ho2_5_0_i75);
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
	MR_GOTO_LAB(ssdb__process_options__ho2_5_0_i75);
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


MR_BEGIN_MODULE(ssdb_module259)
	MR_init_entry1(ssdb__process_options__ho3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__process_options__ho3_5_0);
	MR_init_label10(ssdb__process_options__ho3_5_0,75,3,6,10,9,13,14,15,5,19)
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
MR_def_label(ssdb__process_options__ho3_5_0,75)
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
	MR_GOTO_LAB(ssdb__process_options__ho3_5_0_i75);
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
	MR_GOTO_LAB(ssdb__process_options__ho3_5_0_i75);
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

MR_BEGIN_MODULE(ssdb_module260)
	MR_init_entry1(ssdb__process_short_options__ho4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__process_short_options__ho4_4_0);
	MR_init_label8(ssdb__process_short_options__ho4_4_0,31,3,7,10,8,13,14,15)
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
MR_def_label(ssdb__process_short_options__ho4_4_0,31)
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
	MR_GOTO_LAB(ssdb__process_short_options__ho4_4_0_i31);
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


MR_BEGIN_MODULE(ssdb_module261)
	MR_init_entry1(ssdb__process_short_options__ho5_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__process_short_options__ho5_4_0);
	MR_init_label8(ssdb__process_short_options__ho5_4_0,31,3,7,10,8,13,14,15)
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
MR_def_label(ssdb__process_short_options__ho5_4_0,31)
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
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		ssdb__process_short_options__ho5_4_0_i7);
MR_def_label(ssdb__process_short_options__ho5_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__format_options_3_0,
		ssdb__process_short_options__ho5_4_0_i10);
MR_def_label(ssdb__process_short_options__ho5_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_short_options__ho5_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ssdb__process_short_options__ho5_4_0_i31);
MR_def_label(ssdb__process_short_options__ho5_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
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


MR_BEGIN_MODULE(ssdb_module262)
	MR_init_entry1(ssdb__process_short_options__ho6_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ssdb__process_short_options__ho6_4_0);
	MR_init_label8(ssdb__process_short_options__ho6_4_0,31,3,7,10,8,13,14,15)
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
MR_def_label(ssdb__process_short_options__ho6_4_0,31)
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
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		ssdb__process_short_options__ho6_4_0_i7);
MR_def_label(ssdb__process_short_options__ho6_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__format_param_options_3_0,
		ssdb__process_short_options__ho6_4_0_i10);
MR_def_label(ssdb__process_short_options__ho6_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ssdb__process_short_options__ho6_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ssdb__process_short_options__ho6_4_0_i31);
MR_def_label(ssdb__process_short_options__ho6_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
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


MR_BEGIN_MODULE(ssdb_module263)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0);
	MR_init_label10(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,2,4,6,5,8,10,13,14,15,16)
	MR_init_label6(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,17,18,12,20,3,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__handle_event_fail__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i2);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 348 "ssdb.m"
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 26526 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i4);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i22);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 26551 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 283 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 26561 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 26574 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 26586 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_r3;
{
#line 283 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 26598 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 26610 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 26622 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 26632 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 26645 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i6);
	}
	MR_r4 = MR_sv(1);
	MR_r6 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_r6, 0), 1);
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_top on empty stack", 30);
	MR_np_call_localret_ent(require__error_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i8);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i10);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i3);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i12);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 26690 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 333 "ssdb.m"
X = ssdb__mutable_variable_tty_in;
;}
#line 26700 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 26713 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 26725 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 335 "ssdb.m"
X = ssdb__mutable_variable_tty_out;
;}
#line 26737 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 26750 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i14);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 26778 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_sv(3);
{
#line 338 "ssdb.m"
ssdb__mutable_variable_saved_input_stream = X;
;}
#line 26789 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 26801 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 26813 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
	X = MR_r1;
{
#line 340 "ssdb.m"
ssdb__mutable_variable_saved_output_stream = X;
;}
#line 26824 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 26836 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i15);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_5_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i16);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 26860 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 338 "ssdb.m"
X = ssdb__mutable_variable_saved_input_stream;
;}
#line 26872 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 26885 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 26897 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 340 "ssdb.m"
X = ssdb__mutable_variable_saved_output_stream;
;}
#line 26907 "ssdb.c"
	MR_tempr2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 26920 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i17);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i18);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i20);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,12)
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
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i20);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i3);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0_i22);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_95_91_50_93_95_48_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module264)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0);
	MR_init_label10(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,2,4,6,5,8,10,13,14,15,16)
	MR_init_label7(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,17,18,12,20,21,3,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__handle_event_fail_nondet__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i2);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 348 "ssdb.m"
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 27007 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i4);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i23);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 27032 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 283 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 27042 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 27055 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 27067 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_r3;
{
#line 283 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 27079 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 27091 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 27103 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 292 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack;
;}
#line 27113 "ssdb.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 292 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_lock,
                "ssdb__mutable_variable_shadow_stack_lock");
#endif
;}
#line 27126 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i6);
	}
	MR_r4 = MR_sv(1);
	MR_r6 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_r6, 0), 1);
	MR_r1 = (MR_Integer) 6;
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: stack_top on empty stack", 30);
	MR_np_call_localret_ent(require__error_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i8);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i10);
	}
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i21);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i12);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 27171 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 333 "ssdb.m"
X = ssdb__mutable_variable_tty_in;
;}
#line 27181 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 333 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_in_lock,
                "ssdb__mutable_variable_tty_in_lock");
#endif
;}
#line 27194 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 27206 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 335 "ssdb.m"
X = ssdb__mutable_variable_tty_out;
;}
#line 27218 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 335 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_tty_out_lock,
                "ssdb__mutable_variable_tty_out_lock");
#endif
;}
#line 27231 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i14);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 27259 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_sv(3);
{
#line 338 "ssdb.m"
ssdb__mutable_variable_saved_input_stream = X;
;}
#line 27270 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 27282 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 27294 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
	X = MR_r1;
{
#line 340 "ssdb.m"
ssdb__mutable_variable_saved_output_stream = X;
;}
#line 27305 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 27317 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Integer) 6;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i15);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_5_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i16);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 27341 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 338 "ssdb.m"
X = ssdb__mutable_variable_saved_input_stream;
;}
#line 27353 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 338 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_input_stream_lock,
                "ssdb__mutable_variable_saved_input_stream_lock");
#endif
;}
#line 27366 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 27378 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 340 "ssdb.m"
X = ssdb__mutable_variable_saved_output_stream;
;}
#line 27388 "ssdb.c"
	MR_tempr2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0
{
#line 340 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_saved_output_stream_lock,
                "ssdb__mutable_variable_saved_output_stream_lock");
#endif
;}
#line 27401 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i17);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i18);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i20);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,12)
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
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i20);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ssdb__stack_pop_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i21);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__nondet_stack_pop_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i3);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0_i23);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_102_97_105_108_95_110_111_110_100_101_116_95_95_91_50_93_95_48_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module265)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0);
	MR_init_label10(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,2,5,7,6,9,10,13,14,15,16)
	MR_init_label1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,3)
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
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i2);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 348 "ssdb.m"
MR_get_thread_local_mutable(MR_Word, X, ssdb__mutable_variable_debugger_state);
;}
#line 27492 "ssdb.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i3);
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 27512 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 283 "ssdb.m"
X = ssdb__mutable_variable_cur_ssdb_event_number;
;}
#line 27524 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 27537 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 27549 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
	X = MR_tempr2;
{
#line 283 "ssdb.m"
ssdb__mutable_variable_cur_ssdb_event_number = X;
;}
#line 27561 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 283 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_cur_ssdb_event_number_lock,
                "ssdb__mutable_variable_cur_ssdb_event_number_lock");
#endif
;}
#line 27573 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 27585 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 294 "ssdb.m"
X = ssdb__mutable_variable_shadow_stack_depth;
;}
#line 27595 "ssdb.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 294 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_shadow_stack_depth_lock,
                "ssdb__mutable_variable_shadow_stack_depth_lock");
#endif
;}
#line 27608 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 27620 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 299 "ssdb.m"
X = ssdb__mutable_variable_nondet_shadow_stack_depth;
;}
#line 27630 "ssdb.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0
{
#line 299 "ssdb.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ssdb__mutable_variable_nondet_shadow_stack_depth_lock,
                "ssdb__mutable_variable_nondet_shadow_stack_depth_lock");
#endif
;}
#line 27643 "ssdb.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ssdb__search_nondet_stack_frame_2_7_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i5);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i6);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ssdb: lookup_nondet_stack_frame", 31);
	MR_np_call_localret_ent(require__error_1_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i6);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ssdb__stack_push_3_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i9);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_sv(2), 1);
	MR_r1 = (MR_Integer) 5;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__should_stop_at_this_event_8_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i10);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i3);
	}
	MR_np_call_localret_ent(ssdb__save_streams_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i13);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ssdb__print_event_info_4_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i14);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ssdb__read_and_execute_cmd_5_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i15);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ssdb__update_next_stop_6_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i16);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ssdb__restore_streams_2_0,
		f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0_i3);
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_101_118_101_110_116_95_114_101_100_111_95_110_111_110_100_101_116_95_95_91_50_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__impure_true_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module266)
	MR_init_entry1(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0);
	MR_init_label8(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,3,5,7,9,11,13,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__print_options__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-f", 2)) != 0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i3);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-p", 2)) != 0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i5);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-r", 2)) != 0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i7);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-v", 2)) != 0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i9);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--raw", 5)) != 0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i11);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--flat", 6)) != 0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i13);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--pretty", 8)) != 0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i15);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("--verbose", 9)) != 0)) {
		MR_GOTO_LAB(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0_i1);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_115_115_100_98_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_105_110_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ssdb_module267)
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
#line 3093 "ssdb.m"

    SUCCESS_INDICATOR = (T != 0);
;}
#line 27842 "ssdb.c"
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
#line 348 "ssdb.m"
MR_Unsigned ssdb__mutable_variable_debugger_state;

#line 27862 "ssdb.c"
#line 340 "ssdb.m"
MR_Word ssdb__mutable_variable_saved_output_stream;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_saved_output_stream_lock;
#endif

#line 27869 "ssdb.c"
#line 338 "ssdb.m"
MR_Word ssdb__mutable_variable_saved_input_stream;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_saved_input_stream_lock;
#endif

#line 27876 "ssdb.c"
#line 335 "ssdb.m"
MR_Word ssdb__mutable_variable_tty_out;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_tty_out_lock;
#endif

#line 27883 "ssdb.c"
#line 333 "ssdb.m"
MR_Word ssdb__mutable_variable_tty_in;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_tty_in_lock;
#endif

#line 27890 "ssdb.c"
#line 324 "ssdb.m"
MR_Word ssdb__mutable_variable_list_params;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_list_params_lock;
#endif

#line 27897 "ssdb.c"
#line 315 "ssdb.m"
MR_Word ssdb__mutable_variable_browser_state;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_browser_state_lock;
#endif

#line 27904 "ssdb.c"
#line 310 "ssdb.m"
MR_Word ssdb__mutable_variable_breakpoints_filter;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_breakpoints_filter_lock;
#endif

#line 27911 "ssdb.c"
#line 308 "ssdb.m"
MR_Word ssdb__mutable_variable_breakpoints_map;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_breakpoints_map_lock;
#endif

#line 27918 "ssdb.c"
#line 305 "ssdb.m"
MR_Word ssdb__mutable_variable_aliases;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_aliases_lock;
#endif

#line 27925 "ssdb.c"
#line 302 "ssdb.m"
MR_Word ssdb__mutable_variable_command_queue;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_command_queue_lock;
#endif

#line 27932 "ssdb.c"
#line 299 "ssdb.m"
MR_Word ssdb__mutable_variable_nondet_shadow_stack_depth;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_nondet_shadow_stack_depth_lock;
#endif

#line 27939 "ssdb.c"
#line 297 "ssdb.m"
MR_Word ssdb__mutable_variable_nondet_shadow_stack;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_nondet_shadow_stack_lock;
#endif

#line 27946 "ssdb.c"
#line 294 "ssdb.m"
MR_Word ssdb__mutable_variable_shadow_stack_depth;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_shadow_stack_depth_lock;
#endif

#line 27953 "ssdb.c"
#line 292 "ssdb.m"
MR_Word ssdb__mutable_variable_shadow_stack;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_shadow_stack_lock;
#endif

#line 27960 "ssdb.c"
#line 289 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_next_stop;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_next_stop_lock;
#endif

#line 27967 "ssdb.c"
#line 286 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_csn;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_csn_lock;
#endif

#line 27974 "ssdb.c"
#line 283 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_ssdb_event_number;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_ssdb_event_number_lock;
#endif

#line 27981 "ssdb.c"
#line 280 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_line_number;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_line_number_lock;
#endif

#line 27988 "ssdb.c"
#line 278 "ssdb.m"
MR_Word ssdb__mutable_variable_cur_filename;
#ifdef MR_THREAD_SAFE
    MercuryLock ssdb__mutable_variable_cur_filename_lock;
#endif

#line 27995 "ssdb.c"
#line 465 "ssdb.m"

static void MR_ssdb_sigint_handler(void)
{
    SSDB_step_next_stop();
}

#line 28003 "ssdb.c"

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


MR_declare_static(mercury__ssdb__init_debugger_state_2_0);

void
ssdb__user_init_pred_20(void);

void
ssdb__user_init_pred_20(void)
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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__init_debugger_state_2_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__init_debugger_state_2_0), MR_FALSE);
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
ssdb__user_init_pred_19(void);

void
ssdb__user_init_pred_19(void)
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
ssdb__user_init_pred_18(void);

void
ssdb__user_init_pred_18(void)
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


MR_declare_static(mercury__ssdb__initialise_mutable_breakpoints_filter_0_0);

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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_breakpoints_filter_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_breakpoints_filter_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_breakpoints_map_0_0);

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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_breakpoints_map_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_breakpoints_map_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_aliases_0_0);

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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_aliases_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_aliases_0_0), MR_FALSE);
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


MR_declare_static(mercury__ssdb__initialise_mutable_command_queue_0_0);

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
	MR_setup_callback(MR_ENTRY(mercury__ssdb__initialise_mutable_command_queue_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ssdb__initialise_mutable_command_queue_0_0), MR_FALSE);
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

static void mercury__ssdb_maybe_bunch_6(void)
{
	ssdb_module240();
	ssdb_module241();
	ssdb_module242();
	ssdb_module243();
	ssdb_module244();
	ssdb_module245();
	ssdb_module246();
	ssdb_module247();
	ssdb_module248();
	ssdb_module249();
	ssdb_module250();
	ssdb_module251();
	ssdb_module252();
	ssdb_module253();
	ssdb_module254();
	ssdb_module255();
	ssdb_module256();
	ssdb_module257();
	ssdb_module258();
	ssdb_module259();
	ssdb_module260();
	ssdb_module261();
	ssdb_module262();
	ssdb_module263();
	ssdb_module264();
	ssdb_module265();
	ssdb_module266();
	ssdb_module267();
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
#ifdef MR_THREADSCOPE
void mercury__ssdb__init_threadscope_string_table(void);
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
	mercury__ssdb_maybe_bunch_6();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_bp_state_0,
		ssdb__bp_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_breakpoint_0,
		ssdb__breakpoint_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_breakpoints_map_0,
		ssdb__breakpoints_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_debugger_state_0,
		ssdb__debugger_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ssdb__type_ctor_info_debugging_paused_0,
		ssdb__debugging_paused_0_0);
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
		&mercury_data_ssdb__type_ctor_info_breakpoints_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_debugger_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ssdb__type_ctor_info_debugging_paused_0);
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

#ifdef MR_THREADSCOPE

void mercury__ssdb__init_threadscope_string_table(void)
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
	ssdb__user_init_pred_18();
	ssdb__user_init_pred_19();
	ssdb__user_init_pred_20();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
