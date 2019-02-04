/*
** Automatically generated from `hlds_out_pred.m'
** by the Mercury compiler,
** version rotd-2012-08-08, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__hlds_out__hlds_out_pred__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "hlds.hlds_out.hlds_out_pred.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "hlds.hlds_out.hlds_out_pred.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "hlds.hlds_out.hlds_out_pred.c"
#line 202 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 40 "hlds.hlds_out.hlds_out_pred.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "hlds.hlds_out.hlds_out_pred.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "hlds.hlds_out.hlds_out_pred.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "hlds.hlds_out.hlds_out_pred.c"
#line 53 "hlds.hlds_out.hlds_out_pred.c"
#include "hlds.hlds_out.hlds_out_pred.mh"

#line 56 "hlds.hlds_out.hlds_out_pred.c"
#line 57 "hlds.hlds_out.hlds_out_pred.c"
#ifndef HLDS__HLDS_OUT__HLDS_OUT_PRED_DECL_GUARD
#define HLDS__HLDS_OUT__HLDS_OUT_PRED_DECL_GUARD

#line 61 "hlds.hlds_out.hlds_out_pred.c"
#line 62 "hlds.hlds_out.hlds_out_pred.c"

#endif
#line 65 "hlds.hlds_out.hlds_out_pred.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_9 {
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];
MR_decl_label10(hlds__hlds_out__hlds_out_pred__marker_name_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__marker_name_2_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label4(hlds__hlds_out__hlds_out_pred__marker_name_2_0, 23,24,25,26)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0, 3,2,5,7,9,6,10,12,14,11)
MR_decl_label8(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0, 15,17,19,16,20,22,21,25)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0, 2,3,5,8,10,11,13,14,15,18)
MR_decl_label4(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0, 20,21,17,25)
MR_decl_label3(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0, 10,4,12)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_clause_14_0, 3,5,7,8,10,11,2,40,15,16)
MR_decl_label9(hlds__hlds_out__hlds_out_pred__write_clause_14_0, 17,14,19,20,25,22,29,30,35)
MR_decl_label6(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0, 2,3,6,8,9,5)
MR_decl_label1(hlds__hlds_out__hlds_out_pred__write_clauses_13_0, 2)
MR_decl_label7(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0, 14,4,5,6,7,8,16)
MR_decl_label2(hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0, 2,3)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0, 2,3,5,7,8,9,10,11,12,13)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0, 2,3,4,5,6,7,8,9,10,12)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0, 2,3,4,5,8,9,10,11,12,7)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0, 19,20,21,22,23,24,25,26,27,28)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0, 29,30,18,35,36,37,38,39,34,46)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0, 47,48,49,50,45,56,57,58,59,60)
MR_decl_label5(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0, 61,62,63,64,65)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0, 2,4,5,6,7,8,9,10,11,12)
MR_decl_label1(hlds__hlds_out__hlds_out_pred__write_marker_3_0, 2)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0, 12,13,14,15,16,17,19,18,21,23)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0, 27,26,22,34,36,37,38,39,40,41)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0, 42,43,44,45,46,47,48,49,50,132)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0, 52,53,54,51,56,58,133,57,60,62)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0, 64,134,63,67,70,71,72,73,68,74)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0, 75,136,77,78,79,80,82,137,84,85)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0, 83,87,90,92,93,94,96,97,98,99)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0, 100,101,102,89,104,107,108,109,110,111)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0, 112,113,114,115,116,106,118,121,122,120)
MR_decl_label3(hlds__hlds_out__hlds_out_pred__write_pred_8_0, 143,124,126)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 22,23,24,25,26,27,28,30,32,33)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 34,35,36,37,38,39,40,41,42,43)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 44,45,46,48,50,51,52,53,54,55)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 56,47,60,62,63,65,59,71,73,74)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 76,70,81,82,83,85,84,89,88,93)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 92,206,97,98,99,96,103,101,106,107)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 108,104,112,113,115,117,118,119,120,121)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 122,123,111,126,127,128,129,130,131,213)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 133,134,136,109,138,139,137,140,215,142)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 143,144,145,141,147,148,149,150,153,152)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 157,160,161,162,163,158,165,167,168,169)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 171,164,175,178,179,180,182,186,184,187)
MR_decl_label7(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 188,189,190,191,192,193,196)
MR_decl_label1(hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_0, 2)
MR_decl_label2(hlds__hlds_out__hlds_out_pred__write_procs_9_0, 2,3)
MR_decl_label4(hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0, 11,4,5,13)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0, 2,3,4,5,6,7,8,9,10,13)
MR_decl_label4(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0, 12,16,15,11)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0, 2,3,4,6,7,8,9,11,12,13)
MR_decl_label1(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0, 14)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0, 2,3,4,6,7,8,9,10,11,12)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0, 13,14,16,17,15,20,19,22,23,24)
MR_decl_label5(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0, 25,26,27,28,5)
MR_decl_label2(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0, 2,4)
MR_decl_label9(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0, 2,3,4,5,6,7,8,9,10)
MR_decl_label5(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0, 2,4,5,8,6)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0, 2,3,4,5,8,9,7,12,13,14)
MR_decl_label3(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0, 15,16,17)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0, 2,3,4,5,6,7,8,9,10,13)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0, 14,12,16,17,18,19,20,21,22,23)
MR_decl_label1(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0, 24)
MR_decl_label6(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0, 2,3,4,5,6,7)
MR_decl_label2(hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0, 2,3)
MR_decl_label5(hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0, 2,3,4,5,6)
MR_decl_label6(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0, 13,2,3,4,7,15)
MR_decl_label8(hlds__hlds_out__hlds_out_pred__write_var_types_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0, 20,4,5,6,7,8,9,10,11,12)
MR_decl_label3(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0, 13,14,22)
MR_decl_label1(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_0, 3)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0, 3,4,5,6,7,8,9,10,11,13)
MR_decl_label5(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0, 14,12,17,18,19)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__write_clause_14_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_clauses_13_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_var_types_7_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__write_proc_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_procs_9_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_marker_list_3_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__write_pred_8_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__marker_name_2_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__write_marker_3_0)
MR_decl_static(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__970__1_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_is_live_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
static const struct mercury_type_0 mercury_common_0[17] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error_context)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, is_live)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, arg_info)
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
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_id)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,14)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_locn_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,4),
MR_CTOR0_ADDR(hlds__hlds_pred, table_locn)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,5),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,8),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,16),
MR_CTOR0_ADDR(hlds__hlds_pred, table_locn)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_output_lang_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_arg_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_2;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_out__hlds_out_util, output_lang),
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,2),
MR_COMMON(0,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,11),
MR_CTOR0_ADDR(hlds__hlds_pred, table_arg_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,11),
MR_COMMON(1,3),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_clause_14_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_clause_14_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot),
MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn)
},
};

MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);
MR_decl_entry(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0);
static const struct mercury_type_4 mercury_common_4[5] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(fn__hlds__hlds_pred__proc_id_to_int_1_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_marker_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_3;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_INT_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(0,10),
MR_COMMON(0,11),
MR_COMMON(0,12),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_INT_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(0,10),
MR_COMMON(0,11),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_3,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_INT_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(0,10),
MR_COMMON(0,11),
MR_COMMON(0,13),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,10),
MR_BOOL_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(0,13),
MR_COMMON(0,15),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,11),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, constraint_id),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_call_site_static_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_proc_10_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_pred_8_0_1;
static const struct mercury_type_7 mercury_common_7[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_1,
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
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_proc_10_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,10),
MR_COMMON(0,13),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_pred_8_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,11),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_marker_list_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_marker_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, marker),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_string_const("::", 2)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_pred_8_0_1 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_constraint",
5,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
230,
"157"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_marker_list_3_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_marker",
3,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
1248,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_constraint_map_entry",
7,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
1208,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_proc_10_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"lambda_hlds_out_pred_m_970",
5,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
970,
"300"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_table_tvar_map_entry",
4,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
1104,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_table_arg_info",
4,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
1097,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_hlds_ps_coverage_point",
5,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
1028,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_hlds_ps_call_site",
5,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
1027,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_untuple_info_loop",
7,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
665,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_llds",
"hlds.hlds_llds",
"stack_slot_to_abs_locn",
2,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
654,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_3 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_rtti_var_info",
8,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
570,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_typeclass_info_var",
8,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
565,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_type_info_locn",
8,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
560,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_clause_14_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_pred",
"hlds.hlds_pred",
"proc_id_to_int",
2,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
366,
"35"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"add_mode_qualifier",
4,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
451,
"28"
};


MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module0)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0);
	MR_init_label10(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,3,4,5,6,7,8,9,10,11,13)
	MR_init_label5(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,14,12,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'import_status_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("abstract_exported", 17);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("abstract_imported", 17);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("exported", 8);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("exported_to_submodules", 22);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("local", 5);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("opt_exported", 12);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("opt_imported", 12);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("pseudo_exported", 15);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("pseudo_imported", 15);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i12);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i13);
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i14);
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("external (and ", 14);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("imported by an ancestor", 23);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("imported from an ancestor\'s private interface", 45);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("imported in the implementation", 30);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("imported in the interface", 25);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__contains_char_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module1)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,3,2,5,7,9,6,10,12,14,11)
	MR_init_label8(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,15,17,19,16,20,22,21,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_dump_opts_for_clauses'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 99;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_sv(2) = (MR_Word) MR_string_const("c", 1);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 110;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 118;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("v", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 103;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("g", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_sv(2);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 80;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("P", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_module__predicate_name_2_0);
MR_decl_entry(fn__hlds__hlds_module__predicate_module_2_0);
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_term_nq_6_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module2)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_clause_head_8_0);
	MR_init_label6(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,2,3,6,8,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_clause_head'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		hlds__hlds_out__hlds_out_pred__write_clause_head_8_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_module_2_0,
		hlds__hlds_out__hlds_out_pred__write_clause_head_8_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0_i5);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_head_8_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0,
		hlds__hlds_out__hlds_out_pred__write_clause_head_8_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_head_8_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_term_nq_6_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_declared_argmodes_2_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module3)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,2,3,5,8,10,11,13,14,15,18)
	MR_init_label4(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,20,21,17,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_annotated_clause_head'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(8) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i25);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i8);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_declared_argmodes_2_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_module_2_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_term_nq_6_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module4)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0);
	MR_init_label3(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0,10,4,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_annotated_clause_heads'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_tfield(1, MR_r5, 1);
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_12_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_out__hlds_out_util__write_indent_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_intlist_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
MR_decl_entry(io__write_3_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module5)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_clause_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_clause_14_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_clause_14_0,3,5,7,8,10,11,2,40,15,16)
	MR_init_label9(hlds__hlds_out__hlds_out_pred__write_clause_14_0,17,14,19,20,25,22,29,30,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_clause'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_pred__write_clause_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r10;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_r14 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_14_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_sv(11) = MR_tempr1;
	MR_sv(12) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(15) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_14_0_i2);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(15) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_tempr2 = MR_r10;
	MR_sv(14) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(17) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_tempr3 = MR_r14;
	MR_sv(11) = MR_tempr3;
	MR_sv(16) = MR_tfield(1, MR_tempr3, 0);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Integer) 109;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_14_0_i2);
	}
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Modes for which this clause applies: ", 39);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_intlist_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(13),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_14_0_i15);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_14_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_tfield(1, MR_sv(13), 0);
	MR_r1 = (MR_Word) MR_string_const("% Language of implementation: ", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_14_0_i22);
	}
	MR_r2 = MR_tfield(1, MR_sv(11), 0);
	MR_sv(17) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_14_0_i22);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(17);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_12_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i29);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i29);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(12), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_14_0_i30);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_14_0_i30);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_14_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_14_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(15);
	MR_r7 = (MR_Word) MR_string_const(".\n", 2);
	MR_r8 = MR_sv(10);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__var_list_to_term_list_2_0);
MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module6)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0);
	MR_init_label7(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0,14,4,5,6,7,8,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_clauses_loop'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r10,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_tempr2 = MR_r10;
	MR_sv(12) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(13) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% clause ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(14);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(12);
	MR_r11 = (MR_Integer) 0;
	MR_r12 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_clause_14_0,
		hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(13);
	MR_r11 = MR_sv(10);
	MR_r12 = ((MR_Integer) MR_sv(11) + (MR_Integer) 1);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module7)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_clauses_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_clauses_13_0);
	MR_init_label1(hlds__hlds_out__hlds_out_pred__write_clauses_13_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_clauses'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_clauses_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r8;
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		hlds__hlds_out__hlds_out_pred__write_clauses_13_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = (MR_Integer) 1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_pred__write_clauses_loop_14_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__lookup_var_type_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
MR_decl_entry(term__var_to_int_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_type_5_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module8)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,20,4,5,6,7,8,9,10,11,12)
	MR_init_label3(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,13,14,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_var_types_loop'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__lookup_var_type_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (number ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__vartypes_count_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(parse_tree__prog_data__vartypes_vars_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module9)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_var_types_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_var_types_7_0);
	MR_init_label8(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_var_types'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_var_types_7_0)
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
	}
	MR_np_call_localret_ent(parse_tree__prog_data__vartypes_count_2_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% variable types map ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" entries):\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__vartypes_vars_2_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_pred__write_var_types_loop_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_tvars_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module10)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,2,3,4,6,7,8,9,11,12,13)
	MR_init_label1(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_rtti_varmaps'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% type_info varmap:\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_tvars_2_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_sv(6) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% typeclass_info varmap:\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% rtti_var_info:\n", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module11)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0);
	MR_init_label6(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0,13,2,3,4,7,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_var_name_remap'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;
MR_decl_entry(map__to_assoc_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
MR_decl_entry(fn__assoc_list__map_values_only_2_0);
MR_decl_entry(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module12)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0);
	MR_init_label2(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_stack_slots'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__assoc_list__map_values_only_2_0,
		hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl_4_2);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module13)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0);
	MR_init_label2(hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_untuple_info'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% untuple:\n", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_call_site_static_data_0;
MR_decl_entry(list__foldl2_6_2);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module14)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,2,3,4,5,6,7,8,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_hlds_proc_static'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = MR_tfield(0, MR_r1, 3);
	MR_sv(3) = MR_tfield(0, MR_r1, 4);
	MR_r1 = (MR_Word) MR_string_const("% proc static filename: ", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% proc static line number: ", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% proc static is interface: ", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(5) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__foldl2_6_2,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Integer) 0;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl2_6_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_arg_info_0;

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module15)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0);
	MR_init_label5(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,2,4,5,8,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_arg_infos'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("% arg infos:\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(4) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_arg_info);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_locn);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_i6);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% type var map:\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module16)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_0);
	MR_init_label1(hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_proc_table_io_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% proc table io info: io tabled\n", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_declared_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_arglives_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_reg_r_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_maybe_arg_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_structure_sharing_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_structure_reuse_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_eval_method_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_is_address_taken_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_user_event_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_call_table_tip_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_untuple_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_var_name_remap_2_0);
MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_id_4_0);
MR_decl_entry(fn__parse_tree__prog_out__determinism_to_string_1_0);
MR_decl_entry(parse_tree__mercury_to_mercury__write_maybe_arg_size_info_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
MR_decl_entry(parse_tree__mercury_to_mercury__write_maybe_termination_info_4_0);
MR_decl_entry(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0);
MR_decl_entry(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0);
MR_decl_entry(parse_tree__prog_out__write_eval_method_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(varset__init_1_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_func_mode_decl_8_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_pred_mode_decl_7_0);
MR_decl_entry(io__print_3_0);
MR_decl_entry(parse_tree__set_of_var__is_non_empty_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__to_sorted_list_1_0);
MR_decl_entry(io__write_list_5_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_stack_slots_2_0);
MR_decl_entry(hlds__hlds_out__hlds_out_goal__write_goal_9_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module17)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_proc_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_proc_10_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,22,23,24,25,26,27,28,30,32,33)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,34,35,36,37,38,39,40,41,42,43)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,44,45,46,48,50,51,52,53,54,55)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,56,47,60,62,63,65,59,71,73,74)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,76,70,81,82,83,85,84,89,88,93)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,92,206,97,98,99,96,103,101,106,107)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,108,104,112,113,115,117,118,119,120,121)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,122,123,111,126,127,128,129,130,131,213)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,133,134,136,109,138,139,137,140,215,142)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,143,144,145,141,147,148,149,150,153,152)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,157,160,161,162,163,158,165,167,168,169)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,171,164,175,178,179,180,182,186,184,187)
	MR_init_label7(hlds__hlds_out__hlds_out_pred__write_proc_10_0,188,189,190,191,192,193,196)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_proc'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_pred__write_proc_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(38);
	MR_sv(38) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(37) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_arglives_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_reg_r_headvars_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_maybe_arg_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_structure_sharing_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_structure_reuse_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_is_address_taken_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_user_event_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_call_table_tip_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(32) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_untuple_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(33) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_var_name_remap_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i28);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(34) = MR_r1;
	MR_sv(35) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_sv(36) = MR_tfield(0, MR_sv(1), 0);
	MR_r1 = MR_sv(36);
	MR_r2 = (MR_Integer) 120;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i30);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i196);
	}
	MR_r1 = MR_sv(35);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% pred id ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i33);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(35);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i37);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% mode number ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" of ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i42);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i45);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("):\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i46);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(36);
	MR_r2 = (MR_Integer) 116;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i48);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i47);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i50);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Arg size properties: ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i51);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(21);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__write_maybe_arg_size_info_4_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i52);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i53);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i54);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Termination properties: ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i55);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(22);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__write_maybe_termination_info_4_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(36);
	MR_r2 = (MR_Integer) 83;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i60);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i59);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i62);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Structure sharing: \n", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i63);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(23),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i65);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(37);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i59);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tfield(0, MR_tfield(1, MR_sv(23), 0), 0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(37);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i59);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(36);
	MR_r2 = (MR_Integer) 82;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i71);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i70);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i73);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Structure reuse: \n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i74);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(24),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i76);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(37);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i70);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tfield(0, MR_tfield(1, MR_sv(24), 0), 0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(37);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i70);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i81);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(37);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i82);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(37);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i83);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(27),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i85);
	}
	MR_r1 = (MR_Word) MR_string_const("% address is not taken\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i84);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% address is taken\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i84);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(28),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i89);
	}
	MR_r1 = (MR_Word) MR_string_const("% does not contain parallel conjunction\n", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i88);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% contains parallel conjunction\n", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i88);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(29),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i93);
	}
	MR_r1 = (MR_Word) MR_string_const("% does not contain user event\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i92);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% contains user event\n", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i92);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(26),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i97);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(34);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i96);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% eval method: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i98);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(26);
	MR_np_call_localret_ent(parse_tree__prog_out__write_eval_method_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i99);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i206);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(30),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i101);
	}
	MR_sv(34) = MR_r3;
	MR_r1 = MR_sv(37);
	MR_r2 = MR_tfield(1, MR_sv(30), 0);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i103);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(31),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i104);
	}
	MR_sv(34) = MR_r3;
	MR_sv(37) = MR_tfield(1, MR_sv(31), 0);
	MR_r1 = (MR_Word) MR_string_const("% call table tip: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i106);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(37);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i107);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i108);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(32),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i109);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(32), 0);
	MR_r5 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i112);
	}
	MR_sv(37) = MR_tfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i111);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(34) = MR_r3;
	MR_sv(37) = MR_tfield(0, MR_r5, 1);
	MR_sv(10) = MR_tfield(0, MR_tfield(1, MR_r4, 0), 0);
	MR_r1 = (MR_Word) MR_string_const("% deep recursion info: ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i113);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(10),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i115);
	}
	MR_sv(10) = MR_body((MR_Integer) MR_sv(10), (MR_Integer) 0);
	MR_r1 = (MR_Word) MR_string_const("inner, outer is ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i117);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_body((MR_Integer) MR_sv(10), (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_string_const("outer, inner is ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i117);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(10), 0);
	MR_sv(10) = MR_tfield(0, MR_sv(10), 1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i118);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i119);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i120);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i121);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i122);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i123);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(37),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i109);
	}
	MR_sv(34) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(37);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(37) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i126);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(37);
	MR_sv(37) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("% deep layout info: ", 20);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i127);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("TopCSD is ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i128);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(37);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i129);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", MiddleCSD is ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i130);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i131);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(12),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i133);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i136);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(37) = MR_tfield(1, MR_sv(12), 0);
	MR_r1 = (MR_Word) MR_string_const(", OldOutermost is ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i134);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(37);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i213);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(33),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i138);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i137);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(34) = MR_r3;
	MR_r1 = MR_tfield(1, MR_sv(33), 0);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i139);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(34);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i140);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i142);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i141);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(37) = MR_tfield(1, MR_r1, 0);
	MR_sv(10) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i143);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% var name remap: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i144);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(37);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i145);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i215);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i147);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i148);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i149);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(37) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i150);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(37),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i152);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i153);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(20);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_func_mode_decl_8_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i157);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(20);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_pred_mode_decl_7_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i157);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(17);
	if (MR_LTAGS_TEST(MR_sv(16),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i158);
	}
	MR_sv(9) = MR_tfield(1, MR_sv(16), 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i160);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% arg lives: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i161);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(io__print_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i162);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i163);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(parse_tree__set_of_var__is_non_empty_1_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i165);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i164);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i167);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% reg_r headvars: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i168);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i169);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__970__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(13);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i171);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i164);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(36);
	MR_r2 = (MR_Integer) 65;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i175);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i182);
	}
	if (MR_LTAGS_TEST(MR_sv(18),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i182);
	}
	MR_sv(9) = MR_tfield(1, MR_sv(18), 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i178);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% arg_infos: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i179);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(io__print_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i180);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i182);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i184);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i186);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) == MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i196);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_stack_slots_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i187);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i188);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i189);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i190);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i191);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(37);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i192);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i193);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(35);
	MR_r7 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(38);
	MR_decr_sp(38);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_9_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(38);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module18)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0);
	MR_init_label4(hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0,11,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_procs_loop'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_tfield(1, MR_r2, 0);
	MR_sv(9) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_proc_10_0,
		hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module19)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_procs_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_procs_9_0);
	MR_init_label2(hlds__hlds_out__hlds_out_pred__write_procs_9_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_procs'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_procs_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__hlds_out__hlds_out_pred__write_procs_9_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_procs_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		hlds__hlds_out__hlds_out_pred__write_procs_9_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_procs_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_pred__write_procs_loop_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module20)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0);
	MR_init_label2(hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_constraint_map'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Constraint Map:\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module21)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_marker_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_marker_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_marker_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_marker_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, marker);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_class_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_constraint_proofs_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_constraint_map_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_head_type_params_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_var_name_remap_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_func_type_12_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_pred_type_11_0);
MR_decl_entry(parse_tree__prog_out__write_pred_or_func_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_goal_type_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_goal_type_0;
MR_decl_entry(hlds__hlds_pred__markers_to_marker_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_vars_5_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_id_to_int_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_transformation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_creation_0;

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module22)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_pred_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_pred_8_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0,12,13,14,15,16,17,19,18,21,23)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0,27,26,22,34,36,37,38,39,40,41)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0,42,43,44,45,46,47,48,49,50,132)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0,52,53,54,51,56,58,133,57,60,62)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0,64,134,63,67,70,71,72,73,68,74)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0,75,136,77,78,79,80,82,137,84,85)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0,83,87,90,92,93,94,96,97,98,99)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0,100,101,102,89,104,107,108,109,110,111)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_8_0,112,113,114,115,116,106,118,121,122,120)
	MR_init_label3(hlds__hlds_out__hlds_out_pred__write_pred_8_0,143,124,126)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_pred'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_pred__write_pred_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(24) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_constraint_proofs_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_constraint_map_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_head_type_params_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_var_name_remap_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 118;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i18);
	}
	MR_r1 = MR_sv(17);
	MR_sv(18) = (MR_Integer) 1;
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(17);
	MR_sv(18) = (MR_Integer) 0;
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r2 = (MR_Integer) 67;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i22);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i26);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(23);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(20);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(21);
	MR_r10 = MR_sv(18);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_func_type_12_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(23);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(20);
	MR_r4 = MR_sv(19);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(21);
	MR_r9 = MR_sv(18);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_pred_type_11_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(17);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(22);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(23) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(19) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(20) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(22) = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = (MR_Integer) 67;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i143);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% pred id: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i37);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", category: ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_out__write_pred_or_func_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", status: ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i42);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i45);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% goal_type: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i46);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, goal_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i48);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i49);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__markers_to_marker_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i50);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i52);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r2 = MR_sv(18);
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(22);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i51);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% markers: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i53);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_marker_list_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i54);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i132);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r5;
	MR_sv(18) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i58);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i57);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i62);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i60);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i133);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i64);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i63);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r3 = MR_sv(18);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(23);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i67);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i134);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(15),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i68);
	}
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r5;
	MR_sv(18) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_sv(23) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("% head_type_params:\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i70);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i71);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i72);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i73);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r3 = MR_sv(18);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(23);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r5;
	MR_sv(18) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i74);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i75);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i77);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i82);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_tfield(1, MR_r1, 0);
	MR_sv(22) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i78);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% var name remap: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i79);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i80);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i136);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i84);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i83);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i85);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(18);
	MR_r8 = MR_sv(19);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(23);
	MR_r11 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_clauses_13_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i137);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i87);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i89);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_sv(24) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(23) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("% instance method constraints:\n", 31);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i90);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_sv(24), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i92);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i93);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instance constraints: ", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i94);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(18);
	MR_tempr2 = MR_sv(23);
	MR_sv(23) = MR_tempr1;
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i96);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i97);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(24) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("method univ constraints: ", 25);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i98);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(24);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(23);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i99);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i100);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("method exist constraints: ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i101);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(23);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i102);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i143);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i104);
	}
	MR_r1 = (MR_Word) MR_string_const("% special pred\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i143);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i106);
	}
	MR_sv(24) = MR_tfield(2, MR_r1, 0);
	MR_sv(1) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_id_to_int_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i107);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i108);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% transformed from pred id ", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i110);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i111);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i112);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i113);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i114);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% transformation: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i115);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_transformation);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i116);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i143);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i118);
	}
	MR_r1 = (MR_Word) MR_string_const("% assertion\n", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i143);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i120);
	}
	MR_sv(24) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("% created: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i121);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_creation);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i122);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i143);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_8_0_i124);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r6 = MR_sv(9);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_procs_9_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i126);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r6 = MR_sv(9);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_procs_9_0,
		hlds__hlds_out__hlds_out_pred__write_pred_8_0_i126);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_8_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module23)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,2,3,4,6,7,8,9,10,11,12)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,13,14,16,17,15,20,19,22,23,24)
	MR_init_label5(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,25,26,27,28,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_space_and_table_trie_step'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("char", 4);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("dummy", 5);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("float", 5);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("foreign_enum", 12);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("int", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("promise_implied", 15);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("string", 6);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("typeclassinfo", 13);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("typeinfo", 8);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i15);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("enum(", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_tfield(2, MR_tempr1, 1) & (MR_Integer) 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i20);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = (((MR_Integer) MR_tfield(2, MR_tempr1, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(2) = (MR_Word) MR_string_const("mono", 4);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i19);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = (((MR_Integer) MR_tfield(2, MR_tempr1, 1) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(2) = (MR_Word) MR_string_const("poly", 4);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i22);
	}
	MR_sv(3) = (MR_Word) MR_string_const("addr", 4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_string_const("value", 5);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i28);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("general(", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module24)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__marker_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__marker_name_2_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__marker_name_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__marker_name_2_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label4(hlds__hlds_out__hlds_out_pred__marker_name_2_0,23,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'marker_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_pred__marker_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("builtin_stub", 12);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,20)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("calls_are_fully_qualified", 25);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,19)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("check_termination", 17);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("class_instance_method", 21);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("class_method", 12);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,18)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("does_not_terminate", 18);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,24)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("has_format_call", 15);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,23)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("has_require_scope", 17);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("heuristic_inline", 16);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("infer_modes", 11);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("infer_type", 10);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,12)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("impure", 6);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,13)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("semipure", 8);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,21)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("mode_check_clauses", 18);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,22)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("mutable_access_pred", 19);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,11)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("named_class_instance_method", 27);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("no_determinism_warning", 22);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("obsolete", 8);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,16)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i21);
	}
	MR_r1 = (MR_Word) MR_string_const("promise_equivalent_clauses", 26);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,14)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i22);
	}
	MR_r1 = (MR_Word) MR_string_const("promise_pure", 12);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,15)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("promise_semipure", 16);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("stub", 4);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,17)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("terminates", 10);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__marker_name_2_0_i26);
	}
	MR_r1 = (MR_Word) MR_string_const("inline", 6);
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_pred__marker_name_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("no_inline", 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module25)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_marker_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_marker_3_0);
	MR_init_label1(hlds__hlds_out__hlds_out_pred__write_marker_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_marker'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_pred__write_marker_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__marker_name_2_0,
		hlds__hlds_out__hlds_out_pred__write_marker_3_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_marker_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_0);
MR_decl_entry(parse_tree__prog_util__construct_qualified_term_with_context_4_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module26)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_0);
	MR_init_label1(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_mode_qualifier'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r3, 0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_3_0,
		fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_0_i3);
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_with_context_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module27)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,2,3,4,5,6,7,8,9,10,13)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,14,12,16,17,18,19,20,21,22,23)
	MR_init_label1(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_type_info_locn'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (number ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i12);
	}
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("type_info(", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("typeclass_info(", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (number ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module28)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0);
	MR_init_label6(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_typeclass_info_var'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_0,
		hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_var_info_3_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module29)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,2,3,4,5,6,7,8,9,10,13)
	MR_init_label4(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,12,16,15,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_rtti_var_info'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (number ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i12);
	}
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("type_info for ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i15);
	}
	MR_sv(4) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("typeclass_info for ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.hlds_out.hlds_out_pred", 27);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.hlds_out.hlds_out_pred.write_rtti_var_info\'/8", 61);
	MR_r3 = (MR_Word) MR_string_const("non rtti var", 12);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module30)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0);
	MR_init_label5(hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_untuple_info_loop'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_untuple_info_loop_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__goal_path__goal_path_to_string_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module31)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,2,3,4,5,8,9,10,11,12,7)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,19,20,21,22,23,24,25,26,27,28)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,29,30,18,35,36,37,38,39,34,46)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,47,48,49,50,45,56,57,58,59,60)
	MR_init_label5(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,61,62,63,64,65)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_hlds_ps_call_site'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% call site static slot ", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("% higher order call\n", 20);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_path_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, goal path <", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i61);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = (MR_Word) MR_string_const("% normal call to ", 17);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_proc_label);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_path_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, goal path <", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% type subst <", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i28);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i29);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, line number <", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i30);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i63);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("% special call\n", 15);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_path_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i37);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, goal path <", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i61);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("% callback\n", 11);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i46);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_path_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i48);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, goal path <", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i49);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i50);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i61);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("% method call\n", 14);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__goal_path_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i57);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i58);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, goal path <", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i59);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i60);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i61);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, line number <", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i62);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i63);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% filename <", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i64);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i65);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module32)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,2,4,5,6,7,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_hlds_ps_coverage_point'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) != ((MR_Integer) MR_cp_type_branch_arm))) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i4);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("branch arm", 10);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("after", 5);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, type ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": goal path <", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% coverage point slot ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module33)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0);
	MR_init_label9(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0,2,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_arg_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_tfield(0, MR_r2, 3);
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" in slot ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", type ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module34)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,2,3,4,5,8,9,7,12,13,14)
	MR_init_label3(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_tvar_map_entry'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("% typeinfo for ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("direct in register ", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", offset ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("indirect from register ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module35)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0,2,3,5,7,8,9,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_constraint_map_entry'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0_i5);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("(E, ", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("(A, ", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_entry_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module36)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__970__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__970__1_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__write_proc__970__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__IntroducedFrom__pred__write_proc__970__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_out__hlds_out_pred_maybe_bunch_0(void)
{
	hlds__hlds_out__hlds_out_pred_module0();
	hlds__hlds_out__hlds_out_pred_module1();
	hlds__hlds_out__hlds_out_pred_module2();
	hlds__hlds_out__hlds_out_pred_module3();
	hlds__hlds_out__hlds_out_pred_module4();
	hlds__hlds_out__hlds_out_pred_module5();
	hlds__hlds_out__hlds_out_pred_module6();
	hlds__hlds_out__hlds_out_pred_module7();
	hlds__hlds_out__hlds_out_pred_module8();
	hlds__hlds_out__hlds_out_pred_module9();
	hlds__hlds_out__hlds_out_pred_module10();
	hlds__hlds_out__hlds_out_pred_module11();
	hlds__hlds_out__hlds_out_pred_module12();
	hlds__hlds_out__hlds_out_pred_module13();
	hlds__hlds_out__hlds_out_pred_module14();
	hlds__hlds_out__hlds_out_pred_module15();
	hlds__hlds_out__hlds_out_pred_module16();
	hlds__hlds_out__hlds_out_pred_module17();
	hlds__hlds_out__hlds_out_pred_module18();
	hlds__hlds_out__hlds_out_pred_module19();
	hlds__hlds_out__hlds_out_pred_module20();
	hlds__hlds_out__hlds_out_pred_module21();
	hlds__hlds_out__hlds_out_pred_module22();
	hlds__hlds_out__hlds_out_pred_module23();
	hlds__hlds_out__hlds_out_pred_module24();
	hlds__hlds_out__hlds_out_pred_module25();
	hlds__hlds_out__hlds_out_pred_module26();
	hlds__hlds_out__hlds_out_pred_module27();
	hlds__hlds_out__hlds_out_pred_module28();
	hlds__hlds_out__hlds_out_pred_module29();
	hlds__hlds_out__hlds_out_pred_module30();
	hlds__hlds_out__hlds_out_pred_module31();
	hlds__hlds_out__hlds_out_pred_module32();
	hlds__hlds_out__hlds_out_pred_module33();
	hlds__hlds_out__hlds_out_pred_module34();
	hlds__hlds_out__hlds_out_pred_module35();
	hlds__hlds_out__hlds_out_pred_module36();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_out__hlds_out_pred__init(void);
void mercury__hlds__hlds_out__hlds_out_pred__init_type_tables(void);
void mercury__hlds__hlds_out__hlds_out_pred__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_out__hlds_out_pred__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_out__hlds_out_pred__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__hlds_out__hlds_out_pred__init_threadscope_string_table(void);
#endif

void mercury__hlds__hlds_out__hlds_out_pred__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_out__hlds_out_pred_maybe_bunch_0();
	mercury__hlds__hlds_out__hlds_out_pred__init_debugger();
}

void mercury__hlds__hlds_out__hlds_out_pred__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__hlds_out__hlds_out_pred__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_out__hlds_out_pred__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__hlds_out__hlds_out_pred);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_out__hlds_out_pred__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__hlds_out__hlds_out_pred__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
