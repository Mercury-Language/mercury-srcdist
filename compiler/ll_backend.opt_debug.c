/*
** Automatically generated from `opt_debug.m'
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
INIT mercury__ll_backend__opt_debug__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "ll_backend.opt_debug.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "ll_backend.opt_debug.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.opt_debug.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.opt_debug.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "ll_backend.opt_debug.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ll_backend.opt_debug.c"
#line 48 "ll_backend.opt_debug.c"
#include "ll_backend.opt_debug.mh"

#line 51 "ll_backend.opt_debug.c"
#line 52 "ll_backend.opt_debug.c"
#ifndef LL_BACKEND__OPT_DEBUG_DECL_GUARD
#define LL_BACKEND__OPT_DEBUG_DECL_GUARD

#line 56 "ll_backend.opt_debug.c"
#line 57 "ll_backend.opt_debug.c"

#endif
#line 60 "ll_backend.opt_debug.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_2 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_0[];

MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_1[];
MR_decl_label2(ll_backend__opt_debug__dump_comment_char_3_0, 16,5)
MR_decl_label8(ll_backend__opt_debug__dump_instrs_2_5_0, 48,6,4,10,8,13,14,15)
MR_decl_label4(ll_backend__opt_debug__dump_instrs_2_5_0, 22,24,25,50)
MR_decl_label2(ll_backend__opt_debug__maybe_dump_instrs_5_0, 4,13)
MR_decl_label5(ll_backend__opt_debug__msg_5_0, 4,5,7,6,25)
MR_decl_label1(ll_backend__opt_debug__print_comment_char_3_0, 15)
MR_decl_label2(fn__ll_backend__opt_debug__dump_affects_liveness_1_0, 3,4)
MR_decl_label1(fn__ll_backend__opt_debug__dump_binop_1_0, 2)
MR_decl_label1(fn__ll_backend__opt_debug__dump_bool_1_0, 3)
MR_decl_label1(fn__ll_backend__opt_debug__dump_bool_msg_2_0, 3)
MR_decl_label8(fn__ll_backend__opt_debug__dump_code_addr_2_0, 22,5,3,25,19,56,12,8)
MR_decl_label7(fn__ll_backend__opt_debug__dump_code_addr_2_0, 9,7,14,15,16,20,21)
MR_decl_label4(fn__ll_backend__opt_debug__dump_code_addrs_2_0, 15,4,5,6)
MR_decl_label2(fn__ll_backend__opt_debug__dump_code_model_1_0, 3,4)
MR_decl_label8(fn__ll_backend__opt_debug__dump_components_2_0, 110,11,9,12,49,34,35,36)
MR_decl_label8(fn__ll_backend__opt_debug__dump_components_2_0, 31,39,40,41,42,43,50,18)
MR_decl_label8(fn__ll_backend__opt_debug__dump_components_2_0, 19,20,15,23,24,25,26,27)
MR_decl_label5(fn__ll_backend__opt_debug__dump_components_2_0, 5,6,7,8,52)
MR_decl_label8(fn__ll_backend__opt_debug__dump_const_2_0, 30,18,22,21,34,61,4,5)
MR_decl_label8(fn__ll_backend__opt_debug__dump_const_2_0, 62,8,10,13,14,15,16,19)
MR_decl_label4(fn__ll_backend__opt_debug__dump_const_2_0, 24,60,26,27)
MR_decl_label8(fn__ll_backend__opt_debug__dump_data_addr_1_0, 4,5,6,7,8,10,11,12)
MR_decl_label8(fn__ll_backend__opt_debug__dump_data_addr_1_0, 14,17,18,19,20,21,16,23)
MR_decl_label4(fn__ll_backend__opt_debug__dump_data_addr_1_0, 24,25,26,27)
MR_decl_label8(fn__ll_backend__opt_debug__dump_data_name_1_0, 10,11,12,13,14,3,4,5)
MR_decl_label8(fn__ll_backend__opt_debug__dump_data_name_1_0, 6,7,16,17,18,19,20,21)
MR_decl_label8(fn__ll_backend__opt_debug__dump_decls_1_0, 28,6,7,8,5,10,11,12)
MR_decl_label2(fn__ll_backend__opt_debug__dump_decls_1_0, 13,14)
MR_decl_label8(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0, 4,5,6,7,3,9,10,11)
MR_decl_label1(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0, 12)
MR_decl_label5(fn__ll_backend__opt_debug__dump_fullinstr_3_0, 4,3,6,7,8)
MR_decl_label3(fn__ll_backend__opt_debug__dump_fullinstrs_3_0, 14,4,5)
MR_decl_label8(fn__ll_backend__opt_debug__dump_input_components_2_0, 23,5,4,6,7,8,9,10)
MR_decl_label1(fn__ll_backend__opt_debug__dump_input_components_2_0, 11)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 324,43,460,26,461,165,166,462)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 3,4,5,6,7,9,11,12)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 13,15,16,17,18,19,20,21)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 22,23,28,30,31,32,33,35)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 36,37,39,40,41,44,46,47)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 48,49,50,51,52,53,54,55)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 56,57,58,59,60,61,62,63)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 64,65,66,68,70,71,72,73)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 75,77,78,80,82,84,86,87)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 88,89,91,93,92,96,95,99)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 98,102,104,106,109,101,110,111)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 112,113,114,115,116,117,118,119)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 120,121,122,123,124,125,126,127)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 129,130,131,132,133,134,136,138)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 139,140,141,142,144,146,147,148)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 149,150,152,154,155,156,157,159)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 161,168,179,172,174,176,169,183)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 184,185,186,187,188,189,191,193)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 194,196,198,199,201,203,202,209)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 210,211,212,213,214,215,216,217)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 218,219,220,221,207,225,224,227)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 230,232,233,235,236,237,238,239)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 240,242,247,249,245,246,250,252)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 254,255,256,257,258,259,260,261)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 262,263,264,265,267,269,271,272)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 273,274,275,276,278,280,281,283)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 285,286,288,290,291,293,295,296)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 298,300,301,303,310,312,314,316)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instr_3_0, 305,306,307,308,309,313,319,320)
MR_decl_label2(fn__ll_backend__opt_debug__dump_instr_3_0, 321,322)
MR_decl_label8(fn__ll_backend__opt_debug__dump_instrs_3_0, 51,4,10,7,12,13,20,21)
MR_decl_label3(fn__ll_backend__opt_debug__dump_instrs_3_0, 16,23,25)
MR_decl_label4(fn__ll_backend__opt_debug__dump_intlist_1_0, 15,4,5,6)
MR_decl_label8(fn__ll_backend__opt_debug__dump_label_2_0, 62,7,8,61,15,13,12,19)
MR_decl_label4(fn__ll_backend__opt_debug__dump_label_2_0, 22,20,25,26)
MR_decl_label7(fn__ll_backend__opt_debug__dump_label_pairs_2_0, 18,4,5,6,7,8,9)
MR_decl_label4(fn__ll_backend__opt_debug__dump_labels_2_0, 15,4,5,6)
MR_decl_label5(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0, 23,5,7,8,9)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 27,29,31,32,33,34,161,163)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 164,156,158,159,169,3,4,5)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 6,7,9,10,11,12,13,15)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 16,17,18,19,21,22,23,24)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 25,36,37,38,40,41,42,44)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 45,46,47,48,49,51,52,53)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 55,56,57,59,60,61,62,63)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 64,65,66,67,69,70,71,72)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 73,74,75,76,77,79,80,81)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 82,83,84,86,87,88,89,90)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 91,93,94,95,97,98,99,100)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 101,102,104,105,106,108,109,110)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 112,113,114,116,117,118,120,121)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 122,124,125,126,128,129,130,132)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 133,134,136,137,138,140,141,142)
MR_decl_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0, 144,145,146,148,149,150,152,153)
MR_decl_label1(fn__ll_backend__opt_debug__dump_layout_name_1_0, 154)
MR_decl_label4(fn__ll_backend__opt_debug__dump_livelist_2_3_0, 15,4,5,6)
MR_decl_label1(fn__ll_backend__opt_debug__dump_livemap_2_0, 3)
MR_decl_label8(fn__ll_backend__opt_debug__dump_livemaplist_2_0, 19,4,5,6,7,8,9,10)
MR_decl_label1(fn__ll_backend__opt_debug__dump_livevals_2_0, 2)
MR_decl_label8(fn__ll_backend__opt_debug__dump_lval_2_0, 68,103,48,47,50,104,66,71)
MR_decl_label8(fn__ll_backend__opt_debug__dump_lval_2_0, 3,113,6,7,5,8,9,10)
MR_decl_label8(fn__ll_backend__opt_debug__dump_lval_2_0, 11,12,13,14,107,17,115,20)
MR_decl_label8(fn__ll_backend__opt_debug__dump_lval_2_0, 22,23,24,114,26,27,29,106)
MR_decl_label8(fn__ll_backend__opt_debug__dump_lval_2_0, 31,112,34,35,111,38,39,110)
MR_decl_label8(fn__ll_backend__opt_debug__dump_lval_2_0, 42,43,52,105,54,109,57,58)
MR_decl_label4(fn__ll_backend__opt_debug__dump_lval_2_0, 60,108,62,63)
MR_decl_label1(fn__ll_backend__opt_debug__dump_may_call_mercury_1_0, 3)
MR_decl_label1(fn__ll_backend__opt_debug__dump_may_duplicate_1_0, 3)
MR_decl_label1(fn__ll_backend__opt_debug__dump_may_use_atomic_1_0, 3)
MR_decl_label4(fn__ll_backend__opt_debug__dump_maybe_label_3_0, 15,4,5,6)
MR_decl_label6(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0, 3,6,7,8,9,4)
MR_decl_label8(fn__ll_backend__opt_debug__dump_mem_ref_2_0, 18,19,7,8,9,10,11,12)
MR_decl_label6(fn__ll_backend__opt_debug__dump_mem_ref_2_0, 13,14,15,3,4,5)
MR_decl_label8(fn__ll_backend__opt_debug__dump_output_components_2_0, 23,4,6,7,8,9,10,11)
MR_decl_label8(fn__ll_backend__opt_debug__dump_proclabel_1_0, 6,4,8,9,11,12,13,14)
MR_decl_label8(fn__ll_backend__opt_debug__dump_proclabel_1_0, 15,16,17,18,3,23,24,25)
MR_decl_label8(fn__ll_backend__opt_debug__dump_proclabel_1_0, 26,27,28,29,30,31,32,33)
MR_decl_label2(fn__ll_backend__opt_debug__dump_proclabel_1_0, 34,35)
MR_decl_label3(fn__ll_backend__opt_debug__dump_reg_2_0, 4,3,6)
MR_decl_label8(fn__ll_backend__opt_debug__dump_rtti_name_1_0, 65,103,24,104,27,28,29,30)
MR_decl_label8(fn__ll_backend__opt_debug__dump_rtti_name_1_0, 31,32,33,68,111,4,6,114)
MR_decl_label8(fn__ll_backend__opt_debug__dump_rtti_name_1_0, 8,10,113,12,109,15,17,18)
MR_decl_label8(fn__ll_backend__opt_debug__dump_rtti_name_1_0, 106,20,22,105,36,107,39,108)
MR_decl_label8(fn__ll_backend__opt_debug__dump_rtti_name_1_0, 42,110,45,47,48,49,50,51)
MR_decl_label8(fn__ll_backend__opt_debug__dump_rtti_name_1_0, 52,53,54,112,56,58,59,60)
MR_decl_label4(fn__ll_backend__opt_debug__dump_rtti_name_1_0, 61,62,63,64)
MR_decl_label3(fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0, 3,4,5)
MR_decl_label7(fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0, 2,3,4,5,6,7,8)
MR_decl_label7(fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0, 2,3,4,5,6,7,8)
MR_decl_label1(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0, 2)
MR_decl_label8(fn__ll_backend__opt_debug__dump_rval_2_0, 29,87,49,50,51,88,36,37)
MR_decl_label8(fn__ll_backend__opt_debug__dump_rval_2_0, 38,39,40,56,32,33,3,7)
MR_decl_label8(fn__ll_backend__opt_debug__dump_rval_2_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(fn__ll_backend__opt_debug__dump_rval_2_0, 5,19,20,21,22,23,24,27)
MR_decl_label5(fn__ll_backend__opt_debug__dump_rval_2_0, 42,43,44,45,46)
MR_decl_label4(fn__ll_backend__opt_debug__dump_rvals_2_0, 15,4,5,6)
MR_decl_label1(fn__ll_backend__opt_debug__dump_stack_incr_kind_1_0, 3)
MR_decl_label8(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0, 38,56,4,57,8,9,58,6)
MR_decl_label8(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0, 11,12,13,14,15,16,17,19)
MR_decl_label8(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0, 20,21,22,23,24,26,27,28)
MR_decl_label6(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0, 30,31,32,34,35,36)
MR_def_extern_entry(ll_backend__opt_debug__msg_5_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_reg_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_proclabel_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_data_name_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_rtti_name_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_label_2_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_layout_name_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_data_addr_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_code_addr_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_const_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_unop_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_binop_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_lval_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_rval_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_mem_ref_2_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_livelist_2_3_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_livelist_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_livevals_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_stack_incr_kind_1_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_may_call_mercury_1_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_maybe_label_3_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_bool_msg_2_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_may_duplicate_1_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_may_use_atomic_1_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_decls_1_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_affects_liveness_1_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_input_components_2_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_output_components_2_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_components_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_instr_3_0)
MR_decl_static(fn__ll_backend__opt_debug__dump_instrs_3_0)
MR_decl_static(ll_backend__opt_debug__dump_instrs_2_5_0)
MR_def_extern_entry(ll_backend__opt_debug__maybe_dump_instrs_5_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_intlist_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_livemaplist_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_livemap_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_rvals_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_labels_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_label_pairs_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_code_addrs_2_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_bool_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_code_model_1_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_fullinstr_3_0)
MR_def_extern_entry(fn__ll_backend__opt_debug__dump_fullinstrs_3_0)
MR_decl_static(ll_backend__opt_debug__print_comment_char_3_0)
MR_decl_static(ll_backend__opt_debug__dump_comment_char_3_0)

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info),
MR_STRING_CTOR_ADDR
},
};

MR_decl_entry(fn__backend_libs__rtti__encode_tc_instance_type_1_0);
static const struct mercury_type_1 mercury_common_1[3] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__backend_libs__rtti__encode_tc_instance_type_1_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(ll_backend__opt_debug__dump_comment_char_3_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(ll_backend__opt_debug__print_comment_char_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__opt_debug__dump_instrs_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_debug__dump_instrs_2_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__opt_debug__dump_instrs_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CHAR_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__opt_debug__dump_instrs_2_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
};

static const struct mercury_type_2 mercury_vector_common_2_0[9] =
{
{
MR_string_const("mktag", 5)
},
{
MR_string_const("tag", 3)
},
{
MR_string_const("unmktag", 7)
},
{
MR_string_const("strip_tag", 9)
},
{
MR_string_const("mkbody", 6)
},
{
MR_string_const("unmkbody", 8)
},
{
MR_string_const("hash_string", 11)
},
{
MR_string_const("bitwise_complement", 18)
},
{
MR_string_const("not", 3)
},
};

static const struct mercury_type_2 mercury_vector_common_2_1[5] =
{
{
MR_string_const("ite_num_protects", 16)
},
{
MR_string_const("ite_num_snapshots", 17)
},
{
MR_string_const("disj_num_protects", 17)
},
{
MR_string_const("disj_num_snapshots", 18)
},
{
MR_string_const("commit_num_entries", 18)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0_1 = {
{
MR_FUNCTION,
"backend_libs.rtti",
"backend_libs.rtti",
"encode_tc_instance_type",
2,
0
},
"ll_backend.opt_debug",
"opt_debug.m",
483,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__opt_debug__dump_instrs_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.opt_debug",
"ll_backend.opt_debug",
"dump_comment_char",
3,
0
},
"ll_backend.opt_debug",
"opt_debug.m",
203,
"d2;c6;e;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__opt_debug__dump_instrs_2_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.opt_debug",
"ll_backend.opt_debug",
"print_comment_char",
3,
0
},
"ll_backend.opt_debug",
"opt_debug.m",
173,
"d2;c7;e;t;c3;"
};

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module0)
	MR_init_entry1(ll_backend__opt_debug__msg_5_0);
	MR_init_label5(ll_backend__opt_debug__msg_5_0,4,5,7,6,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_debug__msg_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_debug__msg_5_0_i25);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__opt_debug__msg_5_0_i4);
MR_def_label(ll_backend__opt_debug__msg_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__opt_debug__msg_5_0_i5);
MR_def_label(ll_backend__opt_debug__msg_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__opt_debug__msg_5_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const(", next label no: ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__opt_debug__msg_5_0_i7);
MR_def_label(ll_backend__opt_debug__msg_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ll_backend__opt_debug__msg_5_0_i6);
MR_def_label(ll_backend__opt_debug__msg_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__opt_debug__msg_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module1)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_reg_2_0);
	MR_init_label3(fn__ll_backend__opt_debug__dump_reg_2_0,4,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_reg_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_reg_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_reg_2_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_reg_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_reg_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_reg_2_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_reg_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("r", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
MR_decl_entry(fn__hlds__special_pred__special_pred_name_2_0);
MR_decl_entry(fn__parse_tree__prog_foreign__qualify_name_2_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module2)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_proclabel_1_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_proclabel_1_0,6,4,8,9,11,12,13,14)
	MR_init_label8(fn__ll_backend__opt_debug__dump_proclabel_1_0,15,16,17,18,3,23,24,25)
	MR_init_label8(fn__ll_backend__opt_debug__dump_proclabel_1_0,26,27,28,29,30,31,32,33)
	MR_init_label2(fn__ll_backend__opt_debug__dump_proclabel_1_0,34,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_proclabel_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_proclabel_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_proclabel_1_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i9);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i14);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i15);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i16);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i17);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i18);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i35);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(1, MR_tempr3, 4);
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 5);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i23);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__special_pred__special_pred_name_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i24);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i25);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__qualify_name_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i26);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i27);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i28);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i29);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i30);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i31);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i32);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i33);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i34);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_proclabel_1_0_i35);
MR_def_label(fn__ll_backend__opt_debug__dump_proclabel_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
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

MR_decl_entry(fn__backend_libs__rtti__tabling_info_id_str_1_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module3)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_data_name_1_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_data_name_1_0,10,11,12,13,14,3,4,5)
	MR_init_label8(fn__ll_backend__opt_debug__dump_data_name_1_0,6,7,16,17,18,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_data_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_data_name_1_0_i16);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_data_name_1_0_i3);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i10);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i14);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("scalar_common_ref(", 18);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__rtti__tabling_info_id_str_1_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_proclabel_1_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i17);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i18);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i19);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i20);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_name_1_0_i21);
MR_def_label(fn__ll_backend__opt_debug__dump_data_name_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("vector_common_ref(", 18);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__name_mangle_1_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module4)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0);
	MR_init_label7(fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0_i2);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0_i3);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("rtti_type_ctor(", 15);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module5)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0);
	MR_init_label7(fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0_i2);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0_i3);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("tc_name(", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module6)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_rtti_name_1_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_rtti_name_1_0,65,103,24,104,27,28,29,30)
	MR_init_label8(fn__ll_backend__opt_debug__dump_rtti_name_1_0,31,32,33,68,111,4,6,114)
	MR_init_label8(fn__ll_backend__opt_debug__dump_rtti_name_1_0,8,10,113,12,109,15,17,18)
	MR_init_label8(fn__ll_backend__opt_debug__dump_rtti_name_1_0,106,20,22,105,36,107,39,108)
	MR_init_label8(fn__ll_backend__opt_debug__dump_rtti_name_1_0,42,110,45,47,48,49,50,51)
	MR_init_label8(fn__ll_backend__opt_debug__dump_rtti_name_1_0,52,53,54,112,56,58,59,60)
	MR_init_label4(fn__ll_backend__opt_debug__dump_rtti_name_1_0,61,62,63,64)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_rtti_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i65) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i103) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i68));
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i22) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i54) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i53) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i51) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i17) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i18) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i47) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i48) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i6) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i10) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i59) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i58) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i50) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i49) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i61) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i64) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i60) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i62));
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i24);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("exist_locns_", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i27);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i28);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i29);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i30);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i31);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i32);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i33);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("exist_tc_constr_", 16);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i105) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i106) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i107) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i108) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i109) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i110) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i111) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i112) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i113) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i63) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rtti_name_1_0_i52));
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("du_functor_desc_", 16);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("du_name_ordered_table", 21);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("du_ptag_layout", 14);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("du_ptag_ordered_table", 21);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("du_stag_ordered_table_", 22);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i15);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("enum_functor_desc_", 18);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("enum_name_ordered_table", 23);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("enum_value_ordered_table", 24);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i20);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("exist_info_", 11);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("exist_loc", 9);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i36);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("exist_tc_constrs_", 17);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i39);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("field_names_", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i42);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("field_types_", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i45);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("foreign_enum_functor_desc_", 26);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("foreign_enum_name_ordered_table", 31);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("foreign_enum_ordinal_ordered_table", 34);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("functor_number_map", 18);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("maybe_res_addr_functor_desc", 27);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("notag_functor_desc_", 19);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pseudo_type_info", 16);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("res_addr_functors", 17);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("res_addrs", 9);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rtti_name_1_0_i56);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("res_functor_desc_", 17);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("res_name_ordered_table", 22);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("res_value_ordered_table", 23);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_ctor_info", 14);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_functors", 13);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_hashcons_pointer", 21);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_info", 9);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_name_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_layout", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module7)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0);
	MR_init_label3(fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0_i3);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("tc_instance(", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module8)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,38,56,4,57,8,9,58,6)
	MR_init_label8(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,11,12,13,14,15,16,17,19)
	MR_init_label8(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,20,21,22,23,24,26,27,28)
	MR_init_label6(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,30,31,32,34,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i38) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i56) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i57) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i58));
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i12) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i14) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i13) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i6) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i11));
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("base_typeclass_info(", 20);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i9);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("type_class_decl_super(", 22);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i15) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i34) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i26) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i30));
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_class_decl", 15);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_class_decl_supers", 22);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_class_id", 13);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_class_id_method_ids", 24);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_class_id_var_names", 23);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i16);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i17);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("type_class_instance(", 20);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i20);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i21);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i22);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i23);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i24);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("type_class_instance_constraint(", 31);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i27);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i28);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("type_class_instance_constraints(", 32);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i31);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i32);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("type_class_instance_methods(", 28);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i35);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0_i36);
MR_def_label(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("type_class_instance_tc_types_vector(", 36);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(string__int_to_string_2_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module9)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_label_2_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_label_2_0,62,7,8,61,15,13,12,19)
	MR_init_label4(fn__ll_backend__opt_debug__dump_label_2_0,22,20,25,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_label_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_label_2_0_i61);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_label_2_0_i62);
	}
	MR_r1 = MR_ctfield(1, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_debug__dump_proclabel_1_0);
MR_def_label(fn__ll_backend__opt_debug__dump_label_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_proclabel_1_0,
		fn__ll_backend__opt_debug__dump_label_2_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_label_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_label_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_label_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_i", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_label_2_0_i26);
MR_def_label(fn__ll_backend__opt_debug__dump_label_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_label_2_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		fn__ll_backend__opt_debug__dump_label_2_0_i15);
MR_def_label(fn__ll_backend__opt_debug__dump_label_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_label_2_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("CUR_PROC_ENTRY", 14);
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__opt_debug__dump_label_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ll_backend__opt_debug__dump_proclabel_1_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_label_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__ll_backend__opt_debug__dump_label_2_0_i19);
MR_def_label(fn__ll_backend__opt_debug__dump_label_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		fn__ll_backend__opt_debug__dump_label_2_0_i22);
MR_def_label(fn__ll_backend__opt_debug__dump_label_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_label_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("local_", 6);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__opt_debug__dump_label_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_proclabel_1_0,
		fn__ll_backend__opt_debug__dump_label_2_0_i25);
MR_def_label(fn__ll_backend__opt_debug__dump_label_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_label_2_0_i26);
MR_def_label(fn__ll_backend__opt_debug__dump_label_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module10)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0);
	MR_init_label1(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		fn__ll_backend__opt_debug__dump_rttiproclabel_1_0_i2);
MR_def_label(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__ll_backend__opt_debug__dump_proclabel_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module11)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_layout_name_1_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,27,29,31,32,33,34,161,163)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,164,156,158,159,169,3,4,5)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,6,7,9,10,11,12,13,15)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,16,17,18,19,21,22,23,24)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,25,36,37,38,40,41,42,44)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,45,46,47,48,49,51,52,53)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,55,56,57,59,60,61,62,63)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,64,65,66,67,69,70,71,72)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,73,74,75,76,77,79,80,81)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,82,83,84,86,87,88,89,90)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,91,93,94,95,97,98,99,100)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,101,102,104,105,106,108,109,110)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,112,113,114,116,117,118,120,121)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,122,124,125,126,128,129,130,132)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,133,134,136,137,138,140,141,142)
	MR_init_label8(fn__ll_backend__opt_debug__dump_layout_name_1_0,144,145,146,148,149,150,152,153)
	MR_init_label1(fn__ll_backend__opt_debug__dump_layout_name_1_0,154)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_layout_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i27) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i161) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i156) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i169));
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i29);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_layout_name_1_0_i31);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("label_has_no_var_info", 21);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i32);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("label_has_var_info", 18);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i32);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i33);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i34);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("label_layout(", 13);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i163);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i164);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("user_event_layout(", 18);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(2, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(2, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i158);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i159);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("user_event_attr_var_nums(", 25);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i112) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i120) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i128) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i124) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i132) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i116) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i152) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i3) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i9) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i15) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i108) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i93) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i97) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i51) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i44) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i79) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i59) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i69) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i86) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i55) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i36) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i40) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i136) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i140) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i148) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_layout_name_1_0_i144));
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_proclabel_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("closure_proc_id(", 16);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i10);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("file_layout(", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i16);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i17);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i18);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i19);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("file_layout_label_layout_vector(", 32);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i22);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i23);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i24);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i25);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("file_layout_line_number_vector(", 31);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i37);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i38);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_common_layout(", 21);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i41);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i42);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_layout(", 14);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i45);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i46);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i47);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i48);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i49);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_layout_event_arg_names(", 30);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i52);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i53);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_layout_event_set_desc(", 29);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i56);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i57);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_layout_event_specs(", 26);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i60);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i61);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i62);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i63);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i64);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i65);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i66);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i67);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_layout_event_synth_attr_args(", 36);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i70);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i71);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i72);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i73);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i74);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i75);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i76);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i77);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_layout_event_synth_attr_order(", 37);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i80);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i81);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i82);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i83);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i84);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_layout_event_synth_attrs(", 32);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i87);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i88);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i89);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i90);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i91);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_layout_event_synth_order(", 32);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i94);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i95);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_layout_file_vector(", 26);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i98);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i99);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i100);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i101);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i102);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_layout_label_exec_count(", 31);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i105);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i106);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_layout_proc_vector(", 26);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i109);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i110);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("module_layout_string_table(", 27);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i113);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i114);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_layout(", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i117);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i118);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_layout_body_bytecode(", 26);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i121);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i122);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_layout_exec_trace(", 23);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i125);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i126);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_layout_head_var_nums(", 26);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i129);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i130);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_layout_label_layouts(", 26);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i133);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i134);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_layout_var_names(", 22);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i137);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i138);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_static(", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i141);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i142);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_static_call_sites(", 23);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i145);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i146);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_static_coverage_point_dynamic(", 35);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i149);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i150);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_static_coverage_point_static(", 34);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rttiproclabel_1_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i153);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_layout_name_1_0_i154);
MR_def_label(fn__ll_backend__opt_debug__dump_layout_name_1_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("table_io_decl(", 14);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module12)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_data_addr_1_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_data_addr_1_0,4,5,6,7,8,10,11,12)
	MR_init_label8(fn__ll_backend__opt_debug__dump_data_addr_1_0,14,17,18,19,20,21,16,23)
	MR_init_label4(fn__ll_backend__opt_debug__dump_data_addr_1_0,24,25,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_data_addr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_data_addr_1_0_i14);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_data_addr_1_0_i10);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_data_name_1_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("data_addr(", 10);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_layout_name_1_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("layout_addr(", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_data_addr_1_0_i16);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rtti_type_ctor_1_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i17);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rtti_name_1_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i18);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i19);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i20);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i21);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("rtti_addr(", 10);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rtti_type_class_name_1_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i23);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_tc_rtti_name_1_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i24);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i25);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i26);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_data_addr_1_0_i27);
MR_def_label(fn__ll_backend__opt_debug__dump_data_addr_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("tc_rtti_addr(", 13);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__llds_out__ho_call_variant_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module13)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_code_addr_2_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_code_addr_2_0,22,5,3,25,19,56,12,8)
	MR_init_label7(fn__ll_backend__opt_debug__dump_code_addr_2_0,9,7,14,15,16,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_code_addr_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_code_addr_2_0_i22) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_code_addr_2_0_i5) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_code_addr_2_0_i3) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_code_addr_2_0_i25));
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_code_addr_2_0_i7) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_code_addr_2_0_i16) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_code_addr_2_0_i14) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_code_addr_2_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_code_addr_2_0_i20) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_code_addr_2_0_i15));
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_tailcall_ent(fn__ll_backend__opt_debug__dump_label_2_0);
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_np_tailcall_ent(fn__ll_backend__opt_debug__dump_proclabel_1_0);
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r4 = MR_ctfield(3, MR_tempr2, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_code_addr_2_0_i56);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_code_addr_2_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("do_succeed", 10);
	MR_proceed();
	}
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("do_last_succeed", 15);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_code_addr_2_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__llds_out__ho_call_variant_to_string_1_0,
		fn__ll_backend__opt_debug__dump_code_addr_2_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("do_call_closure_", 16);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__llds_out__ho_call_variant_to_string_1_0,
		fn__ll_backend__opt_debug__dump_code_addr_2_0_i9);
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("do_call_class_method_", 21);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("succip", 6);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("do_fail", 7);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("do_not_reached", 14);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("do_redo", 7);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("do_trace_redo_fail_deep", 23);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_code_addr_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("do_trace_redo_fail_shallow", 26);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__float_to_string_1_0);
MR_decl_entry(fn__backend_libs__c_util__quote_string_1_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module14)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_const_2_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_const_2_0,30,18,22,21,34,61,4,5)
	MR_init_label8(fn__ll_backend__opt_debug__dump_const_2_0,62,8,10,13,14,15,16,19)
	MR_init_label4(fn__ll_backend__opt_debug__dump_const_2_0,24,60,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_const_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_const_2_0_i30) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_const_2_0_i22) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_const_2_0_i21) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_const_2_0_i34));
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_const_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("true", 4);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("false", 5);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_np_tailcall_ent(fn__string__int_to_string_1_0);
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_const_2_0_i19) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_const_2_0_i60) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_const_2_0_i24) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_const_2_0_i61) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_const_2_0_i62));
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_code_addr_2_0,
		fn__ll_backend__opt_debug__dump_const_2_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_const_2_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("code_addr_const(", 16);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_data_addr_1_0,
		fn__ll_backend__opt_debug__dump_const_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_const_2_0_i10);
	}
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_const_2_0_i16);
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_const_2_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_const_2_0_i14);
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_const_2_0_i15);
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_const_2_0_i16);
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("data_addr_const(", 16);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__string__float_to_string_1_0);
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("multi_string(...)", 17);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__backend_libs__c_util__quote_string_1_0,
		fn__ll_backend__opt_debug__dump_const_2_0_i26);
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_const_2_0_i27);
MR_def_label(fn__ll_backend__opt_debug__dump_const_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module15)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_unop_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_unop_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__binop_category_string_3_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module16)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_binop_1_0);
	MR_init_label1(fn__ll_backend__opt_debug__dump_binop_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_binop_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(backend_libs__c_util__binop_category_string_3_0,
		fn__ll_backend__opt_debug__dump_binop_1_0_i2);
MR_def_label(fn__ll_backend__opt_debug__dump_binop_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module17)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_lval_2_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_lval_2_0,68,103,48,47,50,104,66,71)
	MR_init_label8(fn__ll_backend__opt_debug__dump_lval_2_0,3,113,6,7,5,8,9,10)
	MR_init_label8(fn__ll_backend__opt_debug__dump_lval_2_0,11,12,13,14,107,17,115,20)
	MR_init_label8(fn__ll_backend__opt_debug__dump_lval_2_0,22,23,24,114,26,27,29,106)
	MR_init_label8(fn__ll_backend__opt_debug__dump_lval_2_0,31,112,34,35,111,38,39,110)
	MR_init_label8(fn__ll_backend__opt_debug__dump_lval_2_0,42,43,52,105,54,109,57,58)
	MR_init_label4(fn__ll_backend__opt_debug__dump_lval_2_0,60,108,62,63)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_lval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i68) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i103) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i104) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i71));
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i60) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i24) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i3) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i22) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i52) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i29));
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_lval_2_0_i47);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i48);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i50);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("r", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_r2 = MR_ctfield(2, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_reg_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i66);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("temp_", 5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i105) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i106) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i107) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i108) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i109) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i110) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i111) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i112) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i113) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i114) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i115) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_lval_2_0_i23));
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("curfr", 5);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_lval_2_0_i6);
	}
	MR_r3 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_sv(3) = MR_ctfield(3, MR_r3, 3);
	MR_sv(2) = (MR_Word) MR_string_const("no", 2);
	MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_lval_2_0_i5);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i9);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i10);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i14);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("field(", 6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i17);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fv", 2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = (MR_Word) MR_string_const("))", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i20);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("global_var_ref(env_var_ref(", 27);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hp", 2);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lvar(_)", 7);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("maxfr", 5);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i26);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i27);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mem_ref(", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("parent_sp", 9);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i31);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("parent_sv", 9);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i34);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i35);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("prevfr_slot(", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i38);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i39);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("redofr_slot(", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i42);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i43);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("redoip_slot(", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("sp", 2);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i54);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("sv", 2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i57);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i58);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("succfr_slot(", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("succip", 6);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i62);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_lval_2_0_i63);
MR_def_label(fn__ll_backend__opt_debug__dump_lval_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("succip_slot(", 12);
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

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
MR_decl_entry(fn__term__var_to_int_1_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module18)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_rval_2_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_rval_2_0,29,87,49,50,51,88,36,37)
	MR_init_label8(fn__ll_backend__opt_debug__dump_rval_2_0,38,39,40,56,32,33,3,7)
	MR_init_label8(fn__ll_backend__opt_debug__dump_rval_2_0,10,11,12,13,14,15,16,17)
	MR_init_label8(fn__ll_backend__opt_debug__dump_rval_2_0,5,19,20,21,22,23,24,27)
	MR_init_label5(fn__ll_backend__opt_debug__dump_rval_2_0,42,43,44,45,46)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_rval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rval_2_0_i29) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rval_2_0_i87) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rval_2_0_i88) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_rval_2_0_i56));
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_tailcall_ent(fn__ll_backend__opt_debug__dump_lval_2_0);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i49);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i50);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i51);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("var(", 4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i36);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i37);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i38);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i39);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i40);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mkword(", 7);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_rval_2_0_i27);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_rval_2_0_i42);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_rval_2_0_i3);
	}
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_mem_ref_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i32);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i33);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mem_addr(", 9);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_tempr1;
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_rval_2_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(backend_libs__c_util__binop_category_string_3_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i10);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_rval_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(backend_libs__c_util__binop_category_string_3_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i10);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i14);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i15);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i16);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i17);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("binop(", 6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i19);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__binop_category_string_3_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i20);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i21);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i22);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i23);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i24);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,24)
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
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__ll_backend__opt_debug__dump_const_2_0);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_unop_1_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i43);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i44);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i45);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rval_2_0_i46);
MR_def_label(fn__ll_backend__opt_debug__dump_rval_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
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


MR_BEGIN_MODULE(ll_backend__opt_debug_module19)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_mem_ref_2_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_mem_ref_2_0,18,19,7,8,9,10,11,12)
	MR_init_label6(fn__ll_backend__opt_debug__dump_mem_ref_2_0,13,14,15,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_mem_ref_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_mem_ref_2_0_i3);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_mem_ref_2_0_i7);
	}
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_mem_ref_2_0_i18);
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_mem_ref_2_0_i19);
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("stackvar_ref(", 13);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 2);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_mem_ref_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_mem_ref_2_0_i9);
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_mem_ref_2_0_i10);
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_mem_ref_2_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_mem_ref_2_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_mem_ref_2_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_mem_ref_2_0_i14);
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_mem_ref_2_0_i15);
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("heap_ref(", 9);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_mem_ref_2_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_mem_ref_2_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_mem_ref_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("framevar_ref(", 13);
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


MR_BEGIN_MODULE(ll_backend__opt_debug_module20)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_livelist_2_3_0);
	MR_init_label4(fn__ll_backend__opt_debug__dump_livelist_2_3_0,15,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_livelist_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_livelist_2_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_livelist_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_livelist_2_3_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_livelist_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_livelist_2_3_0,
		fn__ll_backend__opt_debug__dump_livelist_2_3_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_livelist_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_livelist_2_3_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_livelist_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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


MR_BEGIN_MODULE(ll_backend__opt_debug_module21)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_livelist_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_livelist_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_tailcall_ent(fn__ll_backend__opt_debug__dump_livelist_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module22)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_livevals_2_0);
	MR_init_label1(fn__ll_backend__opt_debug__dump_livevals_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_livevals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__ll_backend__opt_debug__dump_livevals_2_0_i2);
MR_def_label(fn__ll_backend__opt_debug__dump_livevals_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ll_backend__opt_debug__dump_livelist_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module23)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0);
	MR_init_label5(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0,23,5,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_code_addr_2_0,
		fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0,
		fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0_i9);
MR_def_label(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module24)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_stack_incr_kind_1_0);
	MR_init_label1(fn__ll_backend__opt_debug__dump_stack_incr_kind_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_stack_incr_kind_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_stack_incr_kind_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("leaf", 4);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_stack_incr_kind_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("nonleaf", 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module25)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,4,5,6,7,3,9,10,11)
	MR_init_label1(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0_i3);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("detstack slots ", 15);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0_i9);
MR_def_label(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0_i10);
MR_def_label(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("..", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("nondetstack slots ", 18);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module26)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_may_call_mercury_1_0);
	MR_init_label1(fn__ll_backend__opt_debug__dump_may_call_mercury_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_may_call_mercury_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_may_call_mercury_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("may_call_mercury", 16);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_may_call_mercury_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("will_not_call_mercury", 21);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module27)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_maybe_label_3_0);
	MR_init_label4(fn__ll_backend__opt_debug__dump_maybe_label_3_0,15,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_maybe_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_maybe_label_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_maybe_label_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_maybe_label_3_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_maybe_label_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_maybe_label_3_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_maybe_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_maybe_label_3_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_maybe_label_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module28)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_bool_msg_2_0);
	MR_init_label1(fn__ll_backend__opt_debug__dump_bool_msg_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_bool_msg_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_bool_msg_2_0_i3);
	}
	MR_r2 = (MR_Word) MR_string_const(" no\n", 4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__opt_debug__dump_bool_msg_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" yes\n", 5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module29)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_may_duplicate_1_0);
	MR_init_label1(fn__ll_backend__opt_debug__dump_may_duplicate_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_may_duplicate_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_may_duplicate_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("may_duplicate", 13);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_may_duplicate_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("may_not_duplicate", 17);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module30)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_may_use_atomic_1_0);
	MR_init_label1(fn__ll_backend__opt_debug__dump_may_use_atomic_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_may_use_atomic_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_may_use_atomic_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("may_not_use_atomic_alloc", 24);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_may_use_atomic_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("may_use_atomic_alloc", 20);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module31)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_decls_1_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_decls_1_0,28,6,7,8,5,10,11,12)
	MR_init_label2(fn__ll_backend__opt_debug__dump_decls_1_0,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_decls_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_decls_1_0_i28);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_decls_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_decls_1_0_i5);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_decls_1_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_decls_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_decls_1_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_decls_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_decls_1_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_decls_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("decl ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_decls_1_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_decls_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_decls_1_0_i10);
MR_def_label(fn__ll_backend__opt_debug__dump_decls_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_decls_1_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_decls_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_decls_1_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_decls_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("decl struct", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_decls_1_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_decls_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_decls_1_0,
		fn__ll_backend__opt_debug__dump_decls_1_0_i14);
MR_def_label(fn__ll_backend__opt_debug__dump_decls_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module32)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_affects_liveness_1_0);
	MR_init_label2(fn__ll_backend__opt_debug__dump_affects_liveness_1_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_affects_liveness_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_affects_liveness_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("affects_liveness", 16);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_affects_liveness_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_affects_liveness_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("default_affects_liveness", 24);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_affects_liveness_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("does_not_affect_liveness", 24);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module33)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_input_components_2_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_input_components_2_0,23,5,4,6,7,8,9,10)
	MR_init_label1(fn__ll_backend__opt_debug__dump_input_components_2_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_input_components_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_input_components_2_0_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_input_components_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_input_components_2_0_i5);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(4) = (MR_Word) MR_string_const(" (dummy)", 8);
	MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_input_components_2_0_i4);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_input_components_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_input_components_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_input_components_2_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_input_components_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" := ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_input_components_2_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_input_components_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_input_components_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_input_components_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_input_components_2_0_i9);
MR_def_label(fn__ll_backend__opt_debug__dump_input_components_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_input_components_2_0,
		fn__ll_backend__opt_debug__dump_input_components_2_0_i10);
MR_def_label(fn__ll_backend__opt_debug__dump_input_components_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_input_components_2_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_input_components_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
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


MR_BEGIN_MODULE(ll_backend__opt_debug_module34)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_output_components_2_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_output_components_2_0,23,4,6,7,8,9,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_output_components_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_output_components_2_0_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_output_components_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_output_components_2_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_output_components_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_output_components_2_0_i6);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(" (dummy)", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_output_components_2_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_output_components_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_output_components_2_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_output_components_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" := ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_output_components_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_output_components_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_output_components_2_0_i9);
MR_def_label(fn__ll_backend__opt_debug__dump_output_components_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_output_components_2_0,
		fn__ll_backend__opt_debug__dump_output_components_2_0_i10);
MR_def_label(fn__ll_backend__opt_debug__dump_output_components_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_output_components_2_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_output_components_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
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


MR_BEGIN_MODULE(ll_backend__opt_debug_module35)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_components_2_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_components_2_0,110,11,9,12,49,34,35,36)
	MR_init_label8(fn__ll_backend__opt_debug__dump_components_2_0,31,39,40,41,42,43,50,18)
	MR_init_label8(fn__ll_backend__opt_debug__dump_components_2_0,19,20,15,23,24,25,26,27)
	MR_init_label5(fn__ll_backend__opt_debug__dump_components_2_0,5,6,7,8,52)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_components_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i110);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(1, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_components_2_0_i11) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_components_2_0_i9) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_components_2_0_i12) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_components_2_0_i49));
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_components_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i52);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_input_components_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_output_components_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r5 = MR_ctfield(3, MR_tempr1, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i50);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i31);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i34);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("affects_liveness", 16);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i36);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i35);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("default_affects_liveness", 24);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i36);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("does_not_affect_liveness", 24);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i36);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("empty user_code: ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i39);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(3) = (MR_Word) MR_string_const("affects_liveness", 16);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i41);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i40);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(3) = (MR_Word) MR_string_const("default_affects_liveness", 24);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i41);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(3) = (MR_Word) MR_string_const("does_not_affect_liveness", 24);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i41);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i42);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i43);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("user_code: ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_r5 = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i15);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("affects_liveness", 16);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i20);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("default_affects_liveness", 24);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i20);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("does_not_affect_liveness", 24);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i20);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("empty raw_code: ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i23);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(3) = (MR_Word) MR_string_const("affects_liveness", 16);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i25);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_components_2_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(3) = (MR_Word) MR_string_const("default_affects_liveness", 24);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i25);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(3) = (MR_Word) MR_string_const("does_not_affect_liveness", 24);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i25);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i26);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i27);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("raw_code:\n", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fail to ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_components_2_0,
		fn__ll_backend__opt_debug__dump_components_2_0_i52);
MR_def_label(fn__ll_backend__opt_debug__dump_components_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
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

MR_decl_entry(fn__ll_backend__llds__region_stack_id_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module36)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_instr_3_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,324,43,460,26,461,165,166,462)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,3,4,5,6,7,9,11,12)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,13,15,16,17,18,19,20,21)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,22,23,28,30,31,32,33,35)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,36,37,39,40,41,44,46,47)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,48,49,50,51,52,53,54,55)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,56,57,58,59,60,61,62,63)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,64,65,66,68,70,71,72,73)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,75,77,78,80,82,84,86,87)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,88,89,91,93,92,96,95,99)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,98,102,104,106,109,101,110,111)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,112,113,114,115,116,117,118,119)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,120,121,122,123,124,125,126,127)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,129,130,131,132,133,134,136,138)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,139,140,141,142,144,146,147,148)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,149,150,152,154,155,156,157,159)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,161,168,179,172,174,176,169,183)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,184,185,186,187,188,189,191,193)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,194,196,198,199,201,203,202,209)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,210,211,212,213,214,215,216,217)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,218,219,220,221,207,225,224,227)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,230,232,233,235,236,237,238,239)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,240,242,247,249,245,246,250,252)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,254,255,256,257,258,259,260,261)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,262,263,264,265,267,269,271,272)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,273,274,275,276,278,280,281,283)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,285,286,288,290,291,293,295,296)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,298,300,301,303,310,312,314,316)
	MR_init_label8(fn__ll_backend__opt_debug__dump_instr_3_0,305,306,307,308,309,313,319,320)
	MR_init_label2(fn__ll_backend__opt_debug__dump_instr_3_0,321,322)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_instr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i324) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i460) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i461) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i462));
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i43);
	}
	MR_r1 = (MR_Word) MR_string_const("prune_ticket", 12);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("discard_ticket", 14);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,460)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i26);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("comment(", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,461)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_livevals_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i165);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i166);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("livevals(", 9);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,462)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i15) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i9) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i152) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i168) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i201) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i159) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i80) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i28) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i3) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i84) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i293) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i288) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i91) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i191) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i283) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i75) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i235) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i242) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i267) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i303) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i298) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i278) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i196) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i230) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i129) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i35) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i39) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i44) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i136) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i68) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i144));
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_affects_liveness_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("arbitrary_c_code(", 17);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i11);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" := ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i16);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i17);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_instrs_3_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i18);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i19);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i20);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i21);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i22);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i23);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("block(", 6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i30);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_labels_or_not_reached_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i31);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i32);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i33);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("computed_goto ", 14);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i36);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i37);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("decr_sp(", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i40);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i41);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("decr_sp_and_return(", 19);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(9), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(9), 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 7);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 8);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 9);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_decls_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i46);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_components_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i47);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_may_call_mercury_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i48);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fix nolayout:", 13);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_maybe_label_3_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i49);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fix layout:", 11);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_maybe_label_3_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i50);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fix onlylayout:", 15);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_maybe_label_3_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i51);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("nofix:", 6);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_maybe_label_3_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i52);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("stack slot ref:", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_bool_msg_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i53);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_may_duplicate_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i54);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n)", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i55);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i56);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i57);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i58);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i59);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i60);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i61);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i62);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i63);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("components:\n", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i64);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i65);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("declarations:\n", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i66);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("foreign_proc_code(\n", 19);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i70);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i71);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(", )", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i72);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i73);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fork_new_child(", 15);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i77);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i78);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("free_heap(", 10);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_code_addr_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i82);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("goto ", 5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i86);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_code_addr_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i87);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(") goto ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i88);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i89);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("if (", 4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i93);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 7);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 8);
	MR_r1 = (MR_Word) MR_string_const("no", 2);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 4);
	MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i92);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 7);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 8);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(1, MR_r4, 0);
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i92);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i96);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("no", 2);
	MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i95);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i95);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i99);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("no", 2);
	MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i98);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i98);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i102);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_sv(5) = MR_r1;
	MR_sv(1) = (MR_Word) MR_string_const("no", 2);
	MR_sv(6) = (MR_Word) MR_string_const("no", 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i101);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i104);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i106);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(6) = (MR_Word) MR_string_const("no", 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i101);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_sv(6), 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i109);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i110);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i111);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_may_use_atomic_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i112);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i113);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i114);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i115);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i116);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i117);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i118);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i119);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i120);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i121);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i122);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i123);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i124);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i125);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i126);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i127);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("incr_hp(", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i130);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_stack_incr_kind_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i131);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i132);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i133);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i134);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("incr_sp(", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i138);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i139);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i140);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i141);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i142);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("init_sync_term(", 15);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i146);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i147);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i148);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i149);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i150);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("join_and_continue(", 18);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i154);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i155);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" := ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i156);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i157);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("keep ", 5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i161);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":", 1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tag(MR_tempr1);
	if ((MR_r5 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i172);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i179);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(2) = (MR_Word) MR_string_const("det", 3);
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i169);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(2) = (MR_Word) MR_string_const("semidet", 7);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i169);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(1, MR_r4, 0);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i174);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(2) = (MR_Word) MR_string_const("nondet checked_tail_call", 24);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i169);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i176);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(2) = (MR_Word) MR_string_const("nondet no_tail_call", 19);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i169);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(2) = (MR_Word) MR_string_const("nondet unchecked_tail_call", 26);
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_code_addr_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i183);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_code_addr_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i184);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i185);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ..., ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i186);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i187);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i188);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i189);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("call(", 5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i193);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i194);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mark_hp(", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i198);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i199);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mark_ticket_stack(", 18);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i203);
	}
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("no_redoip", 9);
	MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i202);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_r3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_code_addr_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i202);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i207);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i209);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = (MR_Word) MR_string_const("no", 2);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i214);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i210);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i211);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i212);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("yes(", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i213);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i214);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i215);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i216);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i217);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i218);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i219);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i220);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i221);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mkframe(", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i224);
	}
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i225);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mkdettempframe(", 15);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i227);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mktempframe(", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i232);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i233);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("prune_tickets_to(", 17);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__region_stack_id_to_string_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i236);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i237);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i238);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i239);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i240);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("push_region_frame(", 18);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i247);
	}
	MR_tempr3 = MR_unmkbody(MR_tempr1);
	if (MR_INT_EQ(MR_tempr3,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i246);
	}
	if (MR_INT_EQ(MR_tempr3,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i250);
	}
	if (MR_INT_EQ(MR_tempr3,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i245);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(5) = (MR_Word) MR_string_const("commit", 6);
	MR_r1 = MR_ctfield(3, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i252);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i249);
	}
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(5) = (MR_Word) MR_string_const("ite_snapshot(not_removed_at_start_of_else)", 42);
	MR_r1 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i252);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(5) = (MR_Word) MR_string_const("ite_snapshot(removed_at_start_of_else)", 38);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i252);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(5) = (MR_Word) MR_string_const("disj_snapshot", 13);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i252);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(5) = (MR_Word) MR_string_const("ite_protect", 11);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i252);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(5) = (MR_Word) MR_string_const("semi_disj_protect", 17);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i252);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i254);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i255);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i256);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i257);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i258);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i259);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i260);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i261);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i262);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i263);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i264);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i265);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("region_fill_frame(", 18);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_1, (MR_Integer) MR_tempr1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_ctfield(3, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i269);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i271);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i272);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i273);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i274);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i275);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i276);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("region_set_fixed_slot(", 22);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i280);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(", _)", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i281);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("reset_ticket(", 13);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i285);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i286);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("restore_hp(", 11);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i290);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i291);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("restore_maxfr(", 14);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i295);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i296);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("save_maxfr(", 11);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_lval_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i300);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i301);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,301)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("store_ticket(", 13);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r4 = MR_tempr2;
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i314);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i310);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i313) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i308) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i307) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i309) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i306) MR_AND
		MR_LABEL_AP(fn__ll_backend__opt_debug__dump_instr_3_0_i305));
	}
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i312);
	}
	MR_sv(1) = (MR_Word) MR_string_const("region_ite_else(nondet)", 23);
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i319);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("region_ite_else(semidet)", 24);
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i319);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instr_3_0_i316);
	}
	MR_sv(1) = (MR_Word) MR_string_const("region_ite_then(nondet)", 23);
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i319);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("region_ite_then(semidet)", 24);
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i319);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("region_commit_failure", 21);
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i319);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("region_commit_success", 21);
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i319);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("region_disj_last", 16);
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i319);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("region_disj_later", 17);
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i319);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("region_disj_nonlast_semi_commit", 31);
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i319);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("region_ite_nondet_cond_fail", 27);
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_embedded_stack_frame_id_1_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i319);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,319)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i320);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i321);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,321)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instr_3_0_i322);
MR_def_label(fn__ll_backend__opt_debug__dump_instr_3_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("use_and_maybe_pop_region_frame(", 31);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__foldl_4_1);

MR_BEGIN_MODULE(ll_backend__opt_debug_module37)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_instrs_3_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_instrs_3_0,51,4,10,7,12,13,20,21)
	MR_init_label3(fn__ll_backend__opt_debug__dump_instrs_3_0,16,23,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__opt_debug__dump_instrs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instrs_3_0_i51);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_instrs_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instrs_3_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_instr_3_0,
		fn__ll_backend__opt_debug__dump_instrs_3_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_instrs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instrs_3_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_ctfield(1, MR_r5, 0);
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(string__foldl_4_1,
		fn__ll_backend__opt_debug__dump_instrs_3_0_i10);
MR_def_label(fn__ll_backend__opt_debug__dump_instrs_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t% ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instrs_3_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_instrs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_instr_3_0,
		fn__ll_backend__opt_debug__dump_instrs_3_0_i12);
MR_def_label(fn__ll_backend__opt_debug__dump_instrs_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instrs_3_0_i13);
MR_def_label(fn__ll_backend__opt_debug__dump_instrs_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instrs_3_0_i16);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_instrs_3_0_i16);
	}
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instrs_3_0_i20);
MR_def_label(fn__ll_backend__opt_debug__dump_instrs_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\t\t", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instrs_3_0_i21);
MR_def_label(fn__ll_backend__opt_debug__dump_instrs_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instrs_3_0_i23);
MR_def_label(fn__ll_backend__opt_debug__dump_instrs_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_instrs_3_0_i23);
MR_def_label(fn__ll_backend__opt_debug__dump_instrs_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_instrs_3_0,
		fn__ll_backend__opt_debug__dump_instrs_3_0_i25);
MR_def_label(fn__ll_backend__opt_debug__dump_instrs_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
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

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(string__foldl_4_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module38)
	MR_init_entry1(ll_backend__opt_debug__dump_instrs_2_5_0);
	MR_init_label8(ll_backend__opt_debug__dump_instrs_2_5_0,48,6,4,10,8,13,14,15)
	MR_init_label4(ll_backend__opt_debug__dump_instrs_2_5_0,22,24,25,50)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_debug__dump_instrs_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__opt_debug__dump_instrs_2_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__opt_debug__dump_instrs_2_5_0_i50);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__opt_debug__dump_instrs_2_5_0_i4);
	}
	MR_tempr4 = MR_r2;
	MR_sv(1) = MR_tempr4;
	MR_tempr5 = MR_r3;
	MR_sv(2) = MR_tempr5;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr5;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_instr_3_0,
		ll_backend__opt_debug__dump_instrs_2_5_0_i6);
MR_def_label(ll_backend__opt_debug__dump_instrs_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__opt_debug__dump_instrs_2_5_0_i15);
MR_def_label(ll_backend__opt_debug__dump_instrs_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(ll_backend__opt_debug__dump_instrs_2_5_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_r6, 0);
	MR_r1 = (MR_Word) MR_string_const("\t% ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__opt_debug__dump_instrs_2_5_0_i10);
MR_def_label(ll_backend__opt_debug__dump_instrs_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(string__foldl_4_0,
		ll_backend__opt_debug__dump_instrs_2_5_0_i15);
MR_def_label(ll_backend__opt_debug__dump_instrs_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__opt_debug__dump_instrs_2_5_0_i13);
MR_def_label(ll_backend__opt_debug__dump_instrs_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_instr_3_0,
		ll_backend__opt_debug__dump_instrs_2_5_0_i14);
MR_def_label(ll_backend__opt_debug__dump_instrs_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__opt_debug__dump_instrs_2_5_0_i15);
MR_def_label(ll_backend__opt_debug__dump_instrs_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__opt_debug__dump_instrs_2_5_0_i24);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ll_backend__opt_debug__dump_instrs_2_5_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("\n\t\t", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__opt_debug__dump_instrs_2_5_0_i22);
MR_def_label(ll_backend__opt_debug__dump_instrs_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__opt_debug__dump_instrs_2_5_0_i24);
MR_def_label(ll_backend__opt_debug__dump_instrs_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ll_backend__opt_debug__dump_instrs_2_5_0_i25);
MR_def_label(ll_backend__opt_debug__dump_instrs_2_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__opt_debug__dump_instrs_2_5_0_i48);
MR_def_label(ll_backend__opt_debug__dump_instrs_2_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module39)
	MR_init_entry1(ll_backend__opt_debug__maybe_dump_instrs_5_0);
	MR_init_label2(ll_backend__opt_debug__maybe_dump_instrs_5_0,4,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__opt_debug__maybe_dump_instrs_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__opt_debug__maybe_dump_instrs_5_0_i13);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 113;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ll_backend__opt_debug__maybe_dump_instrs_5_0_i4);
MR_def_label(ll_backend__opt_debug__maybe_dump_instrs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__opt_debug__dump_instrs_2_5_0);
	}
MR_def_label(ll_backend__opt_debug__maybe_dump_instrs_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module40)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_intlist_1_0);
	MR_init_label4(fn__ll_backend__opt_debug__dump_intlist_1_0,15,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_intlist_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_intlist_1_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_intlist_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__opt_debug__dump_intlist_1_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_intlist_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_intlist_1_0,
		fn__ll_backend__opt_debug__dump_intlist_1_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_intlist_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_intlist_1_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_intlist_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module41)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_livemaplist_2_0);
	MR_init_label8(fn__ll_backend__opt_debug__dump_livemaplist_2_0,19,4,5,6,7,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_livemaplist_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_livemaplist_2_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_livemaplist_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_livemaplist_2_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_livemaplist_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__ll_backend__opt_debug__dump_livemaplist_2_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_livemaplist_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_livelist_2_3_0,
		fn__ll_backend__opt_debug__dump_livemaplist_2_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_livemaplist_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_livemaplist_2_0,
		fn__ll_backend__opt_debug__dump_livemaplist_2_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_livemaplist_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_livemaplist_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_livemaplist_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_livemaplist_2_0_i9);
MR_def_label(fn__ll_backend__opt_debug__dump_livemaplist_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ->", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_livemaplist_2_0_i10);
MR_def_label(fn__ll_backend__opt_debug__dump_livemaplist_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
MR_decl_entry(fn__map__to_assoc_list_1_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module42)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_livemap_2_0);
	MR_init_label1(fn__ll_backend__opt_debug__dump_livemap_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_livemap_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__to_assoc_list_1_0,
		fn__ll_backend__opt_debug__dump_livemap_2_0_i3);
MR_def_label(fn__ll_backend__opt_debug__dump_livemap_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ll_backend__opt_debug__dump_livemaplist_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module43)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_rvals_2_0);
	MR_init_label4(fn__ll_backend__opt_debug__dump_rvals_2_0,15,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_rvals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_rvals_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_rvals_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_rvals_2_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_rvals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_rvals_2_0,
		fn__ll_backend__opt_debug__dump_rvals_2_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_rvals_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_rvals_2_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_rvals_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module44)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_labels_2_0);
	MR_init_label4(fn__ll_backend__opt_debug__dump_labels_2_0,15,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_labels_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_labels_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_labels_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_labels_2_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_labels_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_labels_2_0,
		fn__ll_backend__opt_debug__dump_labels_2_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_labels_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_labels_2_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_labels_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module45)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_label_pairs_2_0);
	MR_init_label7(fn__ll_backend__opt_debug__dump_label_pairs_2_0,18,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_label_pairs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_label_pairs_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_label_pairs_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_label_pairs_2_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_label_pairs_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_label_2_0,
		fn__ll_backend__opt_debug__dump_label_pairs_2_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_label_pairs_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_label_pairs_2_0,
		fn__ll_backend__opt_debug__dump_label_pairs_2_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_label_pairs_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_label_pairs_2_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_label_pairs_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_label_pairs_2_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_label_pairs_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_label_pairs_2_0_i9);
MR_def_label(fn__ll_backend__opt_debug__dump_label_pairs_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
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


MR_BEGIN_MODULE(ll_backend__opt_debug_module46)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0);
	MR_init_label6(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0,3,6,7,8,9,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_maybe_rvals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0_i4);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r4 = MR_ctfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0_i6);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_sv(1) = (MR_Word) MR_string_const("no", 2);
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0,
		fn__ll_backend__opt_debug__dump_maybe_rvals_3_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_rval_2_0,
		fn__ll_backend__opt_debug__dump_maybe_rvals_3_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0,
		fn__ll_backend__opt_debug__dump_maybe_rvals_3_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_maybe_rvals_3_0_i9);
MR_def_label(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__opt_debug__dump_maybe_rvals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("truncated", 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module47)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_code_addrs_2_0);
	MR_init_label4(fn__ll_backend__opt_debug__dump_code_addrs_2_0,15,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_code_addrs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_code_addrs_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_code_addrs_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_code_addr_2_0,
		fn__ll_backend__opt_debug__dump_code_addrs_2_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_code_addrs_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_code_addrs_2_0,
		fn__ll_backend__opt_debug__dump_code_addrs_2_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_code_addrs_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_code_addrs_2_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_code_addrs_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module48)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_bool_1_0);
	MR_init_label1(fn__ll_backend__opt_debug__dump_bool_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_bool_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_bool_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("no", 2);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_bool_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("yes", 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module49)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_code_model_1_0);
	MR_init_label2(fn__ll_backend__opt_debug__dump_code_model_1_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_code_model_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_code_model_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("model_det", 9);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_code_model_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_code_model_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("model_non", 9);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_code_model_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("model_semi", 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module50)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_fullinstr_3_0);
	MR_init_label5(fn__ll_backend__opt_debug__dump_fullinstr_3_0,4,3,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_fullinstr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_fullinstr_3_0_i3);
	}
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_instr_3_0,
		fn__ll_backend__opt_debug__dump_fullinstr_3_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_fullinstr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__ll_backend__opt_debug__dump_fullinstr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r3, 1);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_instr_3_0,
		fn__ll_backend__opt_debug__dump_fullinstr_3_0_i6);
MR_def_label(fn__ll_backend__opt_debug__dump_fullinstr_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_fullinstr_3_0_i7);
MR_def_label(fn__ll_backend__opt_debug__dump_fullinstr_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" - ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__opt_debug__dump_fullinstr_3_0_i8);
MR_def_label(fn__ll_backend__opt_debug__dump_fullinstr_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__opt_debug_module51)
	MR_init_entry1(fn__ll_backend__opt_debug__dump_fullinstrs_3_0);
	MR_init_label3(fn__ll_backend__opt_debug__dump_fullinstrs_3_0,14,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__opt_debug__dump_fullinstrs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__opt_debug__dump_fullinstrs_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__ll_backend__opt_debug__dump_fullinstrs_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r3, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__ll_backend__opt_debug__dump_fullinstr_3_0,
		fn__ll_backend__opt_debug__dump_fullinstrs_3_0_i4);
MR_def_label(fn__ll_backend__opt_debug__dump_fullinstrs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(fn__ll_backend__opt_debug__dump_fullinstrs_3_0,
		fn__ll_backend__opt_debug__dump_fullinstrs_3_0_i5);
MR_def_label(fn__ll_backend__opt_debug__dump_fullinstrs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
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

MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module52)
	MR_init_entry1(ll_backend__opt_debug__print_comment_char_3_0);
	MR_init_label1(ll_backend__opt_debug__print_comment_char_3_0,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_debug__print_comment_char_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(ll_backend__opt_debug__print_comment_char_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("\n\t% ", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__opt_debug__print_comment_char_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__char_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__opt_debug_module53)
	MR_init_entry1(ll_backend__opt_debug__dump_comment_char_3_0);
	MR_init_label2(ll_backend__opt_debug__dump_comment_char_3_0,16,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__opt_debug__dump_comment_char_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(ll_backend__opt_debug__dump_comment_char_3_0_i16);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("\n\t% ", 4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(ll_backend__opt_debug__dump_comment_char_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		ll_backend__opt_debug__dump_comment_char_3_0_i5);
MR_def_label(ll_backend__opt_debug__dump_comment_char_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__opt_debug_maybe_bunch_0(void)
{
	ll_backend__opt_debug_module0();
	ll_backend__opt_debug_module1();
	ll_backend__opt_debug_module2();
	ll_backend__opt_debug_module3();
	ll_backend__opt_debug_module4();
	ll_backend__opt_debug_module5();
	ll_backend__opt_debug_module6();
	ll_backend__opt_debug_module7();
	ll_backend__opt_debug_module8();
	ll_backend__opt_debug_module9();
	ll_backend__opt_debug_module10();
	ll_backend__opt_debug_module11();
	ll_backend__opt_debug_module12();
	ll_backend__opt_debug_module13();
	ll_backend__opt_debug_module14();
	ll_backend__opt_debug_module15();
	ll_backend__opt_debug_module16();
	ll_backend__opt_debug_module17();
	ll_backend__opt_debug_module18();
	ll_backend__opt_debug_module19();
	ll_backend__opt_debug_module20();
	ll_backend__opt_debug_module21();
	ll_backend__opt_debug_module22();
	ll_backend__opt_debug_module23();
	ll_backend__opt_debug_module24();
	ll_backend__opt_debug_module25();
	ll_backend__opt_debug_module26();
	ll_backend__opt_debug_module27();
	ll_backend__opt_debug_module28();
	ll_backend__opt_debug_module29();
	ll_backend__opt_debug_module30();
	ll_backend__opt_debug_module31();
	ll_backend__opt_debug_module32();
	ll_backend__opt_debug_module33();
	ll_backend__opt_debug_module34();
	ll_backend__opt_debug_module35();
	ll_backend__opt_debug_module36();
	ll_backend__opt_debug_module37();
	ll_backend__opt_debug_module38();
	ll_backend__opt_debug_module39();
}

static void mercury__ll_backend__opt_debug_maybe_bunch_1(void)
{
	ll_backend__opt_debug_module40();
	ll_backend__opt_debug_module41();
	ll_backend__opt_debug_module42();
	ll_backend__opt_debug_module43();
	ll_backend__opt_debug_module44();
	ll_backend__opt_debug_module45();
	ll_backend__opt_debug_module46();
	ll_backend__opt_debug_module47();
	ll_backend__opt_debug_module48();
	ll_backend__opt_debug_module49();
	ll_backend__opt_debug_module50();
	ll_backend__opt_debug_module51();
	ll_backend__opt_debug_module52();
	ll_backend__opt_debug_module53();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__opt_debug__init(void);
void mercury__ll_backend__opt_debug__init_type_tables(void);
void mercury__ll_backend__opt_debug__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__opt_debug__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__opt_debug__init_complexity_procs(void);
#endif

void mercury__ll_backend__opt_debug__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__opt_debug_maybe_bunch_0();
	mercury__ll_backend__opt_debug_maybe_bunch_1();
	mercury__ll_backend__opt_debug__init_debugger();
}

void mercury__ll_backend__opt_debug__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__opt_debug__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__opt_debug__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__opt_debug);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__opt_debug__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
