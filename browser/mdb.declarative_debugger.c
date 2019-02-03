/*
** Automatically generated from `declarative_debugger.m'
** by the Mercury compiler,
** version 10.04.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__declarative_debugger__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.declarative_debugger.c"
#include "mdb.declarative_debugger.mh"

#line 28 "mdb.declarative_debugger.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.declarative_debugger.c"
#line 539 "../library/io.int"
#include "io.mh"

#line 36 "mdb.declarative_debugger.c"
#line 547 "../library/io.int"
#include "string.mh"

#line 40 "mdb.declarative_debugger.c"
#line 231 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 44 "mdb.declarative_debugger.c"
#line 67 "../mdbcomp/mdbcomp.rtti_access.int"
#include "mdbcomp.rtti_access.mh"

#line 48 "mdb.declarative_debugger.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 52 "mdb.declarative_debugger.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 56 "mdb.declarative_debugger.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 60 "mdb.declarative_debugger.c"
#line 31 "../library/store.int2"
#include "store.mh"

#line 64 "mdb.declarative_debugger.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 68 "mdb.declarative_debugger.c"
#line 69 "mdb.declarative_debugger.c"
#ifndef MDB__DECLARATIVE_DEBUGGER_DECL_GUARD
#define MDB__DECLARATIVE_DEBUGGER_DECL_GUARD

#line 73 "mdb.declarative_debugger.c"
#line 964 "declarative_debugger.m"

extern  int MR_DD_debug_origin;

#line 78 "mdb.declarative_debugger.c"
#line 79 "mdb.declarative_debugger.c"

#endif
#line 82 "mdb.declarative_debugger.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Unsigned f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3;
	MR_Integer f4;
	MR_Word * f5[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_String f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__declarative_debugger__type_ctor_info_decl_answer_1,
	mercury_data_mdb__declarative_debugger__type_ctor_info_decl_bug_0,
	mercury_data_mdb__declarative_debugger__type_ctor_info_decl_confirmation_0,
	mercury_data_mdb__declarative_debugger__type_ctor_info_decl_contour_0,
	mercury_data_mdb__declarative_debugger__type_ctor_info_decl_e_bug_0,
	mercury_data_mdb__declarative_debugger__type_ctor_info_decl_evidence_1,
	mercury_data_mdb__declarative_debugger__type_ctor_info_decl_exception_0,
	mercury_data_mdb__declarative_debugger__type_ctor_info_decl_i_bug_0,
	mercury_data_mdb__declarative_debugger__type_ctor_info_decl_position_0,
	mercury_data_mdb__declarative_debugger__type_ctor_info_decl_question_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__declarative_debugger__type_ctor_info_decl_truth_0,
	mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0,
	mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_response_1,
	mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_state_1,
	mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
	mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
	mercury_data_mdb__declarative_debugger__type_ctor_info_some_decl_atom_0;
MR_decl_label2(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0, 3,1)
MR_decl_label10(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0, 43,2,3,4,6,9,10,11,8,13)
MR_decl_label5(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0, 15,14,19,18,22)
MR_decl_label2(mdb__declarative_debugger__add_trusted_module_3_0, 2,3)
MR_decl_label1(mdb__declarative_debugger__add_trusted_pred_or_func_3_0, 2)
MR_decl_label6(mdb__declarative_debugger__confirm_bug_8_0, 2,5,10,12,8,6)
MR_decl_label1(mdb__declarative_debugger__diagnoser_bug_found_2_0, 1)
MR_decl_label1(mdb__declarative_debugger__diagnoser_no_bug_found_1_0, 1)
MR_decl_label1(mdb__declarative_debugger__diagnoser_require_subtree_5_0, 1)
MR_decl_label1(mdb__declarative_debugger__diagnoser_require_supertree_3_0, 1)
MR_decl_label2(mdb__declarative_debugger__diagnoser_state_init_5_0, 3,4)
MR_decl_label2(mdb__declarative_debugger__diagnoser_state_init_store_5_0, 3,4)
MR_decl_label1(mdb__declarative_debugger__diagnoser_symptom_found_2_0, 1)
MR_decl_label10(mdb__declarative_debugger__diagnosis_9_0, 2,5,7,10,14,16,17,13,12,11)
MR_decl_label1(mdb__declarative_debugger__diagnosis_9_0, 20)
MR_decl_label5(mdb__declarative_debugger__diagnosis_2_6_0, 2,4,7,9,10)
MR_decl_label10(mdb__declarative_debugger__handle_analyser_response_8_0, 134,4,3,6,5,10,13,14,11,17)
MR_decl_label10(mdb__declarative_debugger__handle_analyser_response_8_0, 19,21,25,27,28,23,20,9,33,35)
MR_decl_label10(mdb__declarative_debugger__handle_analyser_response_8_0, 34,32,42,44,46,47,48,49,52,51)
MR_decl_label4(mdb__declarative_debugger__handle_analyser_response_8_0, 50,41,55,57)
MR_decl_label10(mdb__declarative_debugger__handle_diagnoser_exception_6_0, 4,5,6,7,8,9,10,11,3,16)
MR_decl_label10(mdb__declarative_debugger__handle_diagnoser_exception_6_0, 17,18,19,20,21,15,25,26,27,28)
MR_decl_label2(mdb__declarative_debugger__handle_diagnoser_exception_6_0, 29,31)
MR_decl_label10(mdb__declarative_debugger__handle_oracle_response_7_0, 4,3,7,8,6,10,11,12,14,16)
MR_decl_label10(mdb__declarative_debugger__handle_oracle_response_7_0, 19,13,23,24,26,5,29,31,34,28)
MR_decl_label10(mdb__declarative_debugger__handle_oracle_response_7_0, 39,41,44,47,46,51,52,38,55,57)
MR_decl_label4(mdb__declarative_debugger__handle_oracle_response_7_0, 60,62,54,64)
MR_decl_label4(mdb__declarative_debugger__overrule_bug_6_0, 2,4,7,9)
MR_decl_label2(mdb__declarative_debugger__remove_trusted_3_0, 2,1)
MR_decl_label1(mdb__declarative_debugger__reset_knowledge_base_2_0, 2)
MR_decl_label1(mdb__declarative_debugger__set_diagnoser_testing_flag_3_0, 2)
MR_decl_label1(mdb__declarative_debugger__set_fallback_search_mode_4_0, 6)
MR_decl_label1(mdb__declarative_debugger__trust_standard_library_2_0, 2)
MR_decl_label1(mdb__declarative_debugger__unravel_decl_atom_3_0, 3)
MR_decl_label10(mdb__declarative_debugger__write_origin_4_0, 4,5,6,7,8,9,10,11,12,14)
MR_decl_label2(mdb__declarative_debugger__write_origin_4_0, 2,16)
MR_decl_label2(fn__mdb__declarative_debugger__get_decl_question_atom_1_0, 3,4)
MR_decl_label9(__Unify___mdb__declarative_debugger__decl_answer_1_0, 5,9,15,17,19,38,13,22,1)
MR_decl_label3(__Unify___mdb__declarative_debugger__decl_bug_0_0, 16,5,1)
MR_decl_label10(__Unify___mdb__declarative_debugger__decl_e_bug_0_0, 7,9,11,5,15,33,13,18,20,1)
MR_decl_label4(__Unify___mdb__declarative_debugger__decl_i_bug_0_0, 4,6,8,1)
MR_decl_label10(__Unify___mdb__declarative_debugger__decl_question_1_0, 7,9,5,15,17,39,13,22,24,1)
MR_decl_label4(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0, 5,19,7,1)
MR_decl_label7(__Unify___mdb__declarative_debugger__diagnoser_response_1_0, 5,6,8,12,30,10,1)
MR_decl_label4(__Unify___mdb__declarative_debugger__diagnoser_state_1_0, 5,7,12,1)
MR_decl_label3(__Unify___mdb__declarative_debugger__final_decl_atom_0_0, 4,8,1)
MR_decl_label1(__Unify___mdb__declarative_debugger__init_decl_atom_0_0, 6)
MR_decl_label3(__Unify___mdb__declarative_debugger__some_decl_atom_0_0, 16,5,1)
MR_decl_label10(__Compare___mdb__declarative_debugger__decl_answer_1_0, 3,2,7,9,5,122,13,11,19,20)
MR_decl_label10(__Compare___mdb__declarative_debugger__decl_answer_1_0, 23,27,31,35,17,44,45,46,48,189)
MR_decl_label5(__Compare___mdb__declarative_debugger__decl_bug_0_0, 3,2,7,5,10)
MR_decl_label10(__Compare___mdb__declarative_debugger__decl_e_bug_0_0, 3,2,9,13,17,71,5,27,30,25)
MR_decl_label5(__Compare___mdb__declarative_debugger__decl_e_bug_0_0, 36,37,39,43,146)
MR_decl_label5(__Compare___mdb__declarative_debugger__decl_i_bug_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___mdb__declarative_debugger__decl_question_1_0, 3,2,9,13,7,5,72,22,25,29)
MR_decl_label6(__Compare___mdb__declarative_debugger__decl_question_1_0, 20,36,37,39,43,132)
MR_decl_label10(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0, 3,2,9,45,5,17,20,15,26,27)
MR_decl_label1(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0, 102)
MR_decl_label10(__Compare___mdb__declarative_debugger__diagnoser_response_1_0, 90,7,8,9,5,13,14,16,11,155)
MR_decl_label10(__Compare___mdb__declarative_debugger__diagnoser_response_1_0, 20,21,18,27,28,29,32,36,40,25)
MR_decl_label6(__Compare___mdb__declarative_debugger__diagnoser_response_1_0, 48,49,50,51,53,58)
MR_decl_label6(__Compare___mdb__declarative_debugger__diagnoser_state_1_0, 3,2,6,10,14,39)
MR_decl_label4(__Compare___mdb__declarative_debugger__final_decl_atom_0_0, 3,2,5,21)
MR_decl_label2(__Compare___mdb__declarative_debugger__init_decl_atom_0_0, 3,2)
MR_decl_label5(__Compare___mdb__declarative_debugger__some_decl_atom_0_0, 3,2,7,5,10)
MR_def_extern_entry(fn__mdb__declarative_debugger__get_decl_question_node_1_0)
MR_def_extern_entry(fn__mdb__declarative_debugger__get_decl_question_atom_1_0)
MR_def_extern_entry(mdb__declarative_debugger__diagnoser_state_init_5_0)
MR_decl_static(mdb__declarative_debugger__handle_diagnoser_exception_6_0)
MR_def_extern_entry(mdb__declarative_debugger__diagnosis_9_0)
MR_def_extern_entry(mdb__declarative_debugger__unravel_decl_atom_3_0)
MR_decl_static(mdb__declarative_debugger__write_origin_4_0)
MR_decl_static(mdb__declarative_debugger__debug_origin_3_0)
MR_decl_static(mdb__declarative_debugger__handle_analyser_response_8_0)
MR_decl_static(mdb__declarative_debugger__handle_oracle_response_7_0)
MR_decl_static(mdb__declarative_debugger__confirm_bug_8_0)
MR_decl_static(mdb__declarative_debugger__overrule_bug_6_0)
MR_decl_static(mdb__declarative_debugger__diagnosis_2_6_0)
MR_decl_static(mdb__declarative_debugger__diagnoser_state_init_store_5_0)
MR_decl_static(mdb__declarative_debugger__diagnoser_session_init_2_0)
MR_decl_static(mdb__declarative_debugger__set_diagnoser_testing_flag_3_0)
MR_decl_static(mdb__declarative_debugger__set_fallback_search_mode_4_0)
MR_decl_static(mdb__declarative_debugger__reset_knowledge_base_2_0)
MR_decl_static(fn__mdb__declarative_debugger__top_down_search_mode_0_0)
MR_decl_static(fn__mdb__declarative_debugger__divide_and_query_search_mode_0_0)
MR_decl_static(fn__mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_0)
MR_decl_static(mdb__declarative_debugger__diagnosis_new_tree_9_0)
MR_decl_static(mdb__declarative_debugger__diagnosis_resume_previous_8_0)
MR_decl_static(mdb__declarative_debugger__diagnoser_bug_found_2_0)
MR_decl_static(mdb__declarative_debugger__diagnoser_symptom_found_2_0)
MR_decl_static(mdb__declarative_debugger__diagnoser_no_bug_found_1_0)
MR_decl_static(mdb__declarative_debugger__diagnoser_require_subtree_5_0)
MR_decl_static(mdb__declarative_debugger__diagnoser_require_supertree_3_0)
MR_decl_static(mdb__declarative_debugger__add_trusted_module_3_0)
MR_decl_static(mdb__declarative_debugger__add_trusted_pred_or_func_3_0)
MR_decl_static(mdb__declarative_debugger__trust_standard_library_2_0)
MR_decl_static(mdb__declarative_debugger__remove_trusted_3_0)
MR_decl_static(mdb__declarative_debugger__get_trusted_list_3_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__decl_answer_1_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__decl_answer_1_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__decl_bug_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__decl_bug_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__decl_confirmation_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__decl_confirmation_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__decl_contour_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__decl_contour_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__decl_e_bug_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__decl_e_bug_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__decl_evidence_1_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__decl_evidence_1_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__decl_exception_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__decl_exception_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__decl_i_bug_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__decl_i_bug_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__decl_position_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__decl_position_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__decl_question_1_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__decl_question_1_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__decl_truth_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__decl_truth_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__diagnoser_response_1_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__diagnoser_response_1_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__diagnoser_state_1_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__diagnoser_state_1_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__final_decl_atom_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__final_decl_atom_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__init_decl_atom_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__init_decl_atom_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_debugger__some_decl_atom_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_debugger__some_decl_atom_0_0)
MR_decl_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0)
MR_decl_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0)
MR_decl_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_tree__type_ctor_info_edt_node_1;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
MR_CTOR1_ADDR(mdb__declarative_tree, edt_node),
2
},
{
MR_CTOR1_ADDR(mdb__declarative_debugger, diagnoser_state),
2
},
{
MR_CTOR1_ADDR(mdb__declarative_debugger, diagnoser_response),
2
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_analysis_type_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_tree__type_ctor_info_wrap_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_store_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_CTOR1_ADDR(mdb__declarative_analyser, analysis_type),
MR_COMMON(0,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(mdb__declarative_tree, edt_node),
MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_id)
}
},
{
{
MR_CTOR1_ADDR(mdb__declarative_tree, wrap),
MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_store)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_COMMON(0,2),
MR_COMMON(0,1)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
2,
17437,
17453
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_debugger__diagnosis_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_typeclass_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_debugger__diagnosis_9_0_1,
MR_COMMON(3,0)
},
7,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
{
MR_COMMON(1,0),
MR_COMMON(0,1),
MR_COMMON(2,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
MR_string_const("handle_analyser_response", 24),
MR_string_const("subtree requested for node which is not an implicit root", 56)
}
},
{
{
MR_string_const("handle_oracle_response", 22),
MR_string_const("no last question when got undo request", 38)
}
},
{
{
MR_string_const("handle_oracle_response", 22),
MR_string_const("no last question when got show_info request", 43)
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__[];
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__,
MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_store),
MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_id)
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__[];
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__,
MR_TAG_COMMON(0,6,0),
MR_TAG_COMMON(0,1,3),
MR_TAG_COMMON(0,1,2)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_truth_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_answer_1_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_decl_truth_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_answer_1_0 = {
	"truth_value",
	2,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_answer_1_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_answer_1_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_should_assert_invalid_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_answer_1_1 = {
	"suspicious_subterm",
	5,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_answer_1_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_answer_1_2[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_answer_1_2 = {
	"ignore",
	1,
	1,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_answer_1_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_answer_1_3[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_answer_1_3 = {
	"skip",
	1,
	1,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_answer_1_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_answer_1_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_answer_1_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_answer_1_1[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_answer_1_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_answer_1_2[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_answer_1_2

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_answer_1_3[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_answer_1_3

};

const MR_DuPtagLayout mercury_data_mdb__declarative_debugger__du_ptag_ordered_decl_answer_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_answer_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_answer_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_answer_1_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_answer_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_name_ordered_decl_answer_1[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_answer_1_2,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_answer_1_3,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_answer_1_1,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_answer_1_0
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_decl_answer_1[] = {
	3,
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_answer_1 = {
	1,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__decl_answer_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__decl_answer_1_0)),
	"mdb.declarative_debugger",
	"decl_answer",
	{ (void *)mercury_data_mdb__declarative_debugger__du_name_ordered_decl_answer_1 },
	{ (void *)mercury_data_mdb__declarative_debugger__du_ptag_ordered_decl_answer_1 },
	4,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_decl_answer_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_e_bug_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_bug_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_decl_e_bug_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_bug_0_0 = {
	"e_bug",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_bug_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_i_bug_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_bug_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_decl_i_bug_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_bug_0_1 = {
	"i_bug",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_bug_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_bug_0_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_bug_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_bug_0_1[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_bug_0_1

};

const MR_DuPtagLayout mercury_data_mdb__declarative_debugger__du_ptag_ordered_decl_bug_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_bug_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_bug_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_name_ordered_decl_bug_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_bug_0_0,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_bug_0_1
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_decl_bug_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_bug_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__decl_bug_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__decl_bug_0_0)),
	"mdb.declarative_debugger",
	"decl_bug",
	{ (void *)mercury_data_mdb__declarative_debugger__du_name_ordered_decl_bug_0 },
	{ (void *)mercury_data_mdb__declarative_debugger__du_ptag_ordered_decl_bug_0 },
	2,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_decl_bug_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0 = {
	"confirm_bug",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1 = {
	"overrule_bug",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2 = {
	"abort_diagnosis",
	2
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_debugger__enum_value_ordered_decl_confirmation_0[] = {
	&mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0,
	&mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1,
	&mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_debugger__enum_name_ordered_decl_confirmation_0[] = {
	&mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2,
	&mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0,
	&mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_decl_confirmation_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_confirmation_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__decl_confirmation_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__decl_confirmation_0_0)),
	"mdb.declarative_debugger",
	"decl_confirmation",
	{ (void *)mercury_data_mdb__declarative_debugger__enum_name_ordered_decl_confirmation_0 },
	{ (void *)mercury_data_mdb__declarative_debugger__enum_value_ordered_decl_confirmation_0 },
	3,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_decl_confirmation_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_contour_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__decl_contour_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__decl_contour_0_0)),
	"mdb.declarative_debugger",
	"decl_contour",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_e_bug_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0 = {
	"incorrect_contour",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_e_bug_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_e_bug_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1 = {
	"partially_uncovered_atom",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_e_bug_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__term_rep__type_ctor_info_term_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__term_rep__type_ctor_info_term_rep_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_e_bug_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__term_rep__type_ctor_info_term_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2 = {
	"unhandled_exception",
	3,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_e_bug_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_1[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_2[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2

};

const MR_DuPtagLayout mercury_data_mdb__declarative_debugger__du_ptag_ordered_decl_e_bug_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_name_ordered_decl_e_bug_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_decl_e_bug_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_e_bug_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__decl_e_bug_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__decl_e_bug_0_0)),
	"mdb.declarative_debugger",
	"decl_e_bug",
	{ (void *)mercury_data_mdb__declarative_debugger__du_name_ordered_decl_e_bug_0 },
	{ (void *)mercury_data_mdb__declarative_debugger__du_ptag_ordered_decl_e_bug_0 },
	3,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_decl_e_bug_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
	&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_question_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__pti_decl_question_1__pseudo_1
}};

const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_evidence_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__decl_evidence_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__decl_evidence_1_0)),
	"mdb.declarative_debugger",
	"decl_evidence",
	{ 0 },
	{ (void *)&mercury_data_list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_exception_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__decl_exception_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__decl_exception_0_0)),
	"mdb.declarative_debugger",
	"decl_exception",
	{ 0 },
	{ (void *)&mercury_data_mdb__term_rep__type_ctor_info_term_rep_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_i_bug_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
	(MR_PseudoTypeInfo) &mercury_data_unit__type_ctor_info_unit_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0 = {
	"inadmissible_call",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_i_bug_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_i_bug_0_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_debugger__du_ptag_ordered_decl_i_bug_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_i_bug_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_name_ordered_decl_i_bug_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_decl_i_bug_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_i_bug_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__decl_i_bug_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__decl_i_bug_0_0)),
	"mdb.declarative_debugger",
	"decl_i_bug",
	{ (void *)mercury_data_mdb__declarative_debugger__du_name_ordered_decl_i_bug_0 },
	{ (void *)mercury_data_mdb__declarative_debugger__du_ptag_ordered_decl_i_bug_0 },
	1,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_decl_i_bug_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_position_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__decl_position_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__decl_position_0_0)),
	"mdb.declarative_debugger",
	"decl_position",
	{ 0 },
	{ (void *)&mercury_data_unit__type_ctor_info_unit_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_question_1_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_question_1_0 = {
	"wrong_answer",
	3,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_question_1_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_question_1_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_question_1_1 = {
	"missing_answer",
	3,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_question_1_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_decl_question_1_2[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__term_rep__type_ctor_info_term_rep_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_decl_question_1_2 = {
	"unexpected_exception",
	3,
	1,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_decl_question_1_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_question_1_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_question_1_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_question_1_1[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_question_1_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_question_1_2[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_question_1_2

};

const MR_DuPtagLayout mercury_data_mdb__declarative_debugger__du_ptag_ordered_decl_question_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_question_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_question_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_decl_question_1_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_name_ordered_decl_question_1[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_question_1_1,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_question_1_2,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_decl_question_1_0
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_decl_question_1[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_question_1 = {
	1,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__decl_question_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__decl_question_1_0)),
	"mdb.declarative_debugger",
	"decl_question",
	{ (void *)mercury_data_mdb__declarative_debugger__du_name_ordered_decl_question_1 },
	{ (void *)mercury_data_mdb__declarative_debugger__du_ptag_ordered_decl_question_1 },
	3,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_decl_question_1
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0 = {
	"truth_correct",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1 = {
	"truth_erroneous",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2 = {
	"truth_inadmissible",
	2
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_debugger__enum_value_ordered_decl_truth_0[] = {
	&mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0,
	&mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1,
	&mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_debugger__enum_name_ordered_decl_truth_0[] = {
	&mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0,
	&mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1,
	&mercury_data_mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_decl_truth_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__decl_truth_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__decl_truth_0_0)),
	"mdb.declarative_debugger",
	"decl_truth",
	{ (void *)mercury_data_mdb__declarative_debugger__enum_name_ordered_decl_truth_0 },
	{ (void *)mercury_data_mdb__declarative_debugger__enum_value_ordered_decl_truth_0 },
	3,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_decl_truth_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_diagnoser_exception_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0 = {
	"internal_error",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_diagnoser_exception_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_diagnoser_exception_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1 = {
	"io_error",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_diagnoser_exception_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_diagnoser_exception_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2 = {
	"unimplemented_feature",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_diagnoser_exception_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_1[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_2[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2

};

const MR_DuPtagLayout mercury_data_mdb__declarative_debugger__du_ptag_ordered_diagnoser_exception_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_name_ordered_diagnoser_exception_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_diagnoser_exception_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0)),
	"mdb.declarative_debugger",
	"diagnoser_exception",
	{ (void *)mercury_data_mdb__declarative_debugger__du_name_ordered_diagnoser_exception_0 },
	{ (void *)mercury_data_mdb__declarative_debugger__du_ptag_ordered_diagnoser_exception_0 },
	3,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_diagnoser_exception_0
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_diagnoser_response_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0 = {
	"bug_found",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_diagnoser_response_1_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_diagnoser_response_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1 = {
	"symptom_found",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_diagnoser_response_1_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2 = {
	"no_bug_found",
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

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_diagnoser_response_1_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdb__declarative_debugger__field_names_diagnoser_response_1_3[] = {
	"require_subtree_final_event",
	"require_subtree_seqno",
	"require_subtree_call_preceding_node",
	"require_subtree_max_depth"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3 = {
	"require_subtree",
	4,
	4,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_diagnoser_response_1_3,
	mercury_data_mdb__declarative_debugger__field_names_diagnoser_response_1_3,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_diagnoser_response_1_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4 = {
	"require_supertree",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_diagnoser_response_1_4,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_1[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_2[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_3[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4

};

const MR_DuPtagLayout mercury_data_mdb__declarative_debugger__du_ptag_ordered_diagnoser_response_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_name_ordered_diagnoser_response_1[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_diagnoser_response_1[] = {
	0,
	4,
	1,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_response_1 = {
	1,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__diagnoser_response_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__diagnoser_response_1_0)),
	"mdb.declarative_debugger",
	"diagnoser_response",
	{ (void *)mercury_data_mdb__declarative_debugger__du_name_ordered_diagnoser_response_1 },
	{ (void *)mercury_data_mdb__declarative_debugger__du_ptag_ordered_diagnoser_response_1 },
	5,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_diagnoser_response_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_analyser_state_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mdb__declarative_tree__pti_edt_node_1__pseudo_1 = {
	&mercury_data_mdb__declarative_tree__type_ctor_info_edt_node_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mdb__declarative_analyser__pti_analyser_state_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_1 = {
	&mercury_data_mdb__declarative_analyser__type_ctor_info_analyser_state_1,
{	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_tree__pti_edt_node_1__pseudo_1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1 = {
	&mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_state_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_maybe__pti_maybe_1__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_diagnoser_state_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_analyser__pti_analyser_state_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_state_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__pti_maybe_1__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1
};

const MR_ConstString mercury_data_mdb__declarative_debugger__field_names_diagnoser_state_1_0[] = {
	"analyser_state",
	"oracle_state",
	"warn_if_searching_supertree",
	"previous_diagnoser"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0 = {
	"diagnoser",
	4,
	9,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_diagnoser_state_1_0,
	mercury_data_mdb__declarative_debugger__field_names_diagnoser_state_1_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_state_1_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_debugger__du_ptag_ordered_diagnoser_state_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_diagnoser_state_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_name_ordered_diagnoser_state_1[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_diagnoser_state_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_state_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__diagnoser_state_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__diagnoser_state_1_0)),
	"mdb.declarative_debugger",
	"diagnoser_state",
	{ (void *)mercury_data_mdb__declarative_debugger__du_name_ordered_diagnoser_state_1 },
	{ (void *)mercury_data_mdb__declarative_debugger__du_ptag_ordered_diagnoser_state_1 },
	1,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_diagnoser_state_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__io_action__type_ctor_info_io_action_range_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__io_action__type_ctor_info_io_action_range_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdb__io_action__type_ctor_info_io_action_range_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdb__io_action__type_ctor_info_io_action_range_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_final_decl_atom_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdb__io_action__type_ctor_info_io_action_range_0
};

const MR_ConstString mercury_data_mdb__declarative_debugger__field_names_final_decl_atom_0_0[] = {
	"final_atom",
	"final_io_actions"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0 = {
	"final_decl_atom",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_final_decl_atom_0_0,
	mercury_data_mdb__declarative_debugger__field_names_final_decl_atom_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_final_decl_atom_0_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_debugger__du_ptag_ordered_final_decl_atom_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_final_decl_atom_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_name_ordered_final_decl_atom_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_final_decl_atom_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__final_decl_atom_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__final_decl_atom_0_0)),
	"mdb.declarative_debugger",
	"final_decl_atom",
	{ (void *)mercury_data_mdb__declarative_debugger__du_name_ordered_final_decl_atom_0 },
	{ (void *)mercury_data_mdb__declarative_debugger__du_ptag_ordered_final_decl_atom_0 },
	1,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_final_decl_atom_0
};

static const MR_NotagFunctorDesc mercury_data_mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 = {
	"init_decl_atom",
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_0,
	"init_atom"
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_init_decl_atom_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__init_decl_atom_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__init_decl_atom_0_0)),
	"mdb.declarative_debugger",
	"init_decl_atom",
	{ (void *)&mercury_data_mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 },
	{ (void *)&mercury_data_mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 },
	1,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_init_decl_atom_0
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_some_decl_atom_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0 = {
	"init",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_some_decl_atom_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_debugger__field_types_some_decl_atom_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1 = {
	"final",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_debugger__field_types_some_decl_atom_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_1[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1

};

const MR_DuPtagLayout mercury_data_mdb__declarative_debugger__du_ptag_ordered_some_decl_atom_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_debugger__du_name_ordered_some_decl_atom_0[] = {
	&mercury_data_mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1,
	&mercury_data_mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0
};

const MR_Integer mercury_data_mdb__declarative_debugger__functor_number_map_some_decl_atom_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_some_decl_atom_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_debugger__some_decl_atom_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_debugger__some_decl_atom_0_0)),
	"mdb.declarative_debugger",
	"some_decl_atom",
	{ (void *)mercury_data_mdb__declarative_debugger__du_name_ordered_some_decl_atom_0 },
	{ (void *)mercury_data_mdb__declarative_debugger__du_ptag_ordered_some_decl_atom_0 },
	2,
	4,
	mercury_data_mdb__declarative_debugger__functor_number_map_some_decl_atom_0
};


static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_debugger__diagnosis_9_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_debugger",
"mdb.declarative_debugger",
"diagnosis_2",
6,
0
},
"mdb.declarative_debugger",
"declarative_debugger.m",
387,
"d1;c13;"
};



MR_BEGIN_MODULE(mdb__declarative_debugger_module0)
	MR_init_entry1(fn__mdb__declarative_debugger__get_decl_question_node_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_debugger__get_decl_question_node_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_decl_question_node'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_debugger__get_decl_question_node_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module1)
	MR_init_entry1(fn__mdb__declarative_debugger__get_decl_question_atom_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_debugger__get_decl_question_atom_1_0);
	MR_init_label2(fn__mdb__declarative_debugger__get_decl_question_atom_1_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_decl_question_atom'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_debugger__get_decl_question_atom_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_debugger__get_decl_question_atom_1_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_debugger__get_decl_question_atom_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_debugger__get_decl_question_atom_1_0_i4);
	}
	MR_r1 = MR_tfield(2, MR_r2, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_debugger__get_decl_question_atom_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r2, 2), 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_analyser__analyser_state_init_1_0);
MR_decl_entry(mdb__declarative_oracle__oracle_state_init_5_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module2)
	MR_init_entry1(mdb__declarative_debugger__diagnoser_state_init_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__diagnoser_state_init_5_0);
	MR_init_label2(mdb__declarative_debugger__diagnoser_state_init_5_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diagnoser_state_init'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_debugger__diagnoser_state_init_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__analyser_state_init_1_0,
		mdb__declarative_debugger__diagnoser_state_init_5_0_i3);
MR_def_label(mdb__declarative_debugger__diagnoser_state_init_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__oracle_state_init_5_0,
		mdb__declarative_debugger__diagnoser_state_init_5_0_i4);
MR_def_label(mdb__declarative_debugger__diagnoser_state_init_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(mdb__declarative_analyser__reset_analyser_2_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module3)
	MR_init_entry1(mdb__declarative_debugger__handle_diagnoser_exception_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__handle_diagnoser_exception_6_0);
	MR_init_label10(mdb__declarative_debugger__handle_diagnoser_exception_6_0,4,5,6,7,8,9,10,11,3,16)
	MR_init_label10(mdb__declarative_debugger__handle_diagnoser_exception_6_0,17,18,19,20,21,15,25,26,27,28)
	MR_init_label2(mdb__declarative_debugger__handle_diagnoser_exception_6_0,29,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_diagnoser_exception'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__handle_diagnoser_exception_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_diagnoser_exception_6_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i4);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\nPlease report bugs to mercury-bugs\100cs.mu.oz.au.\n", 49);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i5);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i6);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i7);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("message follows:\n", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i8);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("diagnosis will be aborted.  Debugging\n", 38);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i9);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("An internal error has occurred; ", 32);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i10);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i11);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__reset_analyser_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i31);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_diagnoser_exception_6_0_i15);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i16);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(".\nDiagnosis will be aborted.\n", 29);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i17);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i18);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i19);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("I/O error: ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i20);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i21);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__reset_analyser_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i31);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_r2 = (MR_Word) MR_string_const(".\nThe debugger is a work in progress, and this is not supported in the\ncurrent version.\n", 88);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i25);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("the following: ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i26);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("it requires support for\n", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i27);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Sorry, the diagnosis cannot continue because ", 45);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i28);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i29);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__reset_analyser_2_0,
		mdb__declarative_debugger__handle_diagnoser_exception_6_0_i31);
MR_def_label(mdb__declarative_debugger__handle_diagnoser_exception_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_oracle__set_browser_state_3_0);
MR_decl_entry(private_builtin__type_info_from_typeclass_info_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
MR_decl_entry(exception__try_io_4_1);
MR_decl_entry(univ__univ_to_type_2_0);
MR_decl_entry(fn__mdb__declarative_oracle__get_browser_state_1_0);
MR_decl_entry(exception__rethrow_1_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module4)
	MR_init_entry1(mdb__declarative_debugger__diagnosis_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__diagnosis_9_0);
	MR_init_label10(mdb__declarative_debugger__diagnosis_9_0,2,5,7,10,14,16,17,13,12,11)
	MR_init_label1(mdb__declarative_debugger__diagnosis_9_0,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diagnosis'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_debugger__diagnosis_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__set_browser_state_3_0,
		mdb__declarative_debugger__diagnosis_9_0_i2);
MR_def_label(mdb__declarative_debugger__diagnosis_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_debugger__diagnosis_2_6_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 4;
	MR_tempr4 = MR_sv(4);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr4;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__diagnosis_9_0_i5);
MR_def_label(mdb__declarative_debugger__diagnosis_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_debugger, diagnoser_response);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__diagnosis_9_0_i7);
MR_def_label(mdb__declarative_debugger__diagnosis_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_debugger, diagnoser_state);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR0_ADDR(builtin, tuple);
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(exception__try_io_4_1,
		mdb__declarative_debugger__diagnosis_9_0_i10);
MR_def_label(mdb__declarative_debugger__diagnosis_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__declarative_debugger__diagnosis_9_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdb__declarative_debugger__diagnosis_9_0_i14);
MR_def_label(mdb__declarative_debugger__diagnosis_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__diagnosis_9_0_i13);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__diagnosis_9_0_i16);
MR_def_label(mdb__declarative_debugger__diagnosis_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_debugger__handle_diagnoser_exception_6_0,
		mdb__declarative_debugger__diagnosis_9_0_i17);
MR_def_label(mdb__declarative_debugger__diagnosis_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__mdb__declarative_oracle__get_browser_state_1_0,
		mdb__declarative_debugger__diagnosis_9_0_i20);
MR_def_label(mdb__declarative_debugger__diagnosis_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(exception__rethrow_1_0,
		mdb__declarative_debugger__diagnosis_9_0_i11);
MR_def_label(mdb__declarative_debugger__diagnosis_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	}
MR_def_label(mdb__declarative_debugger__diagnosis_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdb__declarative_oracle__get_browser_state_1_0,
		mdb__declarative_debugger__diagnosis_9_0_i20);
MR_def_label(mdb__declarative_debugger__diagnosis_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module5)
	MR_init_entry1(mdb__declarative_debugger__unravel_decl_atom_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__unravel_decl_atom_3_0);
	MR_init_label1(mdb__declarative_debugger__unravel_decl_atom_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unravel_decl_atom'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_debugger__unravel_decl_atom_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__unravel_decl_atom_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_proceed();
	}
MR_def_label(mdb__declarative_debugger__unravel_decl_atom_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_execution__exit_node_from_id_3_0);
MR_decl_entry(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0);
MR_decl_entry(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0);
MR_decl_entry(fn__mdbcomp__rtti_access__get_proc_name_1_0);
MR_decl_entry(io__write_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_subterm_origin_1;

MR_BEGIN_MODULE(mdb__declarative_debugger_module6)
	MR_init_entry1(mdb__declarative_debugger__write_origin_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__write_origin_4_0);
	MR_init_label10(mdb__declarative_debugger__write_origin_4_0,4,5,6,7,8,9,10,11,12,14)
	MR_init_label2(mdb__declarative_debugger__write_origin_4_0,2,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_origin'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__write_origin_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__write_origin_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(mdb__declarative_execution__exit_node_from_id_3_0,
		mdb__declarative_debugger__write_origin_4_0_i4);
MR_def_label(mdb__declarative_debugger__write_origin_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 5);
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0,
		mdb__declarative_debugger__write_origin_4_0_i5);
MR_def_label(mdb__declarative_debugger__write_origin_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,
		mdb__declarative_debugger__write_origin_4_0_i6);
MR_def_label(mdb__declarative_debugger__write_origin_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_name_1_0,
		mdb__declarative_debugger__write_origin_4_0_i7);
MR_def_label(mdb__declarative_debugger__write_origin_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("output(", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__declarative_debugger__write_origin_4_0_i8);
MR_def_label(mdb__declarative_debugger__write_origin_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__declarative_debugger__write_origin_4_0_i9);
MR_def_label(mdb__declarative_debugger__write_origin_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__declarative_debugger__write_origin_4_0_i10);
MR_def_label(mdb__declarative_debugger__write_origin_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, arg_pos);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		mdb__declarative_debugger__write_origin_4_0_i11);
MR_def_label(mdb__declarative_debugger__write_origin_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__declarative_debugger__write_origin_4_0_i12);
MR_def_label(mdb__declarative_debugger__write_origin_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_3_0,
		mdb__declarative_debugger__write_origin_4_0_i14);
MR_def_label(mdb__declarative_debugger__write_origin_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdb__declarative_debugger__write_origin_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__write_origin_4_0_i16);
MR_def_label(mdb__declarative_debugger__write_origin_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, subterm_origin);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module7)
	MR_init_entry1(mdb__declarative_debugger__debug_origin_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__debug_origin_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_origin'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__debug_origin_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Flag;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__declarative_debugger__debug_origin_3_0
	MR_OBTAIN_GLOBAL_LOCK("debug_origin");
{
#line 974 "declarative_debugger.m"

    Flag = MR_DD_debug_origin;
    IO = IO0;
;}
#line 2377 "mdb.declarative_debugger.c"
	MR_RELEASE_GLOBAL_LOCK("debug_origin");
	MR_r1 = Flag;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__nl_2_0);
MR_decl_entry(mdb__declarative_oracle__query_oracle_7_0);
MR_decl_entry(mdb__declarative_oracle__oracle_response_undoable_1_0);
MR_decl_entry(mdb__declarative_tree__edt_subtree_details_5_0);
MR_decl_entry(mdb__declarative_tree__trace_implicit_tree_info_3_0);
MR_decl_entry(exception__throw_1_0);
MR_decl_entry(fn__mdb__declarative_oracle__get_user_output_stream_1_0);
MR_decl_entry(mdb__declarative_oracle__revise_oracle_3_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module8)
	MR_init_entry1(mdb__declarative_debugger__handle_analyser_response_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__handle_analyser_response_8_0);
	MR_init_label10(mdb__declarative_debugger__handle_analyser_response_8_0,134,4,3,6,5,10,13,14,11,17)
	MR_init_label10(mdb__declarative_debugger__handle_analyser_response_8_0,19,21,25,27,28,23,20,9,33,35)
	MR_init_label10(mdb__declarative_debugger__handle_analyser_response_8_0,34,32,42,44,46,47,48,49,52,51)
	MR_init_label4(mdb__declarative_debugger__handle_analyser_response_8_0,50,41,55,57)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_analyser_response'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__handle_analyser_response_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i3);
	}
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("No bug found.\n", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i4);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i5);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i6);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_debugger__confirm_bug_8_0);
	}
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i9);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(2, MR_r3, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r1;
	}
	MR_np_call_localret_ent(mdb__declarative_debugger__debug_origin_3_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i10);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i11);
	}
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i11);
	}
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("Origin: ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i13);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_debugger__write_origin_4_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i14);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i11);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i17);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__query_oracle_7_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i19);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i21);
	}
	MR_r2 = MR_sv(1);
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i20);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__oracle_response_undoable_1_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i25);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i23);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i27);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i28);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i20);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(6);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_debugger__handle_oracle_response_7_0);
	}
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i32);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_tree__edt_subtree_details_5_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i33);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdb__declarative_tree__trace_implicit_tree_info_3_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i35);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i34);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_tfield(3, MR_r1, 4) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i41);
	}
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(mdb__declarative_tree__edt_subtree_details_5_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i42);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i44);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(5), 1);
	MR_np_call_localret_ent(fn__mdb__declarative_oracle__get_user_output_stream_1_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i46);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("All descendent calls are trusted.\nShall I continue searching in ancestor calls?\n", 80);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i47);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i48);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i49);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i51);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Diagnosis aborted.\n", 19);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i52);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i50);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i55);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__revise_oracle_3_0,
		mdb__declarative_debugger__handle_analyser_response_8_0_i57);
MR_def_label(mdb__declarative_debugger__handle_analyser_response_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tag_alloc_heap(MR_r3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r3, 0) = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(mdb__declarative_debugger__handle_analyser_response_8_0_i134);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_analyser__reask_last_question_3_0);
MR_decl_entry(mdb__declarative_analyser__debug_analyser_state_2_0);
MR_decl_entry(mdb__declarative_analyser__continue_analysis_6_0);
MR_decl_entry(mdb__declarative_analyser__show_info_5_0);
MR_decl_entry(mdb__declarative_analyser__change_search_mode_6_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module9)
	MR_init_entry1(mdb__declarative_debugger__handle_oracle_response_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__handle_oracle_response_7_0);
	MR_init_label10(mdb__declarative_debugger__handle_oracle_response_7_0,4,3,7,8,6,10,11,12,14,16)
	MR_init_label10(mdb__declarative_debugger__handle_oracle_response_7_0,19,13,23,24,26,5,29,31,34,28)
	MR_init_label10(mdb__declarative_debugger__handle_oracle_response_7_0,39,41,44,47,46,51,52,38,55,57)
	MR_init_label4(mdb__declarative_debugger__handle_oracle_response_7_0,60,62,54,64)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_oracle_response'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__handle_oracle_response_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_oracle_response_7_0_i3);
	}
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("Diagnosis aborted.\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i4);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(9);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_oracle_response_7_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i7);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i8);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_oracle_response_7_0_i6);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(mdb__declarative_debugger__handle_oracle_response_7_0_i12);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__mdb__declarative_oracle__get_user_output_stream_1_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i10);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Undo stack empty.\n", 18);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i11);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_sv(4), 0);
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i14);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, wrap);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i16);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_sv(5);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__reask_last_question_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i19);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_oracle_response_7_0_i13);
	}
	MR_sv(2) = MR_tfield(0, MR_sv(4), 0);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_GOTO_LAB(mdb__declarative_debugger__handle_oracle_response_7_0_i23);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i23);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i24);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__debug_analyser_state_2_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i26);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(mdb__declarative_debugger__handle_analyser_response_8_0);
	}
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_oracle_response_7_0_i28);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i29);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, wrap);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i31);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_sv(8);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__continue_analysis_6_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i34);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__debug_analyser_state_2_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i62);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_oracle_response_7_0_i38);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_r3, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i39);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, wrap);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i41);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_sv(6);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__show_info_5_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i44);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_analyser__reask_last_question_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i47);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_oracle_response_7_0_i46);
	}
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r1 = MR_tfield(0, MR_sv(6), 3);
	MR_np_call_localret_ent(mdb__declarative_analyser__debug_analyser_state_2_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i52);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i51);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__declarative_analyser__debug_analyser_state_2_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i52);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(mdb__declarative_debugger__handle_analyser_response_8_0);
	}
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__handle_oracle_response_7_0_i54);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i55);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, wrap);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i57);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_sv(8);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__change_search_mode_6_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i60);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__debug_analyser_state_2_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i62);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(mdb__declarative_debugger__handle_analyser_response_8_0);
	}
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(mdb__declarative_tree__edt_subtree_details_5_0,
		mdb__declarative_debugger__handle_oracle_response_7_0_i64);
MR_def_label(mdb__declarative_debugger__handle_oracle_response_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_oracle__oracle_confirm_bug_7_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module10)
	MR_init_entry1(mdb__declarative_debugger__confirm_bug_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__confirm_bug_8_0);
	MR_init_label6(mdb__declarative_debugger__confirm_bug_8_0,2,5,10,12,8,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'confirm_bug'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__confirm_bug_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__oracle_confirm_bug_7_0,
		mdb__declarative_debugger__confirm_bug_8_0_i2);
MR_def_label(mdb__declarative_debugger__confirm_bug_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(mdb__declarative_debugger__confirm_bug_8_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(mdb__declarative_debugger__confirm_bug_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__confirm_bug_8_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__confirm_bug_8_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__confirm_bug_8_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
	}
MR_def_label(mdb__declarative_debugger__confirm_bug_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__confirm_bug_8_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_r5, 1);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(mdb__declarative_debugger__confirm_bug_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(2, MR_r5, 2);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(mdb__declarative_debugger__confirm_bug_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(0, MR_tfield(1, MR_sv(2), 0), 3);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(mdb__declarative_debugger__confirm_bug_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r4;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdb__declarative_debugger__overrule_bug_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_analyser__revise_analysis_4_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module11)
	MR_init_entry1(mdb__declarative_debugger__overrule_bug_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__overrule_bug_6_0);
	MR_init_label4(mdb__declarative_debugger__overrule_bug_6_0,2,4,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'overrule_bug'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__overrule_bug_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__overrule_bug_6_0_i2);
MR_def_label(mdb__declarative_debugger__overrule_bug_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, wrap);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__overrule_bug_6_0_i4);
MR_def_label(mdb__declarative_debugger__overrule_bug_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tfield(0, MR_r1, 2) = MR_sv(6);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__revise_analysis_4_0,
		mdb__declarative_debugger__overrule_bug_6_0_i7);
MR_def_label(mdb__declarative_debugger__overrule_bug_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__debug_analyser_state_2_0,
		mdb__declarative_debugger__overrule_bug_6_0_i9);
MR_def_label(mdb__declarative_debugger__overrule_bug_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_debugger__handle_analyser_response_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_analyser__start_or_resume_analysis_6_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module12)
	MR_init_entry1(mdb__declarative_debugger__diagnosis_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__diagnosis_2_6_0);
	MR_init_label5(mdb__declarative_debugger__diagnosis_2_6_0,2,4,7,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diagnosis_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__diagnosis_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__diagnosis_2_6_0_i2);
MR_def_label(mdb__declarative_debugger__diagnosis_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, wrap);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_debugger__diagnosis_2_6_0_i4);
MR_def_label(mdb__declarative_debugger__diagnosis_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_sv(8);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__start_or_resume_analysis_6_0,
		mdb__declarative_debugger__diagnosis_2_6_0_i7);
MR_def_label(mdb__declarative_debugger__diagnosis_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__debug_analyser_state_2_0,
		mdb__declarative_debugger__diagnosis_2_6_0_i9);
MR_def_label(mdb__declarative_debugger__diagnosis_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__declarative_debugger__handle_analyser_response_8_0,
		mdb__declarative_debugger__diagnosis_2_6_0_i10);
MR_def_label(mdb__declarative_debugger__diagnosis_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module13)
	MR_init_entry1(mdb__declarative_debugger__diagnoser_state_init_store_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__diagnoser_state_init_store_5_0);
	MR_init_label2(mdb__declarative_debugger__diagnoser_state_init_store_5_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diagnoser_state_init_store'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__diagnoser_state_init_store_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(mdb__declarative_analyser__analyser_state_init_1_0,
		mdb__declarative_debugger__diagnoser_state_init_store_5_0_i3);
MR_def_label(mdb__declarative_debugger__diagnoser_state_init_store_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__oracle_state_init_5_0,
		mdb__declarative_debugger__diagnoser_state_init_store_5_0_i4);
MR_def_label(mdb__declarative_debugger__diagnoser_state_init_store_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module14)
	MR_init_entry1(mdb__declarative_debugger__diagnoser_session_init_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__diagnoser_session_init_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diagnoser_session_init'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__diagnoser_session_init_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_oracle__set_oracle_testing_flag_3_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module15)
	MR_init_entry1(mdb__declarative_debugger__set_diagnoser_testing_flag_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__set_diagnoser_testing_flag_3_0);
	MR_init_label1(mdb__declarative_debugger__set_diagnoser_testing_flag_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_diagnoser_testing_flag'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__set_diagnoser_testing_flag_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(mdb__declarative_oracle__set_oracle_testing_flag_3_0,
		mdb__declarative_debugger__set_diagnoser_testing_flag_3_0_i2);
MR_def_label(mdb__declarative_debugger__set_diagnoser_testing_flag_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_analyser__set_fallback_search_mode_4_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module16)
	MR_init_entry1(mdb__declarative_debugger__set_fallback_search_mode_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__set_fallback_search_mode_4_0);
	MR_init_label1(mdb__declarative_debugger__set_fallback_search_mode_4_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_fallback_search_mode'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__set_fallback_search_mode_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__set_fallback_search_mode_4_0,
		mdb__declarative_debugger__set_fallback_search_mode_4_0_i6);
MR_def_label(mdb__declarative_debugger__set_fallback_search_mode_4_0,6)
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
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_oracle__reset_oracle_knowledge_base_2_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module17)
	MR_init_entry1(mdb__declarative_debugger__reset_knowledge_base_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__reset_knowledge_base_2_0);
	MR_init_label1(mdb__declarative_debugger__reset_knowledge_base_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_knowledge_base'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__reset_knowledge_base_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(mdb__declarative_oracle__reset_oracle_knowledge_base_2_0,
		mdb__declarative_debugger__reset_knowledge_base_2_0_i2);
MR_def_label(mdb__declarative_debugger__reset_knowledge_base_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__declarative_analyser__top_down_search_mode_0_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module18)
	MR_init_entry1(fn__mdb__declarative_debugger__top_down_search_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_debugger__top_down_search_mode_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'top_down_search_mode'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_debugger__top_down_search_mode_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__mdb__declarative_analyser__top_down_search_mode_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__declarative_analyser__divide_and_query_search_mode_0_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module19)
	MR_init_entry1(fn__mdb__declarative_debugger__divide_and_query_search_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_debugger__divide_and_query_search_mode_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide_and_query_search_mode'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_debugger__divide_and_query_search_mode_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__mdb__declarative_analyser__divide_and_query_search_mode_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module20)
	MR_init_entry1(fn__mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'suspicion_divide_and_query_search_mode'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module21)
	MR_init_entry1(mdb__declarative_debugger__diagnosis_new_tree_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__diagnosis_new_tree_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diagnosis_new_tree'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__diagnosis_new_tree_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_np_tailcall_ent(mdb__declarative_debugger__diagnosis_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module22)
	MR_init_entry1(mdb__declarative_debugger__diagnosis_resume_previous_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__diagnosis_resume_previous_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diagnosis_resume_previous'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__diagnosis_resume_previous_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(mdb__declarative_debugger__diagnosis_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module23)
	MR_init_entry1(mdb__declarative_debugger__diagnoser_bug_found_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__diagnoser_bug_found_2_0);
	MR_init_label1(mdb__declarative_debugger__diagnoser_bug_found_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diagnoser_bug_found'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__diagnoser_bug_found_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__diagnoser_bug_found_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_debugger__diagnoser_bug_found_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module24)
	MR_init_entry1(mdb__declarative_debugger__diagnoser_symptom_found_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__diagnoser_symptom_found_2_0);
	MR_init_label1(mdb__declarative_debugger__diagnoser_symptom_found_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diagnoser_symptom_found'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__diagnoser_symptom_found_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__declarative_debugger__diagnoser_symptom_found_2_0_i1);
	}
	MR_r2 = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_debugger__diagnoser_symptom_found_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module25)
	MR_init_entry1(mdb__declarative_debugger__diagnoser_no_bug_found_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__diagnoser_no_bug_found_1_0);
	MR_init_label1(mdb__declarative_debugger__diagnoser_no_bug_found_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diagnoser_no_bug_found'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__diagnoser_no_bug_found_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__diagnoser_no_bug_found_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_debugger__diagnoser_no_bug_found_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module26)
	MR_init_entry1(mdb__declarative_debugger__diagnoser_require_subtree_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__diagnoser_require_subtree_5_0);
	MR_init_label1(mdb__declarative_debugger__diagnoser_require_subtree_5_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diagnoser_require_subtree'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__diagnoser_require_subtree_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(mdb__declarative_debugger__diagnoser_require_subtree_5_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_r3 = MR_tfield(3, MR_r1, 2);
	MR_r4 = MR_tfield(3, MR_r1, 3);
	MR_r5 = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_debugger__diagnoser_require_subtree_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module27)
	MR_init_entry1(mdb__declarative_debugger__diagnoser_require_supertree_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__diagnoser_require_supertree_3_0);
	MR_init_label1(mdb__declarative_debugger__diagnoser_require_supertree_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'diagnoser_require_supertree'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__diagnoser_require_supertree_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__diagnoser_require_supertree_3_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_r3 = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_debugger__diagnoser_require_supertree_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__string_to_sym_name_1_0);
MR_decl_entry(mdb__declarative_oracle__add_trusted_module_3_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module28)
	MR_init_entry1(mdb__declarative_debugger__add_trusted_module_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__add_trusted_module_3_0);
	MR_init_label2(mdb__declarative_debugger__add_trusted_module_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_trusted_module'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__add_trusted_module_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		mdb__declarative_debugger__add_trusted_module_3_0_i2);
MR_def_label(mdb__declarative_debugger__add_trusted_module_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(mdb__declarative_oracle__add_trusted_module_3_0,
		mdb__declarative_debugger__add_trusted_module_3_0_i3);
MR_def_label(mdb__declarative_debugger__add_trusted_module_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_oracle__add_trusted_pred_or_func_3_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module29)
	MR_init_entry1(mdb__declarative_debugger__add_trusted_pred_or_func_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__add_trusted_pred_or_func_3_0);
	MR_init_label1(mdb__declarative_debugger__add_trusted_pred_or_func_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_trusted_pred_or_func'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__add_trusted_pred_or_func_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(mdb__declarative_oracle__add_trusted_pred_or_func_3_0,
		mdb__declarative_debugger__add_trusted_pred_or_func_3_0_i2);
MR_def_label(mdb__declarative_debugger__add_trusted_pred_or_func_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_oracle__trust_standard_library_2_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module30)
	MR_init_entry1(mdb__declarative_debugger__trust_standard_library_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__trust_standard_library_2_0);
	MR_init_label1(mdb__declarative_debugger__trust_standard_library_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trust_standard_library'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__trust_standard_library_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(mdb__declarative_oracle__trust_standard_library_2_0,
		mdb__declarative_debugger__trust_standard_library_2_0_i2);
MR_def_label(mdb__declarative_debugger__trust_standard_library_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_oracle__remove_trusted_3_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module31)
	MR_init_entry1(mdb__declarative_debugger__remove_trusted_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__remove_trusted_3_0);
	MR_init_label2(mdb__declarative_debugger__remove_trusted_3_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_trusted'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__remove_trusted_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(mdb__declarative_oracle__remove_trusted_3_0,
		mdb__declarative_debugger__remove_trusted_3_0_i2);
MR_def_label(mdb__declarative_debugger__remove_trusted_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_debugger__remove_trusted_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__declarative_debugger__remove_trusted_3_0,1)
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

MR_decl_entry(mdb__declarative_oracle__get_trusted_list_3_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module32)
	MR_init_entry1(mdb__declarative_debugger__get_trusted_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_debugger__get_trusted_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_trusted_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_debugger__get_trusted_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_tailcall_ent(mdb__declarative_oracle__get_trusted_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___mdbcomp__program_representation__arg_pos_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module33)
	MR_init_entry1(__Unify___mdb__declarative_debugger__decl_answer_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__decl_answer_1_0);
	MR_init_label9(__Unify___mdb__declarative_debugger__decl_answer_1_0,5,9,15,17,19,38,13,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__decl_answer_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i38);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i1);
	}
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	MR_decr_sp(9);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(__Unify___mdb__declarative_debugger__decl_answer_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 0);
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdb__declarative_debugger__decl_answer_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 4);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_debugger__decl_answer_1_0_i15);
MR_def_label(__Unify___mdb__declarative_debugger__decl_answer_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__arg_pos_0_0,
		__Unify___mdb__declarative_debugger__decl_answer_1_0_i17);
MR_def_label(__Unify___mdb__declarative_debugger__decl_answer_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__declarative_debugger__decl_answer_1_0_i19);
MR_def_label(__Unify___mdb__declarative_debugger__decl_answer_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i1);
	}
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___mdb__declarative_debugger__decl_answer_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_debugger__decl_answer_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_debugger__decl_answer_1_0_i22);
MR_def_label(__Unify___mdb__declarative_debugger__decl_answer_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_answer_1_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___mdb__declarative_debugger__decl_answer_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___mdbcomp__program_representation__arg_pos_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module34)
	MR_init_entry1(__Compare___mdb__declarative_debugger__decl_answer_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__decl_answer_1_0);
	MR_init_label10(__Compare___mdb__declarative_debugger__decl_answer_1_0,3,2,7,9,5,122,13,11,19,20)
	MR_init_label10(__Compare___mdb__declarative_debugger__decl_answer_1_0,23,27,31,35,17,44,45,46,48,189)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__decl_answer_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i2);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i122);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i13);
	}
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i122);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 0);
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i17);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i122);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_sv(1);
	MR_sv(8) = MR_tfield(1, MR_tempr7, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr7, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr7, 3);
	MR_sv(5) = MR_tfield(1, MR_tempr7, 4);
	MR_tempr8 = MR_sv(2);
	MR_sv(4) = MR_tfield(1, MR_tempr8, 4);
	MR_tempr1 = MR_tfield(1, MR_tempr8, 3);
	MR_tempr2 = MR_tfield(1, MR_tempr8, 2);
	MR_tempr3 = MR_tfield(1, MR_tempr8, 1);
	MR_tempr4 = MR_tempr7;
	MR_sv(1) = MR_tempr3;
	MR_tempr5 = MR_tempr8;
	MR_sv(2) = MR_tempr2;
	MR_tempr6 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr6;
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	MR_r3 = MR_tfield(1, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_debugger__decl_answer_1_0_i23);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i189);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__arg_pos_0_0,
		__Compare___mdb__declarative_debugger__decl_answer_1_0_i27);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i189);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__declarative_debugger__decl_answer_1_0_i31);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i189);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_debugger__decl_answer_1_0_i35);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i189);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i45);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,46)
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
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_debugger__decl_answer_1_0_i48);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_answer_1_0_i189);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__decl_answer_1_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module35)
	MR_init_entry1(__Unify___mdb__declarative_debugger__decl_bug_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__decl_bug_0_0);
	MR_init_label3(__Unify___mdb__declarative_debugger__decl_bug_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__decl_bug_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_bug_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_bug_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_bug_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__declarative_debugger__decl_e_bug_0_0);
	}
MR_def_label(__Unify___mdb__declarative_debugger__decl_bug_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_debugger__decl_bug_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_bug_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__declarative_debugger__decl_i_bug_0_0);
MR_def_label(__Unify___mdb__declarative_debugger__decl_bug_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module36)
	MR_init_entry1(__Compare___mdb__declarative_debugger__decl_bug_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__decl_bug_0_0);
	MR_init_label5(__Compare___mdb__declarative_debugger__decl_bug_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__decl_bug_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_bug_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_bug_0_0_i2);
MR_def_label(__Compare___mdb__declarative_debugger__decl_bug_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_debugger__decl_bug_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_bug_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_bug_0_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdb__declarative_debugger__decl_e_bug_0_0);
MR_def_label(__Compare___mdb__declarative_debugger__decl_bug_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__declarative_debugger__decl_bug_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_bug_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__declarative_debugger__decl_bug_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdb__declarative_debugger__decl_i_bug_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module37)
	MR_init_entry1(__Unify___mdb__declarative_debugger__decl_confirmation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__decl_confirmation_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__decl_confirmation_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module38)
	MR_init_entry1(__Compare___mdb__declarative_debugger__decl_confirmation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__decl_confirmation_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__decl_confirmation_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module39)
	MR_init_entry1(__Unify___mdb__declarative_debugger__decl_contour_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__decl_contour_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__decl_contour_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
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


MR_BEGIN_MODULE(mdb__declarative_debugger_module40)
	MR_init_entry1(__Compare___mdb__declarative_debugger__decl_contour_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__decl_contour_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__decl_contour_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
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

MR_decl_entry(__Unify___mdb__term_rep__term_rep_0_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module41)
	MR_init_entry1(__Unify___mdb__declarative_debugger__decl_e_bug_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__decl_e_bug_0_0);
	MR_init_label10(__Unify___mdb__declarative_debugger__decl_e_bug_0_0,7,9,11,5,15,33,13,18,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__decl_e_bug_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i33);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 3);
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__declarative_debugger__init_decl_atom_0_0,
		__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i7);
MR_def_label(__Unify___mdb__declarative_debugger__decl_e_bug_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdb__declarative_debugger__final_decl_atom_0_0,
		__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i9);
MR_def_label(__Unify___mdb__declarative_debugger__decl_e_bug_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i11);
MR_def_label(__Unify___mdb__declarative_debugger__decl_e_bug_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___mdb__declarative_debugger__decl_e_bug_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__declarative_debugger__init_decl_atom_0_0,
		__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i15);
MR_def_label(__Unify___mdb__declarative_debugger__decl_e_bug_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___mdb__declarative_debugger__decl_e_bug_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_debugger__decl_e_bug_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 2);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__declarative_debugger__init_decl_atom_0_0,
		__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i18);
MR_def_label(__Unify___mdb__declarative_debugger__decl_e_bug_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdb__term_rep__term_rep_0_0,
		__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i20);
MR_def_label(__Unify___mdb__declarative_debugger__decl_e_bug_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_e_bug_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___mdb__declarative_debugger__decl_e_bug_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdb__term_rep__term_rep_0_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module42)
	MR_init_entry1(__Compare___mdb__declarative_debugger__decl_e_bug_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__decl_e_bug_0_0);
	MR_init_label10(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,3,2,9,13,17,71,5,27,30,25)
	MR_init_label5(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,36,37,39,43,146)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__decl_e_bug_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i2);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i71);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdb__declarative_debugger__init_decl_atom_0_0,
		__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i9);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i146);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___mdb__declarative_debugger__final_decl_atom_0_0,
		__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i13);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i146);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i17);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i146);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i25);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i71);
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
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdb__declarative_debugger__init_decl_atom_0_0,
		__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i30);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i146);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i36);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i37);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(2, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdb__declarative_debugger__init_decl_atom_0_0,
		__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i39);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i146);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___mdb__term_rep__term_rep_0_0,
		__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i43);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_e_bug_0_0_i146);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__decl_e_bug_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module43)
	MR_init_entry1(__Unify___mdb__declarative_debugger__decl_evidence_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__decl_evidence_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__decl_evidence_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_debugger, decl_question);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module44)
	MR_init_entry1(__Compare___mdb__declarative_debugger__decl_evidence_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__decl_evidence_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__decl_evidence_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_debugger, decl_question);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module45)
	MR_init_entry1(__Unify___mdb__declarative_debugger__decl_exception_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__decl_exception_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__decl_exception_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___mdb__term_rep__term_rep_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module46)
	MR_init_entry1(__Compare___mdb__declarative_debugger__decl_exception_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__decl_exception_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__decl_exception_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___mdb__term_rep__term_rep_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module47)
	MR_init_entry1(__Unify___mdb__declarative_debugger__decl_i_bug_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__decl_i_bug_0_0);
	MR_init_label4(__Unify___mdb__declarative_debugger__decl_i_bug_0_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__decl_i_bug_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_i_bug_0_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__declarative_debugger__init_decl_atom_0_0,
		__Unify___mdb__declarative_debugger__decl_i_bug_0_0_i4);
MR_def_label(__Unify___mdb__declarative_debugger__decl_i_bug_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_i_bug_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdb__declarative_debugger__init_decl_atom_0_0,
		__Unify___mdb__declarative_debugger__decl_i_bug_0_0_i6);
MR_def_label(__Unify___mdb__declarative_debugger__decl_i_bug_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_i_bug_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdb__declarative_debugger__decl_i_bug_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_debugger__decl_i_bug_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module48)
	MR_init_entry1(__Compare___mdb__declarative_debugger__decl_i_bug_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__decl_i_bug_0_0);
	MR_init_label5(__Compare___mdb__declarative_debugger__decl_i_bug_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__decl_i_bug_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_i_bug_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_i_bug_0_0_i2);
MR_def_label(__Compare___mdb__declarative_debugger__decl_i_bug_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_debugger__decl_i_bug_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdb__declarative_debugger__init_decl_atom_0_0,
		__Compare___mdb__declarative_debugger__decl_i_bug_0_0_i5);
MR_def_label(__Compare___mdb__declarative_debugger__decl_i_bug_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_i_bug_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___mdb__declarative_debugger__init_decl_atom_0_0,
		__Compare___mdb__declarative_debugger__decl_i_bug_0_0_i9);
MR_def_label(__Compare___mdb__declarative_debugger__decl_i_bug_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_i_bug_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__decl_i_bug_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module49)
	MR_init_entry1(__Unify___mdb__declarative_debugger__decl_position_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__decl_position_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__decl_position_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module50)
	MR_init_entry1(__Compare___mdb__declarative_debugger__decl_position_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__decl_position_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__decl_position_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module51)
	MR_init_entry1(__Unify___mdb__declarative_debugger__decl_question_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__decl_question_1_0);
	MR_init_label10(__Unify___mdb__declarative_debugger__decl_question_1_0,7,9,5,15,17,39,13,22,24,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__decl_question_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_question_1_0_i39);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_question_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_question_1_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 2);
	MR_tempr5 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 2);
	MR_r1 = MR_tempr5;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_debugger__decl_question_1_0_i7);
MR_def_label(__Unify___mdb__declarative_debugger__decl_question_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_question_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdb__declarative_debugger__init_decl_atom_0_0,
		__Unify___mdb__declarative_debugger__decl_question_1_0_i9);
MR_def_label(__Unify___mdb__declarative_debugger__decl_question_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_question_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__declarative_debugger__decl_question_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_question_1_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_question_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 2);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_debugger__decl_question_1_0_i15);
MR_def_label(__Unify___mdb__declarative_debugger__decl_question_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_question_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdb__declarative_debugger__init_decl_atom_0_0,
		__Unify___mdb__declarative_debugger__decl_question_1_0_i17);
MR_def_label(__Unify___mdb__declarative_debugger__decl_question_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_question_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdb__term_rep__term_rep_0_0);
MR_def_label(__Unify___mdb__declarative_debugger__decl_question_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_debugger__decl_question_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_question_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_debugger__decl_question_1_0_i22);
MR_def_label(__Unify___mdb__declarative_debugger__decl_question_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_question_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdb__declarative_debugger__init_decl_atom_0_0,
		__Unify___mdb__declarative_debugger__decl_question_1_0_i24);
MR_def_label(__Unify___mdb__declarative_debugger__decl_question_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__decl_question_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdb__declarative_debugger__final_decl_atom_0_0);
MR_def_label(__Unify___mdb__declarative_debugger__decl_question_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module52)
	MR_init_entry1(__Compare___mdb__declarative_debugger__decl_question_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__decl_question_1_0);
	MR_init_label10(__Compare___mdb__declarative_debugger__decl_question_1_0,3,2,9,13,7,5,72,22,25,29)
	MR_init_label6(__Compare___mdb__declarative_debugger__decl_question_1_0,20,36,37,39,43,132)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__decl_question_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i2);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_sv(1);
	MR_sv(4) = MR_tfield(1, MR_tempr7, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr7, 2);
	MR_tempr8 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr8, 2);
	MR_tempr3 = MR_tfield(1, MR_tempr8, 1);
	MR_tempr4 = MR_tempr7;
	MR_sv(1) = MR_tempr3;
	MR_tempr5 = MR_tempr8;
	MR_sv(2) = MR_tempr2;
	MR_tempr6 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr6;
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	MR_r3 = MR_tfield(1, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_debugger__decl_question_1_0_i9);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i132);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___mdb__declarative_debugger__init_decl_atom_0_0,
		__Compare___mdb__declarative_debugger__decl_question_1_0_i13);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i132);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i72);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i20);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i22);
	}
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i72);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_sv(1);
	MR_sv(4) = MR_tfield(2, MR_tempr7, 1);
	MR_tempr1 = MR_tfield(2, MR_tempr7, 2);
	MR_tempr8 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr8, 2);
	MR_tempr3 = MR_tfield(2, MR_tempr8, 1);
	MR_tempr4 = MR_tempr7;
	MR_sv(1) = MR_tempr3;
	MR_tempr5 = MR_tempr8;
	MR_sv(2) = MR_tempr2;
	MR_tempr6 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr6;
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	MR_r3 = MR_tfield(2, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_debugger__decl_question_1_0_i25);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i132);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___mdb__declarative_debugger__init_decl_atom_0_0,
		__Compare___mdb__declarative_debugger__decl_question_1_0_i29);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i132);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdb__term_rep__term_rep_0_0);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr7, 1);
	MR_tempr1 = MR_tfield(0, MR_tempr7, 2);
	MR_tempr8 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr8, 2);
	MR_tempr3 = MR_tfield(0, MR_tempr8, 1);
	MR_tempr4 = MR_tempr7;
	MR_sv(1) = MR_tempr3;
	MR_tempr5 = MR_tempr8;
	MR_sv(2) = MR_tempr2;
	MR_tempr6 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr6;
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	MR_r3 = MR_tfield(0, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_debugger__decl_question_1_0_i39);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i132);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___mdb__declarative_debugger__init_decl_atom_0_0,
		__Compare___mdb__declarative_debugger__decl_question_1_0_i43);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__decl_question_1_0_i132);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdb__declarative_debugger__final_decl_atom_0_0);
MR_def_label(__Compare___mdb__declarative_debugger__decl_question_1_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module53)
	MR_init_entry1(__Unify___mdb__declarative_debugger__decl_truth_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__decl_truth_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__decl_truth_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module54)
	MR_init_entry1(__Compare___mdb__declarative_debugger__decl_truth_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__decl_truth_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__decl_truth_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module55)
	MR_init_entry1(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__diagnoser_exception_0_0);
	MR_init_label4(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0,5,19,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__diagnoser_exception_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_exception_0_0,1)
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

MR_BEGIN_MODULE(mdb__declarative_debugger_module56)
	MR_init_entry1(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__diagnoser_exception_0_0);
	MR_init_label10(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,3,2,9,45,5,17,20,15,26,27)
	MR_init_label1(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,102)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__diagnoser_exception_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i2);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i45);
	}
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
		__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i9);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i102);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i45);
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
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i20);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i102);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_exception_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module57)
	MR_init_entry1(__Unify___mdb__declarative_debugger__diagnoser_response_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__diagnoser_response_1_0);
	MR_init_label7(__Unify___mdb__declarative_debugger__diagnoser_response_1_0,5,6,8,12,30,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__diagnoser_response_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i30);
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
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_response_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_response_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_response_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i10);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 4);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 4);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	MR_r3 = MR_tfield(3, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i12);
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_response_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_response_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_response_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_response_1_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_response_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module58)
	MR_init_entry1(__Compare___mdb__declarative_debugger__diagnoser_response_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__diagnoser_response_1_0);
	MR_init_label10(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,90,7,8,9,5,13,14,16,11,155)
	MR_init_label10(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,20,21,18,27,28,29,32,36,40,25)
	MR_init_label6(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,48,49,50,51,53,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__diagnoser_response_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i90);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i7);
	}
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i155);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i14);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i155);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i18);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i20);
	}
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i155);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i25);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i155);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 4);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i32);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i58);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i36);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i58);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i40);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i58);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i48);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i50);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i51);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i53);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_response_1_0_i58);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_response_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdb__declarative_analyser__analyser_state_1_0);
MR_decl_entry(__Unify___mdb__declarative_oracle__oracle_state_0_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module59)
	MR_init_entry1(__Unify___mdb__declarative_debugger__diagnoser_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__diagnoser_state_1_0);
	MR_init_label4(__Unify___mdb__declarative_debugger__diagnoser_state_1_0,5,7,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__diagnoser_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_state_1_0_i12);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__declarative_analyser__analyser_state_1_0,
		__Unify___mdb__declarative_debugger__diagnoser_state_1_0_i5);
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_state_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_state_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdb__declarative_oracle__oracle_state_0_0,
		__Unify___mdb__declarative_debugger__diagnoser_state_1_0_i7);
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_state_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_state_1_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__diagnoser_state_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_debugger, diagnoser_state);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_state_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_debugger__diagnoser_state_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdb__declarative_analyser__analyser_state_1_0);
MR_decl_entry(__Compare___mdb__declarative_oracle__oracle_state_0_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module60)
	MR_init_entry1(__Compare___mdb__declarative_debugger__diagnoser_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__diagnoser_state_1_0);
	MR_init_label6(__Compare___mdb__declarative_debugger__diagnoser_state_1_0,3,2,6,10,14,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__diagnoser_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_state_1_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r1;
	MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_state_1_0_i2);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_state_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_state_1_0,2)
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
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_tree, edt_node);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdb__declarative_analyser__analyser_state_1_0,
		__Compare___mdb__declarative_debugger__diagnoser_state_1_0_i6);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_state_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_state_1_0_i39);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___mdb__declarative_oracle__oracle_state_0_0,
		__Compare___mdb__declarative_debugger__diagnoser_state_1_0_i10);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_state_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_state_1_0_i39);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_debugger__diagnoser_state_1_0_i14);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_state_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__diagnoser_state_1_0_i39);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_debugger, diagnoser_state);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__declarative_debugger__diagnoser_state_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdb__declarative_execution__trace_atom_0_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module61)
	MR_init_entry1(__Unify___mdb__declarative_debugger__final_decl_atom_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__final_decl_atom_0_0);
	MR_init_label3(__Unify___mdb__declarative_debugger__final_decl_atom_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__final_decl_atom_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__final_decl_atom_0_0_i8);
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__declarative_execution__trace_atom_0_0,
		__Unify___mdb__declarative_debugger__final_decl_atom_0_0_i4);
MR_def_label(__Unify___mdb__declarative_debugger__final_decl_atom_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__final_decl_atom_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__io_action, io_action_range);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___mdb__declarative_debugger__final_decl_atom_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_debugger__final_decl_atom_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdb__declarative_execution__trace_atom_0_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module62)
	MR_init_entry1(__Compare___mdb__declarative_debugger__final_decl_atom_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__final_decl_atom_0_0);
	MR_init_label4(__Compare___mdb__declarative_debugger__final_decl_atom_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__final_decl_atom_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__final_decl_atom_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_debugger__final_decl_atom_0_0_i2);
MR_def_label(__Compare___mdb__declarative_debugger__final_decl_atom_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_debugger__final_decl_atom_0_0,2)
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
	MR_np_call_localret_ent(__Compare___mdb__declarative_execution__trace_atom_0_0,
		__Compare___mdb__declarative_debugger__final_decl_atom_0_0_i5);
MR_def_label(__Compare___mdb__declarative_debugger__final_decl_atom_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__final_decl_atom_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__io_action, io_action_range);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__declarative_debugger__final_decl_atom_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module63)
	MR_init_entry1(__Unify___mdb__declarative_debugger__init_decl_atom_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__init_decl_atom_0_0);
	MR_init_label1(__Unify___mdb__declarative_debugger__init_decl_atom_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__init_decl_atom_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__init_decl_atom_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__declarative_execution__trace_atom_0_0);
MR_def_label(__Unify___mdb__declarative_debugger__init_decl_atom_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module64)
	MR_init_entry1(__Compare___mdb__declarative_debugger__init_decl_atom_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__init_decl_atom_0_0);
	MR_init_label2(__Compare___mdb__declarative_debugger__init_decl_atom_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__init_decl_atom_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__init_decl_atom_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_debugger__init_decl_atom_0_0_i2);
MR_def_label(__Compare___mdb__declarative_debugger__init_decl_atom_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_debugger__init_decl_atom_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdb__declarative_execution__trace_atom_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module65)
	MR_init_entry1(__Unify___mdb__declarative_debugger__some_decl_atom_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_debugger__some_decl_atom_0_0);
	MR_init_label3(__Unify___mdb__declarative_debugger__some_decl_atom_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_debugger__some_decl_atom_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__some_decl_atom_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__some_decl_atom_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__some_decl_atom_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__declarative_debugger__final_decl_atom_0_0);
	}
MR_def_label(__Unify___mdb__declarative_debugger__some_decl_atom_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_debugger__some_decl_atom_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_debugger__some_decl_atom_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__declarative_debugger__init_decl_atom_0_0);
MR_def_label(__Unify___mdb__declarative_debugger__some_decl_atom_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module66)
	MR_init_entry1(__Compare___mdb__declarative_debugger__some_decl_atom_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_debugger__some_decl_atom_0_0);
	MR_init_label5(__Compare___mdb__declarative_debugger__some_decl_atom_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_debugger__some_decl_atom_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__some_decl_atom_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_debugger__some_decl_atom_0_0_i2);
MR_def_label(__Compare___mdb__declarative_debugger__some_decl_atom_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_debugger__some_decl_atom_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__some_decl_atom_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__some_decl_atom_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdb__declarative_debugger__final_decl_atom_0_0);
MR_def_label(__Compare___mdb__declarative_debugger__some_decl_atom_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__declarative_debugger__some_decl_atom_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_debugger__some_decl_atom_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__declarative_debugger__some_decl_atom_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdb__declarative_debugger__init_decl_atom_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module67)
	MR_init_entry1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__push_diagnoser__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_oracle__update_revised_knowledge_base_3_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module68)
	MR_init_entry1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0);
	MR_init_label2(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__pop_diagnoser__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0_i1);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__update_revised_knowledge_base_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0_i3);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__declarative_oracle__get_user_input_stream_1_0);
MR_decl_entry(mdb__util__trace_getline_6_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(fn__string__to_upper_1_0);

MR_BEGIN_MODULE(mdb__declarative_debugger_module69)
	MR_init_entry1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0);
	MR_init_label10(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,43,2,3,4,6,9,10,11,8,13)
	MR_init_label5(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,15,14,19,18,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__read_search_supertree_response__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__mdb__declarative_oracle__get_user_input_stream_1_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i2);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__mdb__declarative_oracle__get_user_output_stream_1_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i3);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("> ", 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(mdb__util__trace_getline_6_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("Unexpected EOF. Aborting.\n", 26);
	MR_np_call_localret_ent(io__write_string_4_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i19);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i9);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(". Aborting.\n", 12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i10);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error reading input: ", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i11);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i19);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__to_upper_1_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i13);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("Y", 1)) == 0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i15);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("YES", 3)) != 0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i14);
	}
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("N", 1)) == 0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i19);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("NO", 2)) != 0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i18);
	}
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("Please answer yes or no.\n", 25);
	MR_np_call_localret_ent(io__write_string_4_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i22);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_0_i43);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module70)
	MR_init_entry1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___mdb__declarative_debugger__decl_position_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_debugger_module71)
	MR_init_entry1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___mdb__declarative_debugger__decl_position_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 952 "declarative_debugger.m"


/*
** The declarative debugger will print diagnostic information about the origins
** computed by dependency tracking if this flag has a positive value.
*/

int MR_DD_debug_origin = 0;


#line 7251 "mdb.declarative_debugger.c"

MR_declare_static(mercury__mdb__declarative_debugger__get_trusted_list_3_0);

void
MR_DD_decl_get_trusted_list(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_String * Mercury__argument3);

void
MR_DD_decl_get_trusted_list(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_String * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__get_trusted_list_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__get_trusted_list_3_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__declarative_debugger__remove_trusted_3_0);

MR_bool
MR_DD_decl_remove_trusted(MR_Integer Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

MR_bool
MR_DD_decl_remove_trusted(MR_Integer Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__remove_trusted_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__remove_trusted_3_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__declarative_debugger__trust_standard_library_2_0);

void
MR_DD_decl_trust_standard_library(MR_Word Mercury__argument1, MR_Word * Mercury__argument2);

void
MR_DD_decl_trust_standard_library(MR_Word Mercury__argument1, MR_Word * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__trust_standard_library_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__trust_standard_library_2_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__declarative_debugger__add_trusted_pred_or_func_3_0);

void
MR_DD_decl_add_trusted_pred_or_func(const MR_ProcLayout * Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

void
MR_DD_decl_add_trusted_pred_or_func(const MR_ProcLayout * Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__add_trusted_pred_or_func_3_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_ProcLayout *, Mercury__argument1, MR_r1);
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__add_trusted_pred_or_func_3_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__declarative_debugger__add_trusted_module_3_0);

void
MR_DD_decl_add_trusted_module(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

void
MR_DD_decl_add_trusted_module(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__add_trusted_module_3_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__add_trusted_module_3_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__declarative_debugger__diagnoser_require_supertree_3_0);

MR_bool
MR_DD_diagnoser_require_supertree(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2, MR_Integer * Mercury__argument3);

MR_bool
MR_DD_diagnoser_require_supertree(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2, MR_Integer * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_require_supertree_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_require_supertree_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
	*Mercury__argument2 = MR_r2;
	*Mercury__argument3 = MR_r3;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
}


MR_declare_static(mercury__mdb__declarative_debugger__diagnoser_require_subtree_5_0);

MR_bool
MR_DD_diagnoser_require_subtree(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2, MR_Integer * Mercury__argument3, MR_Word * Mercury__argument4, MR_Integer * Mercury__argument5);

MR_bool
MR_DD_diagnoser_require_subtree(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2, MR_Integer * Mercury__argument3, MR_Word * Mercury__argument4, MR_Integer * Mercury__argument5)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_require_subtree_5_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_require_subtree_5_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
	*Mercury__argument2 = MR_r2;
	*Mercury__argument3 = MR_r3;
	*Mercury__argument4 = MR_r4;
	*Mercury__argument5 = MR_r5;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
}


MR_declare_static(mercury__mdb__declarative_debugger__diagnoser_no_bug_found_1_0);

MR_bool
MR_DD_diagnoser_no_bug_found(MR_Word Mercury__argument1);

MR_bool
MR_DD_diagnoser_no_bug_found(MR_Word Mercury__argument1)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_no_bug_found_1_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_no_bug_found_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
}


MR_declare_static(mercury__mdb__declarative_debugger__diagnoser_symptom_found_2_0);

MR_bool
MR_DD_diagnoser_symptom_found(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2);

MR_bool
MR_DD_diagnoser_symptom_found(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_symptom_found_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_symptom_found_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
	*Mercury__argument2 = MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
}


MR_declare_static(mercury__mdb__declarative_debugger__diagnoser_bug_found_2_0);

MR_bool
MR_DD_diagnoser_bug_found(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2);

MR_bool
MR_DD_diagnoser_bug_found(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_bug_found_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_bug_found_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
	*Mercury__argument2 = MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
}


MR_declare_static(mercury__mdb__declarative_debugger__diagnosis_resume_previous_8_0);

void
MR_DD_decl_diagnosis_resume_previous(MR_Word Mercury__argument1, MR_Word * Mercury__argument2, MR_Word Mercury__argument3, MR_Word * Mercury__argument4, MR_Word Mercury__argument5, MR_Word * Mercury__argument6);

void
MR_DD_decl_diagnosis_resume_previous(MR_Word Mercury__argument1, MR_Word * Mercury__argument2, MR_Word Mercury__argument3, MR_Word * Mercury__argument4, MR_Word Mercury__argument5, MR_Word * Mercury__argument6)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__diagnosis_resume_previous_8_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument3;
	MR_r3 = Mercury__argument5;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__diagnosis_resume_previous_8_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
	*Mercury__argument4 = MR_r2;
	*Mercury__argument6 = MR_r3;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__declarative_debugger__diagnosis_new_tree_9_0);

void
MR_DD_decl_diagnosis_new_tree(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3, MR_Word Mercury__argument4, MR_Word * Mercury__argument5, MR_Word Mercury__argument6, MR_Word * Mercury__argument7);

void
MR_DD_decl_diagnosis_new_tree(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3, MR_Word Mercury__argument4, MR_Word * Mercury__argument5, MR_Word Mercury__argument6, MR_Word * Mercury__argument7)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__diagnosis_new_tree_9_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument4;
	MR_r4 = Mercury__argument6;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__diagnosis_new_tree_9_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument3 = MR_r1;
	*Mercury__argument5 = MR_r2;
	*Mercury__argument7 = MR_r3;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__fn__mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_0);

MR_Word
MR_DD_decl_suspicion_divide_and_query_search_mode(void);

MR_Word
MR_DD_decl_suspicion_divide_and_query_search_mode(void)
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
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_0), MR_FALSE);
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


MR_declare_static(mercury__fn__mdb__declarative_debugger__divide_and_query_search_mode_0_0);

MR_Word
MR_DD_decl_divide_and_query_search_mode(void);

MR_Word
MR_DD_decl_divide_and_query_search_mode(void)
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
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_debugger__divide_and_query_search_mode_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_debugger__divide_and_query_search_mode_0_0), MR_FALSE);
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


MR_declare_static(mercury__fn__mdb__declarative_debugger__top_down_search_mode_0_0);

MR_Word
MR_DD_decl_top_down_search_mode(void);

MR_Word
MR_DD_decl_top_down_search_mode(void)
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
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_debugger__top_down_search_mode_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_debugger__top_down_search_mode_0_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__declarative_debugger__reset_knowledge_base_2_0);

void
MR_DD_decl_reset_knowledge_base(MR_Word Mercury__argument1, MR_Word * Mercury__argument2);

void
MR_DD_decl_reset_knowledge_base(MR_Word Mercury__argument1, MR_Word * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__reset_knowledge_base_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__reset_knowledge_base_2_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__declarative_debugger__set_fallback_search_mode_4_0);

void
MR_DD_decl_set_fallback_search_mode(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word * Mercury__argument4);

void
MR_DD_decl_set_fallback_search_mode(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word * Mercury__argument4)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__set_fallback_search_mode_4_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__set_fallback_search_mode_4_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument4 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__declarative_debugger__set_diagnoser_testing_flag_3_0);

void
MR_DD_decl_set_diagnoser_testing_flag(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

void
MR_DD_decl_set_diagnoser_testing_flag(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__set_diagnoser_testing_flag_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__set_diagnoser_testing_flag_3_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__declarative_debugger__diagnoser_session_init_2_0);

void
MR_DD_decl_session_init(MR_Word Mercury__argument1, MR_Word * Mercury__argument2);

void
MR_DD_decl_session_init(MR_Word Mercury__argument1, MR_Word * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_session_init_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_session_init_2_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__declarative_debugger__diagnoser_state_init_store_5_0);

void
MR_DD_decl_diagnosis_state_init(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word * Mercury__argument5);

void
MR_DD_decl_diagnosis_state_init(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word * Mercury__argument5)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_state_init_store_5_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_debugger__diagnoser_state_init_store_5_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument5 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__mdb__declarative_debugger_maybe_bunch_0(void)
{
	mdb__declarative_debugger_module0();
	mdb__declarative_debugger_module1();
	mdb__declarative_debugger_module2();
	mdb__declarative_debugger_module3();
	mdb__declarative_debugger_module4();
	mdb__declarative_debugger_module5();
	mdb__declarative_debugger_module6();
	mdb__declarative_debugger_module7();
	mdb__declarative_debugger_module8();
	mdb__declarative_debugger_module9();
	mdb__declarative_debugger_module10();
	mdb__declarative_debugger_module11();
	mdb__declarative_debugger_module12();
	mdb__declarative_debugger_module13();
	mdb__declarative_debugger_module14();
	mdb__declarative_debugger_module15();
	mdb__declarative_debugger_module16();
	mdb__declarative_debugger_module17();
	mdb__declarative_debugger_module18();
	mdb__declarative_debugger_module19();
	mdb__declarative_debugger_module20();
	mdb__declarative_debugger_module21();
	mdb__declarative_debugger_module22();
	mdb__declarative_debugger_module23();
	mdb__declarative_debugger_module24();
	mdb__declarative_debugger_module25();
	mdb__declarative_debugger_module26();
	mdb__declarative_debugger_module27();
	mdb__declarative_debugger_module28();
	mdb__declarative_debugger_module29();
	mdb__declarative_debugger_module30();
	mdb__declarative_debugger_module31();
	mdb__declarative_debugger_module32();
	mdb__declarative_debugger_module33();
	mdb__declarative_debugger_module34();
	mdb__declarative_debugger_module35();
	mdb__declarative_debugger_module36();
	mdb__declarative_debugger_module37();
	mdb__declarative_debugger_module38();
	mdb__declarative_debugger_module39();
}

static void mercury__mdb__declarative_debugger_maybe_bunch_1(void)
{
	mdb__declarative_debugger_module40();
	mdb__declarative_debugger_module41();
	mdb__declarative_debugger_module42();
	mdb__declarative_debugger_module43();
	mdb__declarative_debugger_module44();
	mdb__declarative_debugger_module45();
	mdb__declarative_debugger_module46();
	mdb__declarative_debugger_module47();
	mdb__declarative_debugger_module48();
	mdb__declarative_debugger_module49();
	mdb__declarative_debugger_module50();
	mdb__declarative_debugger_module51();
	mdb__declarative_debugger_module52();
	mdb__declarative_debugger_module53();
	mdb__declarative_debugger_module54();
	mdb__declarative_debugger_module55();
	mdb__declarative_debugger_module56();
	mdb__declarative_debugger_module57();
	mdb__declarative_debugger_module58();
	mdb__declarative_debugger_module59();
	mdb__declarative_debugger_module60();
	mdb__declarative_debugger_module61();
	mdb__declarative_debugger_module62();
	mdb__declarative_debugger_module63();
	mdb__declarative_debugger_module64();
	mdb__declarative_debugger_module65();
	mdb__declarative_debugger_module66();
	mdb__declarative_debugger_module67();
	mdb__declarative_debugger_module68();
	mdb__declarative_debugger_module69();
	mdb__declarative_debugger_module70();
	mdb__declarative_debugger_module71();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__declarative_debugger__init(void);
void mercury__mdb__declarative_debugger__init_type_tables(void);
void mercury__mdb__declarative_debugger__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__declarative_debugger__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__declarative_debugger__init_complexity_procs(void);
#endif

void mercury__mdb__declarative_debugger__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__declarative_debugger_maybe_bunch_0();
	mercury__mdb__declarative_debugger_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_decl_answer_1,
		mdb__declarative_debugger__decl_answer_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_decl_bug_0,
		mdb__declarative_debugger__decl_bug_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_decl_confirmation_0,
		mdb__declarative_debugger__decl_confirmation_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_decl_contour_0,
		mdb__declarative_debugger__decl_contour_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_decl_e_bug_0,
		mdb__declarative_debugger__decl_e_bug_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_decl_evidence_1,
		mdb__declarative_debugger__decl_evidence_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_decl_exception_0,
		mdb__declarative_debugger__decl_exception_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_decl_i_bug_0,
		mdb__declarative_debugger__decl_i_bug_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_decl_position_0,
		mdb__declarative_debugger__decl_position_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_decl_question_1,
		mdb__declarative_debugger__decl_question_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_decl_truth_0,
		mdb__declarative_debugger__decl_truth_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0,
		mdb__declarative_debugger__diagnoser_exception_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_response_1,
		mdb__declarative_debugger__diagnoser_response_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_state_1,
		mdb__declarative_debugger__diagnoser_state_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
		mdb__declarative_debugger__final_decl_atom_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
		mdb__declarative_debugger__init_decl_atom_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_debugger__type_ctor_info_some_decl_atom_0,
		mdb__declarative_debugger__some_decl_atom_0_0);
	mercury__mdb__declarative_debugger__init_debugger();
}

void mercury__mdb__declarative_debugger__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_answer_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_bug_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_confirmation_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_contour_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_e_bug_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_evidence_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_exception_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_i_bug_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_position_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_question_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_truth_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_response_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_state_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_debugger__type_ctor_info_some_decl_atom_0);
	}
}


void mercury__mdb__declarative_debugger__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__declarative_debugger__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__declarative_debugger);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__declarative_debugger__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
