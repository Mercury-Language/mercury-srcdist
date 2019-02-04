/*
** Automatically generated from `layout_out.m'
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
INIT mercury__ll_backend__layout_out__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 532 "../library/io.int"
#include "io.mh"

#line 27 "ll_backend.layout_out.c"
#line 540 "../library/io.int"
#include "string.mh"

#line 31 "ll_backend.layout_out.c"
#line 145 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 35 "ll_backend.layout_out.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.layout_out.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.layout_out.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 47 "ll_backend.layout_out.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 51 "ll_backend.layout_out.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 55 "ll_backend.layout_out.c"
#line 56 "ll_backend.layout_out.c"
#include "ll_backend.layout_out.mh"

#line 59 "ll_backend.layout_out.c"
#line 60 "ll_backend.layout_out.c"
#ifndef LL_BACKEND__LAYOUT_OUT_DECL_GUARD
#define LL_BACKEND__LAYOUT_OUT_DECL_GUARD

#line 64 "ll_backend.layout_out.c"
#line 65 "ll_backend.layout_out.c"

#endif
#line 68 "ll_backend.layout_out.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_1 {
	MR_Word * f1[2];
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
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_String f4;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_0 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__layout_out__type_ctor_info_rval_or_numpair_or_none_0;
MR_decl_label5(ll_backend__layout_out__groupable_labels_7_0, 40,3,9,8,4)
MR_decl_label2(ll_backend__layout_out__output_attr_name_3_0, 2,3)
MR_decl_label7(ll_backend__layout_out__output_bytecodes_6_0, 26,3,5,6,9,7,30)
MR_decl_label3(ll_backend__layout_out__output_bytecodes_driver_3_0, 10,11,12)
MR_decl_label8(ll_backend__layout_out__output_call_site_static_5_0, 2,3,4,7,8,9,11,12)
MR_decl_label8(ll_backend__layout_out__output_call_site_static_5_0, 13,16,17,20,22,24,25,27)
MR_decl_label8(ll_backend__layout_out__output_call_site_static_5_0, 28,29,30,31,32,33,34,35)
MR_decl_label5(ll_backend__layout_out__output_call_site_static_array_6_0, 2,3,4,5,6)
MR_decl_label3(ll_backend__layout_out__output_call_site_static_decl_5_0, 5,7,14)
MR_decl_label8(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0, 10,11,12,13,14,15,16,17)
MR_decl_label4(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0, 18,19,20,21)
MR_decl_label5(ll_backend__layout_out__output_event_set_desc_defn_6_0, 2,3,4,5,6)
MR_decl_label8(ll_backend__layout_out__output_event_spec_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__layout_out__output_event_spec_5_0, 10,11,20,24,16,27,28,31)
MR_decl_label4(ll_backend__layout_out__output_event_spec_5_0, 33,35,36,37)
MR_decl_label8(ll_backend__layout_out__output_event_spec_components_6_0, 2,3,4,5,6,8,9,10)
MR_decl_label8(ll_backend__layout_out__output_event_spec_components_6_0, 11,12,13,14,15,16,17,18)
MR_decl_label2(ll_backend__layout_out__output_event_spec_components_6_0, 19,20)
MR_decl_label6(ll_backend__layout_out__output_event_specs_and_components_7_0, 2,3,4,5,6,7)
MR_decl_label8(ll_backend__layout_out__output_file_layout_data_defn_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__layout_out__output_file_layout_data_defn_8_0, 10,11,12,13,14,15,16,17)
MR_decl_label3(ll_backend__layout_out__output_file_layout_data_defn_8_0, 18,19,20)
MR_decl_label3(ll_backend__layout_out__output_file_layout_data_defns_8_0, 13,4,5)
MR_decl_label7(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0, 2,3,4,6,8,9,10)
MR_decl_label7(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0, 2,3,4,6,8,9,10)
MR_decl_label8(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0, 2,3,4,5,7,9,10,11)
MR_decl_label8(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0, 38,8,9,10,11,12,13,14)
MR_decl_label5(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0, 15,16,17,4,41)
MR_decl_label8(ll_backend__layout_out__output_label_layout_data_defn_13_0, 2,4,5,6,7,8,9,10)
MR_decl_label8(ll_backend__layout_out__output_label_layout_data_defn_13_0, 11,12,13,14,15,16,17,18)
MR_decl_label8(ll_backend__layout_out__output_label_layout_data_defn_13_0, 3,20,22,19,25,24,26,27)
MR_decl_label8(ll_backend__layout_out__output_label_layout_data_defn_13_0, 28,40,29,53,54,55,56,57)
MR_decl_label8(ll_backend__layout_out__output_label_layout_data_defn_13_0, 58,59,60,61,62,64,66,67)
MR_decl_label8(ll_backend__layout_out__output_label_layout_data_defn_13_0, 68,69,70,72,71,108,76,77)
MR_decl_label4(ll_backend__layout_out__output_label_layout_data_defn_13_0, 78,79,80,82)
MR_decl_label6(ll_backend__layout_out__output_layout_data_defn_5_0, 4,6,8,10,11,13)
MR_decl_label4(ll_backend__layout_out__output_layout_decl_5_0, 3,2,5,6)
MR_decl_label8(ll_backend__layout_out__output_layout_exec_trace_6_0, 3,4,5,6,7,8,9,10)
MR_decl_label8(ll_backend__layout_out__output_layout_exec_trace_6_0, 12,14,15,16,17,18,19,20)
MR_decl_label8(ll_backend__layout_out__output_layout_exec_trace_6_0, 21,23,25,26,27,28,29,30)
MR_decl_label8(ll_backend__layout_out__output_layout_exec_trace_6_0, 32,34,35,36,37,38,39,40)
MR_decl_label8(ll_backend__layout_out__output_layout_exec_trace_6_0, 41,42,43,44,45,46,47,48)
MR_decl_label8(ll_backend__layout_out__output_layout_exec_trace_6_0, 49,50,51,52,53,54,55,56)
MR_decl_label8(ll_backend__layout_out__output_layout_exec_trace_6_0, 57,58,59,60,61,62,63,64)
MR_decl_label1(ll_backend__layout_out__output_layout_exec_trace_6_0, 65)
MR_decl_label8(ll_backend__layout_out__output_layout_exec_trace_decls_6_0, 2,3,4,5,6,14,8,10)
MR_decl_label1(ll_backend__layout_out__output_layout_exec_trace_decls_6_0, 11)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 4,5,6,7,10,11,12,13)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 16,17,18,19,22,23,24,25)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 26,27,29,30,31,32,35,36)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 37,38,41,42,43,44,47,48)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 49,50,53,54,55,56,59,60)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 61,62,65,66,67,68,69,72)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 73,74,75,76,77,80,81,82)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 83,84,85,88,89,90,91,92)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 93,96,97,98,99,102,103,104)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 105,108,109,110,111,114,115,116)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 117,120,121,122,123,126,127,128)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 129,130,131,134,135,136,137,138)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 139,142,143,144,145,146,147,148)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 149,150,152,153,154,155,156,157)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 158,159,160,162,163,164,165,166)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 167,168,170,171,172,173,176,177)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 178,179,182,183,184,185,186,188)
MR_decl_label8(ll_backend__layout_out__output_layout_name_3_0, 189,190,191,194,195,196,197,198)
MR_decl_label1(ll_backend__layout_out__output_layout_name_decl_3_0, 2)
MR_decl_label2(ll_backend__layout_out__output_layout_name_in_vector_4_0, 2,3)
MR_decl_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0, 4,5,6,7,10,13,14,17)
MR_decl_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0, 18,19,25,24,27,28,29,32)
MR_decl_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0, 35,36,39,40,41,44,45,46)
MR_decl_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0, 49,50,51,54,57,58,60,64)
MR_decl_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0, 67,68,71,72,75,76,79,80)
MR_decl_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0, 83,84,87,88,89,90,91,93)
MR_decl_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0, 94,97,98,101,102,105,106,109)
MR_decl_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0, 110,113,114,117,118,121,124,127)
MR_decl_label4(ll_backend__layout_out__output_layout_name_storage_type_name_4_0, 128,130,131,132)
MR_decl_label2(ll_backend__layout_out__output_layout_proc_id_group_4_0, 2,3)
MR_decl_label1(ll_backend__layout_out__output_layout_traversal_decls_5_0, 3)
MR_decl_label8(ll_backend__layout_out__output_maybe_layout_data_decl_5_0, 4,6,49,8,10,12,13,14)
MR_decl_label2(ll_backend__layout_out__output_maybe_layout_data_decl_5_0, 15,16)
MR_decl_label4(ll_backend__layout_out__output_maybe_layout_name_decl_5_0, 3,2,5,6)
MR_decl_label1(ll_backend__layout_out__output_maybe_var_num_3_0, 3)
MR_decl_label8(ll_backend__layout_out__output_module_common_layout_data_defn_7_0, 2,3,4,6,7,8,9,10)
MR_decl_label8(ll_backend__layout_out__output_module_common_layout_data_defn_7_0, 11,12,13,14,15,16,17,18)
MR_decl_label5(ll_backend__layout_out__output_module_common_layout_data_defn_7_0, 19,20,21,22,23)
MR_decl_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0, 10,11,12,15,16,17,18,19)
MR_decl_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0, 20,21,22,23,24,25,26,27)
MR_decl_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0, 28,29,30,31,32,33,34,35)
MR_decl_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0, 36,37,38,39,40,14,42,43)
MR_decl_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0, 44,45,46,47,48,49,50,51)
MR_decl_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0, 52,53,54,55,56,57,58,59)
MR_decl_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0, 60,61,62,63,64,65,66,67)
MR_decl_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0, 68,69,70,71,72,73,74,75)
MR_decl_label1(ll_backend__layout_out__output_module_layout_data_defn_12_0, 76)
MR_decl_label8(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0, 2,3,4,5,7,9,10,11)
MR_decl_label8(ll_backend__layout_out__output_module_string_table_chars_5_0, 28,4,3,8,9,10,11,12)
MR_decl_label4(ll_backend__layout_out__output_module_string_table_chars_5_0, 2,14,15,16)
MR_decl_label6(ll_backend__layout_out__output_module_string_table_strings_4_0, 15,4,3,6,7,8)
MR_decl_label1(ll_backend__layout_out__output_number_in_vector_3_0, 2)
MR_decl_label1(ll_backend__layout_out__output_pred_or_func_3_0, 3)
MR_decl_label8(ll_backend__layout_out__output_proc_id_4_0, 4,6,8,9,10,11,12,13)
MR_decl_label8(ll_backend__layout_out__output_proc_id_4_0, 14,15,16,17,18,19,20,21)
MR_decl_label8(ll_backend__layout_out__output_proc_id_4_0, 22,23,3,26,27,28,29,30)
MR_decl_label8(ll_backend__layout_out__output_proc_id_4_0, 31,32,33,34,35,36,37,38)
MR_decl_label2(ll_backend__layout_out__output_proc_id_4_0, 39,40)
MR_decl_label8(ll_backend__layout_out__output_proc_layout_data_defn_7_0, 2,3,4,7,8,9,6,11)
MR_decl_label8(ll_backend__layout_out__output_proc_layout_data_defn_7_0, 12,10,15,16,17,18,13,21)
MR_decl_label8(ll_backend__layout_out__output_proc_layout_data_defn_7_0, 22,23,24,25,26,19,27,28)
MR_decl_label8(ll_backend__layout_out__output_proc_layout_data_defn_7_0, 29,31,33,34,30,37,39,40)
MR_decl_label7(ll_backend__layout_out__output_proc_layout_data_defn_7_0, 36,43,45,46,47,48,49)
MR_decl_label8(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0, 2,3,4,5,7,9,10,12)
MR_decl_label5(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0, 14,15,16,17,19)
MR_decl_label6(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0, 2,3,4,6,8,9)
MR_decl_label4(ll_backend__layout_out__output_proc_layout_name_in_vector_3_0, 4,5,6,2)
MR_decl_label8(ll_backend__layout_out__output_proc_layout_var_names_7_0, 2,3,4,5,6,8,10,11)
MR_decl_label8(ll_backend__layout_out__output_proc_static_data_defn_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__layout_out__output_proc_static_data_defn_6_0, 10,11,12,14,16,17,18,19)
MR_decl_label8(ll_backend__layout_out__output_proc_static_data_defn_6_0, 20,21,22,23,24,25,26,27)
MR_decl_label4(ll_backend__layout_out__output_proc_static_data_defn_6_0, 28,29,30,31)
MR_decl_label5(ll_backend__layout_out__output_rval_as_addr_3_0, 2,62,15,61,18)
MR_decl_label8(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0, 27,28,29,79,5,6,15,19)
MR_decl_label3(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0, 11,22,80)
MR_decl_label8(ll_backend__layout_out__output_synth_attr_5_0, 2,4,6,7,8,9,10,11)
MR_decl_label2(ll_backend__layout_out__output_synth_attr_5_0, 12,13)
MR_decl_label8(ll_backend__layout_out__output_synth_attr_args_7_0, 23,4,5,6,7,8,9,10)
MR_decl_label5(ll_backend__layout_out__output_synth_attr_args_7_0, 11,12,13,14,15)
MR_decl_label8(ll_backend__layout_out__output_table_io_decl_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(ll_backend__layout_out__output_table_io_decl_9_0, 10,11,12,13,14)
MR_decl_label2(ll_backend__layout_out__quote_and_write_string_3_0, 2,3)
MR_decl_label1(ll_backend__layout_out__write_maybe_slot_num_3_0, 3)
MR_decl_label8(fn__ll_backend__layout_out__eval_method_to_c_string_1_0, 15,16,11,13,14,4,8,6)
MR_decl_label1(fn__ll_backend__layout_out__eval_method_to_c_string_1_0, 10)
MR_decl_label4(fn__ll_backend__layout_out__ints_to_string_1_0, 15,4,5,6)
MR_decl_label1(fn__ll_backend__layout_out__label_vars_to_type_1_0, 3)
MR_decl_label1(fn__ll_backend__layout_out__layout_name_would_include_code_addr_1_0, 33)
MR_decl_label2(fn__ll_backend__layout_out__make_label_layout_name_1_0, 2,3)
MR_decl_label2(fn__ll_backend__layout_out__maybe_proc_layout_and_more_kind_2_0, 3,5)
MR_decl_label8(fn__ll_backend__layout_out__origin_name_2_0, 57,7,33,8,10,11,14,30)
MR_decl_label4(fn__ll_backend__layout_out__origin_name_2_0, 58,19,21,22)
MR_decl_label8(fn__ll_backend__layout_out__pred_transform_name_1_0, 4,5,61,7,62,10,63,13)
MR_decl_label8(fn__ll_backend__layout_out__pred_transform_name_1_0, 14,16,17,18,20,21,22,24)
MR_decl_label8(fn__ll_backend__layout_out__pred_transform_name_1_0, 25,27,28,30,31,33,34,35)
MR_decl_label5(fn__ll_backend__layout_out__pred_transform_name_1_0, 36,37,38,40,41)
MR_decl_label1(fn__ll_backend__layout_out__proc_label_user_or_uci_1_0, 3)
MR_decl_label2(fn__ll_backend__layout_out__proc_layout_kind_to_type_1_0, 3,5)
MR_decl_label2(fn__ll_backend__layout_out__subst_to_name_1_0, 2,3)
MR_decl_label4(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0, 10,6,21,1)
MR_decl_label8(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0, 42,12,16,18,15,6,9,27)
MR_def_extern_entry(ll_backend__layout_out__output_layout_name_3_0)
MR_decl_static(fn__ll_backend__layout_out__label_vars_to_type_1_0)
MR_decl_static(fn__ll_backend__layout_out__proc_layout_kind_to_type_1_0)
MR_def_extern_entry(ll_backend__layout_out__output_layout_name_storage_type_name_4_0)
MR_def_extern_entry(fn__ll_backend__layout_out__trace_port_to_string_1_0)
MR_decl_static(ll_backend__layout_out__output_layout_decl_5_0)
MR_decl_static(ll_backend__layout_out__output_rval_as_addr_3_0)
MR_decl_static(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0)
MR_decl_static(ll_backend__layout_out__output_label_layout_data_defn_13_0)
MR_def_extern_entry(fn__ll_backend__layout_out__proc_label_user_or_uci_1_0)
MR_decl_static(fn__ll_backend__layout_out__maybe_proc_layout_and_more_kind_2_0)
MR_decl_static(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0)
MR_decl_static(ll_backend__layout_out__output_proc_layout_data_defn_end_2_0)
MR_decl_static(ll_backend__layout_out__output_layout_traversal_decls_5_0)
MR_def_extern_entry(ll_backend__layout_out__output_pred_or_func_3_0)
MR_decl_static(fn__ll_backend__layout_out__ints_to_string_1_0)
MR_decl_static(fn__ll_backend__layout_out__pred_transform_name_1_0)
MR_decl_static(fn__ll_backend__layout_out__origin_name_2_0)
MR_decl_static(ll_backend__layout_out__quote_and_write_string_3_0)
MR_decl_static(ll_backend__layout_out__output_proc_id_4_0)
MR_decl_static(ll_backend__layout_out__output_layout_proc_id_group_4_0)
MR_decl_static(ll_backend__layout_out__output_layout_no_proc_id_group_2_0)
MR_decl_static(ll_backend__layout_out__groupable_labels_7_0)
MR_decl_static(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0)
MR_decl_static(ll_backend__layout_out__output_layout_exec_trace_decls_6_0)
MR_decl_static(ll_backend__layout_out__output_bytecodes_6_0)
MR_decl_static(ll_backend__layout_out__output_bytecodes_driver_3_0)
MR_decl_static(ll_backend__layout_out__write_maybe_slot_num_3_0)
MR_decl_static(fn__ll_backend__layout_out__eval_method_to_c_string_1_0)
MR_decl_static(ll_backend__layout_out__output_layout_exec_trace_6_0)
MR_decl_static(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0)
MR_decl_static(ll_backend__layout_out__output_proc_layout_var_names_7_0)
MR_decl_static(ll_backend__layout_out__output_call_site_static_array_6_0)
MR_decl_static(ll_backend__layout_out__output_proc_static_data_defn_6_0)
MR_decl_static(ll_backend__layout_out__output_proc_layout_data_defn_7_0)
MR_decl_static(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0)
MR_decl_static(ll_backend__layout_out__output_module_string_table_chars_5_0)
MR_decl_static(ll_backend__layout_out__output_module_string_table_strings_4_0)
MR_decl_static(ll_backend__layout_out__output_module_common_layout_data_defn_7_0)
MR_decl_static(ll_backend__layout_out__output_event_specs_and_components_7_0)
MR_decl_static(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0)
MR_decl_static(ll_backend__layout_out__output_event_set_desc_defn_6_0)
MR_decl_static(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0)
MR_decl_static(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0)
MR_decl_static(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0)
MR_decl_static(ll_backend__layout_out__output_file_layout_data_defn_8_0)
MR_decl_static(ll_backend__layout_out__output_file_layout_data_defns_8_0)
MR_decl_static(ll_backend__layout_out__output_module_layout_data_defn_12_0)
MR_decl_static(ll_backend__layout_out__output_table_io_decl_9_0)
MR_def_extern_entry(ll_backend__layout_out__output_layout_data_defn_5_0)
MR_def_extern_entry(ll_backend__layout_out__output_layout_name_decl_3_0)
MR_def_extern_entry(ll_backend__layout_out__output_maybe_layout_name_decl_5_0)
MR_def_extern_entry(ll_backend__layout_out__output_maybe_layout_data_decl_5_0)
MR_def_extern_entry(fn__ll_backend__layout_out__layout_name_would_include_code_addr_1_0)
MR_def_extern_entry(fn__ll_backend__layout_out__make_label_layout_name_1_0)
MR_decl_static(ll_backend__layout_out__output_maybe_var_num_3_0)
MR_decl_static(fn__ll_backend__layout_out__wrap_decl_data_addr_1_0)
MR_decl_static(fn__ll_backend__layout_out__subst_to_name_1_0)
MR_decl_static(ll_backend__layout_out__output_event_spec_components_6_0)
MR_decl_static(ll_backend__layout_out__output_attr_name_3_0)
MR_decl_static(ll_backend__layout_out__output_synth_attr_args_7_0)
MR_decl_static(ll_backend__layout_out__output_synth_attr_5_0)
MR_decl_static(ll_backend__layout_out__output_event_spec_5_0)
MR_decl_static(ll_backend__layout_out__output_proc_layout_name_in_vector_3_0)
MR_decl_static(ll_backend__layout_out__line_no_label_to_label_layout_addr_3_0)
MR_decl_static(ll_backend__layout_out__output_number_in_vector_3_0)
MR_decl_static(ll_backend__layout_out__output_layout_name_in_vector_4_0)
MR_decl_static(ll_backend__layout_out__output_call_site_static_5_0)
MR_decl_static(ll_backend__layout_out__output_call_site_static_decl_5_0)
MR_decl_static(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0)
MR_decl_static(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0)
MR_decl_static(ll_backend__layout_out__IntroducedFrom__pred__output_proc_layout_var_names__1295__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_tree234__type_ctor_info_set_tree234_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__type_ctor_info_decl_id_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(set_tree234, set_tree234),
MR_CTOR0_ADDR(ll_backend__llds_out, decl_id)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_label_layout_data_defn_13_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_layout_exec_trace_decls_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__type_ctor_info_decl_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_proc_layout_head_var_nums_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_proc_layout_var_names_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_data_defn_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_addr_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_event_spec_components_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_event_attribute_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_event_spec_components_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_synth_attr_args_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_synth_attr_args_7_0_2;
static const struct mercury_type_2 mercury_common_2[12] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_label_layout_data_defn_13_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_layout_exec_trace_decls_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ll_backend__llds_out, decl_id),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_proc_layout_head_var_nums_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_proc_layout_var_names_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ll_backend__layout, layout_name),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_data_defn_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(5,4),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, data_addr)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_event_spec_components_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_event_spec_components_6_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_synth_attr_args_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_synth_attr_args_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(io__write_int_3_0);
MR_decl_entry(ll_backend__llds_out__decl_set_insert_3_0);
MR_decl_entry(ll_backend__llds_out__output_data_addr_decls_5_0);
static const struct mercury_type_3 mercury_common_3[21] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(ll_backend__layout_out__output_maybe_var_num_3_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(fn__ll_backend__layout_out__subst_to_name_1_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(fn__string__int_to_string_1_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(fn__string__int_to_string_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(io__write_int_3_0),
0
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(fn__ll_backend__layout_out__wrap_decl_data_addr_1_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(ll_backend__llds_out__decl_set_insert_3_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(ll_backend__layout_out__output_number_in_vector_3_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(ll_backend__layout_out__output_number_in_vector_3_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(ll_backend__layout_out__output_call_site_static_5_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(ll_backend__layout_out__output_call_site_static_decl_5_0),
0
},
{
MR_COMMON(7,3),
MR_ENTRY_AP(ll_backend__layout_out__output_layout_decl_5_0),
0
},
{
MR_COMMON(2,5),
MR_ENTRY_AP(ll_backend__layout_out__output_proc_layout_name_in_vector_3_0),
0
},
{
MR_COMMON(7,4),
MR_ENTRY_AP(ll_backend__layout_out__output_layout_decl_5_0),
0
},
{
MR_COMMON(2,6),
MR_ENTRY_AP(ll_backend__layout_out__output_number_in_vector_3_0),
0
},
{
MR_COMMON(2,7),
MR_ENTRY_AP(ll_backend__layout_out__line_no_label_to_label_layout_addr_3_0),
0
},
{
MR_COMMON(7,5),
MR_ENTRY_AP(ll_backend__llds_out__output_data_addr_decls_5_0),
0
},
{
MR_COMMON(2,8),
MR_ENTRY_AP(ll_backend__layout_out__output_attr_name_3_0),
0
},
{
MR_COMMON(2,9),
MR_ENTRY_AP(io__write_int_3_0),
0
},
{
MR_COMMON(2,10),
MR_ENTRY_AP(io__write_int_3_0),
0
},
{
MR_COMMON(2,11),
MR_ENTRY_AP(io__write_int_3_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
0
},
{
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_5 mercury_common_5[6] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, rval)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__layout, layout_name)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__layout, layout_name)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__layout_out__pred_transform_name_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__layout_out__pred_transform_name_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__layout_out__pred_transform_name_1_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_layout_exec_trace_decls_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_proc_layout_var_names_7_0_1;
static const struct mercury_type_6 mercury_common_6[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__layout_out__pred_transform_name_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,1),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__layout_out__pred_transform_name_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__layout_out__pred_transform_name_1_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_layout_exec_trace_decls_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, data_addr),
MR_CTOR0_ADDR(ll_backend__llds_out, decl_id)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_proc_layout_var_names_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_call_site_static_array_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_call_site_static_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_proc_static_data_defn_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_event_specs_and_components_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_event_spec_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_data_defn_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_event_spec_components_6_0_3;
static const struct mercury_type_7 mercury_common_7[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_call_site_static_array_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_proc_static_data_defn_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_event_specs_and_components_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(5,2),
MR_CTOR0_ADDR(parse_tree__prog_data, event_spec),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ll_backend__layout, layout_name),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ll_backend__layout, layout_name),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_data_defn_8_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ll_backend__llds, data_addr),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_event_spec_components_6_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_event_specs_and_components_7_0_1;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_event_specs_and_components_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(parse_tree__prog_data, event_spec),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_2;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__layout, layout_name),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_COMMON(9,0),
MR_ENTRY_AP(ll_backend__layout_out__output_layout_name_in_vector_4_0),
1,
MR_string_const("&", 1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_event_spec_components_6_0_2;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__layout_out__output_event_spec_components_6_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute),
MR_COMMON(1,2),
MR_COMMON(1,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_12 mercury_common_12[1] =
{
{
-1,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[17] =
{
{
MR_string_const("CALL", 4)
},
{
MR_string_const("EXIT", 4)
},
{
MR_string_const("REDO", 4)
},
{
MR_string_const("FAIL", 4)
},
{
MR_string_const("EXCEPTION", 9)
},
{
MR_string_const("COND", 4)
},
{
MR_string_const("THEN", 4)
},
{
MR_string_const("ELSE", 4)
},
{
MR_string_const("NEG_ENTER", 9)
},
{
MR_string_const("NEG_SUCCESS", 11)
},
{
MR_string_const("NEG_FAILURE", 11)
},
{
MR_string_const("DISJ_FIRST", 10)
},
{
MR_string_const("DISJ_LATER", 10)
},
{
MR_string_const("SWITCH", 6)
},
{
MR_string_const("FOREIGN_PROC_FIRST", 18)
},
{
MR_string_const("FOREIGN_PROC_LATER", 18)
},
{
MR_string_const("USER", 4)
},
};

static const struct mercury_type_0 mercury_vector_common_0_1[8] =
{
{
MR_string_const("MR_DETISM_DET", 13)
},
{
MR_string_const("MR_DETISM_SEMI", 14)
},
{
MR_string_const("MR_DETISM_MULTI", 15)
},
{
MR_string_const("MR_DETISM_NON", 13)
},
{
MR_string_const("MR_DETISM_CCMULTI", 17)
},
{
MR_string_const("MR_DETISM_CCNON", 15)
},
{
MR_string_const("MR_DETISM_ERRONEOUS", 19)
},
{
MR_string_const("MR_DETISM_FAILURE", 17)
},
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout_out__field_types_rval_or_numpair_or_none_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout_out__du_functor_desc_rval_or_numpair_or_none_0_0 = {
	"kind_rval",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout_out__field_types_rval_or_numpair_or_none_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_type_num_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout_out__field_types_rval_or_numpair_or_none_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_type_num_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout_out__du_functor_desc_rval_or_numpair_or_none_0_1 = {
	"kind_num_pair",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout_out__field_types_rval_or_numpair_or_none_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout_out__du_functor_desc_rval_or_numpair_or_none_0_2 = {
	"kind_none",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout_out__du_stag_ordered_rval_or_numpair_or_none_0_0[] = {
	&mercury_data_ll_backend__layout_out__du_functor_desc_rval_or_numpair_or_none_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout_out__du_stag_ordered_rval_or_numpair_or_none_0_1[] = {
	&mercury_data_ll_backend__layout_out__du_functor_desc_rval_or_numpair_or_none_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout_out__du_stag_ordered_rval_or_numpair_or_none_0_2[] = {
	&mercury_data_ll_backend__layout_out__du_functor_desc_rval_or_numpair_or_none_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__layout_out__du_ptag_ordered_rval_or_numpair_or_none_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__layout_out__du_stag_ordered_rval_or_numpair_or_none_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout_out__du_stag_ordered_rval_or_numpair_or_none_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout_out__du_stag_ordered_rval_or_numpair_or_none_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout_out__du_name_ordered_rval_or_numpair_or_none_0[] = {
	&mercury_data_ll_backend__layout_out__du_functor_desc_rval_or_numpair_or_none_0_2,
	&mercury_data_ll_backend__layout_out__du_functor_desc_rval_or_numpair_or_none_0_1,
	&mercury_data_ll_backend__layout_out__du_functor_desc_rval_or_numpair_or_none_0_0
};

const MR_Integer mercury_data_ll_backend__layout_out__functor_number_map_rval_or_numpair_or_none_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout_out__type_ctor_info_rval_or_numpair_or_none_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0)),
	"ll_backend.layout_out",
	"rval_or_numpair_or_none",
	{ (void *)mercury_data_ll_backend__layout_out__du_name_ordered_rval_or_numpair_or_none_0 },
	{ (void *)mercury_data_ll_backend__layout_out__du_ptag_ordered_rval_or_numpair_or_none_0 },
	3,
	4,
	mercury_data_ll_backend__layout_out__functor_number_map_rval_or_numpair_or_none_0
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_label_layout_data_defn_13_0_1 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_maybe_var_num",
3,
0
},
"ll_backend.layout_out",
"layout_out.m",
708,
"d1;c15;d2;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__layout_out__pred_transform_name_1_0_1 = {
{
MR_FUNCTION,
"ll_backend.layout_out",
"ll_backend.layout_out",
"subst_to_name",
2,
0
},
"ll_backend.layout_out",
"layout_out.m",
1444,
"d3;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__layout_out__pred_transform_name_1_0_2 = {
{
MR_FUNCTION,
"string",
"string",
"int_to_string",
2,
0
},
"ll_backend.layout_out",
"layout_out.m",
1446,
"d4;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__layout_out__pred_transform_name_1_0_3 = {
{
MR_FUNCTION,
"string",
"string",
"int_to_string",
2,
0
},
"ll_backend.layout_out",
"layout_out.m",
1448,
"d5;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_int",
3,
0
},
"ll_backend.layout_out",
"layout_out.m",
2008,
"d2;c5;t;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_layout_exec_trace_decls_6_0_1 = {
{
MR_FUNCTION,
"ll_backend.layout_out",
"ll_backend.layout_out",
"wrap_decl_data_addr",
2,
0
},
"ll_backend.layout_out",
"layout_out.m",
1076,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_layout_exec_trace_decls_6_0_2 = {
{
MR_PREDICATE,
"ll_backend.llds_out",
"ll_backend.llds_out",
"decl_set_insert",
3,
0
},
"ll_backend.layout_out",
"layout_out.m",
1077,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_proc_layout_head_var_nums_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_number_in_vector",
3,
0
},
"ll_backend.layout_out",
"layout_out.m",
1284,
"d1;c14;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_proc_layout_var_names_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"lambda_layout_out_m_1295",
2,
0
},
"ll_backend.layout_out",
"layout_out.m",
1295,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_proc_layout_var_names_7_0_2 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_number_in_vector",
3,
0
},
"ll_backend.layout_out",
"layout_out.m",
1308,
"d1;c20;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_call_site_static_array_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_call_site_static",
5,
0
},
"ll_backend.layout_out",
"layout_out.m",
2145,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_proc_static_data_defn_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_call_site_static_decl",
5,
0
},
"ll_backend.layout_out",
"layout_out.m",
2100,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_event_specs_and_components_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_event_spec_components",
6,
0
},
"ll_backend.layout_out",
"layout_out.m",
1609,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_event_specs_and_components_7_0_2 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_event_spec",
5,
0
},
"ll_backend.layout_out",
"layout_out.m",
1617,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_layout_decl",
5,
0
},
"ll_backend.layout_out",
"layout_out.m",
1778,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_2 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_proc_layout_name_in_vector",
3,
0
},
"ll_backend.layout_out",
"layout_out.m",
1790,
"d1;c17;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_layout_decl",
5,
0
},
"ll_backend.layout_out",
"layout_out.m",
1885,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_2 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_layout_name_in_vector",
4,
0
},
"ll_backend.layout_out",
"layout_out.m",
1897,
"d1;c17;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0_1 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_number_in_vector",
3,
0
},
"ll_backend.layout_out",
"layout_out.m",
1962,
"d1;c16;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_data_defn_8_0_1 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"line_no_label_to_label_layout_addr",
3,
0
},
"ll_backend.layout_out",
"layout_out.m",
1921,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_file_layout_data_defn_8_0_2 = {
{
MR_PREDICATE,
"ll_backend.llds_out",
"ll_backend.llds_out",
"output_data_addr_decls",
5,
0
},
"ll_backend.layout_out",
"layout_out.m",
1923,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_event_spec_components_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_attr_name",
3,
0
},
"ll_backend.layout_out",
"layout_out.m",
1634,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_event_spec_components_6_0_2 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_synth_attr_args",
7,
0
},
"ll_backend.layout_out",
"layout_out.m",
1642,
"d1;c21;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_event_spec_components_6_0_3 = {
{
MR_PREDICATE,
"ll_backend.layout_out",
"ll_backend.layout_out",
"output_synth_attr",
5,
0
},
"ll_backend.layout_out",
"layout_out.m",
1651,
"d1;c21;d2;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_event_spec_components_6_0_4 = {
{
MR_PREDICATE,
"io",
"io",
"write_int",
3,
0
},
"ll_backend.layout_out",
"layout_out.m",
1662,
"d1;c21;d2;c30;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_synth_attr_args_7_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_int",
3,
0
},
"ll_backend.layout_out",
"layout_out.m",
1691,
"d1;c9;d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__layout_out__output_synth_attr_args_7_0_2 = {
{
MR_PREDICATE,
"io",
"io",
"write_int",
3,
0
},
"ll_backend.layout_out",
"layout_out.m",
1701,
"d1;c9;d1;c31;"
};

MR_decl_entry(fn__backend_libs__name_mangle__mercury_data_prefix_0_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(fn__ll_backend__llds_out__label_to_c_string_2_0);
MR_decl_entry(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0);
MR_decl_entry(backend_libs__name_mangle__output_proc_label_3_0);
MR_decl_entry(backend_libs__name_mangle__output_proc_label_no_prefix_3_0);
MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module0)
	MR_init_entry1(ll_backend__layout_out__output_layout_name_3_0);
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,4,5,6,7,10,11,12,13)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,16,17,18,19,22,23,24,25)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,26,27,29,30,31,32,35,36)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,37,38,41,42,43,44,47,48)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,49,50,53,54,55,56,59,60)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,61,62,65,66,67,68,69,72)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,73,74,75,76,77,80,81,82)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,83,84,85,88,89,90,91,92)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,93,96,97,98,99,102,103,104)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,105,108,109,110,111,114,115,116)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,117,120,121,122,123,126,127,128)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,129,130,131,134,135,136,137,138)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,139,142,143,144,145,146,147,148)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,149,150,152,153,154,155,156,157)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,158,159,160,162,163,164,165,166)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,167,168,170,171,172,173,176,177)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,178,179,182,183,184,185,186,188)
	MR_init_label8(ll_backend__layout_out__output_layout_name_3_0,189,190,191,194,195,196,197,198)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__layout_out__output_layout_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i16) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i22));
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i5);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i6);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_label_layout__", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i7);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds_out__label_to_c_string_2_0,
		ll_backend__layout_out__output_layout_name_3_0_i186);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i11);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i12);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_user_event_layout__", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i13);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds_out__label_to_c_string_2_0,
		ll_backend__layout_out__output_layout_name_3_0_i186);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i17);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i18);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_user_event_attr_var_nums__", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i19);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__ll_backend__llds_out__label_to_c_string_2_0,
		ll_backend__layout_out__output_layout_name_3_0_i186);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i29) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i65) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i80) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i88) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i96) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i102) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i114) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i120) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i126) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i134) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i142) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i152) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i162) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i170) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i176) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i182) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i188) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_3_0_i194));
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i24);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i25);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_proc_layout__", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i26);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i27);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(backend_libs__name_mangle__output_proc_label_3_0);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i30);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i31);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_proc_layout_exec_trace__", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i32);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i198);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i36);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i37);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_proc_label_layouts__", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i38);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i198);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i42);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i43);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_head_var_nums__", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i44);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i198);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i48);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i49);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_var_names__", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i50);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i198);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i54);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i55);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_body_bytecode__", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i56);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i198);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i60);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i61);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_table_io_decl__", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i62);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i198);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i66);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i67);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_closure_layout__", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i68);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_proc_label_no_prefix_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i69);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i168);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i73);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i74);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_file_layout__", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i75);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i76);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i77);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i168);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i81);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i82);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_file_lines__", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i83);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i84);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i85);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i168);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i89);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i90);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_file_label_layouts__", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i91);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i92);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i93);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i168);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i97);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i98);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_strings__", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i99);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i186);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i103);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i104);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_files__", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i105);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i186);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i109);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i110);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_procs__", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i111);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i186);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i115);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i116);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_label_exec_counts__", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i117);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i186);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i121);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i122);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_layout_event_set_desc__", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i123);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i186);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i127);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i128);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_layout_event_arg_names__", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i129);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i130);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i131);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i150);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i135);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i136);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_layout_event_synth_attrs__", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i137);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i138);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i139);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i168);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i143);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i144);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_layout_event_synth_attr_args__", 38);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i145);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i146);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i147);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i148);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i149);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i150);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i153);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i154);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_layout_event_synth_attr_order__", 39);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i155);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i156);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i157);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i158);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i159);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i160);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i163);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i164);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_layout_event_synth_order__", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i165);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i166);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i167);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i168);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i171);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i172);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_layout_event_specs__", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i173);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i186);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i177);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i178);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_common_layout__", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i179);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i186);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i183);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i184);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_module_layout__", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i185);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i186);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i189);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i190);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_proc_static__", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i191);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i198);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		ll_backend__layout_out__output_layout_name_3_0_i195);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i196);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_proc_static_call_sites__", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_3_0_i197);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_layout_name_3_0_i198);
MR_def_label(ll_backend__layout_out__output_layout_name_3_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(backend_libs__name_mangle__output_proc_label_no_prefix_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module1)
	MR_init_entry1(fn__ll_backend__layout_out__label_vars_to_type_1_0);
	MR_init_label1(fn__ll_backend__layout_out__label_vars_to_type_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__layout_out__label_vars_to_type_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__label_vars_to_type_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_LabelLayout", 14);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__label_vars_to_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_LabelLayoutNoVarInfo", 23);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module2)
	MR_init_entry1(fn__ll_backend__layout_out__proc_layout_kind_to_type_1_0);
	MR_init_label2(fn__ll_backend__layout_out__proc_layout_kind_to_type_1_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__layout_out__proc_layout_kind_to_type_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__proc_layout_kind_to_type_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_ProcLayout_Traversal", 23);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__proc_layout_kind_to_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__proc_layout_kind_to_type_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_ProcLayoutUser", 17);
	MR_proceed();
	}
MR_def_label(fn__ll_backend__layout_out__proc_layout_kind_to_type_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_ProcLayoutUCI", 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module3)
	MR_init_entry1(ll_backend__layout_out__output_layout_name_storage_type_name_4_0);
	MR_init_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,4,5,6,7,10,13,14,17)
	MR_init_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,18,19,25,24,27,28,29,32)
	MR_init_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,35,36,39,40,41,44,45,46)
	MR_init_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,49,50,51,54,57,58,60,64)
	MR_init_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,67,68,71,72,75,76,79,80)
	MR_init_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,83,84,87,88,89,90,91,93)
	MR_init_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,94,97,98,101,102,105,106,109)
	MR_init_label8(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,110,113,114,117,118,121,124,127)
	MR_init_label4(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,128,130,131,132)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__layout_out__output_layout_name_storage_type_name_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i17));
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("static const ", 13);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i5);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__layout_out__label_vars_to_type_1_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i6);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i7);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i128);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const struct MR_UserEvent_Struct ", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i128);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const MR_HLDSVarNum ", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i14);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i18) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i39) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i44) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i49) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i54) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i57) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i64) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i67) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i71) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i75) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i79) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i83) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i87) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i93) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i97) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i101) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i105) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i109) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i113) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i117) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i121) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i124) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i127) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i130));
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 15);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i19);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 14);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i19);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("static ", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i25);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("extern ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i25);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("const ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i27);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("const ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i27);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__layout_out__proc_layout_kind_to_type_1_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i28);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i29);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i128);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static MR_STATIC_CODE_CONST MR_ExecTrace\n\t", 42);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i128);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const MR_LabelLayout *", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i36);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i40);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_uint_least16_t ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i41);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i45);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_uint_least32_t ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i46);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i50);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_uint_least8_t ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i51);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const MR_TableIoDecl ", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i128);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("static const ", 13);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i58);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i60);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_UserClosureId\n", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i128);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_UCIClosureId\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i128);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const MR_ModuleFileLayout ", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i128);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const MR_int_least16_t ", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i68);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const MR_LabelLayout *", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i72);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const char ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i76);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const MR_ModuleFileLayout *", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i80);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const MR_ProcLayout *", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i84);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("static MR_Unsigned ", 19);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i88);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i89);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i90);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i91);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const char ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i94);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const char * ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i98);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static MR_SynthAttr ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i102);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static MR_uint_least16_t ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i106);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static MR_uint_least16_t ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i110);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static MR_int_least16_t ", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i114);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static MR_UserEventSpec ", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i118);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const MR_ModuleCommonLayout ", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i128);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const MR_ModuleLayout ", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i128);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static MR_ProcStatic ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i128);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__layout_out__output_layout_name_3_0);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("static const MR_CallSiteStatic ", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i131);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_storage_type_name_4_0_i132);
MR_def_label(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module4)
	MR_init_entry1(fn__ll_backend__layout_out__trace_port_to_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__layout_out__trace_port_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__decl_set_is_member_2_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module5)
	MR_init_entry1(ll_backend__layout_out__output_layout_decl_5_0);
	MR_init_label4(ll_backend__layout_out__output_layout_decl_5_0,3,2,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_layout_decl_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr3 = MR_r1;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_is_member_2_0,
		ll_backend__layout_out__output_layout_decl_5_0_i3);
MR_def_label(ll_backend__layout_out__output_layout_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_decl_5_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__layout_out__output_layout_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_layout_decl_5_0_i5);
MR_def_label(ll_backend__layout_out__output_layout_decl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_decl_5_0_i6);
MR_def_label(ll_backend__layout_out__output_layout_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__output_data_addr_3_0);
MR_decl_entry(ll_backend__llds_out__output_rval_3_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module6)
	MR_init_entry1(ll_backend__layout_out__output_rval_as_addr_3_0);
	MR_init_label5(ll_backend__layout_out__output_rval_as_addr_3_0,2,62,15,61,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_rval_as_addr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_as_addr_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_as_addr_3_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_as_addr_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const(" 0", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ll_backend__layout_out__output_rval_as_addr_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_as_addr_3_0_i61);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_as_addr_3_0_i61);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_as_addr_3_0_i61);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_as_addr_3_0_i62);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_as_addr_3_0_i62);
	}
	MR_np_tailcall_ent(ll_backend__llds_out__output_data_addr_3_0);
	}
MR_def_label(ll_backend__layout_out__output_rval_as_addr_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_rval_as_addr_3_0_i15);
MR_def_label(ll_backend__layout_out__output_rval_as_addr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__llds_out__output_data_addr_3_0);
MR_def_label(ll_backend__layout_out__output_rval_as_addr_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_rval_as_addr_3_0_i18);
MR_def_label(ll_backend__layout_out__output_rval_as_addr_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__llds_out__output_rval_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module7)
	MR_init_entry1(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0);
	MR_init_label8(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,27,28,29,79,5,6,15,19)
	MR_init_label3(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,11,22,80)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i79);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i80);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i27);
MR_def_label(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i28);
MR_def_label(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i29);
MR_def_label(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i5);
MR_def_label(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_sv(1), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i6);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const(" 0", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_sv(1), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i11);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i11);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i15);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i15);
	}
	MR_r1 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__llds_out__output_data_addr_3_0);
	}
MR_def_label(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i19);
MR_def_label(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__llds_out__output_data_addr_3_0);
MR_def_label(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_rval_or_numpair_or_none_3_0_i22);
MR_def_label(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__llds_out__output_rval_3_0);
MR_def_label(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_list_5_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(ll_backend__llds_out__output_rval_decls_5_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module8)
	MR_init_entry1(ll_backend__layout_out__output_label_layout_data_defn_13_0);
	MR_init_label8(ll_backend__layout_out__output_label_layout_data_defn_13_0,2,4,5,6,7,8,9,10)
	MR_init_label8(ll_backend__layout_out__output_label_layout_data_defn_13_0,11,12,13,14,15,16,17,18)
	MR_init_label8(ll_backend__layout_out__output_label_layout_data_defn_13_0,3,20,22,19,25,24,26,27)
	MR_init_label8(ll_backend__layout_out__output_label_layout_data_defn_13_0,28,40,29,53,54,55,56,57)
	MR_init_label8(ll_backend__layout_out__output_label_layout_data_defn_13_0,58,59,60,61,62,64,66,67)
	MR_init_label8(ll_backend__layout_out__output_label_layout_data_defn_13_0,68,69,70,72,71,108,76,77)
	MR_init_label4(ll_backend__layout_out__output_label_layout_data_defn_13_0,78,79,80,82)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_label_layout_data_defn_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_r1 = MR_r3;
	MR_r2 = MR_r10;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_decl_5_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i2);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i4);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i3);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_sv(11) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tempr4 = MR_sv(7);
	MR_tempr5 = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 2);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i5);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i6);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i7);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(io__write_list_5_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i8);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i9);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i10);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i11);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i12);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i13);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n(MR_LongLval *) ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i14);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__layout_out__output_rval_as_addr_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i15);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i16);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i17);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i18);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_U", 2);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i20);
	}
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i19);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_sv(4), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i22);
	}
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i19);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("T", 1);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_DEF_LLNVI", 12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i25);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = (MR_Integer) 1;
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i55);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__output_rval_decls_5_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i26);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__llds_out__output_rval_decls_5_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i27);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__llds_out__output_rval_decls_5_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i28);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_ctfield(3, MR_sv(9), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	MR_tempr3 = MR_ctfield(3, MR_sv(10), 1);
	MR_r4 = MR_tempr3;
	if (MR_RTAGS_TESTR(MR_tempr3,3,4)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	MR_r5 = MR_ctfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	MR_tempr4 = MR_ctfield(3, MR_tempr3, 1);
	MR_r5 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	MR_tempr5 = MR_ctfield(0, MR_tempr4, 1);
	MR_r4 = MR_tempr5;
	if (MR_PTAG_TESTR(MR_tempr5,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	MR_r5 = MR_ctfield(0, MR_tempr5, 1);
	MR_r6 = MR_ctfield(0, MR_tempr5, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r7 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_sv(11),3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i40);
	}
	MR_tempr1 = MR_ctfield(3, MR_sv(11), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i40);
	}
	MR_tempr6 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i40);
	}
	MR_tempr6 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr6,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i40);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i40);
	}
	MR_tag_alloc_heap(MR_tempr6, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr6, 0) = MR_r7;
	MR_tfield(2, MR_tempr6, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr7, 2, (MR_Integer) 2);
	MR_sv(9) = MR_tempr7;
	MR_tfield(2, MR_tempr7, 0) = MR_r6;
	MR_tfield(2, MR_tempr7, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr8, 2, (MR_Integer) 2);
	MR_sv(10) = MR_tempr8;
	MR_tfield(2, MR_tempr8, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(2, MR_tempr8, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("XCCC", 4);
	MR_sv(7) = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i53);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(11),3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_sv(11), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i29);
	}
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r7;
	MR_tfield(2, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_sv(9) = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_r6;
	MR_tfield(2, MR_tempr3, 1) = MR_r5;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("XCC0", 4);
	MR_sv(7) = MR_tempr1;
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i53);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_sv(9), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(9), 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_sv(10), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(10), 0) = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i53);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_DEF_LL", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i54);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_sv(4) = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i55);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i56);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i57);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i58);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_proc_label_no_prefix_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i59);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i60);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i61);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i62);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i64);
	}
	MR_r1 = (MR_Word) MR_string_const("NONE", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i67);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(fn__ll_backend__layout_out__trace_port_to_string_1_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i66);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i67);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i68);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i69);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i70);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i72);
	}
	MR_r1 = (MR_Word) MR_string_const("0", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i71);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(6), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i71);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_data_defn_13_0_i76);
	}
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i82);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(7), 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i77);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i78);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i79);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i80);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__layout_out__output_rval_or_numpair_or_none_3_0,
		ll_backend__layout_out__output_label_layout_data_defn_13_0_i108);
MR_def_label(ll_backend__layout_out__output_label_layout_data_defn_13_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(11);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module9)
	MR_init_entry1(fn__ll_backend__layout_out__proc_label_user_or_uci_1_0);
	MR_init_label1(fn__ll_backend__layout_out__proc_label_user_or_uci_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__layout_out__proc_label_user_or_uci_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__proc_label_user_or_uci_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__proc_label_user_or_uci_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module10)
	MR_init_entry1(fn__ll_backend__layout_out__maybe_proc_layout_and_more_kind_2_0);
	MR_init_label2(fn__ll_backend__layout_out__maybe_proc_layout_and_more_kind_2_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__layout_out__maybe_proc_layout_and_more_kind_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__maybe_proc_layout_and_more_kind_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__maybe_proc_layout_and_more_kind_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__maybe_proc_layout_and_more_kind_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__maybe_proc_layout_and_more_kind_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__output_code_addr_3_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module11)
	MR_init_entry1(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0);
	MR_init_label8(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,2,3,4,5,7,9,10,12)
	MR_init_label5(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,14,15,16,17,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i2);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i3);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i4);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i5);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i9);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_sv(1), 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__output_code_addr_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i9);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n{ ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i10);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i12);
	}
	MR_r1 = (MR_Integer) -1;
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i14);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i14);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" },\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i15);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i16);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i17);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, (MR_Integer) MR_sv(4));
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_start_5_0_i19);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n},\n", 4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module12)
	MR_init_entry1(ll_backend__layout_out__output_proc_layout_data_defn_end_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_proc_layout_data_defn_end_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__output_code_addr_decls_5_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module13)
	MR_init_entry1(ll_backend__layout_out__output_layout_traversal_decls_5_0);
	MR_init_label1(ll_backend__layout_out__output_layout_traversal_decls_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_layout_traversal_decls_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_traversal_decls_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__layout_out__output_layout_traversal_decls_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(1, MR_r4, 0);
	MR_np_tailcall_ent(ll_backend__llds_out__output_code_addr_decls_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module14)
	MR_init_entry1(ll_backend__layout_out__output_pred_or_func_3_0);
	MR_init_label1(ll_backend__layout_out__output_pred_or_func_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__layout_out__output_pred_or_func_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_pred_or_func_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_PREDICATE", 12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__layout_out__output_pred_or_func_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_FUNCTION", 11);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module15)
	MR_init_entry1(fn__ll_backend__layout_out__ints_to_string_1_0);
	MR_init_label4(fn__ll_backend__layout_out__ints_to_string_1_0,15,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__layout_out__ints_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__ints_to_string_1_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__ints_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__layout_out__ints_to_string_1_0_i4);
MR_def_label(fn__ll_backend__layout_out__ints_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__ll_backend__layout_out__ints_to_string_1_0,
		fn__ll_backend__layout_out__ints_to_string_1_0_i5);
MR_def_label(fn__ll_backend__layout_out__ints_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__layout_out__ints_to_string_1_0_i6);
MR_def_label(fn__ll_backend__layout_out__ints_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__join_list_2_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module16)
	MR_init_entry1(fn__ll_backend__layout_out__pred_transform_name_1_0);
	MR_init_label8(fn__ll_backend__layout_out__pred_transform_name_1_0,4,5,61,7,62,10,63,13)
	MR_init_label8(fn__ll_backend__layout_out__pred_transform_name_1_0,14,16,17,18,20,21,22,24)
	MR_init_label8(fn__ll_backend__layout_out__pred_transform_name_1_0,25,27,28,30,31,33,34,35)
	MR_init_label5(fn__ll_backend__layout_out__pred_transform_name_1_0,36,37,38,40,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__layout_out__pred_transform_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__layout_out__pred_transform_name_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__pred_transform_name_1_0_i61) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__pred_transform_name_1_0_i62) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__pred_transform_name_1_0_i63));
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__pred_transform_name_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("dep_par_conj_", 13);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("table_gen", 9);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i7);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ho", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i10);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("hoproc", 6);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ll_backend__layout_out__pred_transform_name_1_0_i13) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__pred_transform_name_1_0_i16) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__pred_transform_name_1_0_i20) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__pred_transform_name_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__pred_transform_name_1_0_i27) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__pred_transform_name_1_0_i30) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__pred_transform_name_1_0_i33) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__pred_transform_name_1_0_i40));
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i14);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__string__join_list_2_0);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i17);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i18);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ua_", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i21);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i22);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("acc_", 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i25);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("inv_", 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i28);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("tup_", 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i31);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("untup_", 6);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i34);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i35);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__layout_out__ints_to_string_1_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i36);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_args", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i37);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i38);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("retptr_", 7);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__layout_out__pred_transform_name_1_0_i41);
MR_def_label(fn__ll_backend__layout_out__pred_transform_name_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("dnf_", 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_1);
MR_decl_entry(string__replace_all_4_0);
MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module17)
	MR_init_entry1(fn__ll_backend__layout_out__origin_name_2_0);
	MR_init_label8(fn__ll_backend__layout_out__origin_name_2_0,57,7,33,8,10,11,14,30)
	MR_init_label4(fn__ll_backend__layout_out__origin_name_2_0,58,19,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__layout_out__origin_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__layout_out__origin_name_2_0_i30) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__origin_name_2_0_i30) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__origin_name_2_0_i57) MR_AND
		MR_LABEL_AP(fn__ll_backend__layout_out__origin_name_2_0_i14));
MR_def_label(fn__ll_backend__layout_out__origin_name_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_localcall_lab(fn__ll_backend__layout_out__origin_name_2_0,
		fn__ll_backend__layout_out__origin_name_2_0_i7);
MR_def_label(fn__ll_backend__layout_out__origin_name_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__origin_name_2_0_i8);
	}
MR_def_label(fn__ll_backend__layout_out__origin_name_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__ll_backend__layout_out__origin_name_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__layout_out__pred_transform_name_1_0,
		fn__ll_backend__layout_out__origin_name_2_0_i10);
MR_def_label(fn__ll_backend__layout_out__origin_name_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__layout_out__origin_name_2_0_i11);
MR_def_label(fn__ll_backend__layout_out__origin_name_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__layout_out__origin_name_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__origin_name_2_0_i30);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__origin_name_2_0_i30);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__origin_name_2_0_i58);
	}
	}
MR_def_label(fn__ll_backend__layout_out__origin_name_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__origin_name_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("IntroducedFrom", 14);
	}
	MR_np_call_localret_ent(string__append_3_1,
		fn__ll_backend__layout_out__origin_name_2_0_i19);
MR_def_label(fn__ll_backend__layout_out__origin_name_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__origin_name_2_0_i33);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_r3 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__replace_all_4_0,
		fn__ll_backend__layout_out__origin_name_2_0_i21);
MR_def_label(fn__ll_backend__layout_out__origin_name_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__origin_name_2_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
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
	MR_r1 = (MR_Word) MR_string_const("lambda%d_%s_%d", 14);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__ll_backend__layout_out__origin_name_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("lambda_%s_%d", 12);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(string__format_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__output_quoted_string_3_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module18)
	MR_init_entry1(ll_backend__layout_out__quote_and_write_string_3_0);
	MR_init_label2(ll_backend__layout_out__quote_and_write_string_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__quote_and_write_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__quote_and_write_string_3_0_i2);
MR_def_label(ll_backend__layout_out__quote_and_write_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__layout_out__quote_and_write_string_3_0_i3);
MR_def_label(ll_backend__layout_out__quote_and_write_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(fn__hlds__special_pred__special_pred_name_2_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module19)
	MR_init_entry1(ll_backend__layout_out__output_proc_id_4_0);
	MR_init_label8(ll_backend__layout_out__output_proc_id_4_0,4,6,8,9,10,11,12,13)
	MR_init_label8(ll_backend__layout_out__output_proc_id_4_0,14,15,16,17,18,19,20,21)
	MR_init_label8(ll_backend__layout_out__output_proc_id_4_0,22,23,3,26,27,28,29,30)
	MR_init_label8(ll_backend__layout_out__output_proc_id_4_0,31,32,33,34,35,36,37,38)
	MR_init_label2(ll_backend__layout_out__output_proc_id_4_0,39,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_proc_id_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_id_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__ll_backend__layout_out__origin_name_2_0,
		ll_backend__layout_out__output_proc_id_4_0_i4);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_id_4_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_PREDICATE", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i8);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_FUNCTION", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i8);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i9);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		ll_backend__layout_out__output_proc_id_4_0_i10);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i11);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i12);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i13);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i14);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		ll_backend__layout_out__output_proc_id_4_0_i15);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i16);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i17);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i18);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i19);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__layout_out__quote_and_write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i20);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i21);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i22);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i23);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i40);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(1, MR_tempr3, 4);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 5);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__special_pred__special_pred_name_2_0,
		ll_backend__layout_out__output_proc_id_4_0_i26);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__layout_out__origin_name_2_0,
		ll_backend__layout_out__output_proc_id_4_0_i27);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__layout_out__quote_and_write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i28);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i29);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		ll_backend__layout_out__output_proc_id_4_0_i30);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__layout_out__quote_and_write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i31);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i32);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		ll_backend__layout_out__output_proc_id_4_0_i33);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__layout_out__quote_and_write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i34);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i35);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__quote_and_write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i36);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i37);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i38);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i39);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_proc_id_4_0_i40);
MR_def_label(ll_backend__layout_out__output_proc_id_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module20)
	MR_init_entry1(ll_backend__layout_out__output_layout_proc_id_group_4_0);
	MR_init_label2(ll_backend__layout_out__output_layout_proc_id_group_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_layout_proc_id_group_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_proc_id_group_4_0_i2);
MR_def_label(ll_backend__layout_out__output_layout_proc_id_group_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__layout_out__output_proc_id_4_0,
		ll_backend__layout_out__output_layout_proc_id_group_4_0_i3);
MR_def_label(ll_backend__layout_out__output_layout_proc_id_group_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("},\n", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module21)
	MR_init_entry1(ll_backend__layout_out__output_layout_no_proc_id_group_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_layout_no_proc_id_group_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("-1\n", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module22)
	MR_init_entry1(ll_backend__layout_out__groupable_labels_7_0);
	MR_init_label5(ll_backend__layout_out__groupable_labels_7_0,40,3,9,8,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__groupable_labels_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__layout_out__groupable_labels_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__groupable_labels_7_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__layout_out__groupable_labels_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__layout_out__groupable_labels_7_0_i4);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__groupable_labels_7_0_i4);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__groupable_labels_7_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		ll_backend__layout_out__groupable_labels_7_0_i9);
MR_def_label(ll_backend__layout_out__groupable_labels_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__layout_out__groupable_labels_7_0_i8);
	}
	if (MR_INT_GE(MR_sv(4),9)) {
		MR_GOTO_LAB(ll_backend__layout_out__groupable_labels_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__layout_out__groupable_labels_7_0_i40);
	}
MR_def_label(ll_backend__layout_out__groupable_labels_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__layout_out__groupable_labels_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("layout_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("groupable_labels: not label layout", 34);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module23)
	MR_init_entry1(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0);
	MR_init_label8(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,38,8,9,10,11,12,13,14)
	MR_init_label5(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,15,16,17,4,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i41);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i4);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i4);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ll_backend__layout_out__groupable_labels_7_0,
		ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i8);
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i9);
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i10);
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i11);
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i12);
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i13);
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_proc_label_no_prefix_3_0,
		ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i14);
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i15);
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(",", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_np_call_localret_ent(io__write_list_5_0,
		ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i16);
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i17);
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0_i38);
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("layout_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("output_label_layout_addrs_in_vector: not label layout", 53);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__llds__get_defining_module_name_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_addr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__type_ctor_info_decl_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__type_ctor_info_decl_set_0;
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(ll_backend__layout_out_module24)
	MR_init_entry1(ll_backend__layout_out__output_layout_exec_trace_decls_6_0);
	MR_init_label8(ll_backend__layout_out__output_layout_exec_trace_decls_6_0,2,3,4,5,6,14,8,10)
	MR_init_label1(ll_backend__layout_out__output_layout_exec_trace_decls_6_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_layout_exec_trace_decls_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_r3;
	}
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_layout_exec_trace_decls_6_0_i2);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_decls_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__llds__get_defining_module_name_1_0,
		ll_backend__layout_out__output_layout_exec_trace_decls_6_0_i3);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_decls_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("MR_DECL_LABEL_LAYOUT", 20);
	MR_np_call_localret_ent(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,
		ll_backend__layout_out__output_layout_exec_trace_decls_6_0_i4);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_decls_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, data_addr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out, decl_id);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__layout_out__output_layout_exec_trace_decls_6_0_i5);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_decls_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out, decl_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out, decl_set);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__layout_out__output_layout_exec_trace_decls_6_0_i6);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_decls_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_exec_trace_decls_6_0_i8);
	}
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_decls_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_decl_5_0,
		ll_backend__layout_out__output_layout_exec_trace_decls_6_0_i10);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_decls_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_ctfield(1, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_decl_5_0,
		ll_backend__layout_out__output_layout_exec_trace_decls_6_0_i14);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_decls_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_exec_trace_decls_6_0_i11);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_sv(3), 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ll_backend__llds_out__output_data_addr_decls_5_0);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_decls_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module25)
	MR_init_entry1(ll_backend__layout_out__output_bytecodes_6_0);
	MR_init_label7(ll_backend__layout_out__output_bytecodes_6_0,26,3,5,6,9,7,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_bytecodes_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__layout_out__output_bytecodes_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_bytecodes_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__layout_out__output_bytecodes_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_bytecodes_6_0_i30);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_bytecodes_6_0_i5);
MR_def_label(ll_backend__layout_out__output_bytecodes_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(io__write_char_3_0,
		ll_backend__layout_out__output_bytecodes_6_0_i6);
MR_def_label(ll_backend__layout_out__output_bytecodes_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) MR_tempr1 % (MR_Integer) 16);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_bytecodes_6_0_i7);
	}
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		ll_backend__layout_out__output_bytecodes_6_0_i9);
MR_def_label(ll_backend__layout_out__output_bytecodes_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__layout_out__output_bytecodes_6_0_i26);
MR_def_label(ll_backend__layout_out__output_bytecodes_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__layout_out__output_bytecodes_6_0_i26);
MR_def_label(ll_backend__layout_out__output_bytecodes_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module26)
	MR_init_entry1(ll_backend__layout_out__output_bytecodes_driver_3_0);
	MR_init_label3(ll_backend__layout_out__output_bytecodes_driver_3_0,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_bytecodes_driver_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(ll_backend__layout_out__output_bytecodes_driver_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_bytecodes_driver_3_0_i12);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 256;
	MR_np_call_localret_ent(ll_backend__layout_out__output_bytecodes_6_0,
		ll_backend__layout_out__output_bytecodes_driver_3_0_i11);
MR_def_label(ll_backend__layout_out__output_bytecodes_driver_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(ll_backend__layout_out__output_bytecodes_driver_3_0_i10);
MR_def_label(ll_backend__layout_out__output_bytecodes_driver_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module27)
	MR_init_entry1(ll_backend__layout_out__write_maybe_slot_num_3_0);
	MR_init_label1(ll_backend__layout_out__write_maybe_slot_num_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__write_maybe_slot_num_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__write_maybe_slot_num_3_0_i3);
	}
	MR_r1 = (MR_Integer) -1;
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ll_backend__layout_out__write_maybe_slot_num_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module28)
	MR_init_entry1(fn__ll_backend__layout_out__eval_method_to_c_string_1_0);
	MR_init_label8(fn__ll_backend__layout_out__eval_method_to_c_string_1_0,15,16,11,13,14,4,8,6)
	MR_init_label1(fn__ll_backend__layout_out__eval_method_to_c_string_1_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__layout_out__eval_method_to_c_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	MR_r2 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__eval_method_to_c_string_1_0_i4);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__eval_method_to_c_string_1_0_i11);
	}
	MR_r2 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__eval_method_to_c_string_1_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_EVAL_METHOD_NORMAL", 21);
	MR_proceed();
	}
MR_def_label(fn__ll_backend__layout_out__eval_method_to_c_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__eval_method_to_c_string_1_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_EVAL_METHOD_LOOP_CHECK", 25);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__eval_method_to_c_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_EVAL_METHOD_MEMO", 19);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__eval_method_to_c_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__eval_method_to_c_string_1_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_EVAL_METHOD_MINIMAL_STACK_COPY", 33);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__eval_method_to_c_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__eval_method_to_c_string_1_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_EVAL_METHOD_MINIMAL_OWN_STACKS_CONSUMER", 42);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__eval_method_to_c_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_EVAL_METHOD_MINIMAL_OWN_STACKS_GENERATOR", 43);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__eval_method_to_c_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__eval_method_to_c_string_1_0_i6);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__eval_method_to_c_string_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_EVAL_METHOD_TABLE_IO_UNITIZE_DECL", 36);
	MR_proceed();
	}
MR_def_label(fn__ll_backend__layout_out__eval_method_to_c_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_EVAL_METHOD_TABLE_IO_DECL", 28);
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__eval_method_to_c_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__eval_method_to_c_string_1_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_EVAL_METHOD_TABLE_IO_UNITIZE", 31);
	MR_proceed();
	}
MR_def_label(fn__ll_backend__layout_out__eval_method_to_c_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_EVAL_METHOD_TABLE_IO", 23);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__output_label_4_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__libs__trace_params__trace_level_rep_1_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module29)
	MR_init_entry1(ll_backend__layout_out__output_layout_exec_trace_6_0);
	MR_init_label8(ll_backend__layout_out__output_layout_exec_trace_6_0,3,4,5,6,7,8,9,10)
	MR_init_label8(ll_backend__layout_out__output_layout_exec_trace_6_0,12,14,15,16,17,18,19,20)
	MR_init_label8(ll_backend__layout_out__output_layout_exec_trace_6_0,21,23,25,26,27,28,29,30)
	MR_init_label8(ll_backend__layout_out__output_layout_exec_trace_6_0,32,34,35,36,37,38,39,40)
	MR_init_label8(ll_backend__layout_out__output_layout_exec_trace_6_0,41,42,43,44,45,46,47,48)
	MR_init_label8(ll_backend__layout_out__output_layout_exec_trace_6_0,49,50,51,52,53,54,55,56)
	MR_init_label8(ll_backend__layout_out__output_layout_exec_trace_6_0,57,58,59,60,61,62,63,64)
	MR_init_label1(ll_backend__layout_out__output_layout_exec_trace_6_0,65)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_layout_exec_trace_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_exec_trace_6_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr4;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(9) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(10) = MR_ctfield(0, MR_tempr3, 9);
	MR_sv(11) = MR_ctfield(0, MR_tempr3, 10);
	MR_sv(12) = MR_ctfield(0, MR_tempr3, 11);
	MR_sv(13) = MR_ctfield(0, MR_tempr3, 12);
	MR_sv(14) = MR_ctfield(0, MR_tempr3, 13);
	MR_sv(15) = MR_ctfield(0, MR_tempr3, 14);
	MR_sv(16) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i9);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 11);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 12);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 13);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 14);
	MR_sv(16) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i4);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i5);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i6);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("MR_LABEL_LAYOUT", 15);
	MR_np_call_localret_ent(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i7);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i8);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i9);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i10);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_exec_trace_6_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL,\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i16);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("MR_LABEL_LAYOUT_REF(", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i14);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__output_label_4_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i15);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("),\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i16);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(const MR_ModuleLayout *) &", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i17);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i18);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__llds__get_defining_module_name_1_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i19);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i20);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i21);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_exec_trace_6_0_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL,\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i26);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i25);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i26);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, data_addr);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i27);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i28);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i29);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{ ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i30);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_exec_trace_6_0_i32);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i35);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(4), 0);
	MR_r1 = (MR_Word) MR_string_const("(const void *) &", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i34);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__llds_out__output_data_addr_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i35);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" },\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i36);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i37);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i38);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i39);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i40);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i41);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i42);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i43);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i44);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i45);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i46);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i47);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__layout_out__write_maybe_slot_num_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i48);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i49);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__layout_out__write_maybe_slot_num_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i50);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i51);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__layout_out__write_maybe_slot_num_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i52);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i53);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__layout_out__write_maybe_slot_num_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i54);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i55);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__ll_backend__layout_out__eval_method_to_c_string_1_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i56);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i57);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i58);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__layout_out__write_maybe_slot_num_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i59);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i60);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_rep_1_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i61);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i62);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i63);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i64);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_exec_trace_6_0_i65);
MR_def_label(ll_backend__layout_out__output_layout_exec_trace_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module30)
	MR_init_entry1(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0);
	MR_init_label6(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0,2,3,4,6,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_head_var_nums_6_0_i2);
MR_def_label(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_proc_layout_head_var_nums_6_0_i3);
MR_def_label(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_head_var_nums_6_0_i4);
MR_def_label(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("0\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_head_var_nums_6_0_i8);
MR_def_label(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_0,
		ll_backend__layout_out__output_proc_layout_head_var_nums_6_0_i8);
MR_def_label(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_head_var_nums_6_0_i9);
MR_def_label(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module31)
	MR_init_entry1(ll_backend__layout_out__output_proc_layout_var_names_7_0);
	MR_init_label8(ll_backend__layout_out__output_proc_layout_var_names_7_0,2,3,4,5,6,8,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_proc_layout_var_names_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__layout_out__output_proc_layout_var_names_7_0_i2);
MR_def_label(ll_backend__layout_out__output_proc_layout_var_names_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__layout_out__IntroducedFrom__pred__output_proc_layout_var_names__1295__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("layout_out.m", 12);
	MR_r3 = (MR_Word) MR_string_const("output_proc_layout_var_names: VarNameCount != MaxVarNum", 55);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__layout_out__output_proc_layout_var_names_7_0_i3);
MR_def_label(ll_backend__layout_out__output_proc_layout_var_names_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_var_names_7_0_i4);
MR_def_label(ll_backend__layout_out__output_proc_layout_var_names_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_proc_layout_var_names_7_0_i5);
MR_def_label(ll_backend__layout_out__output_proc_layout_var_names_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_var_names_7_0_i6);
MR_def_label(ll_backend__layout_out__output_proc_layout_var_names_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_var_names_7_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("0\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_var_names_7_0_i10);
MR_def_label(ll_backend__layout_out__output_proc_layout_var_names_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_0,
		ll_backend__layout_out__output_proc_layout_var_names_7_0_i10);
MR_def_label(ll_backend__layout_out__output_proc_layout_var_names_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_var_names_7_0_i11);
MR_def_label(ll_backend__layout_out__output_proc_layout_var_names_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_call_site_static_data_0;
MR_decl_entry(list__foldl2_6_5);

MR_BEGIN_MODULE(ll_backend__layout_out_module32)
	MR_init_entry1(ll_backend__layout_out__output_call_site_static_array_6_0);
	MR_init_label5(ll_backend__layout_out__output_call_site_static_array_6_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_call_site_static_array_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 25;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_array_6_0_i2);
MR_def_label(ll_backend__layout_out__output_call_site_static_array_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_call_site_static_array_6_0_i3);
MR_def_label(ll_backend__layout_out__output_call_site_static_array_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_array_6_0_i4);
MR_def_label(ll_backend__layout_out__output_call_site_static_array_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__foldl2_6_5,
		ll_backend__layout_out__output_call_site_static_array_6_0_i5);
MR_def_label(ll_backend__layout_out__output_call_site_static_array_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_array_6_0_i6);
MR_def_label(ll_backend__layout_out__output_call_site_static_array_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module33)
	MR_init_entry1(ll_backend__layout_out__output_proc_static_data_defn_6_0);
	MR_init_label8(ll_backend__layout_out__output_proc_static_data_defn_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__layout_out__output_proc_static_data_defn_6_0,10,11,12,14,16,17,18,19)
	MR_init_label8(ll_backend__layout_out__output_proc_static_data_defn_6_0,20,21,22,23,24,25,26,27)
	MR_init_label4(ll_backend__layout_out__output_proc_static_data_defn_6_0,28,29,30,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_proc_static_data_defn_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out, decl_set);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__foldl2_6_5,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i2);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__layout_out__output_call_site_static_array_6_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i3);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 24;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i4);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i5);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i6);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i7);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i8);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i9);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i10);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i11);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i12);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_static_data_defn_6_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_FALSE", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i16);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_TRUE", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i16);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i17);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i18);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i19);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i20);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 25;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i21);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n#ifdef MR_USE_ACTIVATION_COUNTS\n", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i22);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i23);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#endif\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i24);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL,\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i25);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i26);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i27);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i28);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i29);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i30);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_static_data_defn_6_0_i31);
MR_def_label(ll_backend__layout_out__output_proc_static_data_defn_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module34)
	MR_init_entry1(ll_backend__layout_out__output_proc_layout_data_defn_7_0);
	MR_init_label8(ll_backend__layout_out__output_proc_layout_data_defn_7_0,2,3,4,7,8,9,6,11)
	MR_init_label8(ll_backend__layout_out__output_proc_layout_data_defn_7_0,12,10,15,16,17,18,13,21)
	MR_init_label8(ll_backend__layout_out__output_proc_layout_data_defn_7_0,22,23,24,25,26,19,27,28)
	MR_init_label8(ll_backend__layout_out__output_proc_layout_data_defn_7_0,29,31,33,34,30,37,39,40)
	MR_init_label7(ll_backend__layout_out__output_proc_layout_data_defn_7_0,36,43,45,46,47,48,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_proc_layout_data_defn_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_traversal_decls_5_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i2);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i3);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__ll_backend__layout_out__maybe_proc_layout_and_more_kind_2_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i4);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_data_defn_7_0_i6);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i7);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_no_proc_id_group_2_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i8);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__layout_out__output_proc_layout_data_defn_end_2_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i9);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_data_defn_7_0_i11);
	}
	MR_tempr2 = MR_tempr3;
	MR_r5 = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_ctfield(1, MR_tempr2, 3);
	MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_data_defn_7_0_i10);
	}
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_sv(5);
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_proc_static_data_defn_6_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i12);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_data_defn_7_0_i13);
	}
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_ctfield(1, MR_sv(6), 0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(9), 3);
	MR_np_call_localret_ent(ll_backend__layout_out__output_proc_layout_head_var_nums_6_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i15);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	MR_r3 = MR_ctfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_proc_layout_var_names_7_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i16);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_exec_trace_decls_6_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i17);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_exec_trace_6_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i18);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_data_defn_7_0_i19);
	}
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i21);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i22);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i23);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 256;
	MR_np_call_localret_ent(ll_backend__layout_out__output_bytecodes_6_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i24);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__layout_out__output_bytecodes_driver_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i25);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i26);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_decl_5_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i27);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__layout_out__output_proc_layout_data_defn_start_5_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i28);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_sv(1), 13);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_proc_id_group_4_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i29);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_data_defn_7_0_i31);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL,\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i30);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i33);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i34);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i30);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_data_defn_7_0_i37);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL,\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i36);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i39);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 24;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i40);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i36);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_data_defn_7_0_i43);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL,\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i46);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i45);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i46);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i47);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i48);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__layout_out__output_proc_layout_data_defn_end_2_0,
		ll_backend__layout_out__output_proc_layout_data_defn_7_0_i49);
MR_def_label(ll_backend__layout_out__output_proc_layout_data_defn_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module35)
	MR_init_entry1(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0);
	MR_init_label8(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,10,11,12,13,14,15,16,17)
	MR_init_label4(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,18,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i2);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i3);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n{\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i4);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__layout_out__output_proc_id_4_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i5);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("},\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i6);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i7);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i8);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i9);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i10);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i11);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i12);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i13);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i14);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i15);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i16);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i17);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i18);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i19);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i20);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_closure_proc_id_data_defn_12_0_i21);
MR_def_label(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__mod_2_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(string__unsafe_index_3_0);
MR_decl_entry(backend_libs__c_util__output_quoted_char_3_0);
MR_decl_entry(fn__char__det_from_int_1_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module36)
	MR_init_entry1(ll_backend__layout_out__output_module_string_table_chars_5_0);
	MR_init_label8(ll_backend__layout_out__output_module_string_table_chars_5_0,28,4,3,8,9,10,11,12)
	MR_init_label4(ll_backend__layout_out__output_module_string_table_chars_5_0,2,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_module_string_table_chars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__layout_out__output_module_string_table_chars_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_module_string_table_chars_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__int__mod_2_0,
		ll_backend__layout_out__output_module_string_table_chars_5_0_i4);
MR_def_label(ll_backend__layout_out__output_module_string_table_chars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_module_string_table_chars_5_0_i3);
	}
	MR_np_call_localret_ent(io__nl_2_0,
		ll_backend__layout_out__output_module_string_table_chars_5_0_i3);
MR_def_label(ll_backend__layout_out__output_module_string_table_chars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		ll_backend__layout_out__output_module_string_table_chars_5_0_i8);
MR_def_label(ll_backend__layout_out__output_module_string_table_chars_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 39;
	MR_np_call_localret_ent(io__write_char_3_0,
		ll_backend__layout_out__output_module_string_table_chars_5_0_i9);
MR_def_label(ll_backend__layout_out__output_module_string_table_chars_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_char_3_0,
		ll_backend__layout_out__output_module_string_table_chars_5_0_i10);
MR_def_label(ll_backend__layout_out__output_module_string_table_chars_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 39;
	MR_np_call_localret_ent(io__write_char_3_0,
		ll_backend__layout_out__output_module_string_table_chars_5_0_i11);
MR_def_label(ll_backend__layout_out__output_module_string_table_chars_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_string_table_chars_5_0_i12);
MR_def_label(ll_backend__layout_out__output_module_string_table_chars_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__layout_out__output_module_string_table_chars_5_0_i28);
MR_def_label(ll_backend__layout_out__output_module_string_table_chars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 39;
	MR_np_call_localret_ent(io__write_char_3_0,
		ll_backend__layout_out__output_module_string_table_chars_5_0_i14);
MR_def_label(ll_backend__layout_out__output_module_string_table_chars_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__char__det_from_int_1_0,
		ll_backend__layout_out__output_module_string_table_chars_5_0_i15);
MR_def_label(ll_backend__layout_out__output_module_string_table_chars_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_char_3_0,
		ll_backend__layout_out__output_module_string_table_chars_5_0_i16);
MR_def_label(ll_backend__layout_out__output_module_string_table_chars_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 39;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__length_1_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module37)
	MR_init_entry1(ll_backend__layout_out__output_module_string_table_strings_4_0);
	MR_init_label6(ll_backend__layout_out__output_module_string_table_strings_4_0,15,4,3,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_module_string_table_strings_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__layout_out__output_module_string_table_strings_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_module_string_table_strings_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__string__length_1_0,
		ll_backend__layout_out__output_module_string_table_strings_4_0_i4);
MR_def_label(ll_backend__layout_out__output_module_string_table_strings_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__layout_out__output_module_string_table_chars_5_0);
	}
MR_def_label(ll_backend__layout_out__output_module_string_table_strings_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__length_1_0,
		ll_backend__layout_out__output_module_string_table_strings_4_0_i6);
MR_def_label(ll_backend__layout_out__output_module_string_table_strings_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_module_string_table_chars_5_0,
		ll_backend__layout_out__output_module_string_table_strings_4_0_i7);
MR_def_label(ll_backend__layout_out__output_module_string_table_strings_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_string_table_strings_4_0_i8);
MR_def_label(ll_backend__layout_out__output_module_string_table_strings_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__layout_out__output_module_string_table_strings_4_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module38)
	MR_init_entry1(ll_backend__layout_out__output_module_common_layout_data_defn_7_0);
	MR_init_label8(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,2,3,4,6,7,8,9,10)
	MR_init_label8(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,11,12,13,14,15,16,17,18)
	MR_init_label5(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,19,20,21,22,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_module_common_layout_data_defn_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tempr2 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i2);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i3);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i4);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__layout_out__output_module_string_table_strings_4_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i7);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_module_string_table_strings_4_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i7);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i8);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i9);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i10);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i11);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i12);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i13);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i14);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i15);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i16);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i17);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i18);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i19);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i20);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i21);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i22);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_common_layout_data_defn_7_0_i23);
MR_def_label(ll_backend__layout_out__output_module_common_layout_data_defn_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_event_spec_0;

MR_BEGIN_MODULE(ll_backend__layout_out_module39)
	MR_init_entry1(ll_backend__layout_out__output_event_specs_and_components_7_0);
	MR_init_label6(ll_backend__layout_out__output_event_specs_and_components_7_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_event_specs_and_components_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__layout_out__output_event_spec_components_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out, decl_set);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl2_6_5,
		ll_backend__layout_out__output_event_specs_and_components_7_0_i2);
MR_def_label(ll_backend__layout_out__output_event_specs_and_components_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_event_specs_and_components_7_0_i3);
MR_def_label(ll_backend__layout_out__output_event_specs_and_components_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_event_specs_and_components_7_0_i4);
MR_def_label(ll_backend__layout_out__output_event_specs_and_components_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_specs_and_components_7_0_i5);
MR_def_label(ll_backend__layout_out__output_event_specs_and_components_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__layout_out__output_event_spec_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ll_backend__layout_out__output_event_specs_and_components_7_0_i6);
MR_def_label(ll_backend__layout_out__output_event_specs_and_components_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_specs_and_components_7_0_i7);
MR_def_label(ll_backend__layout_out__output_event_specs_and_components_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module40)
	MR_init_entry1(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0);
	MR_init_label8(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0,2,3,4,5,7,9,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out, decl_set);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl2_6_5,
		ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_i2);
MR_def_label(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_i3);
MR_def_label(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_i4);
MR_def_label(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_i5);
MR_def_label(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_i9);
MR_def_label(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_name);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_0,
		ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_i9);
MR_def_label(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_i10);
MR_def_label(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0_i11);
MR_def_label(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module41)
	MR_init_entry1(ll_backend__layout_out__output_event_set_desc_defn_6_0);
	MR_init_label5(ll_backend__layout_out__output_event_set_desc_defn_6_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_event_set_desc_defn_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_set_desc_defn_6_0_i2);
MR_def_label(ll_backend__layout_out__output_event_set_desc_defn_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_event_set_desc_defn_6_0_i3);
MR_def_label(ll_backend__layout_out__output_event_set_desc_defn_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_set_desc_defn_6_0_i4);
MR_def_label(ll_backend__layout_out__output_event_set_desc_defn_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__layout_out__output_module_string_table_strings_4_0,
		ll_backend__layout_out__output_event_set_desc_defn_6_0_i5);
MR_def_label(ll_backend__layout_out__output_event_set_desc_defn_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_set_desc_defn_6_0_i6);
MR_def_label(ll_backend__layout_out__output_event_set_desc_defn_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module42)
	MR_init_entry1(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0);
	MR_init_label8(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0,2,3,4,5,7,9,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out, decl_set);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,13);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl2_6_5,
		ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_i2);
MR_def_label(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_i3);
MR_def_label(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_i4);
MR_def_label(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_i5);
MR_def_label(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_i9);
MR_def_label(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_name);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_0,
		ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_i9);
MR_def_label(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_i10);
MR_def_label(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_file_layout_vector_data_defn_7_0_i11);
MR_def_label(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module43)
	MR_init_entry1(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0);
	MR_init_label7(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0,2,3,4,6,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0_i2);
MR_def_label(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0_i3);
MR_def_label(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0_i4);
MR_def_label(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("0\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0_i8);
MR_def_label(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,14);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_0,
		ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0_i8);
MR_def_label(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0_i9);
MR_def_label(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0_i10);
MR_def_label(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module44)
	MR_init_entry1(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0);
	MR_init_label7(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0,2,3,4,6,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0_i2);
MR_def_label(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0_i3);
MR_def_label(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0_i4);
MR_def_label(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0_i8);
MR_def_label(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("MR_LABEL_LAYOUT", 15);
	MR_np_call_localret_ent(ll_backend__layout_out__output_label_layout_addrs_in_vector_4_0,
		ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0_i8);
MR_def_label(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0_i9);
MR_def_label(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0_i10);
MR_def_label(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map2_4_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module45)
	MR_init_entry1(ll_backend__layout_out__output_file_layout_data_defn_8_0);
	MR_init_label8(ll_backend__layout_out__output_file_layout_data_defn_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__layout_out__output_file_layout_data_defn_8_0,10,11,12,13,14,15,16,17)
	MR_init_label3(ll_backend__layout_out__output_file_layout_data_defn_8_0,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_file_layout_data_defn_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r4;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, data_addr);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,15);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map2_4_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i2);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, data_addr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out, decl_set);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,16);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(list__foldl2_6_5,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i3);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i4);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__layout_out__output_file_layout_line_number_vector_defn_8_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i5);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__layout_out__output_file_layout_label_layout_vector_defn_8_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i6);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i7);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i8);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i9);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i10);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i11);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i12);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i13);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i14);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i15);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i16);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i17);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i18);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i19);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_file_layout_data_defn_8_0_i20);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defn_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module46)
	MR_init_entry1(ll_backend__layout_out__output_file_layout_data_defns_8_0);
	MR_init_label3(ll_backend__layout_out__output_file_layout_data_defns_8_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_file_layout_data_defns_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_file_layout_data_defns_8_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__layout_out__output_file_layout_data_defns_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r3, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__layout_out__output_file_layout_data_defn_8_0,
		ll_backend__layout_out__output_file_layout_data_defns_8_0_i4);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defns_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__layout_out__output_file_layout_data_defns_8_0,
		ll_backend__layout_out__output_file_layout_data_defns_8_0_i5);
MR_def_label(ll_backend__layout_out__output_file_layout_data_defns_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_file_layout_data_0;

MR_BEGIN_MODULE(ll_backend__layout_out_module47)
	MR_init_entry1(ll_backend__layout_out__output_module_layout_data_defn_12_0);
	MR_init_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0,10,11,12,15,16,17,18,19)
	MR_init_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0,20,21,22,23,24,25,26,27)
	MR_init_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0,28,29,30,31,32,33,34,35)
	MR_init_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0,36,37,38,39,40,14,42,43)
	MR_init_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0,44,45,46,47,48,49,50,51)
	MR_init_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0,52,53,54,55,56,57,58,59)
	MR_init_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0,60,61,62,63,64,65,66,67)
	MR_init_label8(ll_backend__layout_out__output_module_layout_data_defn_12_0,68,69,70,71,72,73,74,75)
	MR_init_label1(ll_backend__layout_out__output_module_layout_data_defn_12_0,76)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_module_layout_data_defn_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 22;
	MR_tempr2 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r9;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_decl_5_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i2);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__layout_out__output_module_layout_proc_vector_defn_7_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i3);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__layout_out__output_file_layout_data_defns_8_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i4);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_file_layout_vector_data_defn_7_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i5);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i6);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i7);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i8);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i9);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_name);
	}
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i10);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, file_layout_data);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i11);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_rep_1_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i12);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_module_layout_data_defn_12_0_i14);
	}
	MR_sv(8) = MR_sv(12);
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i15);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i16);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i17);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i18);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i19);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i20);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i21);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i22);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i23);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i24);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i25);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i26);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i27);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i28);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i29);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i30);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i31);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i32);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i33);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i34);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i35);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i36);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL,\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i37);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL,\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i38);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i39);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0,\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i40);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i75);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(12);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_event_set_desc_defn_6_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i42);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__layout_out__output_event_specs_and_components_7_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i43);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i44);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i45);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i46);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i47);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i48);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i49);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i50);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i51);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i52);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i53);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i54);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i55);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i56);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i57);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i58);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i59);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i60);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i61);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i62);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i63);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i64);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i65);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__layout_out__quote_and_write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i66);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i67);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i68);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i69);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i70);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i71);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i72);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i73);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i74);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i75);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_module_layout_data_defn_12_0_i76);
MR_def_label(ll_backend__layout_out__output_module_layout_data_defn_12_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module48)
	MR_init_entry1(ll_backend__layout_out__output_table_io_decl_9_0);
	MR_init_label8(ll_backend__layout_out__output_table_io_decl_9_0,2,3,4,5,6,7,8,9)
	MR_init_label5(ll_backend__layout_out__output_table_io_decl_9_0,10,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_table_io_decl_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__output_rval_decls_5_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i2);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tempr3 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_decl_5_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i3);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i4);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i5);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n(const MR_ProcLayout *) &", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i6);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i7);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i8);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i9);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n(const MR_PseudoTypeInfo *) ", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i10);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__llds_out__output_rval_3_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i11);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n(const MR_TypeParamLocns *) ", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i12);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__llds_out__output_rval_3_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i13);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_table_io_decl_9_0_i14);
MR_def_label(ll_backend__layout_out__output_table_io_decl_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module49)
	MR_init_entry1(ll_backend__layout_out__output_layout_data_defn_5_0);
	MR_init_label6(ll_backend__layout_out__output_layout_data_defn_5_0,4,6,8,10,11,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__layout_out__output_layout_data_defn_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__layout_out__output_layout_data_defn_5_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_data_defn_5_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_data_defn_5_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_layout_data_defn_5_0_i10));
MR_def_label(ll_backend__layout_out__output_layout_data_defn_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r10 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_r6 = MR_ctfield(0, MR_tempr1, 5);
	MR_r7 = MR_ctfield(0, MR_tempr1, 6);
	MR_r8 = MR_ctfield(0, MR_tempr1, 7);
	MR_r9 = MR_ctfield(0, MR_tempr1, 8);
	MR_np_tailcall_ent(ll_backend__layout_out__output_label_layout_data_defn_13_0);
	}
MR_def_label(ll_backend__layout_out__output_layout_data_defn_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__layout_out__output_proc_layout_data_defn_7_0);
	}
MR_def_label(ll_backend__layout_out__output_layout_data_defn_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r4 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	MR_r3 = MR_ctfield(2, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__layout_out__output_module_common_layout_data_defn_7_0);
	}
MR_def_label(ll_backend__layout_out__output_layout_data_defn_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r11 = MR_ctfield(3, MR_tempr2, 0);
	if (MR_INT_NE(MR_r11,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_data_defn_5_0_i11);
	}
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r9 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r5 = MR_ctfield(3, MR_tempr1, 5);
	MR_r6 = MR_ctfield(3, MR_tempr1, 6);
	MR_r7 = MR_ctfield(3, MR_tempr1, 7);
	MR_r8 = MR_ctfield(3, MR_tempr1, 8);
	MR_np_tailcall_ent(ll_backend__layout_out__output_module_layout_data_defn_12_0);
	}
MR_def_label(ll_backend__layout_out__output_layout_data_defn_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r11,1)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_layout_data_defn_5_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r9 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r5 = MR_ctfield(3, MR_tempr1, 5);
	MR_r6 = MR_ctfield(3, MR_tempr1, 6);
	MR_r7 = MR_ctfield(3, MR_tempr1, 7);
	MR_r8 = MR_ctfield(3, MR_tempr1, 8);
	MR_np_tailcall_ent(ll_backend__layout_out__output_closure_proc_id_data_defn_12_0);
	}
MR_def_label(ll_backend__layout_out__output_layout_data_defn_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r6 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r5 = MR_ctfield(3, MR_tempr1, 5);
	MR_np_tailcall_ent(ll_backend__layout_out__output_table_io_decl_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module50)
	MR_init_entry1(ll_backend__layout_out__output_layout_name_decl_3_0);
	MR_init_label1(ll_backend__layout_out__output_layout_name_decl_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__layout_out__output_layout_name_decl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_layout_name_decl_3_0_i2);
MR_def_label(ll_backend__layout_out__output_layout_name_decl_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module51)
	MR_init_entry1(ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	MR_init_label4(ll_backend__layout_out__output_maybe_layout_name_decl_5_0,3,2,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr3 = MR_r1;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_is_member_2_0,
		ll_backend__layout_out__output_maybe_layout_name_decl_5_0_i3);
MR_def_label(ll_backend__layout_out__output_maybe_layout_name_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_maybe_layout_name_decl_5_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__layout_out__output_maybe_layout_name_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_maybe_layout_name_decl_5_0_i5);
MR_def_label(ll_backend__layout_out__output_maybe_layout_name_decl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_maybe_layout_name_decl_5_0_i6);
MR_def_label(ll_backend__layout_out__output_maybe_layout_name_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__llds_out__decl_set_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module52)
	MR_init_entry1(ll_backend__layout_out__output_maybe_layout_data_decl_5_0);
	MR_init_label8(ll_backend__layout_out__output_maybe_layout_data_decl_5_0,4,6,49,8,10,12,13,14)
	MR_init_label2(ll_backend__layout_out__output_maybe_layout_data_decl_5_0,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__layout_out__output_maybe_layout_data_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__layout_out__output_maybe_layout_data_decl_5_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_maybe_layout_data_decl_5_0_i49) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_maybe_layout_data_decl_5_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_maybe_layout_data_decl_5_0_i14));
MR_def_label(ll_backend__layout_out__output_maybe_layout_data_decl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 8);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_maybe_layout_data_decl_5_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	}
MR_def_label(ll_backend__layout_out__output_maybe_layout_data_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	}
MR_def_label(ll_backend__layout_out__output_maybe_layout_data_decl_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_maybe_layout_data_decl_5_0_i8);
MR_def_label(ll_backend__layout_out__output_maybe_layout_data_decl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_maybe_layout_data_decl_5_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	}
MR_def_label(ll_backend__layout_out__output_maybe_layout_data_decl_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_maybe_layout_data_decl_5_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	}
MR_def_label(ll_backend__layout_out__output_maybe_layout_data_decl_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	}
MR_def_label(ll_backend__layout_out__output_maybe_layout_data_decl_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	}
MR_def_label(ll_backend__layout_out__output_maybe_layout_data_decl_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r4 = MR_ctfield(3, MR_tempr2, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_maybe_layout_data_decl_5_0_i15);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	}
MR_def_label(ll_backend__layout_out__output_maybe_layout_data_decl_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_maybe_layout_data_decl_5_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tempr2 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_tempr2, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr2, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	}
MR_def_label(ll_backend__layout_out__output_maybe_layout_data_decl_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module53)
	MR_init_entry1(fn__ll_backend__layout_out__layout_name_would_include_code_addr_1_0);
	MR_init_label1(fn__ll_backend__layout_out__layout_name_would_include_code_addr_1_0,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__layout_out__layout_name_would_include_code_addr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__layout_name_would_include_code_addr_1_0_i33);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(fn__ll_backend__layout_out__layout_name_would_include_code_addr_1_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__layout_out__layout_name_would_include_code_addr_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module54)
	MR_init_entry1(fn__ll_backend__layout_out__make_label_layout_name_1_0);
	MR_init_label2(fn__ll_backend__layout_out__make_label_layout_name_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__layout_out__make_label_layout_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__label_to_c_string_2_0,
		fn__ll_backend__layout_out__make_label_layout_name_1_0_i2);
MR_def_label(fn__ll_backend__layout_out__make_label_layout_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_data_prefix_0_0,
		fn__ll_backend__layout_out__make_label_layout_name_1_0_i3);
MR_def_label(fn__ll_backend__layout_out__make_label_layout_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_label_layout__", 15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module55)
	MR_init_entry1(ll_backend__layout_out__output_maybe_var_num_3_0);
	MR_init_label1(ll_backend__layout_out__output_maybe_var_num_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_maybe_var_num_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_maybe_var_num_3_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ll_backend__layout_out__output_maybe_var_num_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module56)
	MR_init_entry1(fn__ll_backend__layout_out__wrap_decl_data_addr_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__layout_out__wrap_decl_data_addr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
MR_decl_entry(fn__varset__init_0_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0);
MR_decl_entry(fn__string__format_2_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module57)
	MR_init_entry1(fn__ll_backend__layout_out__subst_to_name_1_0);
	MR_init_label2(fn__ll_backend__layout_out__subst_to_name_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__layout_out__subst_to_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_tfield(1, MR_sv(2), 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	}
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__ll_backend__layout_out__subst_to_name_1_0_i2);
MR_def_label(fn__ll_backend__layout_out__subst_to_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		fn__ll_backend__layout_out__subst_to_name_1_0_i3);
MR_def_label(fn__ll_backend__layout_out__subst_to_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("%d/%s", 5);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_event_attribute_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module58)
	MR_init_entry1(ll_backend__layout_out__output_event_spec_components_6_0);
	MR_init_label8(ll_backend__layout_out__output_event_spec_components_6_0,2,3,4,5,6,8,9,10)
	MR_init_label8(ll_backend__layout_out__output_event_spec_components_6_0,11,12,13,14,15,16,17,18)
	MR_init_label2(ll_backend__layout_out__output_event_spec_components_6_0,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_event_spec_components_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tempr5 = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(0, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 4);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i2);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i3);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i4);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,17);
	MR_np_call_localret_ent(io__write_list_5_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i5);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i6);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_event_spec_components_6_0_i8);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__layout_out__output_synth_attr_args_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out, decl_set);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl2_6_5,
		ll_backend__layout_out__output_event_spec_components_6_0_i9);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i10);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i11);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i12);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__layout_out__output_synth_attr_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i13);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i14);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i15);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i16);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i17);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,12,0);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i18);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,18);
	MR_np_call_localret_ent(io__write_list_5_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i19);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n};\n\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_components_6_0_i20);
MR_def_label(ll_backend__layout_out__output_event_spec_components_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module59)
	MR_init_entry1(ll_backend__layout_out__output_attr_name_3_0);
	MR_init_label2(ll_backend__layout_out__output_attr_name_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_attr_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_attr_name_3_0_i2);
MR_def_label(ll_backend__layout_out__output_attr_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_attr_name_3_0_i3);
MR_def_label(ll_backend__layout_out__output_attr_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__values_2_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module60)
	MR_init_entry1(ll_backend__layout_out__output_synth_attr_args_7_0);
	MR_init_label8(ll_backend__layout_out__output_synth_attr_args_7_0,23,4,5,6,7,8,9,10)
	MR_init_label5(ll_backend__layout_out__output_synth_attr_args_7_0,11,12,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_synth_attr_args_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r3, 4);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_synth_attr_args_7_0_i23);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r6, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(assoc_list__values_2_0,
		ll_backend__layout_out__output_synth_attr_args_7_0_i4);
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(0, MR_sv(3), 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_synth_attr_args_7_0_i5);
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_synth_attr_args_7_0_i6);
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" =\n{ ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_synth_attr_args_7_0_i7);
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,19);
	MR_np_call_localret_ent(io__write_list_5_0,
		ll_backend__layout_out__output_synth_attr_args_7_0_i8);
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" };\n\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_synth_attr_args_7_0_i9);
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__decl_set_insert_3_0,
		ll_backend__layout_out__output_synth_attr_args_7_0_i10);
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_storage_type_name_4_0,
		ll_backend__layout_out__output_synth_attr_args_7_0_i11);
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" =\n{ ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_synth_attr_args_7_0_i12);
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,12,0);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__layout_out__output_synth_attr_args_7_0_i13);
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,20);
	MR_np_call_localret_ent(io__write_list_5_0,
		ll_backend__layout_out__output_synth_attr_args_7_0_i14);
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" };\n\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_synth_attr_args_7_0_i15);
MR_def_label(ll_backend__layout_out__output_synth_attr_args_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module61)
	MR_init_entry1(ll_backend__layout_out__output_synth_attr_5_0);
	MR_init_label8(ll_backend__layout_out__output_synth_attr_5_0,2,4,6,7,8,9,10,11)
	MR_init_label2(ll_backend__layout_out__output_synth_attr_5_0,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_synth_attr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("{ ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_synth_attr_5_0_i2);
MR_def_label(ll_backend__layout_out__output_synth_attr_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_sv(3), 4);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_synth_attr_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("-1, -1, NULL, NULL", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_synth_attr_5_0_i13);
MR_def_label(ll_backend__layout_out__output_synth_attr_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 0), 1);
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_synth_attr_5_0_i6);
MR_def_label(ll_backend__layout_out__output_synth_attr_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_synth_attr_5_0_i7);
MR_def_label(ll_backend__layout_out__output_synth_attr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__layout_out__output_synth_attr_5_0_i8);
MR_def_label(ll_backend__layout_out__output_synth_attr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_synth_attr_5_0_i9);
MR_def_label(ll_backend__layout_out__output_synth_attr_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_synth_attr_5_0_i10);
MR_def_label(ll_backend__layout_out__output_synth_attr_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(0, MR_sv(3), 0);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_synth_attr_5_0_i11);
MR_def_label(ll_backend__layout_out__output_synth_attr_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_synth_attr_5_0_i12);
MR_def_label(ll_backend__layout_out__output_synth_attr_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_synth_attr_5_0_i13);
MR_def_label(ll_backend__layout_out__output_synth_attr_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" }", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module62)
	MR_init_entry1(ll_backend__layout_out__output_event_spec_5_0);
	MR_init_label8(ll_backend__layout_out__output_event_spec_5_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__layout_out__output_event_spec_5_0,10,11,20,24,16,27,28,31)
	MR_init_label4(ll_backend__layout_out__output_event_spec_5_0,33,35,36,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_event_spec_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i2);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("{ \"", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i3);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i4);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i5);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__layout_out__output_event_spec_5_0_i6);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i7);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i8);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i9);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t(MR_TypeInfo *) ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i10);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_event_spec_5_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_sv(6), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_event_spec_5_0_i11);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_event_spec_5_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const(" 0", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i28);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_event_spec_5_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_sv(6), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_event_spec_5_0_i16);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_event_spec_5_0_i16);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_event_spec_5_0_i20);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_event_spec_5_0_i20);
	}
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__output_data_addr_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i28);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i24);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__llds_out__output_data_addr_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i28);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i27);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__llds_out__output_rval_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i28);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i31);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_event_spec_5_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL, NULL }", 12);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tempr3 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tempr4 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr4;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i35);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i36);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_event_spec_5_0_i37);
MR_def_label(ll_backend__layout_out__output_event_spec_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" }", 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module63)
	MR_init_entry1(ll_backend__layout_out__output_proc_layout_name_in_vector_3_0);
	MR_init_label4(ll_backend__layout_out__output_proc_layout_name_in_vector_3_0,4,5,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_proc_layout_name_in_vector_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_proc_layout_name_in_vector_3_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_proc_layout_name_in_vector_3_0_i4);
MR_def_label(ll_backend__layout_out__output_proc_layout_name_in_vector_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_PROC_LAYOUT1(", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_proc_layout_name_in_vector_3_0_i5);
MR_def_label(ll_backend__layout_out__output_proc_layout_name_in_vector_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_proc_label_no_prefix_3_0,
		ll_backend__layout_out__output_proc_layout_name_in_vector_3_0_i6);
MR_def_label(ll_backend__layout_out__output_proc_layout_name_in_vector_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__layout_out__output_proc_layout_name_in_vector_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("layout_out.m", 12);
	MR_r2 = (MR_Word) MR_string_const("output_proc_layout_name_in_vector: not proc layout", 50);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module64)
	MR_init_entry1(ll_backend__layout_out__line_no_label_to_label_layout_addr_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__line_no_label_to_label_layout_addr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module65)
	MR_init_entry1(ll_backend__layout_out__output_number_in_vector_3_0);
	MR_init_label1(ll_backend__layout_out__output_number_in_vector_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_number_in_vector_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_number_in_vector_3_0_i2);
MR_def_label(ll_backend__layout_out__output_number_in_vector_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module66)
	MR_init_entry1(ll_backend__layout_out__output_layout_name_in_vector_4_0);
	MR_init_label2(ll_backend__layout_out__output_layout_name_in_vector_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_layout_name_in_vector_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_layout_name_in_vector_4_0_i2);
MR_def_label(ll_backend__layout_out__output_layout_name_in_vector_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_layout_name_in_vector_4_0_i3);
MR_def_label(ll_backend__layout_out__output_layout_name_in_vector_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module67)
	MR_init_entry1(ll_backend__layout_out__output_call_site_static_5_0);
	MR_init_label8(ll_backend__layout_out__output_call_site_static_5_0,2,3,4,7,8,9,11,12)
	MR_init_label8(ll_backend__layout_out__output_call_site_static_5_0,13,16,17,20,22,24,25,27)
	MR_init_label8(ll_backend__layout_out__output_call_site_static_5_0,28,29,30,31,32,33,34,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_call_site_static_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("{ /* ", 5);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i2);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i3);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */ ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i4);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__layout_out__output_call_site_static_5_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_call_site_static_5_0_i20) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_call_site_static_5_0_i22) MR_AND
		MR_LABEL_AP(ll_backend__layout_out__output_call_site_static_5_0_i24));
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 4);
	MR_r1 = (MR_Word) MR_string_const("MR_callsite_normal_call, (MR_ProcLayout *)\n&", 44);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i8);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_call_site_static_5_0_i9);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_call_site_static_5_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(1,4,0);
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i12);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(1,4,1);
	}
	MR_np_call_localret_ent(ll_backend__layout_out__output_layout_name_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i12);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(3), (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_call_site_static_5_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const(", NULL, ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i27);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n\"", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i16);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i17);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i27);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("MR_callsite_special_call, NULL, NULL, ", 38);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i27);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("MR_callsite_higher_order_call, NULL, NULL, ", 43);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i27);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_call_site_static_5_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("MR_callsite_method_call, NULL, NULL, ", 37);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i27);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("MR_callsite_callback, NULL, NULL, ", 34);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i27);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i28);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i29);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i30);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i31);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", \"", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i32);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		ll_backend__layout_out__output_call_site_static_5_0_i33);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i34);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\" },\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__layout_out__output_call_site_static_5_0_i35);
MR_def_label(ll_backend__layout_out__output_call_site_static_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module68)
	MR_init_entry1(ll_backend__layout_out__output_call_site_static_decl_5_0);
	MR_init_label3(ll_backend__layout_out__output_call_site_static_decl_5_0,5,7,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__output_call_site_static_decl_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_call_site_static_decl_5_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		ll_backend__layout_out__output_call_site_static_decl_5_0_i5);
MR_def_label(ll_backend__layout_out__output_call_site_static_decl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__layout_out__output_call_site_static_decl_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	}
MR_def_label(ll_backend__layout_out__output_call_site_static_decl_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__layout_out__output_maybe_layout_name_decl_5_0);
	}
MR_def_label(ll_backend__layout_out__output_call_site_static_decl_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__rval_0_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module69)
	MR_init_entry1(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0);
	MR_init_label4(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0,10,6,21,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i21);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i6);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_r1 = MR_ctfield(2, MR_tempr4, 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout_out__rval_or_numpair_or_none_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___ll_backend__llds__rval_0_0);

MR_BEGIN_MODULE(ll_backend__layout_out_module70)
	MR_init_entry1(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0);
	MR_init_label8(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0,42,12,16,18,15,6,9,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i42);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i6);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i12);
	}
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i15);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i15);
	}
	}
MR_def_label(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i15);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0,16)
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
		__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i18);
MR_def_label(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i27);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__layout_out__rval_or_numpair_or_none_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_out_module71)
	MR_init_entry1(ll_backend__layout_out__IntroducedFrom__pred__output_proc_layout_var_names__1295__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__layout_out__IntroducedFrom__pred__output_proc_layout_var_names__1295__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__layout_out_maybe_bunch_0(void)
{
	ll_backend__layout_out_module0();
	ll_backend__layout_out_module1();
	ll_backend__layout_out_module2();
	ll_backend__layout_out_module3();
	ll_backend__layout_out_module4();
	ll_backend__layout_out_module5();
	ll_backend__layout_out_module6();
	ll_backend__layout_out_module7();
	ll_backend__layout_out_module8();
	ll_backend__layout_out_module9();
	ll_backend__layout_out_module10();
	ll_backend__layout_out_module11();
	ll_backend__layout_out_module12();
	ll_backend__layout_out_module13();
	ll_backend__layout_out_module14();
	ll_backend__layout_out_module15();
	ll_backend__layout_out_module16();
	ll_backend__layout_out_module17();
	ll_backend__layout_out_module18();
	ll_backend__layout_out_module19();
	ll_backend__layout_out_module20();
	ll_backend__layout_out_module21();
	ll_backend__layout_out_module22();
	ll_backend__layout_out_module23();
	ll_backend__layout_out_module24();
	ll_backend__layout_out_module25();
	ll_backend__layout_out_module26();
	ll_backend__layout_out_module27();
	ll_backend__layout_out_module28();
	ll_backend__layout_out_module29();
	ll_backend__layout_out_module30();
	ll_backend__layout_out_module31();
	ll_backend__layout_out_module32();
	ll_backend__layout_out_module33();
	ll_backend__layout_out_module34();
	ll_backend__layout_out_module35();
	ll_backend__layout_out_module36();
	ll_backend__layout_out_module37();
	ll_backend__layout_out_module38();
	ll_backend__layout_out_module39();
}

static void mercury__ll_backend__layout_out_maybe_bunch_1(void)
{
	ll_backend__layout_out_module40();
	ll_backend__layout_out_module41();
	ll_backend__layout_out_module42();
	ll_backend__layout_out_module43();
	ll_backend__layout_out_module44();
	ll_backend__layout_out_module45();
	ll_backend__layout_out_module46();
	ll_backend__layout_out_module47();
	ll_backend__layout_out_module48();
	ll_backend__layout_out_module49();
	ll_backend__layout_out_module50();
	ll_backend__layout_out_module51();
	ll_backend__layout_out_module52();
	ll_backend__layout_out_module53();
	ll_backend__layout_out_module54();
	ll_backend__layout_out_module55();
	ll_backend__layout_out_module56();
	ll_backend__layout_out_module57();
	ll_backend__layout_out_module58();
	ll_backend__layout_out_module59();
	ll_backend__layout_out_module60();
	ll_backend__layout_out_module61();
	ll_backend__layout_out_module62();
	ll_backend__layout_out_module63();
	ll_backend__layout_out_module64();
	ll_backend__layout_out_module65();
	ll_backend__layout_out_module66();
	ll_backend__layout_out_module67();
	ll_backend__layout_out_module68();
	ll_backend__layout_out_module69();
	ll_backend__layout_out_module70();
	ll_backend__layout_out_module71();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__layout_out__init(void);
void mercury__ll_backend__layout_out__init_type_tables(void);
void mercury__ll_backend__layout_out__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__layout_out__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__layout_out__init_complexity_procs(void);
#endif

void mercury__ll_backend__layout_out__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__layout_out_maybe_bunch_0();
	mercury__ll_backend__layout_out_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout_out__type_ctor_info_rval_or_numpair_or_none_0,
		ll_backend__layout_out__rval_or_numpair_or_none_0_0);
	mercury__ll_backend__layout_out__init_debugger();
}

void mercury__ll_backend__layout_out__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout_out__type_ctor_info_rval_or_numpair_or_none_0);
	}
}


void mercury__ll_backend__layout_out__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__layout_out__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__layout_out);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__layout_out__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
