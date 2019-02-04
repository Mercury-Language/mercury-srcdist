/*
** Automatically generated from `hlds_out_pred.m'
** by the Mercury compiler,
** version rotd-2010-01-31, configured for x86_64-unknown-linux-gnu.
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
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "hlds.hlds_out.hlds_out_pred.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "hlds.hlds_out.hlds_out_pred.c"
#line 231 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 36 "hlds.hlds_out.hlds_out_pred.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "hlds.hlds_out.hlds_out_pred.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "hlds.hlds_out.hlds_out_pred.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "hlds.hlds_out.hlds_out_pred.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
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

struct mercury_type_0 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
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
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_1[];
MR_decl_label10(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0, 3,2,5,7,9,6,10,12,14,11)
MR_decl_label4(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0, 15,17,16,20)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0, 2,3,5,8,11,13,16,17,18,21)
MR_decl_label4(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0, 23,24,20,28)
MR_decl_label3(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0, 10,4,12)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_clause_13_0, 3,5,7,8,10,11,2,40,15,16)
MR_decl_label9(hlds__hlds_out__hlds_out_pred__write_clause_13_0, 17,14,19,20,25,22,29,30,35)
MR_decl_label6(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0, 2,3,7,9,10,5)
MR_decl_label1(hlds__hlds_out__hlds_out_pred__write_clauses_12_0, 3)
MR_decl_label7(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0, 14,4,5,6,7,8,16)
MR_decl_label2(hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0, 2,3)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0, 2,3,5,7,8,12,13,14,15,16)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0, 2,3,4,5,6,7,8,9,10,12)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0, 2,3,4,5,40,41,42,43,44,45)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0, 46,47,48,49,50,51,52,56,57,58)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0, 59,60,61,18,19,20,21,22,23,70)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0, 30,31,32,33,34,7,8,9,10,11)
MR_decl_label6(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0, 12,13,14,15,16,17)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0, 2,4,5,6,7,8,9,10,11,12)
MR_decl_label1(hlds__hlds_out__hlds_out_pred__write_marker_3_0, 2)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0, 12,13,14,15,16,17,19,18,21,23)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0, 27,26,22,34,36,37,38,39,40,41)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0, 42,43,44,45,46,47,48,49,50,138)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0, 52,53,54,51,56,58,139,57,60,62)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0, 64,140,63,67,70,71,72,73,68,74)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0, 76,142,78,79,80,81,83,143,85,86)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0, 84,88,112,96,97,99,100,101,103,104)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0, 105,106,107,108,109,114,115,116,117,118)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0, 119,120,121,122,123,124,130,146,90,92)
MR_decl_label3(hlds__hlds_out__hlds_out_pred__write_pred_7_0, 93,94,132)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 32,33,34,35,36,37,38,39,40,41)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 42,44,46,47,49,50,51,52,53,43)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 57,59,60,62,56,68,70,71,73,67)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 78,79,80,82,81,86,85,90,89,200)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 94,95,96,93,104,102,107,108,109,105)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 113,114,116,118,119,120,121,122,123,124)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 112,127,128,129,130,131,132,207,134,135)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 137,110,139,141,143,209,145,146,147,148)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 144,150,151,152,153,156,155,160,163,164)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 166,167,161,169,172,173,175,177,181,179)
MR_decl_label8(hlds__hlds_out__hlds_out_pred__write_proc_10_0, 182,183,184,185,186,187,188,190)
MR_decl_label1(hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_0, 2)
MR_decl_label2(hlds__hlds_out__hlds_out_pred__write_procs_9_0, 2,3)
MR_decl_label4(hlds__hlds_out__hlds_out_pred__write_procs_2_10_0, 11,4,5,13)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0, 2,3,4,5,6,7,8,9,10,14)
MR_decl_label4(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0, 15,17,18,11)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0, 2,3,4,7,8,9,10,12,13,14)
MR_decl_label1(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0, 15)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0, 2,3,4,8,9,10,14,16,15,18)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0, 19,20,21,22,23,24,6,7,12,13)
MR_decl_label6(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0, 26,27,28,29,30,5)
MR_decl_label2(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0, 3,5)
MR_decl_label9(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0, 2,3,4,5,6,7,8,9,10)
MR_decl_label5(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0, 2,4,6,9,7)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0, 2,3,4,5,8,9,7,12,13,14)
MR_decl_label3(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0, 15,16,17)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0, 2,3,4,5,6,7,8,9,10,13)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0, 14,12,16,17,18,19,20,21,22,23)
MR_decl_label1(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0, 24)
MR_decl_label6(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0, 2,3,4,5,6,7)
MR_decl_label2(hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0, 2,3)
MR_decl_label5(hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0, 2,3,4,5,6)
MR_decl_label6(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0, 13,2,3,4,7,15)
MR_decl_label8(hlds__hlds_out__hlds_out_pred__write_var_types_7_0, 3,4,5,6,7,8,9,10)
MR_decl_label10(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0, 21,5,6,7,8,9,10,11,12,13)
MR_decl_label3(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0, 14,15,23)
MR_decl_label1(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_2_0, 3)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0, 41,8,9,11,3,4,5,6,13,14)
MR_decl_label3(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0, 15,16,17)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__write_clause_13_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_clauses_12_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_var_types_7_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__write_proc_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_procs_2_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_procs_9_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_marker_list_3_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__write_pred_7_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__marker_name_2_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_pred__write_marker_3_0)
MR_decl_static(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_2_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const("::", 2)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_is_live_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
static const struct mercury_type_1 mercury_common_1[16] =
{
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
MR_CTOR1_ADDR(term, term),
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
MR_COMMON(1,9)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,3)
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
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_locn_0;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(1,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(1,12),
MR_CTOR0_ADDR(hlds__hlds_pred, table_locn)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,1,7),
MR_CTOR0_ADDR(hlds__hlds_pred, table_locn)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_marker_list_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_COMMON(2,0),
MR_COMMON(1,2)
}
},
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

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_clause_13_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_clause_13_0_1,
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
static const struct mercury_type_5 mercury_common_5[5] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(fn__hlds__hlds_pred__proc_id_to_int_1_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0),
0
},
{
MR_COMMON(3,1),
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
static const struct mercury_type_6 mercury_common_6[3] =
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
MR_COMMON(1,4),
MR_COMMON(1,5),
MR_COMMON(1,6),
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
MR_COMMON(1,4),
MR_COMMON(1,5),
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
MR_COMMON(1,4),
MR_COMMON(1,5),
MR_COMMON(1,8),
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
static const struct mercury_type_7 mercury_common_7[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,4),
MR_BOOL_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,8),
MR_COMMON(1,10),
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
MR_COMMON(1,5),
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
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_pred_7_0_1;
static const struct mercury_type_8 mercury_common_8[3] =
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
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_pred_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,5),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_arg_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_2;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,5),
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
MR_COMMON(1,5),
MR_COMMON(2,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_string_const("\", ", 3),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[4] =
{
{
MR_string_const("imported in the implementation", 30)
},
{
MR_string_const("imported in the interface", 25)
},
{
MR_string_const("imported by an ancestor", 23)
},
{
MR_string_const("imported from an ancestor\'s private interface", 45)
},
};

static const struct mercury_type_0 mercury_vector_common_0_1[23] =
{
{
MR_string_const("stub", 4)
},
{
MR_string_const("builtin_stub", 12)
},
{
MR_string_const("infer_type", 10)
},
{
MR_string_const("infer_modes", 11)
},
{
MR_string_const("obsolete", 8)
},
{
MR_string_const("inline", 6)
},
{
MR_string_const("no_inline", 9)
},
{
MR_string_const("heuristic_inline", 16)
},
{
MR_string_const("class_method", 12)
},
{
MR_string_const("class_instance_method", 21)
},
{
MR_string_const("named_class_instance_method", 27)
},
{
MR_string_const("impure", 6)
},
{
MR_string_const("semipure", 8)
},
{
MR_string_const("promise_pure", 12)
},
{
MR_string_const("promise_semipure", 16)
},
{
MR_string_const("promise_equivalent_clauses", 26)
},
{
MR_string_const("terminates", 10)
},
{
MR_string_const("does_not_terminate", 18)
},
{
MR_string_const("check_termination", 17)
},
{
MR_string_const("calls_are_fully_qualified", 25)
},
{
MR_string_const("mode_check_clauses", 18)
},
{
MR_string_const("mutable_access_pred", 19)
},
{
MR_string_const("has_format_call", 15)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_pred_7_0_1 = {
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
228,
"c21;t;c38;s3-7;c12;"
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
1219,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_constraint_map_2",
7,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
1181,
"d1;c10;"
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
1077,
"d1;c11;d2;c4;"
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
1070,
"d1;c8;"
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
1001,
"d1;c20;"
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
1000,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_untuple_info_2",
7,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
654,
"d1;c10;"
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
643,
"d1;c9;"
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
559,
"d1;c24;"
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
554,
"d1;c18;"
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
549,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_clause_13_0_1 = {
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
357,
"d1;c18;d2;c2;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"add_mode_qualifier",
3,
0
},
"hlds.hlds_out.hlds_out_pred",
"hlds_out_pred.m",
440,
"d1;c14;t;c4;"
};


MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module0)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0);
	MR_init_label10(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,41,8,9,11,3,4,5,6,13,14)
	MR_init_label3(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'import_status_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tag(MR_r1);
	if ((MR_r2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i11);
	}
	if ((MR_r2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i41);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i15) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i4) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i17) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i5) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i14) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i3) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i16) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i6) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i13));
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i8);
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0_i9);
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,9)
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
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, (MR_Integer) MR_r2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("abstract_exported", 17);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("abstract_imported", 17);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("exported", 8);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("exported_to_submodules", 22);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("local", 5);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_exported", 12);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_imported", 12);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pseudo_exported", 15);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pseudo_imported", 15);
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
	MR_init_label4(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,15,17,16,20)
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
	MR_sv(2) = MR_tempr1;
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
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_string_const("c", 1);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_string_const("", 0);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 110;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 118;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i11);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("v", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_sv(3);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
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
	MR_init_label6(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,2,3,7,9,10,5)
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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		hlds__hlds_out__hlds_out_pred__write_clause_head_8_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_module_2_0,
		hlds__hlds_out__hlds_out_pred__write_clause_head_8_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0_i5);
	}
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_head_8_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0,
		hlds__hlds_out__hlds_out_pred__write_clause_head_8_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_head_8_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_term_nq_6_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_declared_argmodes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module3)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,2,3,5,8,11,13,16,17,18,21)
	MR_init_label4(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,23,24,20,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_annotated_clause_head'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i28);
	}
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i8);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_declared_argmodes_2_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr4 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(2);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_module_2_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_term_nq_6_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module4)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0);
	MR_init_label3(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0,10,4,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_annotated_clause_heads'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_tfield(1, MR_r4, 1);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_annotated_clause_head_11_0,
		hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
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
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module5)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_clause_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_clause_13_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_clause_13_0,3,5,7,8,10,11,2,40,15,16)
	MR_init_label9(hlds__hlds_out__hlds_out_pred__write_clause_13_0,17,14,19,20,25,22,29,30,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_clause'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_pred__write_clause_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r9;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_r13 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_13_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_tempr1;
	MR_sv(12) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(15) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_13_0_i2);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r9;
	MR_sv(14) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_tempr2 = MR_r13;
	MR_sv(11) = MR_tempr2;
	MR_sv(16) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Integer) 109;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_13_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Modes for which this clause applies: ", 39);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_intlist_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(13),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_13_0_i15);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_13_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_sv(13), 0);
	MR_r1 = (MR_Word) MR_string_const("% Language of implementation: ", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_13_0_i22);
	}
	MR_r2 = MR_tfield(1, MR_sv(11), 0);
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_13_0_i22);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_annotated_clause_heads_11_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i29);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i29);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(12), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_13_0_i30);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_13_0_i30);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clause_13_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clause_13_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clause_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(15);
	MR_r7 = (MR_Word) MR_string_const(".\n", 2);
	MR_r8 = MR_sv(10);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__var_list_to_term_list_2_0);
MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module6)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0);
	MR_init_label7(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0,14,4,5,6,7,8,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_clauses_2'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_tempr2 = MR_r9;
	MR_sv(11) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(12) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% clause ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(11);
	MR_r10 = (MR_Integer) 0;
	MR_r11 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_clause_13_0,
		hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_sv(9);
	MR_r11 = ((MR_Integer) MR_sv(10) + (MR_Integer) 1);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module7)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_clauses_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_clauses_12_0);
	MR_init_label1(hlds__hlds_out__hlds_out_pred__write_clauses_12_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_clauses'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_clauses_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_r7;
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		hlds__hlds_out__hlds_out_pred__write_clauses_12_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_clauses_12_0,3)
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
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = (MR_Integer) 1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_pred__write_clauses_2_13_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
MR_decl_entry(term__var_to_int_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_type_5_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module8)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,21,5,6,7,8,9,10,11,12,13)
	MR_init_label3(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,14,15,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_var_types_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i23);
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
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (number ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__count_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module9)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_var_types_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_var_types_7_0);
	MR_init_label8(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_var_types'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_var_types_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__count_2_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% variable types map ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" entries):\n", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__hlds_out__hlds_out_pred__write_var_types_7_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_pred__write_var_types_2_8_0);
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
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,2,3,4,7,8,9,10,12,13,14)
	MR_init_label1(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_rtti_varmaps'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_sv(6) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_sv(7) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% typeclass_info varmap:\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_typeclass_info_var_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% rtti_var_info:\n", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
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
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
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
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
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
	MR_init_label2(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0,3,5)
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
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__assoc_list__map_values_only_2_0,
		hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0,5)
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,11);
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
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(5) = MR_tfield(0, MR_r1, 4);
	MR_r1 = (MR_Word) MR_string_const("% proc static filename: ", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, call_site_static_data);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__foldl2_6_2,
		hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, coverage_point_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r5 = MR_sv(5);
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
	MR_init_label5(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,2,4,6,9,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_arg_infos'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("% arg infos:\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_table_arg_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(4) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_arg_info);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_locn);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_i7);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% type var map:\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
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
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_stack_slots_2_0);
MR_decl_entry(hlds__hlds_out__hlds_out_goal__write_goal_9_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module17)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_proc_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_proc_10_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,32,33,34,35,36,37,38,39,40,41)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,42,44,46,47,49,50,51,52,53,43)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,57,59,60,62,56,68,70,71,73,67)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,78,79,80,82,81,86,85,90,89,200)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,94,95,96,93,104,102,107,108,109,105)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,113,114,116,118,119,120,121,122,123,124)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,112,127,128,129,130,131,132,207,134,135)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,137,110,139,141,143,209,145,146,147,148)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,144,150,151,152,153,156,155,160,163,164)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_proc_10_0,166,167,161,169,172,173,175,177,181,179)
	MR_init_label8(hlds__hlds_out__hlds_out_pred__write_proc_10_0,182,183,184,185,186,187,188,190)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_proc'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_pred__write_proc_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(36);
	MR_sv(36) = (MR_Word) MR_succip;
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
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_arglives_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_maybe_arg_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_structure_sharing_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_structure_reuse_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_is_address_taken_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_user_event_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_call_table_tip_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(32) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_untuple_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(33) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_var_name_remap_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(34) = MR_r1;
	MR_sv(35) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = MR_sv(35);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i28);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% pred id ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i29);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i30);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i31);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(35);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i33);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% mode number ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" of ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i37);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("):\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i42);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_sv(13) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 116;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i43);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i46);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Arg size properties: ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(21);
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,1,13);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__write_maybe_arg_size_info_4_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i49);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i50);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i51);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Termination properties: ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i52);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(22);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__write_maybe_termination_info_4_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i53);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 83;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i57);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i56);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i59);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Structure sharing: \n", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i60);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(23),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i62);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tfield(0, MR_tfield(1, MR_sv(23), 0), 0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 82;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i68);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i67);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i70);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Structure reuse: \n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i71);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(24),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i73);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i67);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tfield(0, MR_tfield(1, MR_sv(24), 0), 0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__dump_maybe_structure_reuse_domain_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i67);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i78);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i79);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i80);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(27),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i82);
	}
	MR_r1 = (MR_Word) MR_string_const("% address is not taken\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i81);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% address is taken\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i81);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(28),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i86);
	}
	MR_r1 = (MR_Word) MR_string_const("% does not contain parallel conjunction\n", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i85);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% contains parallel conjunction\n", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i85);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(29),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i90);
	}
	MR_r1 = (MR_Word) MR_string_const("% does not contain user event\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i89);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% contains user event\n", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i89);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_tag(MR_sv(26)) == MR_mktag((MR_Integer) 1)) || (MR_tag(MR_sv(26)) == MR_mktag((MR_Integer) 2)))) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i94);
	}
	if (MR_INT_NE(MR_unmkbody(MR_sv(26)),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i94);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(34);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i93);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% eval method: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i95);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(26);
	MR_np_call_localret_ent(parse_tree__prog_out__write_eval_method_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i96);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i200);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(30),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i102);
	}
	MR_sv(34) = MR_r3;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tfield(1, MR_sv(30), 0);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_proc_table_io_info_4_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i104);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(31),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i105);
	}
	MR_sv(34) = MR_r3;
	MR_sv(10) = MR_tfield(1, MR_sv(31), 0);
	MR_r1 = (MR_Word) MR_string_const("% call table tip: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i107);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i108);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(32),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i110);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(32), 0);
	MR_r5 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i113);
	}
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i112);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(34) = MR_r3;
	MR_sv(10) = MR_tfield(0, MR_r5, 1);
	MR_sv(11) = MR_tfield(0, MR_tfield(1, MR_r4, 0), 0);
	MR_r1 = (MR_Word) MR_string_const("% deep recursion info: ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i114);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(11),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i116);
	}
	MR_sv(11) = MR_tfield(0, MR_sv(11), 0);
	MR_r1 = (MR_Word) MR_string_const("inner, outer is ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i118);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_tfield(1, MR_sv(11), 0);
	MR_r1 = (MR_Word) MR_string_const("outer, inner is ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i118);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(11), 0);
	MR_sv(11) = MR_tfield(0, MR_sv(11), 1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i119);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i120);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i121);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i122);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i123);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i124);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i110);
	}
	MR_sv(34) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(10);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_hlds_proc_static_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i127);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(21) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("% deep layout info: ", 20);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i128);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("TopCSD is ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i129);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i130);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", MiddleCSD is ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i131);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i132);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(21),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i134);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i137);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_tfield(1, MR_sv(21), 0);
	MR_r1 = (MR_Word) MR_string_const(", OldOutermost is ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i135);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i207);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(33),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i139);
	}
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i143);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(34) = MR_r3;
	MR_r1 = MR_tfield(1, MR_sv(33), 0);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_untuple_info_6_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i141);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(34);
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i143);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i145);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i144);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_tfield(1, MR_r1, 0);
	MR_sv(11) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i146);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% var name remap: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i147);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i148);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i209);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i150);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i151);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i152);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i153);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i155);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i156);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(20);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_func_mode_decl_8_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i160);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(20);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_pred_mode_decl_7_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i160);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	if (MR_LTAGS_TEST(MR_sv(17),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i161);
	}
	MR_sv(9) = MR_tfield(1, MR_sv(17), 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i163);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% arg lives: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i164);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,14);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(io__print_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i166);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i167);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 65;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i169);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i177);
	}
	if (MR_LTAGS_TEST(MR_sv(18),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i177);
	}
	MR_sv(9) = MR_tfield(1, MR_sv(18), 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i172);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% arg_infos: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i173);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,15);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(io__print_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i175);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i177);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i179);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i181);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) == MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_proc_10_0_i190);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_stack_slots_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i182);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i183);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_stack_slots_6_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i184);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i185);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i186);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_clause_head_8_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i187);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_proc_10_0_i188);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(35);
	MR_r7 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(36);
	MR_decr_sp(36);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_9_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_proc_10_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(36);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module18)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_procs_2_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_procs_2_10_0);
	MR_init_label4(hlds__hlds_out__hlds_out_pred__write_procs_2_10_0,11,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_procs_2'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_procs_2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_pred__write_procs_2_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_procs_2_10_0_i13);
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
		hlds__hlds_out__hlds_out_pred__write_procs_2_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_procs_2_10_0,4)
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
		hlds__hlds_out__hlds_out_pred__write_procs_2_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_procs_2_10_0,5)
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
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_procs_2_10_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_procs_2_10_0,13)
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
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_pred__write_procs_2_10_0);
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0);
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
MR_decl_entry(io__write_list_5_0);

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
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,4);
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
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_pred_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_pred_7_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0,12,13,14,15,16,17,19,18,21,23)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0,27,26,22,34,36,37,38,39,40,41)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0,42,43,44,45,46,47,48,49,50,138)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0,52,53,54,51,56,58,139,57,60,62)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0,64,140,63,67,70,71,72,73,68,74)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0,76,142,78,79,80,81,83,143,85,86)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0,84,88,112,96,97,99,100,101,103,104)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0,105,106,107,108,109,114,115,116,117,118)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_pred_7_0,119,120,121,122,123,124,130,146,90,92)
	MR_init_label3(hlds__hlds_out__hlds_out_pred__write_pred_7_0,93,94,132)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_pred'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_pred__write_pred_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(24);
	MR_sv(24) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_constraint_proofs_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_constraint_map_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_head_type_params_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_var_name_remap_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_sv(21) = MR_r1;
	MR_sv(22) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 118;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i18);
	}
	MR_r1 = MR_sv(22);
	MR_sv(23) = (MR_Integer) 1;
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(22);
	MR_sv(23) = (MR_Integer) 0;
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r2 = (MR_Integer) 67;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i22);
	}
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i26);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(19);
	MR_r8 = MR_sv(16);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(23);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_func_type_12_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(9);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(19);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(23);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_pred_type_11_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(22);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(12) = MR_tfield(0, MR_sv(12), 7);
	MR_r2 = (MR_Integer) 67;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i146);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% pred id: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i37);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", category: ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_out__write_pred_or_func_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", status: ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i42);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i45);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% goal_type: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i46);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, goal_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i48);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i49);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__markers_to_marker_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i50);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i52);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r5 = MR_sv(11);
	MR_r2 = MR_sv(23);
	MR_r4 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i51);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% markers: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i53);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_marker_list_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i54);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i138);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(11) = MR_r5;
	MR_sv(23) = MR_r2;
	MR_sv(6) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_rtti_varmaps_7_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i58);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i57);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(18);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i62);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(23);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i60);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i139);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i64);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i63);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r5 = MR_sv(11);
	MR_r3 = MR_sv(23);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i67);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(23);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_constraint_map_6_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i140);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(20),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i68);
	}
	MR_sv(2) = MR_r1;
	MR_sv(11) = MR_r5;
	MR_sv(23) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("% head_type_params:\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i70);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i71);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(23);
	MR_r4 = MR_sv(20);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i72);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i73);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r5 = MR_sv(11);
	MR_r3 = MR_sv(23);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(11) = MR_r5;
	MR_sv(23) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_var_types_7_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i74);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i76);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i78);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i83);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_sv(12) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i79);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% var name remap: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i80);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_var_name_remap_5_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i81);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i142);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i85);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i84);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__set_dump_opts_for_clauses_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i86);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(23);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(7);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_clauses_12_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i143);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i88);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i112) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i96) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i114) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i130));
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% special pred\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i146);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("% instance method constraints:\n", 31);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i97);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_sv(6), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(23);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i99);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i100);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instance constraints: ", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i101);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(23);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i103);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i104);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("method univ constraints: ", 25);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i105);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i106);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i107);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("method exist constraints: ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i108);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i146);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(2, MR_r1, 0);
	MR_sv(7) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_id_to_int_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i115);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i116);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i117);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% transformed from pred id ", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i118);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i119);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i120);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i121);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i122);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% transformation: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i123);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_transformation);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i124);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i146);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i92);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_pred_7_0_i90);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r6 = MR_sv(14);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_procs_9_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i132);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% assertion\n", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i146);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("% created: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i93);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_creation);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i94);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_pred_7_0_i146);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_pred_7_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(24);
	MR_decr_sp(24);
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
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,2,3,4,8,9,10,14,16,15,18)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,19,20,21,22,23,24,6,7,12,13)
	MR_init_label6(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,26,27,28,29,30,5)
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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(3),2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i14);
	}
	if (MR_PTAG_TEST(MR_sv(3),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i8);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(3)),
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i7) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i26) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i6) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i28) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i12) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i13) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i30) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i29) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i27));
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("enum(", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r4 = MR_tfield(2, MR_tempr1, 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	MR_sv(1) = (MR_Word) MR_string_const("mono", 4);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i15);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	MR_sv(1) = (MR_Word) MR_string_const("poly", 4);
	}
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i18);
	}
	MR_sv(2) = (MR_Word) MR_string_const("addr", 4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_string_const("value", 5);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("general(", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char", 4);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dummy", 5);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float", 5);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("foreign_enum", 12);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("int", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("promise_implied", 15);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("string", 6);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typeclassinfo", 13);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typeinfo", 8);
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
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'marker_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_pred__marker_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
	}
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

MR_decl_entry(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0);
MR_decl_entry(parse_tree__prog_util__construct_qualified_term_4_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module26)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_2_0);
	MR_init_label1(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_mode_qualifier'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0,
		fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_2_0_i3);
MR_def_label(fn__hlds__hlds_out__hlds_out_pred__add_mode_qualifier_2_0,3)
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
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
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
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
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
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
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
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
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
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i12);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("type_info(", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("typeclass_info(", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_type_info_locn_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
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
	MR_r2 = MR_sv(2);
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
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module29)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,2,3,4,5,6,7,8,9,10,14)
	MR_init_label4(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,15,17,18,11)
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
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
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
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
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
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
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
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i17);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds_out_pred.m", 15);
	MR_r2 = (MR_Word) MR_string_const("write_rtti_var_info: non rtti var", 33);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("type_info for ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("typeclass_info for ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_rtti_var_info_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
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
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0);
	MR_init_label5(hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_untuple_info_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_untuple_info_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;
MR_decl_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module31)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,2,3,4,5,40,41,42,43,44,45)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,46,47,48,49,50,51,52,56,57,58)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,59,60,61,18,19,20,21,22,23,70)
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,30,31,32,33,34,7,8,9,10,11)
	MR_init_label6(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,12,13,14,15,16,17)
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
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i40) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i56) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i18) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i70));
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = (MR_Word) MR_string_const("% normal call to ", 17);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_proc_label);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i42);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i45);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, goal path <", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i46);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% type subst <", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i48);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i49);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i50);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i51);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, line number <", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i52);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("% special call\n", 15);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i57);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i58);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i59);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, goal path <", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i60);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i61);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("% higher order call\n", 20);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, goal path <", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("% method call\n", 14);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i30);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i31);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, goal path <", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i33);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i34);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("% callback\n", 11);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
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
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(">, line number <", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% filename <", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_call_site_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


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
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) != ((MR_Integer) MR_cp_type_branch_arm))) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("branch arm", 10);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
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
	MR_r1 = MR_sv(1);
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
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_hlds_ps_coverage_point_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
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
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("% typeinfo for ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
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
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
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
	MR_tempr1 = MR_sv(3);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_table_tvar_map_entry_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
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

MR_decl_entry(io__write_strings_3_0);
MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_pred_module35)
	MR_init_entry1(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0);
	MR_init_label10(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0,2,3,5,7,8,12,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_constraint_map_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0_i5);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("(E, ", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("(A, ", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\"", 1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_pred__write_constraint_map_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
