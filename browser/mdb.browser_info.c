/*
** Automatically generated from `browser_info.m'
** by the Mercury compiler,
** version rotd-2011-09-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__browser_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.browser_info.c"
#include "mdb.browser_info.mh"

#line 28 "mdb.browser_info.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.browser_info.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdb.browser_info.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 40 "mdb.browser_info.c"
#line 202 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 44 "mdb.browser_info.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "mdb.browser_info.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 52 "mdb.browser_info.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 56 "mdb.browser_info.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 60 "mdb.browser_info.c"
#line 61 "mdb.browser_info.c"
#ifndef MDB__BROWSER_INFO_DECL_GUARD
#define MDB__BROWSER_INFO_DECL_GUARD

#line 65 "mdb.browser_info.c"
#line 66 "mdb.browser_info.c"

#endif
#line 69 "mdb.browser_info.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_Word * f2[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
	MR_Integer f2;
	MR_Word * f3[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0__[],
	mercury_data_base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__[],
	mercury_data_base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[],
	mercury_data_base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__browser_info__type_ctor_info_browse_caller_type_0,
	mercury_data_mdb__browser_info__type_ctor_info_browser_db_0,
	mercury_data_mdb__browser_info__type_ctor_info_browser_info_0,
	mercury_data_mdb__browser_info__type_ctor_info_browser_mode_func_0,
	mercury_data_mdb__browser_info__type_ctor_info_browser_persistent_state_0,
	mercury_data_mdb__browser_info__type_ctor_info_browser_term_mode_0,
	mercury_data_mdb__browser_info__type_ctor_info_caller_params_0,
	mercury_data_mdb__browser_info__type_ctor_info_debugger_0,
	mercury_data_mdb__browser_info__type_ctor_info_dir_0,
	mercury_data_mdb__browser_info__type_ctor_info_format_params_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0,
	mercury_data_mdb__browser_info__type_ctor_info_maybe_track_subterm_1,
	mercury_data_mdb__browser_info__type_ctor_info_param_cmd_0,
	mercury_data_mdb__browser_info__type_ctor_info_portray_format_0,
	mercury_data_mdb__browser_info__type_ctor_info_setting_0,
	mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0,
	mercury_data_mdb__browser_info__type_ctor_info_term_browser_response_0;
MR_decl_label1(mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_0, 12)
MR_decl_label10(mdb__browser_info__browser_params_to_string_3_0, 4,5,6,7,8,9,10,11,12,13)
MR_decl_label10(mdb__browser_info__browser_params_to_string_3_0, 14,16,17,15,20,21,22,23,3,26)
MR_decl_label10(mdb__browser_info__browser_params_to_string_3_0, 27,28,29,30,31,32,33,38,39,34)
MR_decl_label6(mdb__browser_info__browser_params_to_string_3_0, 40,45,46,41,48,49)
MR_decl_label2(mdb__browser_info__browser_persistent_state_type_1_0, 2,3)
MR_decl_label9(mdb__browser_info__convert_dirs_to_term_path_3_0, 59,7,9,11,6,5,16,18,15)
MR_decl_label10(mdb__browser_info__deconstruct_browser_term_cc_6_0, 5,7,4,10,12,9,15,17,14,20)
MR_decl_label7(mdb__browser_info__deconstruct_browser_term_cc_6_0, 22,19,27,28,29,3,30)
MR_decl_label10(mdb__browser_info__functor_browser_term_cc_5_0, 5,7,4,10,12,9,15,17,14,20)
MR_decl_label8(mdb__browser_info__functor_browser_term_cc_5_0, 22,19,27,28,29,3,30,32)
MR_decl_label3(mdb__browser_info__get_format_4_0, 7,8,3)
MR_decl_label6(mdb__browser_info__get_format_params_4_0, 3,4,2,7,8,5)
MR_decl_label1(mdb__browser_info__get_xml_browser_cmd_from_mdb_2_0, 3)
MR_decl_label1(mdb__browser_info__get_xml_tmp_filename_from_mdb_2_0, 3)
MR_decl_label1(mdb__browser_info__info_set_browse_param_4_0, 2)
MR_decl_label1(mdb__browser_info__info_set_xml_browser_cmd_3_0, 2)
MR_decl_label1(mdb__browser_info__info_set_xml_tmp_filename_3_0, 2)
MR_decl_label10(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0, 5,7,4,10,12,9,15,17,14,20)
MR_decl_label7(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0, 22,19,27,28,29,3,30)
MR_decl_label6(mdb__browser_info__maybe_set_param_8_0, 3,24,7,8,9,10)
MR_decl_label5(mdb__browser_info__maybe_set_param_2_4_0, 3,5,7,9,11)
MR_decl_label3(mdb__browser_info__nl_debugger_3_0, 4,16,18)
MR_decl_label6(mdb__browser_info__print_format_debugger_4_0, 5,10,15,21,51,3)
MR_decl_label8(mdb__browser_info__run_param_command_7_0, 3,7,9,5,14,13,15,11)
MR_decl_label2(mdb__browser_info__send_term_to_socket_3_0, 2,3)
MR_decl_label9(mdb__browser_info__set_browser_param_11_0, 4,3,9,2,14,19,20,21,22)
MR_decl_label7(mdb__browser_info__set_browser_param_from_option_table_5_0, 2,3,4,5,6,7,8)
MR_decl_label4(mdb__browser_info__set_browser_param_maybe_caller_type_9_0, 5,3,7,8)
MR_decl_label9(mdb__browser_info__set_browser_param_with_caller_type_11_0, 7,8,2,9,10,15,16,17,18)
MR_decl_label1(mdb__browser_info__set_xml_browser_cmd_from_mdb_3_0, 2)
MR_decl_label1(mdb__browser_info__set_xml_tmp_filename_from_mdb_3_0, 2)
MR_decl_label9(mdb__browser_info__show_settings_5_0, 2,3,4,5,6,7,10,11,8)
MR_decl_label10(mdb__browser_info__show_settings_caller_6_0, 5,6,3,2,7,8,9,10,11,12)
MR_decl_label10(mdb__browser_info__show_settings_caller_6_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label5(mdb__browser_info__show_settings_caller_6_0, 23,24,25,26,27)
MR_decl_label10(mdb__browser_info__show_settings_caller_format_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(mdb__browser_info__show_settings_caller_format_8_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label3(mdb__browser_info__write_int_debugger_4_0, 5,15,3)
MR_decl_label6(mdb__browser_info__write_path_4_0, 3,41,11,10,13,40)
MR_decl_label10(mdb__browser_info__write_path_2_4_0, 57,3,8,11,10,13,6,16,20,19)
MR_decl_label2(mdb__browser_info__write_path_2_4_0, 23,24)
MR_decl_label3(mdb__browser_info__write_string_debugger_4_0, 5,15,3)
MR_decl_label10(fn__mdb__browser_info__caller_params_to_desc_1_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(fn__mdb__browser_info__caller_params_to_desc_1_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(fn__mdb__browser_info__caller_params_to_desc_1_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(fn__mdb__browser_info__caller_params_to_desc_1_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label4(fn__mdb__browser_info__caller_params_to_desc_1_0, 43,44,45,46)
MR_decl_label10(fn__mdb__browser_info__caller_params_to_mdb_command_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label8(fn__mdb__browser_info__caller_params_to_mdb_command_2_0, 13,14,15,16,17,18,19,20)
MR_decl_label10(fn__mdb__browser_info__format_params_to_desc_1_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label4(fn__mdb__browser_info__format_params_to_desc_1_0, 12,13,14,15)
MR_decl_label10(fn__mdb__browser_info__format_params_to_mdb_command_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label8(fn__mdb__browser_info__format_params_to_mdb_command_2_0, 12,13,14,15,16,17,18,19)
MR_decl_label1(__Unify___mdb__browser_info__browser_db_0_0, 6)
MR_decl_label7(__Unify___mdb__browser_info__browser_info_0_0, 4,7,9,11,13,18,1)
MR_decl_label6(__Unify___mdb__browser_info__browser_persistent_state_0_0, 4,6,8,10,14,1)
MR_decl_label5(__Unify___mdb__browser_info__caller_params_0_0, 4,6,8,12,1)
MR_decl_label4(__Unify___mdb__browser_info__dir_0_0, 5,15,6,1)
MR_decl_label2(__Unify___mdb__browser_info__format_params_0_0, 4,1)
MR_decl_label3(__Unify___mdb__browser_info__maybe_track_subterm_1_0, 12,5,1)
MR_decl_label7(__Unify___mdb__browser_info__param_cmd_0_0, 5,8,6,14,30,12,1)
MR_decl_label6(__Unify___mdb__browser_info__setting_0_0, 5,7,9,27,11,1)
MR_decl_label6(__Unify___mdb__browser_info__term_browser_response_0_0, 5,6,7,21,8,1)
MR_decl_label2(__Compare___mdb__browser_info__browser_db_0_0, 3,2)
MR_decl_label9(__Compare___mdb__browser_info__browser_info_0_0, 3,2,5,9,13,17,21,26,85)
MR_decl_label8(__Compare___mdb__browser_info__browser_persistent_state_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label7(__Compare___mdb__browser_info__caller_params_0_0, 3,2,5,9,13,17,45)
MR_decl_label9(__Compare___mdb__browser_info__dir_0_0, 30,7,5,11,9,26,15,27,16)
MR_decl_label6(__Compare___mdb__browser_info__format_params_0_0, 3,2,5,9,13,37)
MR_decl_label7(__Compare___mdb__browser_info__maybe_track_subterm_1_0, 30,7,5,9,11,15,21)
MR_decl_label10(__Compare___mdb__browser_info__param_cmd_0_0, 58,7,8,5,12,15,13,10,23,24)
MR_decl_label8(__Compare___mdb__browser_info__param_cmd_0_0, 27,21,53,33,34,55,35,37)
MR_decl_label10(__Compare___mdb__browser_info__setting_0_0, 3,2,7,9,10,5,14,15,17,12)
MR_decl_label10(__Compare___mdb__browser_info__setting_0_0, 21,22,23,19,28,29,30,85,26,34)
MR_decl_label4(__Compare___mdb__browser_info__setting_0_0, 35,63,36,64)
MR_decl_label10(__Compare___mdb__browser_info__term_browser_response_0_0, 7,8,9,5,13,14,15,11,19,123)
MR_decl_label10(__Compare___mdb__browser_info__term_browser_response_0_0, 20,76,17,25,26,27,23,31,32,33)
MR_decl_label1(__Compare___mdb__browser_info__term_browser_response_0_0, 34)
MR_def_extern_entry(fn__mdb__browser_info__init_5_0)
MR_def_extern_entry(mdb__browser_info__get_format_4_0)
MR_def_extern_entry(mdb__browser_info__get_format_params_4_0)
MR_def_extern_entry(fn__mdb__browser_info__get_num_printed_io_actions_1_0)
MR_def_extern_entry(mdb__browser_info__convert_dirs_to_term_path_3_0)
MR_def_extern_entry(fn__mdb__browser_info__xml_browser_cmd_1_0)
MR_def_extern_entry(fn__f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_120_109_108_95_98_114_111_119_115_101_114_95_99_109_100_32_58_61_2_0)
MR_def_extern_entry(fn__mdb__browser_info__xml_tmp_filename_1_0)
MR_def_extern_entry(fn__f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_120_109_108_95_116_109_112_95_102_105_108_101_110_97_109_101_32_58_61_2_0)
MR_def_extern_entry(mdb__browser_info__init_persistent_state_1_0)
MR_decl_static(mdb__browser_info__maybe_set_param_2_4_0)
MR_decl_static(mdb__browser_info__maybe_set_param_8_0)
MR_def_extern_entry(mdb__browser_info__set_browser_param_11_0)
MR_def_extern_entry(mdb__browser_info__set_browser_param_with_caller_type_11_0)
MR_def_extern_entry(mdb__browser_info__set_browser_param_maybe_caller_type_9_0)
MR_def_extern_entry(mdb__browser_info__set_browser_param_from_option_table_5_0)
MR_def_extern_entry(mdb__browser_info__info_set_browse_param_4_0)
MR_def_extern_entry(mdb__browser_info__set_num_io_actions_3_0)
MR_def_extern_entry(mdb__browser_info__info_set_num_io_actions_3_0)
MR_decl_static(mdb__browser_info__set_xml_browser_cmd_from_mdb_3_0)
MR_def_extern_entry(mdb__browser_info__info_set_xml_browser_cmd_3_0)
MR_decl_static(mdb__browser_info__set_xml_tmp_filename_from_mdb_3_0)
MR_def_extern_entry(mdb__browser_info__info_set_xml_tmp_filename_3_0)
MR_def_extern_entry(mdb__browser_info__get_num_io_actions_2_0)
MR_def_extern_entry(mdb__browser_info__send_term_to_socket_3_0)
MR_def_extern_entry(mdb__browser_info__nl_debugger_3_0)
MR_def_extern_entry(mdb__browser_info__write_string_debugger_4_0)
MR_def_extern_entry(mdb__browser_info__write_int_debugger_4_0)
MR_decl_static(mdb__browser_info__write_path_2_4_0)
MR_def_extern_entry(mdb__browser_info__write_path_4_0)
MR_def_extern_entry(mdb__browser_info__print_format_debugger_4_0)
MR_decl_static(mdb__browser_info__show_settings_caller_format_8_0)
MR_decl_static(mdb__browser_info__show_settings_caller_6_0)
MR_def_extern_entry(mdb__browser_info__show_settings_5_0)
MR_def_extern_entry(mdb__browser_info__run_param_command_7_0)
MR_decl_static(fn__mdb__browser_info__format_params_to_mdb_command_2_0)
MR_decl_static(fn__mdb__browser_info__caller_params_to_mdb_command_2_0)
MR_decl_static(fn__mdb__browser_info__format_params_to_desc_1_0)
MR_decl_static(fn__mdb__browser_info__caller_params_to_desc_1_0)
MR_def_extern_entry(mdb__browser_info__browser_params_to_string_3_0)
MR_def_extern_entry(mdb__browser_info__deconstruct_browser_term_cc_6_0)
MR_def_extern_entry(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0)
MR_def_extern_entry(mdb__browser_info__functor_browser_term_cc_5_0)
MR_decl_static(mdb__browser_info__set_depth_from_mdb_10_0)
MR_decl_static(mdb__browser_info__set_size_from_mdb_10_0)
MR_decl_static(mdb__browser_info__set_width_from_mdb_10_0)
MR_decl_static(mdb__browser_info__set_lines_from_mdb_10_0)
MR_decl_static(mdb__browser_info__set_format_from_mdb_6_0)
MR_decl_static(mdb__browser_info__get_xml_browser_cmd_from_mdb_2_0)
MR_decl_static(mdb__browser_info__get_xml_tmp_filename_from_mdb_2_0)
MR_decl_static(fn__mdb__browser_info__mercury_bool_yes_0_0)
MR_decl_static(fn__mdb__browser_info__mercury_bool_no_0_0)
MR_decl_static(mdb__browser_info__browser_persistent_state_type_1_0)
MR_def_extern_entry(__Unify___mdb__browser_info__browse_caller_type_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__browse_caller_type_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__browser_db_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__browser_db_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__browser_info_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__browser_info_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__browser_mode_func_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__browser_mode_func_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__browser_persistent_state_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__browser_persistent_state_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__browser_term_mode_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__browser_term_mode_0_0)
MR_decl_static(__Unify___mdb__browser_info__caller_params_0_0)
MR_decl_static(__Compare___mdb__browser_info__caller_params_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__debugger_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__debugger_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__dir_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__dir_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__format_params_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__format_params_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__how_track_subterm_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__how_track_subterm_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__maybe_track_subterm_1_0)
MR_def_extern_entry(__Compare___mdb__browser_info__maybe_track_subterm_1_0)
MR_def_extern_entry(__Unify___mdb__browser_info__param_cmd_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__param_cmd_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__portray_format_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__portray_format_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__setting_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__setting_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__should_assert_invalid_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__should_assert_invalid_0_0)
MR_def_extern_entry(__Unify___mdb__browser_info__term_browser_response_0_0)
MR_def_extern_entry(__Compare___mdb__browser_info__term_browser_response_0_0)
MR_decl_static(mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_0)
MR_decl_static(mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_0)
MR_decl_static(mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_0)
MR_decl_static(mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_0)
MR_decl_static(f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
3,
10,
80,
25
}
},
{
{
10,
30,
80,
25
}
},
{
{
3,
10,
80,
2
}
},
{
{
3,
10,
80,
5
}
},
};

static const struct mercury_type_1 mercury_common_1[3] =
{
{
0,
{
MR_TAG_COMMON(0,0,0),
MR_TAG_COMMON(0,0,0),
MR_TAG_COMMON(0,0,0),
MR_TAG_COMMON(0,0,0)
}
},
{
0,
{
MR_TAG_COMMON(0,0,1),
MR_TAG_COMMON(0,0,1),
MR_TAG_COMMON(0,0,1),
MR_TAG_COMMON(0,0,1)
}
},
{
0,
{
MR_TAG_COMMON(0,0,2),
MR_TAG_COMMON(0,0,2),
MR_TAG_COMMON(0,0,3),
MR_TAG_COMMON(0,0,2)
}
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_TAG_COMMON(0,1,0),
MR_TAG_COMMON(0,1,1),
MR_TAG_COMMON(0,1,2)
},
20,
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_string_const("flat", 4)
},
{
MR_string_const("pretty", 6)
},
{
MR_string_const("raw_pretty", 10)
},
{
MR_string_const("verbose", 7)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__browser_info, dir)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_TAG_COMMON(0,4,0),
MR_CTOR0_ADDR(mdb__browser_info, browser_term_mode)
},
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_browse_caller_type_0_0 = {
	"print",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_browse_caller_type_0_1 = {
	"browse",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_browse_caller_type_0_2 = {
	"print_all",
	2
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browser_info__enum_value_ordered_browse_caller_type_0[] = {
	&mercury_data_mdb__browser_info__enum_functor_desc_browse_caller_type_0_0,
	&mercury_data_mdb__browser_info__enum_functor_desc_browse_caller_type_0_1,
	&mercury_data_mdb__browser_info__enum_functor_desc_browse_caller_type_0_2
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browser_info__enum_name_ordered_browse_caller_type_0[] = {
	&mercury_data_mdb__browser_info__enum_functor_desc_browse_caller_type_0_1,
	&mercury_data_mdb__browser_info__enum_functor_desc_browse_caller_type_0_0,
	&mercury_data_mdb__browser_info__enum_functor_desc_browse_caller_type_0_2
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_browse_caller_type_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_browse_caller_type_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__browse_caller_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__browse_caller_type_0_0)),
	"mdb.browser_info",
	"browse_caller_type",
	{ (void *)mercury_data_mdb__browser_info__enum_name_ordered_browse_caller_type_0 },
	{ (void *)mercury_data_mdb__browser_info__enum_value_ordered_browse_caller_type_0 },
	3,
	4,
	mercury_data_mdb__browser_info__functor_number_map_browse_caller_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_stream_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_stream_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_stream_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_stream_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2io__type_ctor_info_stream_id_0io__type_ctor_info_stream_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_io__type_ctor_info_stream_id_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_stream_info_0
}};

static const MR_NotagFunctorDesc mercury_data_mdb__browser_info__notag_functor_desc_browser_db_0 = {
	"browser_db",
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2io__type_ctor_info_stream_id_0io__type_ctor_info_stream_info_0,
	"browser_stream_db"
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_browser_db_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_browser_db_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__browser_db_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__browser_db_0_0)),
	"mdb.browser_info",
	"browser_db",
	{ (void *)&mercury_data_mdb__browser_info__notag_functor_desc_browser_db_0 },
	{ (void *)&mercury_data_mdb__browser_info__notag_functor_desc_browser_db_0 },
	1,
	4,
	mercury_data_mdb__browser_info__functor_number_map_browser_db_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_term__type_ctor_info_browser_term_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_dir_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdb__browser_info__type_ctor_info_dir_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_dir_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_portray_format_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_portray_format_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_dir_0 = {
	&mercury_data_mdb__browser_info__type_ctor_info_maybe_track_subterm_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1mdb__browser_info__type_ctor_info_dir_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_browser_term_mode_0;

static const MR_VA_TypeInfo_Struct2 mercury_data___vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
	&mercury_data_builtin__type_ctor_info_func_0,
	2,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
	(MR_TypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_browser_term_mode_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data___vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_term__type_ctor_info_browser_term_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_browse_caller_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_browser_persistent_state_0;

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_browser_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_term__type_ctor_info_browser_term_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_browse_caller_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_browser_persistent_state_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0
};

const MR_ConstString mercury_data_mdb__browser_info__field_names_browser_info_0_0[] = {
	"term",
	"dirs",
	"caller_type",
	"format",
	"state",
	"maybe_track",
	"maybe_mode_func"
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_browser_info_0_0 = {
	"browser_info",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_browser_info_0_0,
	mercury_data_mdb__browser_info__field_names_browser_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_browser_info_0_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_browser_info_0_0

};

const MR_DuPtagLayout mercury_data_mdb__browser_info__du_ptag_ordered_browser_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_browser_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_name_ordered_browser_info_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_browser_info_0_0
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_browser_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_browser_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__browser_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__browser_info_0_0)),
	"mdb.browser_info",
	"browser_info",
	{ (void *)mercury_data_mdb__browser_info__du_name_ordered_browser_info_0 },
	{ (void *)mercury_data_mdb__browser_info__du_ptag_ordered_browser_info_0 },
	1,
	4,
	mercury_data_mdb__browser_info__functor_number_map_browser_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_browser_mode_func_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__browser_mode_func_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__browser_mode_func_0_0)),
	"mdb.browser_info",
	"browser_mode_func",
	{ 0 },
	{ (void *)&mercury_data___vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_caller_params_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_browser_persistent_state_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_caller_params_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_caller_params_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_caller_params_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_mdb__browser_info__field_names_browser_persistent_state_0_0[] = {
	"print_params",
	"browse_params",
	"print_all_params",
	"num_printed_io_actions",
	"xml_browser_cmd",
	"xml_tmp_filename"
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_browser_persistent_state_0_0 = {
	"browser_persistent_state",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_browser_persistent_state_0_0,
	mercury_data_mdb__browser_info__field_names_browser_persistent_state_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_browser_persistent_state_0_0

};

const MR_DuPtagLayout mercury_data_mdb__browser_info__du_ptag_ordered_browser_persistent_state_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_name_ordered_browser_persistent_state_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_browser_persistent_state_0_0
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_browser_persistent_state_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_browser_persistent_state_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__browser_persistent_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__browser_persistent_state_0_0)),
	"mdb.browser_info",
	"browser_persistent_state",
	{ (void *)mercury_data_mdb__browser_info__du_name_ordered_browser_persistent_state_0 },
	{ (void *)mercury_data_mdb__browser_info__du_ptag_ordered_browser_persistent_state_0 },
	1,
	4,
	mercury_data_mdb__browser_info__functor_number_map_browser_persistent_state_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_browser_term_mode_0_0 = {
	"input",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_browser_term_mode_0_1 = {
	"output",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_browser_term_mode_0_2 = {
	"unbound",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_browser_term_mode_0_3 = {
	"not_applicable",
	3
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browser_info__enum_value_ordered_browser_term_mode_0[] = {
	&mercury_data_mdb__browser_info__enum_functor_desc_browser_term_mode_0_0,
	&mercury_data_mdb__browser_info__enum_functor_desc_browser_term_mode_0_1,
	&mercury_data_mdb__browser_info__enum_functor_desc_browser_term_mode_0_2,
	&mercury_data_mdb__browser_info__enum_functor_desc_browser_term_mode_0_3
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browser_info__enum_name_ordered_browser_term_mode_0[] = {
	&mercury_data_mdb__browser_info__enum_functor_desc_browser_term_mode_0_0,
	&mercury_data_mdb__browser_info__enum_functor_desc_browser_term_mode_0_3,
	&mercury_data_mdb__browser_info__enum_functor_desc_browser_term_mode_0_1,
	&mercury_data_mdb__browser_info__enum_functor_desc_browser_term_mode_0_2
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_browser_term_mode_0[] = {
	0,
	2,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__browser_term_mode_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__browser_term_mode_0_0)),
	"mdb.browser_info",
	"browser_term_mode",
	{ (void *)mercury_data_mdb__browser_info__enum_name_ordered_browser_term_mode_0 },
	{ (void *)mercury_data_mdb__browser_info__enum_value_ordered_browser_term_mode_0 },
	4,
	4,
	mercury_data_mdb__browser_info__functor_number_map_browser_term_mode_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_format_params_0;

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_caller_params_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_portray_format_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_format_params_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_format_params_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_format_params_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_format_params_0
};

const MR_ConstString mercury_data_mdb__browser_info__field_names_caller_params_0_0[] = {
	"default_format",
	"flat_params",
	"raw_pretty_params",
	"verbose_params",
	"pretty_params"
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_caller_params_0_0 = {
	"caller_params",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_caller_params_0_0,
	mercury_data_mdb__browser_info__field_names_caller_params_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_caller_params_0_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_caller_params_0_0

};

const MR_DuPtagLayout mercury_data_mdb__browser_info__du_ptag_ordered_caller_params_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_caller_params_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_name_ordered_caller_params_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_caller_params_0_0
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_caller_params_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_caller_params_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__caller_params_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__caller_params_0_0)),
	"mdb.browser_info",
	"caller_params",
	{ (void *)mercury_data_mdb__browser_info__du_name_ordered_caller_params_0 },
	{ (void *)mercury_data_mdb__browser_info__du_ptag_ordered_caller_params_0 },
	1,
	4,
	mercury_data_mdb__browser_info__functor_number_map_caller_params_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_debugger_0_0 = {
	"debugger_internal",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_debugger_0_1 = {
	"debugger_external",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browser_info__enum_value_ordered_debugger_0[] = {
	&mercury_data_mdb__browser_info__enum_functor_desc_debugger_0_0,
	&mercury_data_mdb__browser_info__enum_functor_desc_debugger_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browser_info__enum_name_ordered_debugger_0[] = {
	&mercury_data_mdb__browser_info__enum_functor_desc_debugger_0_1,
	&mercury_data_mdb__browser_info__enum_functor_desc_debugger_0_0
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_debugger_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_debugger_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__debugger_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__debugger_0_0)),
	"mdb.browser_info",
	"debugger",
	{ (void *)mercury_data_mdb__browser_info__enum_name_ordered_debugger_0 },
	{ (void *)mercury_data_mdb__browser_info__enum_value_ordered_debugger_0 },
	2,
	4,
	mercury_data_mdb__browser_info__functor_number_map_debugger_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_dir_0_0 = {
	"parent",
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

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_dir_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_dir_0_1 = {
	"child_num",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_dir_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_dir_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_dir_0_2 = {
	"child_name",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_dir_0_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_dir_0_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_dir_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_dir_0_1[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_dir_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_dir_0_2[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_dir_0_2

};

const MR_DuPtagLayout mercury_data_mdb__browser_info__du_ptag_ordered_dir_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__browser_info__du_stag_ordered_dir_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_dir_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_dir_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_name_ordered_dir_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_dir_0_2,
	&mercury_data_mdb__browser_info__du_functor_desc_dir_0_1,
	&mercury_data_mdb__browser_info__du_functor_desc_dir_0_0
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_dir_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_dir_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__dir_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__dir_0_0)),
	"mdb.browser_info",
	"dir",
	{ (void *)mercury_data_mdb__browser_info__du_name_ordered_dir_0 },
	{ (void *)mercury_data_mdb__browser_info__du_ptag_ordered_dir_0 },
	3,
	4,
	mercury_data_mdb__browser_info__functor_number_map_dir_0
};

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_format_params_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdb__browser_info__field_names_format_params_0_0[] = {
	"depth",
	"size",
	"width",
	"lines"
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_format_params_0_0 = {
	"format_params",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_format_params_0_0,
	mercury_data_mdb__browser_info__field_names_format_params_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_format_params_0_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_format_params_0_0

};

const MR_DuPtagLayout mercury_data_mdb__browser_info__du_ptag_ordered_format_params_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_format_params_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_name_ordered_format_params_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_format_params_0_0
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_format_params_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_format_params_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__format_params_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__format_params_0_0)),
	"mdb.browser_info",
	"format_params",
	{ (void *)mercury_data_mdb__browser_info__du_name_ordered_format_params_0 },
	{ (void *)mercury_data_mdb__browser_info__du_ptag_ordered_format_params_0 },
	1,
	4,
	mercury_data_mdb__browser_info__functor_number_map_format_params_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_how_track_subterm_0_0 = {
	"track_accurate",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_how_track_subterm_0_1 = {
	"track_fast",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browser_info__enum_value_ordered_how_track_subterm_0[] = {
	&mercury_data_mdb__browser_info__enum_functor_desc_how_track_subterm_0_0,
	&mercury_data_mdb__browser_info__enum_functor_desc_how_track_subterm_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browser_info__enum_name_ordered_how_track_subterm_0[] = {
	&mercury_data_mdb__browser_info__enum_functor_desc_how_track_subterm_0_0,
	&mercury_data_mdb__browser_info__enum_functor_desc_how_track_subterm_0_1
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_how_track_subterm_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__how_track_subterm_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__how_track_subterm_0_0)),
	"mdb.browser_info",
	"how_track_subterm",
	{ (void *)mercury_data_mdb__browser_info__enum_name_ordered_how_track_subterm_0 },
	{ (void *)mercury_data_mdb__browser_info__enum_value_ordered_how_track_subterm_0 },
	2,
	4,
	mercury_data_mdb__browser_info__functor_number_map_how_track_subterm_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0 = {
	"no_track",
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
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0;

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_maybe_track_subterm_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0,
	(MR_PseudoTypeInfo) 1
};

const MR_DuArgLocn mercury_data_mdb__browser_info__field_locns_maybe_track_subterm_1_1[] = {
	{ 0, 0, 1 },
	{ 0, 1, 1 },
	{ 1, 0, 0 },
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1 = {
	"track",
	3,
	4,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_maybe_track_subterm_1_1,
	NULL,
	mercury_data_mdb__browser_info__field_locns_maybe_track_subterm_1_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1

};

const MR_DuPtagLayout mercury_data_mdb__browser_info__du_ptag_ordered_maybe_track_subterm_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_name_ordered_maybe_track_subterm_1[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0,
	&mercury_data_mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_maybe_track_subterm_1[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_maybe_track_subterm_1 = {
	1,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__maybe_track_subterm_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__maybe_track_subterm_1_0)),
	"mdb.browser_info",
	"maybe_track_subterm",
	{ (void *)mercury_data_mdb__browser_info__du_name_ordered_maybe_track_subterm_1 },
	{ (void *)mercury_data_mdb__browser_info__du_ptag_ordered_maybe_track_subterm_1 },
	2,
	4,
	mercury_data_mdb__browser_info__functor_number_map_maybe_track_subterm_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_maybe_option_table_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_setting_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__parse__type_ctor_info_setting_option_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0 = {
	&mercury_data_getopt__type_ctor_info_maybe_option_table_1,
{	(MR_TypeInfo) &mercury_data_mdb__parse__type_ctor_info_setting_option_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_setting_0;

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_param_cmd_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_setting_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_param_cmd_0_0 = {
	"format",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_param_cmd_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_param_cmd_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_setting_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_param_cmd_0_1 = {
	"format_param",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_param_cmd_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_param_cmd_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_param_cmd_0_2 = {
	"num_io_actions",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_param_cmd_0_2,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_param_cmd_0_3 = {
	"print_params",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_param_cmd_0_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_param_cmd_0_3

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_param_cmd_0_1[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_param_cmd_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_param_cmd_0_2[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_param_cmd_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_param_cmd_0_3[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_param_cmd_0_2

};

const MR_DuPtagLayout mercury_data_mdb__browser_info__du_ptag_ordered_param_cmd_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__browser_info__du_stag_ordered_param_cmd_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_param_cmd_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_param_cmd_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_param_cmd_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_name_ordered_param_cmd_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_param_cmd_0_0,
	&mercury_data_mdb__browser_info__du_functor_desc_param_cmd_0_1,
	&mercury_data_mdb__browser_info__du_functor_desc_param_cmd_0_2,
	&mercury_data_mdb__browser_info__du_functor_desc_param_cmd_0_3
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_param_cmd_0[] = {
	0,
	1,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_param_cmd_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__param_cmd_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__param_cmd_0_0)),
	"mdb.browser_info",
	"param_cmd",
	{ (void *)mercury_data_mdb__browser_info__du_name_ordered_param_cmd_0 },
	{ (void *)mercury_data_mdb__browser_info__du_ptag_ordered_param_cmd_0 },
	4,
	4,
	mercury_data_mdb__browser_info__functor_number_map_param_cmd_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_portray_format_0_0 = {
	"flat",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_portray_format_0_1 = {
	"raw_pretty",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_portray_format_0_2 = {
	"verbose",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_portray_format_0_3 = {
	"pretty",
	3
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browser_info__enum_value_ordered_portray_format_0[] = {
	&mercury_data_mdb__browser_info__enum_functor_desc_portray_format_0_0,
	&mercury_data_mdb__browser_info__enum_functor_desc_portray_format_0_1,
	&mercury_data_mdb__browser_info__enum_functor_desc_portray_format_0_2,
	&mercury_data_mdb__browser_info__enum_functor_desc_portray_format_0_3
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browser_info__enum_name_ordered_portray_format_0[] = {
	&mercury_data_mdb__browser_info__enum_functor_desc_portray_format_0_0,
	&mercury_data_mdb__browser_info__enum_functor_desc_portray_format_0_3,
	&mercury_data_mdb__browser_info__enum_functor_desc_portray_format_0_1,
	&mercury_data_mdb__browser_info__enum_functor_desc_portray_format_0_2
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_portray_format_0[] = {
	0,
	2,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_portray_format_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__portray_format_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__portray_format_0_0)),
	"mdb.browser_info",
	"portray_format",
	{ (void *)mercury_data_mdb__browser_info__enum_name_ordered_portray_format_0 },
	{ (void *)mercury_data_mdb__browser_info__enum_value_ordered_portray_format_0 },
	4,
	4,
	mercury_data_mdb__browser_info__functor_number_map_portray_format_0
};

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_setting_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_setting_0_0 = {
	"setting_depth",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_setting_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_setting_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_setting_0_1 = {
	"setting_size",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_setting_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_setting_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_setting_0_2 = {
	"setting_width",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_setting_0_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_setting_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_setting_0_3 = {
	"setting_lines",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_setting_0_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_setting_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_portray_format_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_setting_0_4 = {
	"setting_format",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_setting_0_4,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_setting_0_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_setting_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_setting_0_1[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_setting_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_setting_0_2[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_setting_0_2

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_setting_0_3[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_setting_0_3,
	&mercury_data_mdb__browser_info__du_functor_desc_setting_0_4

};

const MR_DuPtagLayout mercury_data_mdb__browser_info__du_ptag_ordered_setting_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_setting_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_setting_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_setting_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_mdb__browser_info__du_stag_ordered_setting_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_name_ordered_setting_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_setting_0_0,
	&mercury_data_mdb__browser_info__du_functor_desc_setting_0_4,
	&mercury_data_mdb__browser_info__du_functor_desc_setting_0_3,
	&mercury_data_mdb__browser_info__du_functor_desc_setting_0_1,
	&mercury_data_mdb__browser_info__du_functor_desc_setting_0_2
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_setting_0[] = {
	0,
	3,
	4,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_setting_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__setting_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__setting_0_0)),
	"mdb.browser_info",
	"setting",
	{ (void *)mercury_data_mdb__browser_info__du_name_ordered_setting_0 },
	{ (void *)mercury_data_mdb__browser_info__du_ptag_ordered_setting_0 },
	5,
	4,
	mercury_data_mdb__browser_info__functor_number_map_setting_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0 = {
	"assert_invalid",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1 = {
	"no_assert_invalid",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browser_info__enum_value_ordered_should_assert_invalid_0[] = {
	&mercury_data_mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0,
	&mercury_data_mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__browser_info__enum_name_ordered_should_assert_invalid_0[] = {
	&mercury_data_mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0,
	&mercury_data_mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_should_assert_invalid_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__should_assert_invalid_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__should_assert_invalid_0_0)),
	"mdb.browser_info",
	"should_assert_invalid",
	{ (void *)mercury_data_mdb__browser_info__enum_name_ordered_should_assert_invalid_0 },
	{ (void *)mercury_data_mdb__browser_info__enum_value_ordered_should_assert_invalid_0 },
	2,
	4,
	mercury_data_mdb__browser_info__functor_number_map_should_assert_invalid_0
};

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_term_browser_response_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_0 = {
	"browser_str",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_term_browser_response_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__browser_info__field_types_term_browser_response_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_1 = {
	"browser_int",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_info__field_types_term_browser_response_0_1,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_2 = {
	"browser_nl",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_3 = {
	"browser_end_command",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_4 = {
	"browser_quit",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_term_browser_response_0_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_2,
	&mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_3,
	&mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_4

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_term_browser_response_0_1[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_stag_ordered_term_browser_response_0_2[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_1

};

const MR_DuPtagLayout mercury_data_mdb__browser_info__du_ptag_ordered_term_browser_response_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_mdb__browser_info__du_stag_ordered_term_browser_response_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_term_browser_response_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_info__du_stag_ordered_term_browser_response_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_info__du_name_ordered_term_browser_response_0[] = {
	&mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_3,
	&mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_1,
	&mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_2,
	&mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_4,
	&mercury_data_mdb__browser_info__du_functor_desc_term_browser_response_0_0
};

const MR_Integer mercury_data_mdb__browser_info__functor_number_map_term_browser_response_0[] = {
	4,
	1,
	2,
	0,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_term_browser_response_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_info__term_browser_response_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_info__term_browser_response_0_0)),
	"mdb.browser_info",
	"term_browser_response",
	{ (void *)mercury_data_mdb__browser_info__du_name_ordered_term_browser_response_0 },
	{ (void *)mercury_data_mdb__browser_info__du_ptag_ordered_term_browser_response_0 },
	5,
	4,
	mercury_data_mdb__browser_info__functor_number_map_term_browser_response_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 3,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 3,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 2,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_0))
};




MR_BEGIN_MODULE(mdb__browser_info_module0)
	MR_init_entry1(fn__mdb__browser_info__init_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_info__init_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__browser_info__init_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module1)
	MR_init_entry1(mdb__browser_info__get_format_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__get_format_4_0);
	MR_init_label3(mdb__browser_info__get_format_4_0,7,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_format'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__get_format_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__get_format_4_0_i3);
	}
	MR_r3 = MR_tfield(0, MR_r1, 3);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__get_format_4_0_i3);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdb__browser_info__get_format_4_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_r1, 4), 1), 0);
	MR_proceed();
MR_def_label(mdb__browser_info__get_format_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__get_format_4_0_i8);
	}
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_r1, 4), 0), 0);
	MR_proceed();
MR_def_label(mdb__browser_info__get_format_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_r1, 4), 2), 0);
	MR_proceed();
MR_def_label(mdb__browser_info__get_format_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module2)
	MR_init_entry1(mdb__browser_info__get_format_params_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__get_format_params_4_0);
	MR_init_label6(mdb__browser_info__get_format_params_4_0,3,4,2,7,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_format_params'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__get_format_params_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdb__browser_info__get_format_params_4_0_i3);
	}
	MR_r2 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 4), 1);
	MR_r6 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(mdb__browser_info__get_format_params_4_0_i2);
	}
MR_def_label(mdb__browser_info__get_format_params_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__get_format_params_4_0_i4);
	}
	MR_r2 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 4), 0);
	MR_r6 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(mdb__browser_info__get_format_params_4_0_i2);
	}
MR_def_label(mdb__browser_info__get_format_params_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 4), 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
MR_def_label(mdb__browser_info__get_format_params_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__get_format_params_4_0_i5);
	}
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(mdb__browser_info__get_format_params_4_0_i7);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(mdb__browser_info__get_format_params_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdb__browser_info__get_format_params_4_0_i8);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(mdb__browser_info__get_format_params_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
MR_def_label(mdb__browser_info__get_format_params_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module3)
	MR_init_entry1(fn__mdb__browser_info__get_num_printed_io_actions_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_info__get_num_printed_io_actions_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_num_printed_io_actions'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__browser_info__get_num_printed_io_actions_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__term_rep__field_pos_3_0);
MR_decl_entry(mdb__term_rep__argument_3_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdb__browser_info_module4)
	MR_init_entry1(mdb__browser_info__convert_dirs_to_term_path_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__convert_dirs_to_term_path_3_0);
	MR_init_label9(mdb__browser_info__convert_dirs_to_term_path_3_0,59,7,9,11,6,5,16,18,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_dirs_to_term_path'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__convert_dirs_to_term_path_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__convert_dirs_to_term_path_3_0_i59);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(mdb__browser_info__convert_dirs_to_term_path_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(mdb__browser_info__convert_dirs_to_term_path_3_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdb__term_rep__field_pos_3_0,
		mdb__browser_info__convert_dirs_to_term_path_3_0_i7);
MR_def_label(mdb__browser_info__convert_dirs_to_term_path_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__convert_dirs_to_term_path_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__term_rep__argument_3_0,
		mdb__browser_info__convert_dirs_to_term_path_3_0_i9);
MR_def_label(mdb__browser_info__convert_dirs_to_term_path_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__convert_dirs_to_term_path_3_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(mdb__browser_info__convert_dirs_to_term_path_3_0,
		mdb__browser_info__convert_dirs_to_term_path_3_0_i11);
MR_def_label(mdb__browser_info__convert_dirs_to_term_path_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__browser_info__convert_dirs_to_term_path_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("convert_dirs_to_term_path: invalid field name", 45);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(mdb__browser_info__convert_dirs_to_term_path_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mdb__term_rep__argument_3_0,
		mdb__browser_info__convert_dirs_to_term_path_3_0_i16);
MR_def_label(mdb__browser_info__convert_dirs_to_term_path_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__convert_dirs_to_term_path_3_0_i15);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(mdb__browser_info__convert_dirs_to_term_path_3_0,
		mdb__browser_info__convert_dirs_to_term_path_3_0_i18);
MR_def_label(mdb__browser_info__convert_dirs_to_term_path_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__browser_info__convert_dirs_to_term_path_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("convert_dirs_to_term_path: invalid argument", 43);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module5)
	MR_init_entry1(fn__mdb__browser_info__xml_browser_cmd_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_info__xml_browser_cmd_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'xml_browser_cmd'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__browser_info__xml_browser_cmd_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module6)
	MR_init_entry1(fn__f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_120_109_108_95_98_114_111_119_115_101_114_95_99_109_100_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_120_109_108_95_98_114_111_119_115_101_114_95_99_109_100_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'xml_browser_cmd :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_120_109_108_95_98_114_111_119_115_101_114_95_99_109_100_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module7)
	MR_init_entry1(fn__mdb__browser_info__xml_tmp_filename_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_info__xml_tmp_filename_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'xml_tmp_filename'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__browser_info__xml_tmp_filename_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module8)
	MR_init_entry1(fn__f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_120_109_108_95_116_109_112_95_102_105_108_101_110_97_109_101_32_58_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_120_109_108_95_116_109_112_95_102_105_108_101_110_97_109_101_32_58_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'xml_tmp_filename :='/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_120_109_108_95_116_109_112_95_102_105_108_101_110_97_109_101_32_58_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module9)
	MR_init_entry1(mdb__browser_info__init_persistent_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__init_persistent_state_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_persistent_state'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__init_persistent_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module10)
	MR_init_entry1(mdb__browser_info__maybe_set_param_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__maybe_set_param_2_4_0);
	MR_init_label5(mdb__browser_info__maybe_set_param_2_4_0,3,5,7,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_set_param_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__maybe_set_param_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__browser_info__maybe_set_param_2_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(mdb__browser_info__maybe_set_param_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__maybe_set_param_2_4_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_proceed();
	}
MR_def_label(mdb__browser_info__maybe_set_param_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(mdb__browser_info__maybe_set_param_2_4_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(3, MR_r2, 1);
	MR_proceed();
	}
MR_def_label(mdb__browser_info__maybe_set_param_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdb__browser_info__maybe_set_param_2_4_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(1, MR_r2, 0);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_proceed();
	}
MR_def_label(mdb__browser_info__maybe_set_param_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(mdb__browser_info__maybe_set_param_2_4_0_i11);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(2, MR_r2, 0);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_proceed();
	}
MR_def_label(mdb__browser_info__maybe_set_param_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("maybe_set_param_2: cannot set format here", 41);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module11)
	MR_init_entry1(mdb__browser_info__maybe_set_param_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__maybe_set_param_8_0);
	MR_init_label6(mdb__browser_info__maybe_set_param_8_0,3,24,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_set_param'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__maybe_set_param_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__browser_info__maybe_set_param_8_0_i3);
	}
	MR_r1 = MR_r7;
	MR_proceed();
MR_def_label(mdb__browser_info__maybe_set_param_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,1)) {
		MR_GOTO_LAB(mdb__browser_info__maybe_set_param_8_0_i24);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_tfield(3, MR_r6, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_proceed();
	}
MR_def_label(mdb__browser_info__maybe_set_param_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(mdb__browser_info__maybe_set_param_2_4_0,
		mdb__browser_info__maybe_set_param_8_0_i7);
MR_def_label(mdb__browser_info__maybe_set_param_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(mdb__browser_info__maybe_set_param_2_4_0,
		mdb__browser_info__maybe_set_param_8_0_i8);
MR_def_label(mdb__browser_info__maybe_set_param_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(mdb__browser_info__maybe_set_param_2_4_0,
		mdb__browser_info__maybe_set_param_8_0_i9);
MR_def_label(mdb__browser_info__maybe_set_param_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdb__browser_info__maybe_set_param_2_4_0,
		mdb__browser_info__maybe_set_param_8_0_i10);
MR_def_label(mdb__browser_info__maybe_set_param_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module12)
	MR_init_entry1(mdb__browser_info__set_browser_param_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__set_browser_param_11_0);
	MR_init_label9(mdb__browser_info__set_browser_param_11_0,4,3,9,2,14,19,20,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_browser_param'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__set_browser_param_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i4);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i4);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i4);
	}
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_r1 = (MR_Integer) 1;
	MR_sv(8) = (MR_Integer) 1;
	MR_sv(1) = (MR_Integer) 1;
	MR_sv(10) = MR_r10;
	MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i2);
MR_def_label(mdb__browser_info__set_browser_param_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_r2;
	MR_r2 = MR_r5;
	MR_sv(8) = MR_r3;
	MR_r3 = MR_r6;
	MR_sv(1) = MR_r4;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_r1 = MR_r11;
	MR_sv(10) = MR_r10;
	MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i2);
MR_def_label(mdb__browser_info__set_browser_param_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i9);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i9);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i9);
	}
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_r1 = (MR_Integer) 0;
	MR_sv(8) = (MR_Integer) 1;
	MR_sv(1) = (MR_Integer) 0;
	MR_sv(10) = MR_r10;
	MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i2);
MR_def_label(mdb__browser_info__set_browser_param_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r5;
	MR_sv(8) = MR_r3;
	MR_r3 = MR_r6;
	MR_sv(1) = MR_r4;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_r1 = MR_tempr1;
	MR_sv(10) = MR_r10;
	}
MR_def_label(mdb__browser_info__set_browser_param_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i14);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i14);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i14);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i14);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_r7 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_GOTO_LAB(mdb__browser_info__set_browser_param_11_0_i19);
	}
MR_def_label(mdb__browser_info__set_browser_param_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_r7 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	}
MR_def_label(mdb__browser_info__set_browser_param_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r6;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(mdb__browser_info__maybe_set_param_8_0,
		mdb__browser_info__set_browser_param_11_0_i20);
MR_def_label(mdb__browser_info__set_browser_param_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(mdb__browser_info__maybe_set_param_8_0,
		mdb__browser_info__set_browser_param_11_0_i21);
MR_def_label(mdb__browser_info__set_browser_param_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(mdb__browser_info__maybe_set_param_8_0,
		mdb__browser_info__set_browser_param_11_0_i22);
MR_def_label(mdb__browser_info__set_browser_param_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module13)
	MR_init_entry1(mdb__browser_info__set_browser_param_with_caller_type_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__set_browser_param_with_caller_type_11_0);
	MR_init_label9(mdb__browser_info__set_browser_param_with_caller_type_11_0,7,8,2,9,10,15,16,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_browser_param_with_caller_type'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__set_browser_param_with_caller_type_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i2);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i2);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i2);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i7);
	}
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_r1 = (MR_Integer) 0;
	MR_sv(8) = (MR_Integer) 1;
	MR_sv(1) = (MR_Integer) 0;
	MR_sv(10) = MR_r10;
	MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i9);
MR_def_label(mdb__browser_info__set_browser_param_with_caller_type_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i8);
	}
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_r1 = (MR_Integer) 1;
	MR_sv(8) = (MR_Integer) 0;
	MR_sv(1) = (MR_Integer) 0;
	MR_sv(10) = MR_r10;
	MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i9);
MR_def_label(mdb__browser_info__set_browser_param_with_caller_type_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_r1 = (MR_Integer) 0;
	MR_sv(8) = (MR_Integer) 0;
	MR_sv(1) = (MR_Integer) 1;
	MR_sv(10) = MR_r10;
	MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i9);
MR_def_label(mdb__browser_info__set_browser_param_with_caller_type_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r5;
	MR_sv(8) = MR_r3;
	MR_r3 = MR_r6;
	MR_sv(1) = MR_r4;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_r1 = MR_tempr1;
	MR_sv(10) = MR_r10;
	}
MR_def_label(mdb__browser_info__set_browser_param_with_caller_type_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i10);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i10);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i10);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i10);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_r7 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_GOTO_LAB(mdb__browser_info__set_browser_param_with_caller_type_11_0_i15);
	}
MR_def_label(mdb__browser_info__set_browser_param_with_caller_type_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_r7 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	}
MR_def_label(mdb__browser_info__set_browser_param_with_caller_type_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r6;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(mdb__browser_info__maybe_set_param_8_0,
		mdb__browser_info__set_browser_param_with_caller_type_11_0_i16);
MR_def_label(mdb__browser_info__set_browser_param_with_caller_type_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(mdb__browser_info__maybe_set_param_8_0,
		mdb__browser_info__set_browser_param_with_caller_type_11_0_i17);
MR_def_label(mdb__browser_info__set_browser_param_with_caller_type_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(mdb__browser_info__maybe_set_param_8_0,
		mdb__browser_info__set_browser_param_with_caller_type_11_0_i18);
MR_def_label(mdb__browser_info__set_browser_param_with_caller_type_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module14)
	MR_init_entry1(mdb__browser_info__set_browser_param_maybe_caller_type_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__set_browser_param_maybe_caller_type_9_0);
	MR_init_label4(mdb__browser_info__set_browser_param_maybe_caller_type_9_0,5,3,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_browser_param_maybe_caller_type'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__set_browser_param_maybe_caller_type_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_maybe_caller_type_9_0_i3);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_maybe_caller_type_9_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r3;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_r4;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	MR_r10 = MR_tempr4;
	MR_np_tailcall_ent(mdb__browser_info__set_browser_param_11_0);
	}
MR_def_label(mdb__browser_info__set_browser_param_maybe_caller_type_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r3;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_r4;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	MR_r10 = MR_tempr4;
	MR_np_tailcall_ent(mdb__browser_info__set_browser_param_11_0);
	}
MR_def_label(mdb__browser_info__set_browser_param_maybe_caller_type_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r11,1)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_maybe_caller_type_9_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r3;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_r4;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	MR_r10 = MR_tempr4;
	MR_np_tailcall_ent(mdb__browser_info__set_browser_param_11_0);
	}
MR_def_label(mdb__browser_info__set_browser_param_maybe_caller_type_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r11,0)) {
		MR_GOTO_LAB(mdb__browser_info__set_browser_param_maybe_caller_type_9_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r3;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_r4;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r10 = MR_tempr4;
	MR_np_tailcall_ent(mdb__browser_info__set_browser_param_11_0);
	}
MR_def_label(mdb__browser_info__set_browser_param_maybe_caller_type_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r3;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_r4;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r10 = MR_tempr4;
	MR_np_tailcall_ent(mdb__browser_info__set_browser_param_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__getopt__lookup_bool_option_2_0);

MR_BEGIN_MODULE(mdb__browser_info_module15)
	MR_init_entry1(mdb__browser_info__set_browser_param_from_option_table_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__set_browser_param_from_option_table_5_0);
	MR_init_label7(mdb__browser_info__set_browser_param_from_option_table_5_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_browser_param_from_option_table'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__set_browser_param_from_option_table_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(mdb__parse, setting_option);
	MR_r1 = MR_sv(10);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__getopt__lookup_bool_option_2_0,
		mdb__browser_info__set_browser_param_from_option_table_5_0_i2);
MR_def_label(mdb__browser_info__set_browser_param_from_option_table_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__getopt__lookup_bool_option_2_0,
		mdb__browser_info__set_browser_param_from_option_table_5_0_i3);
MR_def_label(mdb__browser_info__set_browser_param_from_option_table_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__getopt__lookup_bool_option_2_0,
		mdb__browser_info__set_browser_param_from_option_table_5_0_i4);
MR_def_label(mdb__browser_info__set_browser_param_from_option_table_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__getopt__lookup_bool_option_2_0,
		mdb__browser_info__set_browser_param_from_option_table_5_0_i5);
MR_def_label(mdb__browser_info__set_browser_param_from_option_table_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 4;
	MR_np_call_localret_ent(fn__getopt__lookup_bool_option_2_0,
		mdb__browser_info__set_browser_param_from_option_table_5_0_i6);
MR_def_label(mdb__browser_info__set_browser_param_from_option_table_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 5;
	MR_np_call_localret_ent(fn__getopt__lookup_bool_option_2_0,
		mdb__browser_info__set_browser_param_from_option_table_5_0_i7);
MR_def_label(mdb__browser_info__set_browser_param_from_option_table_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(fn__getopt__lookup_bool_option_2_0,
		mdb__browser_info__set_browser_param_from_option_table_5_0_i8);
MR_def_label(mdb__browser_info__set_browser_param_from_option_table_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(mdb__browser_info__set_browser_param_with_caller_type_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module16)
	MR_init_entry1(mdb__browser_info__info_set_browse_param_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__info_set_browse_param_4_0);
	MR_init_label1(mdb__browser_info__info_set_browse_param_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'info_set_browse_param'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__info_set_browse_param_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_sv(1), 4);
	}
	MR_np_call_localret_ent(mdb__browser_info__set_browser_param_from_option_table_5_0,
		mdb__browser_info__info_set_browse_param_4_0_i2);
MR_def_label(mdb__browser_info__info_set_browse_param_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module17)
	MR_init_entry1(mdb__browser_info__set_num_io_actions_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__set_num_io_actions_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_num_io_actions'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__set_num_io_actions_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module18)
	MR_init_entry1(mdb__browser_info__info_set_num_io_actions_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__info_set_num_io_actions_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'info_set_num_io_actions'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__info_set_num_io_actions_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tempr2 = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tempr1;
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module19)
	MR_init_entry1(mdb__browser_info__set_xml_browser_cmd_from_mdb_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__set_xml_browser_cmd_from_mdb_3_0);
	MR_init_label1(mdb__browser_info__set_xml_browser_cmd_from_mdb_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_xml_browser_cmd_from_mdb'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__set_xml_browser_cmd_from_mdb_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdb__browser_info__set_xml_browser_cmd_from_mdb_3_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_r2, 5);
	MR_proceed();
MR_def_label(mdb__browser_info__set_xml_browser_cmd_from_mdb_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tempr1;
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_r2, 5);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module20)
	MR_init_entry1(mdb__browser_info__info_set_xml_browser_cmd_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__info_set_xml_browser_cmd_3_0);
	MR_init_label1(mdb__browser_info__info_set_xml_browser_cmd_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'info_set_xml_browser_cmd'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__info_set_xml_browser_cmd_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(mdb__browser_info__set_xml_browser_cmd_from_mdb_3_0,
		mdb__browser_info__info_set_xml_browser_cmd_3_0_i2);
MR_def_label(mdb__browser_info__info_set_xml_browser_cmd_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module21)
	MR_init_entry1(mdb__browser_info__set_xml_tmp_filename_from_mdb_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__set_xml_tmp_filename_from_mdb_3_0);
	MR_init_label1(mdb__browser_info__set_xml_tmp_filename_from_mdb_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_xml_tmp_filename_from_mdb'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__set_xml_tmp_filename_from_mdb_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdb__browser_info__set_xml_tmp_filename_from_mdb_3_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(mdb__browser_info__set_xml_tmp_filename_from_mdb_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module22)
	MR_init_entry1(mdb__browser_info__info_set_xml_tmp_filename_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__info_set_xml_tmp_filename_3_0);
	MR_init_label1(mdb__browser_info__info_set_xml_tmp_filename_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'info_set_xml_tmp_filename'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__info_set_xml_tmp_filename_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(mdb__browser_info__set_xml_tmp_filename_from_mdb_3_0,
		mdb__browser_info__info_set_xml_tmp_filename_3_0_i2);
MR_def_label(mdb__browser_info__info_set_xml_tmp_filename_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module23)
	MR_init_entry1(mdb__browser_info__get_num_io_actions_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__get_num_io_actions_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_num_io_actions'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__get_num_io_actions_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(io__print_3_0);
MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(mdb__browser_info_module24)
	MR_init_entry1(mdb__browser_info__send_term_to_socket_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__send_term_to_socket_3_0);
	MR_init_label2(mdb__browser_info__send_term_to_socket_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'send_term_to_socket'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__send_term_to_socket_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, term_browser_response);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_3_0,
		mdb__browser_info__send_term_to_socket_3_0_i2);
MR_def_label(mdb__browser_info__send_term_to_socket_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__browser_info__send_term_to_socket_3_0_i3);
MR_def_label(mdb__browser_info__send_term_to_socket_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__flush_output_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(mdb__browser_info_module25)
	MR_init_entry1(mdb__browser_info__nl_debugger_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__nl_debugger_3_0);
	MR_init_label3(mdb__browser_info__nl_debugger_3_0,4,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nl_debugger'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__nl_debugger_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browser_info__nl_debugger_3_0_i18);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, term_browser_response);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(io__write_3_0,
		mdb__browser_info__nl_debugger_3_0_i4);
MR_def_label(mdb__browser_info__nl_debugger_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__browser_info__nl_debugger_3_0_i16);
MR_def_label(mdb__browser_info__nl_debugger_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(mdb__browser_info__nl_debugger_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(mdb__browser_info_module26)
	MR_init_entry1(mdb__browser_info__write_string_debugger_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__write_string_debugger_4_0);
	MR_init_label3(mdb__browser_info__write_string_debugger_4_0,5,15,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_string_debugger'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__write_string_debugger_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browser_info__write_string_debugger_4_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, term_browser_response);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_3_0,
		mdb__browser_info__write_string_debugger_4_0_i5);
MR_def_label(mdb__browser_info__write_string_debugger_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__browser_info__write_string_debugger_4_0_i15);
MR_def_label(mdb__browser_info__write_string_debugger_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(mdb__browser_info__write_string_debugger_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(mdb__browser_info_module27)
	MR_init_entry1(mdb__browser_info__write_int_debugger_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__write_int_debugger_4_0);
	MR_init_label3(mdb__browser_info__write_int_debugger_4_0,5,15,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_int_debugger'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__write_int_debugger_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browser_info__write_int_debugger_4_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, term_browser_response);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_3_0,
		mdb__browser_info__write_int_debugger_4_0_i5);
MR_def_label(mdb__browser_info__write_int_debugger_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__browser_info__write_int_debugger_4_0_i15);
MR_def_label(mdb__browser_info__write_int_debugger_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(mdb__browser_info__write_int_debugger_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module28)
	MR_init_entry1(mdb__browser_info__write_path_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__write_path_2_4_0);
	MR_init_label10(mdb__browser_info__write_path_2_4_0,57,3,8,11,10,13,6,16,20,19)
	MR_init_label2(mdb__browser_info__write_path_2_4_0,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_path_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__write_path_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdb__browser_info__write_path_2_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__write_path_2_4_0_i3);
	}
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
MR_def_label(mdb__browser_info__write_path_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__write_path_2_4_0_i6);
	}
	MR_r4 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__write_path_2_4_0_i8);
	}
	MR_r2 = (MR_Word) MR_string_const("/..", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
MR_def_label(mdb__browser_info__write_path_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(mdb__browser_info__write_path_2_4_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r4, 0);
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__write_path_2_4_0_i11);
MR_def_label(mdb__browser_info__write_path_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
MR_def_label(mdb__browser_info__write_path_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r4, 0);
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__write_path_2_4_0_i13);
MR_def_label(mdb__browser_info__write_path_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__write_int_debugger_4_0);
MR_def_label(mdb__browser_info__write_path_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__write_path_2_4_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r4;
	MR_r2 = (MR_Word) MR_string_const("/..", 3);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__write_path_2_4_0_i24);
MR_def_label(mdb__browser_info__write_path_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(mdb__browser_info__write_path_2_4_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r5, 0);
	MR_sv(3) = MR_r4;
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__write_path_2_4_0_i20);
MR_def_label(mdb__browser_info__write_path_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__write_path_2_4_0_i24);
MR_def_label(mdb__browser_info__write_path_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r5, 0);
	MR_sv(3) = MR_r4;
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__write_path_2_4_0_i23);
MR_def_label(mdb__browser_info__write_path_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__browser_info__write_int_debugger_4_0,
		mdb__browser_info__write_path_2_4_0_i24);
MR_def_label(mdb__browser_info__write_path_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdb__browser_info__write_path_2_4_0_i57);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module29)
	MR_init_entry1(mdb__browser_info__write_path_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__write_path_4_0);
	MR_init_label6(mdb__browser_info__write_path_4_0,3,41,11,10,13,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_path'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__write_path_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__write_path_4_0_i3);
	}
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
MR_def_label(mdb__browser_info__write_path_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__write_path_4_0_i40);
	}
	MR_r4 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__write_path_4_0_i41);
	}
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
MR_def_label(mdb__browser_info__write_path_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(mdb__browser_info__write_path_4_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r4, 0);
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__write_path_4_0_i11);
MR_def_label(mdb__browser_info__write_path_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
MR_def_label(mdb__browser_info__write_path_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r4, 0);
	MR_r2 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__write_path_4_0_i13);
MR_def_label(mdb__browser_info__write_path_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__browser_info__write_int_debugger_4_0);
MR_def_label(mdb__browser_info__write_path_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mdb__browser_info__write_path_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module30)
	MR_init_entry1(mdb__browser_info__print_format_debugger_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__print_format_debugger_4_0);
	MR_init_label6(mdb__browser_info__print_format_debugger_4_0,5,10,15,21,51,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_format_debugger'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__print_format_debugger_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browser_info__print_format_debugger_4_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__print_format_debugger_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, term_browser_response);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_np_call_localret_ent(io__write_3_0,
		mdb__browser_info__print_format_debugger_4_0_i21);
MR_def_label(mdb__browser_info__print_format_debugger_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(mdb__browser_info__print_format_debugger_4_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, term_browser_response);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_np_call_localret_ent(io__write_3_0,
		mdb__browser_info__print_format_debugger_4_0_i21);
MR_def_label(mdb__browser_info__print_format_debugger_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdb__browser_info__print_format_debugger_4_0_i15);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, term_browser_response);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_np_call_localret_ent(io__write_3_0,
		mdb__browser_info__print_format_debugger_4_0_i21);
MR_def_label(mdb__browser_info__print_format_debugger_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, term_browser_response);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_np_call_localret_ent(io__write_3_0,
		mdb__browser_info__print_format_debugger_4_0_i21);
MR_def_label(mdb__browser_info__print_format_debugger_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__browser_info__print_format_debugger_4_0_i51);
MR_def_label(mdb__browser_info__print_format_debugger_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(mdb__browser_info__print_format_debugger_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, portray_format);
	MR_np_tailcall_ent(io__print_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__string__pad_right_3_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(mdb__browser_info_module31)
	MR_init_entry1(mdb__browser_info__show_settings_caller_format_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__show_settings_caller_format_8_0);
	MR_init_label10(mdb__browser_info__show_settings_caller_format_8_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(mdb__browser_info__show_settings_caller_format_8_0,12,13,14,15,16,17,18,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'show_settings_caller_format'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__show_settings_caller_format_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(mdb__browser_info__get_format_params_4_0,
		mdb__browser_info__show_settings_caller_format_8_0_i2);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(":", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__show_settings_caller_format_8_0_i3);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__show_settings_caller_format_8_0_i4);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__show_settings_caller_format_8_0_i5);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 32;
	MR_r3 = (MR_Integer) 30;
	MR_np_call_localret_ent(fn__string__pad_right_3_0,
		mdb__browser_info__show_settings_caller_format_8_0_i6);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_format_8_0_i7);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = (MR_Integer) 32;
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__string__pad_right_3_0,
		mdb__browser_info__show_settings_caller_format_8_0_i8);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_format_8_0_i9);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__browser_info__show_settings_caller_format_8_0_i10);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 32;
	MR_r3 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__string__pad_right_3_0,
		mdb__browser_info__show_settings_caller_format_8_0_i11);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_format_8_0_i12);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__browser_info__show_settings_caller_format_8_0_i13);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 32;
	MR_r3 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__string__pad_right_3_0,
		mdb__browser_info__show_settings_caller_format_8_0_i14);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_format_8_0_i15);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(3), 2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__browser_info__show_settings_caller_format_8_0_i16);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 32;
	MR_r3 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__string__pad_right_3_0,
		mdb__browser_info__show_settings_caller_format_8_0_i17);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_format_8_0_i18);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(3), 3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__browser_info__show_settings_caller_format_8_0_i19);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 32;
	MR_r3 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__string__pad_right_3_0,
		mdb__browser_info__show_settings_caller_format_8_0_i20);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_format_8_0_i21);
MR_def_label(mdb__browser_info__show_settings_caller_format_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__nl_debugger_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module32)
	MR_init_entry1(mdb__browser_info__show_settings_caller_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__show_settings_caller_6_0);
	MR_init_label10(mdb__browser_info__show_settings_caller_6_0,5,6,3,2,7,8,9,10,11,12)
	MR_init_label10(mdb__browser_info__show_settings_caller_6_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label5(mdb__browser_info__show_settings_caller_6_0,23,24,25,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'show_settings_caller'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__show_settings_caller_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r6 = MR_tfield(0, MR_r2, 3);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__show_settings_caller_6_0_i3);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(mdb__browser_info__show_settings_caller_6_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_r2, 4), 1), 0);
	MR_r2 = (MR_Word) MR_string_const(" default format: ", 17);
	MR_GOTO_LAB(mdb__browser_info__show_settings_caller_6_0_i2);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mdb__browser_info__show_settings_caller_6_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_r2, 4), 0), 0);
	MR_r2 = (MR_Word) MR_string_const(" default format: ", 17);
	MR_GOTO_LAB(mdb__browser_info__show_settings_caller_6_0_i2);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_r2, 4), 2), 0);
	MR_r2 = (MR_Word) MR_string_const(" default format: ", 17);
	MR_GOTO_LAB(mdb__browser_info__show_settings_caller_6_0_i2);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r6, 0);
	MR_r2 = (MR_Word) MR_string_const(" default format: ", 17);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__show_settings_caller_6_0_i7);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_6_0_i8);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mdb__browser_info__print_format_debugger_4_0,
		mdb__browser_info__show_settings_caller_6_0_i9);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdb__browser_info__nl_debugger_3_0,
		mdb__browser_info__show_settings_caller_6_0_i10);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Integer) 32;
	MR_r3 = (MR_Integer) 30;
	MR_np_call_localret_ent(fn__string__pad_right_3_0,
		mdb__browser_info__show_settings_caller_6_0_i11);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_6_0_i12);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = (MR_Integer) 32;
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__string__pad_right_3_0,
		mdb__browser_info__show_settings_caller_6_0_i13);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_6_0_i14);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("depth", 5);
	MR_r2 = (MR_Integer) 32;
	MR_r3 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__string__pad_right_3_0,
		mdb__browser_info__show_settings_caller_6_0_i15);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_6_0_i16);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("size", 4);
	MR_r2 = (MR_Integer) 32;
	MR_r3 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__string__pad_right_3_0,
		mdb__browser_info__show_settings_caller_6_0_i17);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_6_0_i18);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("width", 5);
	MR_r2 = (MR_Integer) 32;
	MR_r3 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__string__pad_right_3_0,
		mdb__browser_info__show_settings_caller_6_0_i19);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_6_0_i20);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lines", 5);
	MR_r2 = (MR_Integer) 32;
	MR_r3 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__string__pad_right_3_0,
		mdb__browser_info__show_settings_caller_6_0_i21);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_caller_6_0_i22);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdb__browser_info__nl_debugger_3_0,
		mdb__browser_info__show_settings_caller_6_0_i23);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_string_const("flat", 4);
	MR_np_call_localret_ent(mdb__browser_info__show_settings_caller_format_8_0,
		mdb__browser_info__show_settings_caller_6_0_i24);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 2;
	MR_r6 = (MR_Word) MR_string_const("verbose", 7);
	MR_np_call_localret_ent(mdb__browser_info__show_settings_caller_format_8_0,
		mdb__browser_info__show_settings_caller_6_0_i25);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 3;
	MR_r6 = (MR_Word) MR_string_const("pretty", 6);
	MR_np_call_localret_ent(mdb__browser_info__show_settings_caller_format_8_0,
		mdb__browser_info__show_settings_caller_6_0_i26);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Word) MR_string_const("raw_pretty", 10);
	MR_np_call_localret_ent(mdb__browser_info__show_settings_caller_format_8_0,
		mdb__browser_info__show_settings_caller_6_0_i27);
MR_def_label(mdb__browser_info__show_settings_caller_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mdb__browser_info__nl_debugger_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module33)
	MR_init_entry1(mdb__browser_info__show_settings_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__show_settings_5_0);
	MR_init_label9(mdb__browser_info__show_settings_5_0,2,3,4,5,6,7,10,11,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'show_settings'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__show_settings_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_string_const("Browser", 7);
	}
	MR_np_call_localret_ent(mdb__browser_info__show_settings_caller_6_0,
		mdb__browser_info__show_settings_5_0_i2);
MR_def_label(mdb__browser_info__show_settings_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_string_const("Print", 5);
	MR_np_call_localret_ent(mdb__browser_info__show_settings_caller_6_0,
		mdb__browser_info__show_settings_5_0_i3);
MR_def_label(mdb__browser_info__show_settings_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = (MR_Word) MR_string_const("Printall", 8);
	MR_np_call_localret_ent(mdb__browser_info__show_settings_caller_6_0,
		mdb__browser_info__show_settings_5_0_i4);
MR_def_label(mdb__browser_info__show_settings_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Number of I/O actions printed is: ", 34);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_5_0_i5);
MR_def_label(mdb__browser_info__show_settings_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_sv(3), 4), 3);
	MR_np_call_localret_ent(mdb__browser_info__write_int_debugger_4_0,
		mdb__browser_info__show_settings_5_0_i6);
MR_def_label(mdb__browser_info__show_settings_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdb__browser_info__nl_debugger_3_0,
		mdb__browser_info__show_settings_5_0_i7);
MR_def_label(mdb__browser_info__show_settings_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(mdb__browser_info__show_settings_5_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Current path is: ", 17);
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__show_settings_5_0_i10);
MR_def_label(mdb__browser_info__show_settings_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(mdb__browser_info__write_path_4_0,
		mdb__browser_info__show_settings_5_0_i11);
MR_def_label(mdb__browser_info__show_settings_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__browser_info__nl_debugger_3_0);
MR_def_label(mdb__browser_info__show_settings_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module34)
	MR_init_entry1(mdb__browser_info__run_param_command_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__run_param_command_7_0);
	MR_init_label8(mdb__browser_info__run_param_command_7_0,3,7,9,5,14,13,15,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'run_param_command'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__run_param_command_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__run_param_command_7_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__browser_info__show_settings_5_0,
		mdb__browser_info__run_param_command_7_0_i14);
MR_def_label(mdb__browser_info__run_param_command_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdb__browser_info__run_param_command_7_0_i5);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__browser_info__run_param_command_7_0_i7);
	}
	MR_sv(1) = MR_r4;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__run_param_command_7_0_i14);
MR_def_label(mdb__browser_info__run_param_command_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r6, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_r4, 4);
	}
	MR_np_call_localret_ent(mdb__browser_info__set_browser_param_from_option_table_5_0,
		mdb__browser_info__run_param_command_7_0_i9);
MR_def_label(mdb__browser_info__run_param_command_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdb__browser_info__run_param_command_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(mdb__browser_info__run_param_command_7_0_i11);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__browser_info__run_param_command_7_0_i13);
	}
	MR_sv(1) = MR_r4;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__browser_info__write_string_debugger_4_0,
		mdb__browser_info__run_param_command_7_0_i14);
MR_def_label(mdb__browser_info__run_param_command_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__browser_info__run_param_command_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r6, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_r4, 4);
	}
	MR_np_call_localret_ent(mdb__browser_info__set_browser_param_from_option_table_5_0,
		mdb__browser_info__run_param_command_7_0_i15);
MR_def_label(mdb__browser_info__run_param_command_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdb__browser_info__run_param_command_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 0);
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(mdb__browser_info__info_set_num_io_actions_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module35)
	MR_init_entry1(fn__mdb__browser_info__format_params_to_mdb_command_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_info__format_params_to_mdb_command_2_0);
	MR_init_label10(fn__mdb__browser_info__format_params_to_mdb_command_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label8(fn__mdb__browser_info__format_params_to_mdb_command_2_0,12,13,14,15,16,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_params_to_mdb_command'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__browser_info__format_params_to_mdb_command_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i2);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i3);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("depth ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i4);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i5);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i6);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i7);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("size ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i8);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i9);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i10);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i11);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("width ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i12);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i13);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i14);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i15);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lines ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i16);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i17);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i18);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_mdb_command_2_0_i19);
MR_def_label(fn__mdb__browser_info__format_params_to_mdb_command_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module36)
	MR_init_entry1(fn__mdb__browser_info__caller_params_to_mdb_command_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_info__caller_params_to_mdb_command_2_0);
	MR_init_label10(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label8(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,13,14,15,16,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'caller_params_to_mdb_command'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__browser_info__caller_params_to_mdb_command_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 2);
	MR_sv(6) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = MR_tfield(0, MR_r2, 4);
	MR_r1 = (MR_Word) MR_string_const("flat", 4);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i6);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i4);
	}
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 2);
	MR_sv(6) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = MR_tfield(0, MR_r2, 4);
	MR_r1 = (MR_Word) MR_string_const("pretty", 6);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i6);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i5);
	}
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 2);
	MR_sv(6) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = MR_tfield(0, MR_r2, 4);
	MR_r1 = (MR_Word) MR_string_const("raw_pretty", 10);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i6);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 2);
	MR_sv(6) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = MR_tfield(0, MR_r2, 4);
	MR_r1 = (MR_Word) MR_string_const("verbose", 7);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i6);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i7);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("format ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i8);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("format_param ", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i9);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("-f ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i10);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__mdb__browser_info__format_params_to_mdb_command_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i11);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("-r ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i12);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__mdb__browser_info__format_params_to_mdb_command_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i13);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("-v ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i14);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__mdb__browser_info__format_params_to_mdb_command_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i15);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("-p ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i16);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdb__browser_info__format_params_to_mdb_command_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i17);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i18);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i19);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_mdb_command_2_0_i20);
MR_def_label(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module37)
	MR_init_entry1(fn__mdb__browser_info__format_params_to_desc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_info__format_params_to_desc_1_0);
	MR_init_label10(fn__mdb__browser_info__format_params_to_desc_1_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label4(fn__mdb__browser_info__format_params_to_desc_1_0,12,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_params_to_desc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__browser_info__format_params_to_desc_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i2);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i3);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i4);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i5);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i6);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lines ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i7);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i8);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i9);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("width ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i10);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i11);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i12);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("size ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i13);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i14);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__format_params_to_desc_1_0_i15);
MR_def_label(fn__mdb__browser_info__format_params_to_desc_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("depth ", 6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module38)
	MR_init_entry1(fn__mdb__browser_info__caller_params_to_desc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_info__caller_params_to_desc_1_0);
	MR_init_label10(fn__mdb__browser_info__caller_params_to_desc_1_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(fn__mdb__browser_info__caller_params_to_desc_1_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(fn__mdb__browser_info__caller_params_to_desc_1_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(fn__mdb__browser_info__caller_params_to_desc_1_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label4(fn__mdb__browser_info__caller_params_to_desc_1_0,43,44,45,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'caller_params_to_desc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__browser_info__caller_params_to_desc_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdb__browser_info__caller_params_to_desc_1_0_i3);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(4) = MR_tfield(0, MR_r1, 4);
	MR_sv(1) = (MR_Word) MR_string_const("flat", 4);
	MR_r2 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i6);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(fn__mdb__browser_info__caller_params_to_desc_1_0_i4);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(4) = MR_tfield(0, MR_r1, 4);
	MR_sv(1) = (MR_Word) MR_string_const("pretty", 6);
	MR_r2 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i6);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__mdb__browser_info__caller_params_to_desc_1_0_i5);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(4) = MR_tfield(0, MR_r1, 4);
	MR_sv(1) = (MR_Word) MR_string_const("raw_pretty", 10);
	MR_r2 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i6);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(4) = MR_tfield(0, MR_r1, 4);
	MR_sv(1) = (MR_Word) MR_string_const("verbose", 7);
	MR_r2 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i6);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i7);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i8);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i9);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i10);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lines ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i11);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i12);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i13);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("width ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i14);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i15);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i16);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("size ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i17);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i18);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i19);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("depth ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i20);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 2);
	MR_sv(6) = MR_tfield(0, MR_r2, 3);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i21);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i22);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i23);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i24);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i25);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lines ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i26);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i27);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i28);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("width ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i29);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i30);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i31);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("size ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i32);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i33);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i34);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("depth ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i35);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdb__browser_info__format_params_to_desc_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i36);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdb__browser_info__format_params_to_desc_1_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i37);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("pretty parameters:     ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i38);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i39);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("verbose parameters:    ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i40);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i41);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("raw_pretty parameters: ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i42);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i43);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("flat parameters:       ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i44);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i45);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__browser_info__caller_params_to_desc_1_0_i46);
MR_def_label(fn__mdb__browser_info__caller_params_to_desc_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("default format ", 15);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module39)
	MR_init_entry1(mdb__browser_info__browser_params_to_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__browser_params_to_string_3_0);
	MR_init_label10(mdb__browser_info__browser_params_to_string_3_0,4,5,6,7,8,9,10,11,12,13)
	MR_init_label10(mdb__browser_info__browser_params_to_string_3_0,14,16,17,15,20,21,22,23,3,26)
	MR_init_label10(mdb__browser_info__browser_params_to_string_3_0,27,28,29,30,31,32,33,38,39,34)
	MR_init_label6(mdb__browser_info__browser_params_to_string_3_0,40,45,46,41,48,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browser_params_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__browser_params_to_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__browser_params_to_string_3_0_i3);
	}
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(1) = MR_tfield(0, MR_r1, 4);
	MR_sv(2) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdb__browser_info__caller_params_to_desc_1_0,
		mdb__browser_info__browser_params_to_string_3_0_i4);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdb__browser_info__caller_params_to_desc_1_0,
		mdb__browser_info__browser_params_to_string_3_0_i5);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdb__browser_info__caller_params_to_desc_1_0,
		mdb__browser_info__browser_params_to_string_3_0_i6);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Print all parameters:\n", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i7);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i8);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Browse parameters:\n", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i9);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i10);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Print parameters:\n", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i11);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__browser_info__browser_params_to_string_3_0_i12);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i13);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Maximum number of I/O actions printed: ", 39);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i14);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mdb__browser_info__browser_params_to_string_3_0_i16);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(mdb__browser_info__browser_params_to_string_3_0_i15);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i17);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("XML browser command:    ", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i15);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__browser_info__browser_params_to_string_3_0_i20);
	}
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i23);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i21);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("XML temporary filename: ", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i22);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i23);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i49);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(1) = MR_tfield(0, MR_r1, 4);
	MR_sv(2) = MR_tfield(0, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-P ", 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i26);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-B ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i27);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-A ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdb__browser_info__caller_params_to_mdb_command_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i28);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i29);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i30);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__browser_info__browser_params_to_string_3_0_i31);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i32);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("max_io_actions ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i33);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mdb__browser_info__browser_params_to_string_3_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(mdb__browser_info__browser_params_to_string_3_0_i34);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i38);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("xml_browser_cmd ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i39);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(mdb__browser_info__browser_params_to_string_3_0_i40);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(3) = (MR_Word) MR_string_const("", 0);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__browser_info__browser_params_to_string_3_0_i41);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(mdb__browser_info__browser_params_to_string_3_0_i41);
	}
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i45);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("xml_tmp_filename ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i46);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i48);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i48);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__browser_info__browser_params_to_string_3_0_i49);
MR_def_label(mdb__browser_info__browser_params_to_string_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
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

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_input_stream_0;
MR_decl_entry(univ__univ_to_type_2_0);
MR_decl_entry(fn__io__input_stream_info_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_maybe_stream_info_0;
MR_decl_entry(univ__type_to_univ_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
MR_decl_entry(fn__io__output_stream_info_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_binary_input_stream_0;
MR_decl_entry(fn__io__binary_input_stream_info_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_binary_output_stream_0;
MR_decl_entry(fn__io__binary_output_stream_info_2_0);
MR_decl_entry(fn__univ__univ_value_1_0);
MR_decl_entry(deconstruct__deconstruct_5_2);
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(mdb__browser_info_module40)
	MR_init_entry1(mdb__browser_info__deconstruct_browser_term_cc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__deconstruct_browser_term_cc_6_0);
	MR_init_label10(mdb__browser_info__deconstruct_browser_term_cc_6_0,5,7,4,10,12,9,15,17,14,20)
	MR_init_label7(mdb__browser_info__deconstruct_browser_term_cc_6_0,22,19,27,28,29,3,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deconstruct_browser_term_cc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__deconstruct_browser_term_cc_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__deconstruct_browser_term_cc_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, input_stream);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i5);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__deconstruct_browser_term_cc_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__input_stream_info_2_0,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i7);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, maybe_stream_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i27);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, output_stream);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i10);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__deconstruct_browser_term_cc_6_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__output_stream_info_2_0,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i12);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, maybe_stream_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i27);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, binary_input_stream);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i15);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__deconstruct_browser_term_cc_6_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__binary_input_stream_info_2_0,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i17);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, maybe_stream_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i27);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, binary_output_stream);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i20);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__deconstruct_browser_term_cc_6_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__binary_output_stream_info_2_0,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i22);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, maybe_stream_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i27);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i28);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_2,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i29);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		mdb__browser_info__deconstruct_browser_term_cc_6_0_i30);
MR_def_label(mdb__browser_info__deconstruct_browser_term_cc_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__limited_deconstruct_cc_3_0);

MR_BEGIN_MODULE(mdb__browser_info_module41)
	MR_init_entry1(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__limited_deconstruct_browser_term_cc_5_0);
	MR_init_label10(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,5,7,4,10,12,9,15,17,14,20)
	MR_init_label7(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,22,19,27,28,29,3,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'limited_deconstruct_browser_term_cc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__limited_deconstruct_browser_term_cc_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, input_stream);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i5);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__input_stream_info_2_0,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i7);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, maybe_stream_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i27);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, output_stream);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i10);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__output_stream_info_2_0,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i12);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, maybe_stream_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i27);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, binary_input_stream);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i15);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__binary_input_stream_info_2_0,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i17);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, maybe_stream_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i27);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, binary_output_stream);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i20);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__binary_output_stream_info_2_0,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i22);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, maybe_stream_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i27);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i28);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(deconstruct__limited_deconstruct_cc_3_0,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i29);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 2);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		mdb__browser_info__limited_deconstruct_browser_term_cc_5_0_i30);
MR_def_label(mdb__browser_info__limited_deconstruct_browser_term_cc_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__functor_4_2);

MR_BEGIN_MODULE(mdb__browser_info_module42)
	MR_init_entry1(mdb__browser_info__functor_browser_term_cc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__functor_browser_term_cc_5_0);
	MR_init_label10(mdb__browser_info__functor_browser_term_cc_5_0,5,7,4,10,12,9,15,17,14,20)
	MR_init_label8(mdb__browser_info__functor_browser_term_cc_5_0,22,19,27,28,29,3,30,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'functor_browser_term_cc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__browser_info__functor_browser_term_cc_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdb__browser_info__functor_browser_term_cc_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, input_stream);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browser_info__functor_browser_term_cc_5_0_i5);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__functor_browser_term_cc_5_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__input_stream_info_2_0,
		mdb__browser_info__functor_browser_term_cc_5_0_i7);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, maybe_stream_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		mdb__browser_info__functor_browser_term_cc_5_0_i27);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, output_stream);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browser_info__functor_browser_term_cc_5_0_i10);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__functor_browser_term_cc_5_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__output_stream_info_2_0,
		mdb__browser_info__functor_browser_term_cc_5_0_i12);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, maybe_stream_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		mdb__browser_info__functor_browser_term_cc_5_0_i27);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, binary_input_stream);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browser_info__functor_browser_term_cc_5_0_i15);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__functor_browser_term_cc_5_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__binary_input_stream_info_2_0,
		mdb__browser_info__functor_browser_term_cc_5_0_i17);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, maybe_stream_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		mdb__browser_info__functor_browser_term_cc_5_0_i27);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, binary_output_stream);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__browser_info__functor_browser_term_cc_5_0_i20);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__browser_info__functor_browser_term_cc_5_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__binary_output_stream_info_2_0,
		mdb__browser_info__functor_browser_term_cc_5_0_i22);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, maybe_stream_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		mdb__browser_info__functor_browser_term_cc_5_0_i27);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__browser_info__functor_browser_term_cc_5_0_i28);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(deconstruct__functor_4_2,
		mdb__browser_info__functor_browser_term_cc_5_0_i29);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(list__length_2_0,
		mdb__browser_info__functor_browser_term_cc_5_0_i30);
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__browser_info__functor_browser_term_cc_5_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__browser_info__functor_browser_term_cc_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module43)
	MR_init_entry1(mdb__browser_info__set_depth_from_mdb_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__set_depth_from_mdb_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_depth_from_mdb'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__set_depth_from_mdb_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr4;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr5;
	MR_tempr7 = MR_r6;
	MR_r6 = MR_tempr6;
	MR_tempr8 = MR_r7;
	MR_r7 = MR_tempr7;
	MR_r8 = MR_tempr8;
	MR_tempr9 = MR_r9;
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr9;
	MR_np_tailcall_ent(mdb__browser_info__set_browser_param_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module44)
	MR_init_entry1(mdb__browser_info__set_size_from_mdb_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__set_size_from_mdb_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_size_from_mdb'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__set_size_from_mdb_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r8;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr4;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr5;
	MR_tempr7 = MR_r6;
	MR_r6 = MR_tempr6;
	MR_r8 = MR_tempr7;
	MR_tempr8 = MR_r9;
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr8;
	MR_np_tailcall_ent(mdb__browser_info__set_browser_param_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module45)
	MR_init_entry1(mdb__browser_info__set_width_from_mdb_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__set_width_from_mdb_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_width_from_mdb'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__set_width_from_mdb_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r8;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr4;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr5;
	MR_tempr7 = MR_r6;
	MR_r6 = MR_tempr6;
	MR_tempr8 = MR_r7;
	MR_r7 = MR_tempr7;
	MR_r8 = MR_tempr8;
	MR_tempr9 = MR_r9;
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr9;
	MR_np_tailcall_ent(mdb__browser_info__set_browser_param_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module46)
	MR_init_entry1(mdb__browser_info__set_lines_from_mdb_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__set_lines_from_mdb_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_lines_from_mdb'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__set_lines_from_mdb_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r8;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr4;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr5;
	MR_tempr7 = MR_r6;
	MR_r6 = MR_tempr6;
	MR_tempr8 = MR_r7;
	MR_r7 = MR_tempr7;
	MR_r8 = MR_tempr8;
	MR_tempr9 = MR_r9;
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr9;
	MR_np_tailcall_ent(mdb__browser_info__set_browser_param_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module47)
	MR_init_entry1(mdb__browser_info__set_format_from_mdb_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__set_format_from_mdb_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_format_from_mdb'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__set_format_from_mdb_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r9 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_tempr5 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Integer) 0;
	MR_r8 = (MR_Integer) 0;
	MR_r10 = MR_tempr5;
	MR_np_tailcall_ent(mdb__browser_info__set_browser_param_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module48)
	MR_init_entry1(mdb__browser_info__get_xml_browser_cmd_from_mdb_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__get_xml_browser_cmd_from_mdb_2_0);
	MR_init_label1(mdb__browser_info__get_xml_browser_cmd_from_mdb_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_xml_browser_cmd_from_mdb'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__get_xml_browser_cmd_from_mdb_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 4);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__get_xml_browser_cmd_from_mdb_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(mdb__browser_info__get_xml_browser_cmd_from_mdb_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module49)
	MR_init_entry1(mdb__browser_info__get_xml_tmp_filename_from_mdb_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__get_xml_tmp_filename_from_mdb_2_0);
	MR_init_label1(mdb__browser_info__get_xml_tmp_filename_from_mdb_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_xml_tmp_filename_from_mdb'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__get_xml_tmp_filename_from_mdb_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 5);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__browser_info__get_xml_tmp_filename_from_mdb_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(mdb__browser_info__get_xml_tmp_filename_from_mdb_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module50)
	MR_init_entry1(fn__mdb__browser_info__mercury_bool_yes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_info__mercury_bool_yes_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_bool_yes'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__browser_info__mercury_bool_yes_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module51)
	MR_init_entry1(fn__mdb__browser_info__mercury_bool_no_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_info__mercury_bool_no_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_bool_no'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__browser_info__mercury_bool_no_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__type_of_1_0);

MR_BEGIN_MODULE(mdb__browser_info_module52)
	MR_init_entry1(mdb__browser_info__browser_persistent_state_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__browser_persistent_state_type_1_0);
	MR_init_label2(mdb__browser_info__browser_persistent_state_type_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'browser_persistent_state_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__browser_persistent_state_type_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, browser_persistent_state);
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		mdb__browser_info__browser_persistent_state_type_1_0_i2);
MR_def_label(mdb__browser_info__browser_persistent_state_type_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(mdb__browser_info__init_persistent_state_1_0,
		mdb__browser_info__browser_persistent_state_type_1_0_i3);
MR_def_label(mdb__browser_info__browser_persistent_state_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module53)
	MR_init_entry1(__Unify___mdb__browser_info__browse_caller_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__browse_caller_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__browse_caller_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdb__browser_info_module54)
	MR_init_entry1(__Compare___mdb__browser_info__browse_caller_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__browse_caller_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__browse_caller_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdb__browser_info_module55)
	MR_init_entry1(__Unify___mdb__browser_info__browser_db_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__browser_db_0_0);
	MR_init_label1(__Unify___mdb__browser_info__browser_db_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__browser_db_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_db_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, stream_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(io, stream_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___mdb__browser_info__browser_db_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdb__browser_info_module56)
	MR_init_entry1(__Compare___mdb__browser_info__browser_db_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__browser_db_0_0);
	MR_init_label2(__Compare___mdb__browser_info__browser_db_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__browser_db_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_db_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__browser_info__browser_db_0_0_i2);
MR_def_label(__Compare___mdb__browser_info__browser_db_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__browser_info__browser_db_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, stream_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(io, stream_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdb__browser_term__browser_term_0_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdb__browser_info_module57)
	MR_init_entry1(__Unify___mdb__browser_info__browser_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__browser_info_0_0);
	MR_init_label7(__Unify___mdb__browser_info__browser_info_0_0,4,7,9,11,13,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__browser_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_info_0_0_i18);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(12) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__browser_term__browser_term_0_0,
		__Unify___mdb__browser_info__browser_info_0_0_i4);
MR_def_label(__Unify___mdb__browser_info__browser_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__browser_info__browser_info_0_0_i7);
MR_def_label(__Unify___mdb__browser_info__browser_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, portray_format);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__browser_info__browser_info_0_0_i9);
MR_def_label(__Unify___mdb__browser_info__browser_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___mdb__browser_info__browser_persistent_state_0_0,
		__Unify___mdb__browser_info__browser_info_0_0_i11);
MR_def_label(__Unify___mdb__browser_info__browser_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_info_0_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___mdb__browser_info__maybe_track_subterm_1_0,
		__Unify___mdb__browser_info__browser_info_0_0_i13);
MR_def_label(__Unify___mdb__browser_info__browser_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___mdb__browser_info__browser_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__browser_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdb__browser_term__browser_term_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdb__browser_info_module58)
	MR_init_entry1(__Compare___mdb__browser_info__browser_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__browser_info_0_0);
	MR_init_label9(__Compare___mdb__browser_info__browser_info_0_0,3,2,5,9,13,17,21,26,85)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__browser_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__browser_info__browser_info_0_0_i2);
MR_def_label(__Compare___mdb__browser_info__browser_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__browser_info__browser_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___mdb__browser_term__browser_term_0_0,
		__Compare___mdb__browser_info__browser_info_0_0_i5);
MR_def_label(__Compare___mdb__browser_info__browser_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_info_0_0_i85);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, dir);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__browser_info__browser_info_0_0_i9);
MR_def_label(__Compare___mdb__browser_info__browser_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_info_0_0_i85);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__browser_info__browser_info_0_0_i13);
MR_def_label(__Compare___mdb__browser_info__browser_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_info_0_0_i85);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__browser_info, portray_format);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__browser_info__browser_info_0_0_i17);
MR_def_label(__Compare___mdb__browser_info__browser_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_info_0_0_i85);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___mdb__browser_info__browser_persistent_state_0_0,
		__Compare___mdb__browser_info__browser_info_0_0_i21);
MR_def_label(__Compare___mdb__browser_info__browser_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_info_0_0_i85);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___mdb__browser_info__maybe_track_subterm_1_0,
		__Compare___mdb__browser_info__browser_info_0_0_i26);
MR_def_label(__Compare___mdb__browser_info__browser_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_info_0_0_i85);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__browser_info__browser_info_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(mdb__browser_info_module59)
	MR_init_entry1(__Unify___mdb__browser_info__browser_mode_func_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__browser_mode_func_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__browser_mode_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(mdb__browser_info_module60)
	MR_init_entry1(__Compare___mdb__browser_info__browser_mode_func_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__browser_mode_func_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__browser_mode_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module61)
	MR_init_entry1(__Unify___mdb__browser_info__browser_persistent_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__browser_persistent_state_0_0);
	MR_init_label6(__Unify___mdb__browser_info__browser_persistent_state_0_0,4,6,8,10,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__browser_persistent_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_persistent_state_0_0_i14);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__browser_info__caller_params_0_0,
		__Unify___mdb__browser_info__browser_persistent_state_0_0_i4);
MR_def_label(__Unify___mdb__browser_info__browser_persistent_state_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_persistent_state_0_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdb__browser_info__caller_params_0_0,
		__Unify___mdb__browser_info__browser_persistent_state_0_0_i6);
MR_def_label(__Unify___mdb__browser_info__browser_persistent_state_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_persistent_state_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___mdb__browser_info__caller_params_0_0,
		__Unify___mdb__browser_info__browser_persistent_state_0_0_i8);
MR_def_label(__Unify___mdb__browser_info__browser_persistent_state_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_persistent_state_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_persistent_state_0_0_i1);
	}
	MR_sv(10) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__browser_info__browser_persistent_state_0_0_i10);
MR_def_label(__Unify___mdb__browser_info__browser_persistent_state_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__browser_persistent_state_0_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___mdb__browser_info__browser_persistent_state_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__browser_persistent_state_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module62)
	MR_init_entry1(__Compare___mdb__browser_info__browser_persistent_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__browser_persistent_state_0_0);
	MR_init_label8(__Compare___mdb__browser_info__browser_persistent_state_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__browser_persistent_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_persistent_state_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__browser_info__browser_persistent_state_0_0_i2);
MR_def_label(__Compare___mdb__browser_info__browser_persistent_state_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__browser_info__browser_persistent_state_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdb__browser_info__caller_params_0_0,
		__Compare___mdb__browser_info__browser_persistent_state_0_0_i5);
MR_def_label(__Compare___mdb__browser_info__browser_persistent_state_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_persistent_state_0_0_i53);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdb__browser_info__caller_params_0_0,
		__Compare___mdb__browser_info__browser_persistent_state_0_0_i9);
MR_def_label(__Compare___mdb__browser_info__browser_persistent_state_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_persistent_state_0_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdb__browser_info__caller_params_0_0,
		__Compare___mdb__browser_info__browser_persistent_state_0_0_i13);
MR_def_label(__Compare___mdb__browser_info__browser_persistent_state_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_persistent_state_0_0_i53);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__browser_info__browser_persistent_state_0_0_i17);
MR_def_label(__Compare___mdb__browser_info__browser_persistent_state_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_persistent_state_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__browser_info__browser_persistent_state_0_0_i21);
MR_def_label(__Compare___mdb__browser_info__browser_persistent_state_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__browser_persistent_state_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__browser_info__browser_persistent_state_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module63)
	MR_init_entry1(__Unify___mdb__browser_info__browser_term_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__browser_term_mode_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__browser_term_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module64)
	MR_init_entry1(__Compare___mdb__browser_info__browser_term_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__browser_term_mode_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__browser_term_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module65)
	MR_init_entry1(__Unify___mdb__browser_info__caller_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__caller_params_0_0);
	MR_init_label5(__Unify___mdb__browser_info__caller_params_0_0,4,6,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__browser_info__caller_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__caller_params_0_0_i12);
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
		MR_GOTO_LAB(__Unify___mdb__browser_info__caller_params_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 4);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___mdb__browser_info__format_params_0_0,
		__Unify___mdb__browser_info__caller_params_0_0_i4);
MR_def_label(__Unify___mdb__browser_info__caller_params_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__caller_params_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdb__browser_info__format_params_0_0,
		__Unify___mdb__browser_info__caller_params_0_0_i6);
MR_def_label(__Unify___mdb__browser_info__caller_params_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__caller_params_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdb__browser_info__format_params_0_0,
		__Unify___mdb__browser_info__caller_params_0_0_i8);
MR_def_label(__Unify___mdb__browser_info__caller_params_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__caller_params_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___mdb__browser_info__format_params_0_0);
MR_def_label(__Unify___mdb__browser_info__caller_params_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__caller_params_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module66)
	MR_init_entry1(__Compare___mdb__browser_info__caller_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__caller_params_0_0);
	MR_init_label7(__Compare___mdb__browser_info__caller_params_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__browser_info__caller_params_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__caller_params_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__browser_info__caller_params_0_0_i2);
MR_def_label(__Compare___mdb__browser_info__caller_params_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__browser_info__caller_params_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___mdb__browser_info__caller_params_0_0_i5);
MR_def_label(__Compare___mdb__browser_info__caller_params_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__caller_params_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdb__browser_info__format_params_0_0,
		__Compare___mdb__browser_info__caller_params_0_0_i9);
MR_def_label(__Compare___mdb__browser_info__caller_params_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__caller_params_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdb__browser_info__format_params_0_0,
		__Compare___mdb__browser_info__caller_params_0_0_i13);
MR_def_label(__Compare___mdb__browser_info__caller_params_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__caller_params_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdb__browser_info__format_params_0_0,
		__Compare___mdb__browser_info__caller_params_0_0_i17);
MR_def_label(__Compare___mdb__browser_info__caller_params_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__caller_params_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___mdb__browser_info__format_params_0_0);
MR_def_label(__Compare___mdb__browser_info__caller_params_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module67)
	MR_init_entry1(__Unify___mdb__browser_info__debugger_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__debugger_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__debugger_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module68)
	MR_init_entry1(__Compare___mdb__browser_info__debugger_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__debugger_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__debugger_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module69)
	MR_init_entry1(__Unify___mdb__browser_info__dir_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__dir_0_0);
	MR_init_label4(__Unify___mdb__browser_info__dir_0_0,5,15,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__dir_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__dir_0_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__dir_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__browser_info__dir_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__dir_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__dir_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__dir_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__dir_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__dir_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__dir_0_0,1)
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

MR_BEGIN_MODULE(mdb__browser_info_module70)
	MR_init_entry1(__Compare___mdb__browser_info__dir_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__dir_0_0);
	MR_init_label9(__Compare___mdb__browser_info__dir_0_0,30,7,5,11,9,26,15,27,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__dir_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__dir_0_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__dir_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__dir_0_0_i7);
	}
MR_def_label(__Compare___mdb__browser_info__dir_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__dir_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__dir_0_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__dir_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__dir_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__dir_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__dir_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__dir_0_0_i26);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__browser_info__dir_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__dir_0_0_i15);
	}
MR_def_label(__Compare___mdb__browser_info__dir_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__dir_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__dir_0_0_i16);
	}
MR_def_label(__Compare___mdb__browser_info__dir_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__dir_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module71)
	MR_init_entry1(__Unify___mdb__browser_info__format_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__format_params_0_0);
	MR_init_label2(__Unify___mdb__browser_info__format_params_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__format_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__format_params_0_0_i4);
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
		MR_GOTO_LAB(__Unify___mdb__browser_info__format_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__format_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__format_params_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__browser_info__format_params_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__format_params_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module72)
	MR_init_entry1(__Compare___mdb__browser_info__format_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__format_params_0_0);
	MR_init_label6(__Compare___mdb__browser_info__format_params_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__format_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__format_params_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__browser_info__format_params_0_0_i2);
MR_def_label(__Compare___mdb__browser_info__format_params_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__browser_info__format_params_0_0,2)
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
		__Compare___mdb__browser_info__format_params_0_0_i5);
MR_def_label(__Compare___mdb__browser_info__format_params_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__format_params_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__browser_info__format_params_0_0_i9);
MR_def_label(__Compare___mdb__browser_info__format_params_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__format_params_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__browser_info__format_params_0_0_i13);
MR_def_label(__Compare___mdb__browser_info__format_params_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__format_params_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__browser_info__format_params_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module73)
	MR_init_entry1(__Unify___mdb__browser_info__how_track_subterm_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__how_track_subterm_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__how_track_subterm_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module74)
	MR_init_entry1(__Compare___mdb__browser_info__how_track_subterm_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__how_track_subterm_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__how_track_subterm_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mdb__browser_info_module75)
	MR_init_entry1(__Unify___mdb__browser_info__maybe_track_subterm_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__maybe_track_subterm_1_0);
	MR_init_label3(__Unify___mdb__browser_info__maybe_track_subterm_1_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__maybe_track_subterm_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__maybe_track_subterm_1_0_i12);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__maybe_track_subterm_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__browser_info__maybe_track_subterm_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__maybe_track_subterm_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__maybe_track_subterm_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = ((MR_Integer) MR_tfield(1, MR_tempr3, 0) & (MR_Integer) 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = ((MR_Integer) MR_tfield(1, MR_tempr4, 0) & (MR_Integer) 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__maybe_track_subterm_1_0_i1);
	}
	MR_tempr1 = (((MR_Integer) MR_tfield(1, MR_tempr3, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(1, MR_tempr4, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__maybe_track_subterm_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	MR_r3 = MR_tfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(__Unify___mdb__browser_info__maybe_track_subterm_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(mdb__browser_info_module76)
	MR_init_entry1(__Compare___mdb__browser_info__maybe_track_subterm_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__maybe_track_subterm_1_0);
	MR_init_label7(__Compare___mdb__browser_info__maybe_track_subterm_1_0,30,7,5,9,11,15,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__maybe_track_subterm_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__maybe_track_subterm_1_0_i30);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__maybe_track_subterm_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__maybe_track_subterm_1_0_i7);
	}
MR_def_label(__Compare___mdb__browser_info__maybe_track_subterm_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___mdb__browser_info__maybe_track_subterm_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___mdb__browser_info__maybe_track_subterm_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__maybe_track_subterm_1_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___mdb__browser_info__maybe_track_subterm_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(5) = (((MR_Integer) MR_tfield(1, MR_tempr5, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(1, MR_tempr6, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_tfield(1, MR_tempr3, 0) & (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_tfield(1, MR_tempr4, 0) & (MR_Integer) 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__browser_info__maybe_track_subterm_1_0_i11);
MR_def_label(__Compare___mdb__browser_info__maybe_track_subterm_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__maybe_track_subterm_1_0_i21);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__browser_info__maybe_track_subterm_1_0_i15);
MR_def_label(__Compare___mdb__browser_info__maybe_track_subterm_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__maybe_track_subterm_1_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___mdb__browser_info__maybe_track_subterm_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___getopt__maybe_option_table_1_0);

MR_BEGIN_MODULE(mdb__browser_info_module77)
	MR_init_entry1(__Unify___mdb__browser_info__param_cmd_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__param_cmd_0_0);
	MR_init_label7(__Unify___mdb__browser_info__param_cmd_0_0,5,8,6,14,30,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__param_cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__param_cmd_0_0_i30);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__param_cmd_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__browser_info__param_cmd_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__param_cmd_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__param_cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, setting_option);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___getopt__maybe_option_table_1_0,
		__Unify___mdb__browser_info__param_cmd_0_0_i8);
MR_def_label(__Unify___mdb__browser_info__param_cmd_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__param_cmd_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__browser_info__setting_0_0);
MR_def_label(__Unify___mdb__browser_info__param_cmd_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__param_cmd_0_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__param_cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, setting_option);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___getopt__maybe_option_table_1_0,
		__Unify___mdb__browser_info__param_cmd_0_0_i14);
MR_def_label(__Unify___mdb__browser_info__param_cmd_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__param_cmd_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__browser_info__setting_0_0);
MR_def_label(__Unify___mdb__browser_info__param_cmd_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__param_cmd_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__param_cmd_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdb__browser_info__param_cmd_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___getopt__maybe_option_table_1_0);

MR_BEGIN_MODULE(mdb__browser_info_module78)
	MR_init_entry1(__Compare___mdb__browser_info__param_cmd_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__param_cmd_0_0);
	MR_init_label10(__Compare___mdb__browser_info__param_cmd_0_0,58,7,8,5,12,15,13,10,23,24)
	MR_init_label8(__Compare___mdb__browser_info__param_cmd_0_0,27,21,53,33,34,55,35,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__param_cmd_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i58);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i7);
	}
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i55);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, setting_option);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___getopt__maybe_option_table_1_0,
		__Compare___mdb__browser_info__param_cmd_0_0_i15);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdb__browser_info__setting_0_0);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i53);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i21);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i24);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i53);
	}
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__parse, setting_option);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___getopt__maybe_option_table_1_0,
		__Compare___mdb__browser_info__param_cmd_0_0_i27);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdb__browser_info__setting_0_0);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i33);
	}
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__param_cmd_0_0_i35);
	}
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__browser_info__param_cmd_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module79)
	MR_init_entry1(__Unify___mdb__browser_info__portray_format_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__portray_format_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__portray_format_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module80)
	MR_init_entry1(__Compare___mdb__browser_info__portray_format_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__portray_format_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__portray_format_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module81)
	MR_init_entry1(__Unify___mdb__browser_info__setting_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__setting_0_0);
	MR_init_label6(__Unify___mdb__browser_info__setting_0_0,5,7,9,27,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__setting_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__setting_0_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__setting_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__setting_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__browser_info__setting_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__setting_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__setting_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__setting_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__setting_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__setting_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__setting_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__setting_0_0_i11);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__setting_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__setting_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__setting_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__setting_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__setting_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module82)
	MR_init_entry1(__Compare___mdb__browser_info__setting_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__setting_0_0);
	MR_init_label10(__Compare___mdb__browser_info__setting_0_0,3,2,7,9,10,5,14,15,17,12)
	MR_init_label10(__Compare___mdb__browser_info__setting_0_0,21,22,23,19,28,29,30,85,26,34)
	MR_init_label4(__Compare___mdb__browser_info__setting_0_0,35,63,36,64)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__setting_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i2);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__browser_info__setting_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i15);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i19);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i23);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i26);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i30);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i63);
	}
MR_def_label(__Compare___mdb__browser_info__setting_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i35);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i36);
	}
MR_def_label(__Compare___mdb__browser_info__setting_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__setting_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__setting_0_0_i85);
	}
MR_def_label(__Compare___mdb__browser_info__setting_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module83)
	MR_init_entry1(__Unify___mdb__browser_info__should_assert_invalid_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__should_assert_invalid_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__should_assert_invalid_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module84)
	MR_init_entry1(__Compare___mdb__browser_info__should_assert_invalid_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__should_assert_invalid_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__should_assert_invalid_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module85)
	MR_init_entry1(__Unify___mdb__browser_info__term_browser_response_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_info__term_browser_response_0_0);
	MR_init_label6(__Unify___mdb__browser_info__term_browser_response_0_0,5,6,7,21,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_info__term_browser_response_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__term_browser_response_0_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__term_browser_response_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__browser_info__term_browser_response_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__term_browser_response_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__term_browser_response_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__term_browser_response_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__term_browser_response_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__term_browser_response_0_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__term_browser_response_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__term_browser_response_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__term_browser_response_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_info__term_browser_response_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__browser_info__term_browser_response_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module86)
	MR_init_entry1(__Compare___mdb__browser_info__term_browser_response_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_info__term_browser_response_0_0);
	MR_init_label10(__Compare___mdb__browser_info__term_browser_response_0_0,7,8,9,5,13,14,15,11,19,123)
	MR_init_label10(__Compare___mdb__browser_info__term_browser_response_0_0,20,76,17,25,26,27,23,31,32,33)
	MR_init_label1(__Compare___mdb__browser_info__term_browser_response_0_0,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_info__term_browser_response_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i76);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i123);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i123);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i20);
	}
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i123);
	}
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i23);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i123);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_info__term_browser_response_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__browser_info__term_browser_response_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module87)
	MR_init_entry1(mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_0);
	MR_init_label1(mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_0_i12);
	}
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module88)
	MR_init_entry1(mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module89)
	MR_init_entry1(mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mdb__browser_info__write_int_debugger_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module90)
	MR_init_entry1(mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mdb__browser_info__write_string_debugger_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__browser_info_module91)
	MR_init_entry1(f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("debugger", 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__mdb__browser_info__browser_persistent_state_type_1_0);

void
ML_BROWSE_browser_persistent_state_type(MR_Word * Mercury__argument1);

void
ML_BROWSE_browser_persistent_state_type(MR_Word * Mercury__argument1)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__browser_persistent_state_type_1_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__browser_persistent_state_type_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument1 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdb__browser_info__browser_params_to_string_3_0);

void
ML_BROWSE_browser_params_to_string(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_String * Mercury__argument3);

void
ML_BROWSE_browser_params_to_string(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_String * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__browser_params_to_string_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__browser_params_to_string_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument3 = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__fn__mdb__browser_info__mercury_bool_no_0_0);

MR_Word
ML_BROWSE_mercury_bool_no(void);

MR_Word
ML_BROWSE_mercury_bool_no(void)
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
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__browser_info__mercury_bool_no_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__browser_info__mercury_bool_no_0_0), MR_FALSE);
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


MR_declare_static(mercury__fn__mdb__browser_info__mercury_bool_yes_0_0);

MR_Word
ML_BROWSE_mercury_bool_yes(void);

MR_Word
ML_BROWSE_mercury_bool_yes(void)
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
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__browser_info__mercury_bool_yes_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__browser_info__mercury_bool_yes_0_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__browser_info__set_xml_tmp_filename_from_mdb_3_0);

void
ML_BROWSE_set_xml_tmp_filename_from_mdb(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

void
ML_BROWSE_set_xml_tmp_filename_from_mdb(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__set_xml_tmp_filename_from_mdb_3_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__set_xml_tmp_filename_from_mdb_3_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__browser_info__get_xml_tmp_filename_from_mdb_2_0);

void
ML_BROWSE_get_xml_tmp_filename_from_mdb(MR_Word Mercury__argument1, MR_String * Mercury__argument2);

void
ML_BROWSE_get_xml_tmp_filename_from_mdb(MR_Word Mercury__argument1, MR_String * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__get_xml_tmp_filename_from_mdb_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__get_xml_tmp_filename_from_mdb_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__browser_info__set_xml_browser_cmd_from_mdb_3_0);

void
ML_BROWSE_set_xml_browser_cmd_from_mdb(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

void
ML_BROWSE_set_xml_browser_cmd_from_mdb(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__set_xml_browser_cmd_from_mdb_3_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__set_xml_browser_cmd_from_mdb_3_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__browser_info__get_xml_browser_cmd_from_mdb_2_0);

void
ML_BROWSE_get_xml_browser_cmd_from_mdb(MR_Word Mercury__argument1, MR_String * Mercury__argument2);

void
ML_BROWSE_get_xml_browser_cmd_from_mdb(MR_Word Mercury__argument1, MR_String * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__get_xml_browser_cmd_from_mdb_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__get_xml_browser_cmd_from_mdb_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdb__browser_info__set_num_io_actions_3_0);

void
ML_BROWSE_set_num_io_actions(MR_Integer Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

void
ML_BROWSE_set_num_io_actions(MR_Integer Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__set_num_io_actions_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__set_num_io_actions_3_0), MR_FALSE);
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


MR_declare_entry(mercury__mdb__browser_info__get_num_io_actions_2_0);

void
ML_BROWSE_get_num_io_actions(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2);

void
ML_BROWSE_get_num_io_actions(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__get_num_io_actions_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__get_num_io_actions_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__browser_info__set_format_from_mdb_6_0);

void
ML_BROWSE_set_format_from_mdb(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word * Mercury__argument6);

void
ML_BROWSE_set_format_from_mdb(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word * Mercury__argument6)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__set_format_from_mdb_6_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__set_format_from_mdb_6_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument6 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__browser_info__set_lines_from_mdb_10_0);

void
ML_BROWSE_set_lines_from_mdb(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word Mercury__argument6, MR_Word Mercury__argument7, MR_Integer Mercury__argument8, MR_Word Mercury__argument9, MR_Word * Mercury__argument10);

void
ML_BROWSE_set_lines_from_mdb(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word Mercury__argument6, MR_Word Mercury__argument7, MR_Integer Mercury__argument8, MR_Word Mercury__argument9, MR_Word * Mercury__argument10)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__set_lines_from_mdb_10_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_r6 = Mercury__argument6;
	MR_r7 = Mercury__argument7;
	MR_r8 = Mercury__argument8;
	MR_r9 = Mercury__argument9;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__set_lines_from_mdb_10_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument10 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__browser_info__set_width_from_mdb_10_0);

void
ML_BROWSE_set_width_from_mdb(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word Mercury__argument6, MR_Word Mercury__argument7, MR_Integer Mercury__argument8, MR_Word Mercury__argument9, MR_Word * Mercury__argument10);

void
ML_BROWSE_set_width_from_mdb(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word Mercury__argument6, MR_Word Mercury__argument7, MR_Integer Mercury__argument8, MR_Word Mercury__argument9, MR_Word * Mercury__argument10)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__set_width_from_mdb_10_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_r6 = Mercury__argument6;
	MR_r7 = Mercury__argument7;
	MR_r8 = Mercury__argument8;
	MR_r9 = Mercury__argument9;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__set_width_from_mdb_10_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument10 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__browser_info__set_size_from_mdb_10_0);

void
ML_BROWSE_set_size_from_mdb(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word Mercury__argument6, MR_Word Mercury__argument7, MR_Integer Mercury__argument8, MR_Word Mercury__argument9, MR_Word * Mercury__argument10);

void
ML_BROWSE_set_size_from_mdb(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word Mercury__argument6, MR_Word Mercury__argument7, MR_Integer Mercury__argument8, MR_Word Mercury__argument9, MR_Word * Mercury__argument10)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__set_size_from_mdb_10_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_r6 = Mercury__argument6;
	MR_r7 = Mercury__argument7;
	MR_r8 = Mercury__argument8;
	MR_r9 = Mercury__argument9;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__set_size_from_mdb_10_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument10 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__browser_info__set_depth_from_mdb_10_0);

void
ML_BROWSE_set_depth_from_mdb(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word Mercury__argument6, MR_Word Mercury__argument7, MR_Integer Mercury__argument8, MR_Word Mercury__argument9, MR_Word * Mercury__argument10);

void
ML_BROWSE_set_depth_from_mdb(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_Word Mercury__argument6, MR_Word Mercury__argument7, MR_Integer Mercury__argument8, MR_Word Mercury__argument9, MR_Word * Mercury__argument10)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__set_depth_from_mdb_10_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_r6 = Mercury__argument6;
	MR_r7 = Mercury__argument7;
	MR_r8 = Mercury__argument8;
	MR_r9 = Mercury__argument9;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__set_depth_from_mdb_10_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument10 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdb__browser_info__init_persistent_state_1_0);

void
ML_BROWSE_init_persistent_state(MR_Word * Mercury__argument1);

void
ML_BROWSE_init_persistent_state(MR_Word * Mercury__argument1)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__browser_info__init_persistent_state_1_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__browser_info__init_persistent_state_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument1 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__mdb__browser_info_maybe_bunch_0(void)
{
	mdb__browser_info_module0();
	mdb__browser_info_module1();
	mdb__browser_info_module2();
	mdb__browser_info_module3();
	mdb__browser_info_module4();
	mdb__browser_info_module5();
	mdb__browser_info_module6();
	mdb__browser_info_module7();
	mdb__browser_info_module8();
	mdb__browser_info_module9();
	mdb__browser_info_module10();
	mdb__browser_info_module11();
	mdb__browser_info_module12();
	mdb__browser_info_module13();
	mdb__browser_info_module14();
	mdb__browser_info_module15();
	mdb__browser_info_module16();
	mdb__browser_info_module17();
	mdb__browser_info_module18();
	mdb__browser_info_module19();
	mdb__browser_info_module20();
	mdb__browser_info_module21();
	mdb__browser_info_module22();
	mdb__browser_info_module23();
	mdb__browser_info_module24();
	mdb__browser_info_module25();
	mdb__browser_info_module26();
	mdb__browser_info_module27();
	mdb__browser_info_module28();
	mdb__browser_info_module29();
	mdb__browser_info_module30();
	mdb__browser_info_module31();
	mdb__browser_info_module32();
	mdb__browser_info_module33();
	mdb__browser_info_module34();
	mdb__browser_info_module35();
	mdb__browser_info_module36();
	mdb__browser_info_module37();
	mdb__browser_info_module38();
	mdb__browser_info_module39();
}

static void mercury__mdb__browser_info_maybe_bunch_1(void)
{
	mdb__browser_info_module40();
	mdb__browser_info_module41();
	mdb__browser_info_module42();
	mdb__browser_info_module43();
	mdb__browser_info_module44();
	mdb__browser_info_module45();
	mdb__browser_info_module46();
	mdb__browser_info_module47();
	mdb__browser_info_module48();
	mdb__browser_info_module49();
	mdb__browser_info_module50();
	mdb__browser_info_module51();
	mdb__browser_info_module52();
	mdb__browser_info_module53();
	mdb__browser_info_module54();
	mdb__browser_info_module55();
	mdb__browser_info_module56();
	mdb__browser_info_module57();
	mdb__browser_info_module58();
	mdb__browser_info_module59();
	mdb__browser_info_module60();
	mdb__browser_info_module61();
	mdb__browser_info_module62();
	mdb__browser_info_module63();
	mdb__browser_info_module64();
	mdb__browser_info_module65();
	mdb__browser_info_module66();
	mdb__browser_info_module67();
	mdb__browser_info_module68();
	mdb__browser_info_module69();
	mdb__browser_info_module70();
	mdb__browser_info_module71();
	mdb__browser_info_module72();
	mdb__browser_info_module73();
	mdb__browser_info_module74();
	mdb__browser_info_module75();
	mdb__browser_info_module76();
	mdb__browser_info_module77();
	mdb__browser_info_module78();
	mdb__browser_info_module79();
}

static void mercury__mdb__browser_info_maybe_bunch_2(void)
{
	mdb__browser_info_module80();
	mdb__browser_info_module81();
	mdb__browser_info_module82();
	mdb__browser_info_module83();
	mdb__browser_info_module84();
	mdb__browser_info_module85();
	mdb__browser_info_module86();
	mdb__browser_info_module87();
	mdb__browser_info_module88();
	mdb__browser_info_module89();
	mdb__browser_info_module90();
	mdb__browser_info_module91();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__browser_info__init(void);
void mercury__mdb__browser_info__init_type_tables(void);
void mercury__mdb__browser_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__browser_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__browser_info__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__browser_info__init_threadscope_string_table(void);
#endif

void mercury__mdb__browser_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__browser_info_maybe_bunch_0();
	mercury__mdb__browser_info_maybe_bunch_1();
	mercury__mdb__browser_info_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_browse_caller_type_0,
		mdb__browser_info__browse_caller_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_browser_db_0,
		mdb__browser_info__browser_db_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_browser_info_0,
		mdb__browser_info__browser_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_browser_mode_func_0,
		mdb__browser_info__browser_mode_func_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_browser_persistent_state_0,
		mdb__browser_info__browser_persistent_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_browser_term_mode_0,
		mdb__browser_info__browser_term_mode_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_caller_params_0,
		mdb__browser_info__caller_params_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_debugger_0,
		mdb__browser_info__debugger_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_dir_0,
		mdb__browser_info__dir_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_format_params_0,
		mdb__browser_info__format_params_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0,
		mdb__browser_info__how_track_subterm_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_maybe_track_subterm_1,
		mdb__browser_info__maybe_track_subterm_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_param_cmd_0,
		mdb__browser_info__param_cmd_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_portray_format_0,
		mdb__browser_info__portray_format_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_setting_0,
		mdb__browser_info__setting_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0,
		mdb__browser_info__should_assert_invalid_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_info__type_ctor_info_term_browser_response_0,
		mdb__browser_info__term_browser_response_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0__, 5) =
			MR_ENTRY_AP(mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__, 5) =
			MR_ENTRY_AP(mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__, 5) =
			MR_ENTRY_AP(mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__, 5) =
			MR_ENTRY_AP(mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__mdb__browser_info__init_debugger();
}

void mercury__mdb__browser_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_browse_caller_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_browser_db_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_browser_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_browser_mode_func_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_browser_persistent_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_browser_term_mode_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_caller_params_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_debugger_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_dir_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_format_params_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_maybe_track_subterm_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_param_cmd_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_portray_format_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_setting_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_info__type_ctor_info_term_browser_response_0);
	}
}


void mercury__mdb__browser_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__browser_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__browser_info);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__browser_info__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__browser_info__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
