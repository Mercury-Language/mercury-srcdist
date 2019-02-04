/*
** Automatically generated from `declarative_oracle.m'
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
INIT mercury__mdb__declarative_oracle__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 28 "mdb.declarative_oracle.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 32 "mdb.declarative_oracle.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 36 "mdb.declarative_oracle.c"
#line 67 "../mdbcomp/mdbcomp.rtti_access.int"
#include "mdbcomp.rtti_access.mh"

#line 40 "mdb.declarative_oracle.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdb.declarative_oracle.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 48 "mdb.declarative_oracle.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 52 "mdb.declarative_oracle.c"
#line 53 "mdb.declarative_oracle.c"
#include "mdb.declarative_oracle.mh"

#line 56 "mdb.declarative_oracle.c"
#line 57 "mdb.declarative_oracle.c"
#ifndef MDB__DECLARATIVE_ORACLE_DECL_GUARD
#define MDB__DECLARATIVE_ORACLE_DECL_GUARD

#line 61 "mdb.declarative_oracle.c"
#line 62 "mdb.declarative_oracle.c"

#endif
#line 65 "mdb.declarative_oracle.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__declarative_oracle__type_ctor_info_known_exceptions_0,
	mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_kb_0,
	mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_response_1,
	mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_state_0,
	mercury_data_mdb__declarative_oracle__type_ctor_info_trusted_object_0;
MR_decl_label10(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0, 13,15,14,17,18,19,21,24,23,27)
MR_decl_label10(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0, 26,29,31,33,34,38,36,41,8,9)
MR_decl_label2(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0, 10,4)
MR_decl_label10(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0, 8,11,10,15,14,18,23,24,3,4)
MR_decl_label1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0, 1)
MR_decl_label10(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0, 8,10,11,12,7,15,17,19,21,3)
MR_decl_label1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0, 4)
MR_decl_label3(mdb__declarative_oracle__add_trusted_module_3_0, 2,5,3)
MR_decl_label9(mdb__declarative_oracle__add_trusted_pred_or_func_3_0, 2,3,5,4,11,9,14,8,7)
MR_decl_label10(mdb__declarative_oracle__answer_known_3_0, 2,4,13,11,16,9,20,18,22,25)
MR_decl_label4(mdb__declarative_oracle__answer_known_3_0, 26,40,28,3)
MR_decl_label10(mdb__declarative_oracle__format_trust_command_3_0, 28,38,14,15,39,19,20,21,22,23)
MR_decl_label10(mdb__declarative_oracle__format_trust_command_3_0, 24,25,40,4,5,6,7,8,9,10)
MR_decl_label1(mdb__declarative_oracle__format_trust_command_3_0, 11)
MR_decl_label10(mdb__declarative_oracle__format_trust_display_4_0, 34,35,15,16,17,18,19,22,23,24)
MR_decl_label10(mdb__declarative_oracle__format_trust_display_4_0, 25,26,27,28,29,30,31,3,4,5)
MR_decl_label8(mdb__declarative_oracle__format_trust_display_4_0, 6,7,8,9,10,11,12,13)
MR_decl_label5(mdb__declarative_oracle__get_trusted_list_3_0, 4,6,7,3,11)
MR_decl_label3(mdb__declarative_oracle__oracle_confirm_bug_7_0, 2,8,5)
MR_decl_label1(mdb__declarative_oracle__oracle_response_undoable_1_0, 2)
MR_decl_label10(mdb__declarative_oracle__oracle_state_init_5_0, 2,3,4,6,7,8,10,11,12,13)
MR_decl_label10(mdb__declarative_oracle__query_oracle_7_0, 4,2,14,17,16,21,20,24,28,29)
MR_decl_label7(mdb__declarative_oracle__query_oracle_7_0, 30,31,10,11,9,7,38)
MR_decl_label10(mdb__declarative_oracle__query_oracle_user_6_0, 2,31,4,5,7,8,24,25,26,35)
MR_decl_label9(mdb__declarative_oracle__query_oracle_user_6_0, 10,14,16,17,18,19,20,21,3)
MR_decl_label3(mdb__declarative_oracle__remove_trusted_3_0, 2,4,1)
MR_decl_label3(mdb__declarative_oracle__reset_oracle_knowledge_base_2_0, 2,3,4)
MR_decl_label10(mdb__declarative_oracle__revise_oracle_3_0, 10,13,12,17,16,20,25,26,5,6)
MR_decl_label4(mdb__declarative_oracle__revise_oracle_3_0, 4,31,32,2)
MR_decl_label1(mdb__declarative_oracle__set_browser_state_3_0, 2)
MR_decl_label1(mdb__declarative_oracle__set_oracle_testing_flag_3_0, 2)
MR_decl_label3(mdb__declarative_oracle__trust_standard_library_2_0, 2,4,3)
MR_decl_label4(__Unify___mdb__declarative_oracle__known_exceptions_0_0, 4,6,10,1)
MR_decl_label4(__Unify___mdb__declarative_oracle__oracle_kb_0_0, 4,6,10,1)
MR_decl_label7(__Unify___mdb__declarative_oracle__oracle_response_1_0, 21,6,16,25,12,27,1)
MR_decl_label6(__Unify___mdb__declarative_oracle__oracle_state_0_0, 4,6,8,10,14,1)
MR_decl_label8(__Unify___mdb__declarative_oracle__trusted_object_0_0, 17,9,13,15,5,7,22,1)
MR_decl_label5(__Compare___mdb__declarative_oracle__known_exceptions_0_0, 3,2,5,9,29)
MR_decl_label5(__Compare___mdb__declarative_oracle__oracle_kb_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___mdb__declarative_oracle__oracle_response_1_0, 93,87,102,91,5,13,17,19,28,22)
MR_decl_label10(__Compare___mdb__declarative_oracle__oracle_response_1_0, 32,64,73,157,70,97,47,49,58,62)
MR_decl_label2(__Compare___mdb__declarative_oracle__oracle_response_1_0, 114,54)
MR_decl_label7(__Compare___mdb__declarative_oracle__oracle_state_0_0, 3,2,5,9,13,17,45)
MR_decl_label10(__Compare___mdb__declarative_oracle__trusted_object_0_0, 58,63,26,37,41,43,47,5,21,20)
MR_decl_label4(__Compare___mdb__declarative_oracle__trusted_object_0_0, 7,9,13,72)
MR_def_extern_entry(mdb__declarative_oracle__oracle_response_undoable_1_0)
MR_def_extern_entry(mdb__declarative_oracle__oracle_state_init_5_0)
MR_def_extern_entry(mdb__declarative_oracle__add_trusted_module_3_0)
MR_def_extern_entry(mdb__declarative_oracle__add_trusted_pred_or_func_3_0)
MR_def_extern_entry(mdb__declarative_oracle__trust_standard_library_2_0)
MR_def_extern_entry(mdb__declarative_oracle__remove_trusted_3_0)
MR_def_extern_entry(mdb__declarative_oracle__get_trusted_list_3_0)
MR_decl_static(mdb__declarative_oracle__get_kb_ground_map_2_0)
MR_decl_static(mdb__declarative_oracle__get_kb_complete_map_2_0)
MR_decl_static(mdb__declarative_oracle__get_kb_exceptions_map_2_0)
MR_def_extern_entry(mdb__declarative_oracle__answer_known_3_0)
MR_decl_static(mdb__declarative_oracle__set_kb_ground_map_3_0)
MR_decl_static(mdb__declarative_oracle__set_kb_complete_map_3_0)
MR_decl_static(mdb__declarative_oracle__set_kb_exceptions_map_3_0)
MR_decl_static(mdb__declarative_oracle__add_atom_to_ground_map_5_0)
MR_decl_static(mdb__declarative_oracle__query_oracle_user_6_0)
MR_def_extern_entry(mdb__declarative_oracle__query_oracle_7_0)
MR_def_extern_entry(mdb__declarative_oracle__oracle_confirm_bug_7_0)
MR_def_extern_entry(mdb__declarative_oracle__revise_oracle_3_0)
MR_def_extern_entry(mdb__declarative_oracle__update_revised_knowledge_base_3_0)
MR_def_extern_entry(fn__mdb__declarative_oracle__get_browser_state_1_0)
MR_def_extern_entry(mdb__declarative_oracle__set_browser_state_3_0)
MR_def_extern_entry(fn__mdb__declarative_oracle__get_user_output_stream_1_0)
MR_def_extern_entry(fn__mdb__declarative_oracle__get_user_input_stream_1_0)
MR_def_extern_entry(mdb__declarative_oracle__set_oracle_testing_flag_3_0)
MR_def_extern_entry(mdb__declarative_oracle__reset_oracle_knowledge_base_2_0)
MR_decl_static(mdb__declarative_oracle__format_trust_command_3_0)
MR_decl_static(mdb__declarative_oracle__format_trust_display_4_0)
MR_decl_static(mdb__declarative_oracle__remove_atom_from_ground_map_4_0)
MR_decl_static(__Unify___mdb__declarative_oracle__known_exceptions_0_0)
MR_decl_static(__Compare___mdb__declarative_oracle__known_exceptions_0_0)
MR_decl_static(__Unify___mdb__declarative_oracle__oracle_kb_0_0)
MR_decl_static(__Compare___mdb__declarative_oracle__oracle_kb_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_oracle__oracle_response_1_0)
MR_def_extern_entry(__Compare___mdb__declarative_oracle__oracle_response_1_0)
MR_def_extern_entry(__Unify___mdb__declarative_oracle__oracle_state_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_oracle__oracle_state_0_0)
MR_decl_static(__Unify___mdb__declarative_oracle__trusted_object_0_0)
MR_decl_static(__Compare___mdb__declarative_oracle__trusted_object_0_0)
MR_decl_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0)
MR_decl_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0)

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_oracle__get_trusted_list_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_trusted_object_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_oracle__oracle_confirm_bug_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_oracle__get_trusted_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_oracle__oracle_confirm_bug_7_0_1,
MR_COMMON(4,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(3,0),
MR_CTOR0_ADDR(mdb__declarative_oracle, oracle_state),
MR_CTOR0_ADDR(mdb__declarative_oracle, oracle_state)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom),
MR_CTOR0_ADDR(mdbcomp__rtti_access, proc_layout),
MR_COMMON(5,0),
MR_COMMON(5,0)
}
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(mdb__declarative_oracle__format_trust_display_4_0),
0
},
{
MR_COMMON(2,0),
MR_ENTRY_AP(mdb__declarative_oracle__format_trust_command_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_oracle__get_trusted_list_3_0_2;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_oracle__get_trusted_list_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_question_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_CTOR1_ADDR(mdb__declarative_debugger, decl_question),
1
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
1,
17
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_truth_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_truth_0;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom),
MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom),
MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_truth_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth),
MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom),
MR_CTOR0_ADDR(mdbcomp__rtti_access, proc_layout),
MR_COMMON(5,0),
MR_COMMON(5,0)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__term_rep__type_ctor_info_term_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__term_rep__type_ctor_info_term_rep_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_mdb__term_rep__type_ctor_info_term_rep_0
}};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_oracle__field_types_known_exceptions_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0
};

const MR_ConstString mercury_data_mdb__declarative_oracle__field_names_known_exceptions_0_0[] = {
	"possible",
	"impossible",
	"inadmissible"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0 = {
	"known_excp",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_oracle__field_types_known_exceptions_0_0,
	mercury_data_mdb__declarative_oracle__field_names_known_exceptions_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_name_ordered_known_exceptions_0[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0
};

const MR_Integer mercury_data_mdb__declarative_oracle__functor_number_map_known_exceptions_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_known_exceptions_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_oracle__known_exceptions_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_oracle__known_exceptions_0_0)),
	"mdb.declarative_oracle",
	"known_exceptions",
	{ (void *)mercury_data_mdb__declarative_oracle__du_name_ordered_known_exceptions_0 },
	{ (void *)mercury_data_mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0 },
	1,
	4,
	mercury_data_mdb__declarative_oracle__functor_number_map_known_exceptions_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_final_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
	(MR_TypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_decl_truth_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
	(MR_TypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_decl_truth_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_known_exceptions_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_oracle__type_ctor_info_known_exceptions_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
	(MR_TypeInfo) &mercury_data_mdb__declarative_oracle__type_ctor_info_known_exceptions_0
}};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_oracle__field_types_oracle_kb_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_final_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_oracle__type_ctor_info_known_exceptions_0
};

const MR_ConstString mercury_data_mdb__declarative_oracle__field_names_oracle_kb_0_0[] = {
	"kb_ground_map",
	"kb_complete_map",
	"kb_exceptions_map"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0 = {
	"oracle_kb",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_oracle__field_types_oracle_kb_0_0,
	mercury_data_mdb__declarative_oracle__field_names_oracle_kb_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_name_ordered_oracle_kb_0[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0
};

const MR_Integer mercury_data_mdb__declarative_oracle__functor_number_map_oracle_kb_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_kb_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_oracle__oracle_kb_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_oracle__oracle_kb_0_0)),
	"mdb.declarative_oracle",
	"oracle_kb",
	{ (void *)mercury_data_mdb__declarative_oracle__du_name_ordered_oracle_kb_0 },
	{ (void *)mercury_data_mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0 },
	1,
	4,
	mercury_data_mdb__declarative_oracle__functor_number_map_oracle_kb_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_answer_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mdb__declarative_debugger__pti_decl_answer_1__pseudo_1 = {
	&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_answer_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_oracle__field_types_oracle_response_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__pti_decl_answer_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_0 = {
	"oracle_response_answer",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_oracle__field_types_oracle_response_1_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_oracle__field_types_oracle_response_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_output_stream_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_1 = {
	"oracle_response_show_info",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_oracle__field_types_oracle_response_1_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_user__type_ctor_info_user_search_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_user__type_ctor_info_user_search_mode_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_oracle__field_types_oracle_response_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_user__type_ctor_info_user_search_mode_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_2 = {
	"oracle_response_change_search",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_oracle__field_types_oracle_response_1_2,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_3 = {
	"oracle_response_undo",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_oracle__field_types_oracle_response_1_4[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_4 = {
	"oracle_response_exit_diagnosis",
	1,
	1,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_oracle__field_types_oracle_response_1_4,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_5 = {
	"oracle_response_abort_diagnosis",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_stag_ordered_oracle_response_1_0[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_3,
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_5

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_stag_ordered_oracle_response_1_1[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_stag_ordered_oracle_response_1_2[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_stag_ordered_oracle_response_1_3[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_2,
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_4

};

const MR_DuPtagLayout mercury_data_mdb__declarative_oracle__du_ptag_ordered_oracle_response_1[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_oracle__du_stag_ordered_oracle_response_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_oracle__du_stag_ordered_oracle_response_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_oracle__du_stag_ordered_oracle_response_1_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_mdb__declarative_oracle__du_stag_ordered_oracle_response_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_name_ordered_oracle_response_1[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_5,
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_0,
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_2,
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_4,
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_1,
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_response_1_3
};

const MR_Integer mercury_data_mdb__declarative_oracle__functor_number_map_oracle_response_1[] = {
	1,
	4,
	2,
	5,
	3,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_response_1 = {
	1,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_oracle__oracle_response_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0)),
	"mdb.declarative_oracle",
	"oracle_response",
	{ (void *)mercury_data_mdb__declarative_oracle__du_name_ordered_oracle_response_1 },
	{ (void *)mercury_data_mdb__declarative_oracle__du_ptag_ordered_oracle_response_1 },
	6,
	4,
	mercury_data_mdb__declarative_oracle__functor_number_map_oracle_response_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_user__type_ctor_info_user_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bimap__type_ctor_info_bimap_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_trusted_object_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_bimap__ti_bimap_2mdb__declarative_oracle__type_ctor_info_trusted_object_0builtin__type_ctor_info_int_0 = {
	&mercury_data_bimap__type_ctor_info_bimap_2,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_oracle__type_ctor_info_trusted_object_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_kb_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_user__type_ctor_info_user_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_oracle__field_types_oracle_state_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_kb_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_kb_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_user__type_ctor_info_user_state_0,
	(MR_PseudoTypeInfo) &mercury_data_bimap__ti_bimap_2mdb__declarative_oracle__type_ctor_info_trusted_object_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0
};

const MR_ConstString mercury_data_mdb__declarative_oracle__field_names_oracle_state_0_0[] = {
	"kb_current",
	"kb_revised",
	"user_state",
	"trusted",
	"trusted_id_counter"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_state_0_0 = {
	"oracle",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_oracle__field_types_oracle_state_0_0,
	mercury_data_mdb__declarative_oracle__field_names_oracle_state_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_state_0_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_oracle__du_ptag_ordered_oracle_state_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_name_ordered_oracle_state_0[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_oracle_state_0_0
};

const MR_Integer mercury_data_mdb__declarative_oracle__functor_number_map_oracle_state_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_state_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_oracle__oracle_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_oracle__oracle_state_0_0)),
	"mdb.declarative_oracle",
	"oracle_state",
	{ (void *)mercury_data_mdb__declarative_oracle__du_name_ordered_oracle_state_0 },
	{ (void *)mercury_data_mdb__declarative_oracle__du_ptag_ordered_oracle_state_0 },
	1,
	4,
	mercury_data_mdb__declarative_oracle__functor_number_map_oracle_state_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_oracle__field_types_trusted_object_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_trusted_object_0_0 = {
	"trusted_module",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_oracle__field_types_trusted_object_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_oracle__field_types_trusted_object_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_trusted_object_0_1 = {
	"trusted_predicate",
	3,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_oracle__field_types_trusted_object_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_oracle__field_types_trusted_object_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_trusted_object_0_2 = {
	"trusted_function",
	3,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_oracle__field_types_trusted_object_0_2,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_oracle__du_functor_desc_trusted_object_0_3 = {
	"trusted_standard_library",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_trusted_object_0_3

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_trusted_object_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_trusted_object_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_stag_ordered_trusted_object_0_3[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_trusted_object_0_2

};

const MR_DuPtagLayout mercury_data_mdb__declarative_oracle__du_ptag_ordered_trusted_object_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_oracle__du_stag_ordered_trusted_object_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_oracle__du_name_ordered_trusted_object_0[] = {
	&mercury_data_mdb__declarative_oracle__du_functor_desc_trusted_object_0_2,
	&mercury_data_mdb__declarative_oracle__du_functor_desc_trusted_object_0_0,
	&mercury_data_mdb__declarative_oracle__du_functor_desc_trusted_object_0_1,
	&mercury_data_mdb__declarative_oracle__du_functor_desc_trusted_object_0_3
};

const MR_Integer mercury_data_mdb__declarative_oracle__functor_number_map_trusted_object_0[] = {
	1,
	2,
	0,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_trusted_object_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_oracle__trusted_object_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0)),
	"mdb.declarative_oracle",
	"trusted_object",
	{ (void *)mercury_data_mdb__declarative_oracle__du_name_ordered_trusted_object_0 },
	{ (void *)mercury_data_mdb__declarative_oracle__du_ptag_ordered_trusted_object_0 },
	4,
	4,
	mercury_data_mdb__declarative_oracle__functor_number_map_trusted_object_0
};


static const MR_UserClosureId
mercury_data__closure_layout__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_oracle",
"mdb.declarative_oracle",
"remove_atom_from_ground_map",
4,
0
},
"mdb.declarative_oracle",
"declarative_oracle.m",
665,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_oracle",
"mdb.declarative_oracle",
"add_atom_to_ground_map",
5,
0
},
"mdb.declarative_oracle",
"declarative_oracle.m",
617,
"d4;c8;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_oracle__oracle_confirm_bug_7_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_oracle",
"mdb.declarative_oracle",
"revise_oracle",
3,
0
},
"mdb.declarative_oracle",
"declarative_oracle.m",
266,
"d1;c11;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_oracle__get_trusted_list_3_0_2 = {
{
MR_PREDICATE,
"mdb.declarative_oracle",
"mdb.declarative_oracle",
"format_trust_command",
3,
0
},
"mdb.declarative_oracle",
"declarative_oracle.m",
402,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_oracle__get_trusted_list_3_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_oracle",
"mdb.declarative_oracle",
"format_trust_display",
4,
0
},
"mdb.declarative_oracle",
"declarative_oracle.m",
405,
"d2;c6;"
};



MR_BEGIN_MODULE(mdb__declarative_oracle_module0)
	MR_init_entry1(mdb__declarative_oracle__oracle_response_undoable_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__oracle_response_undoable_1_0);
	MR_init_label1(mdb__declarative_oracle__oracle_response_undoable_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'oracle_response_undoable'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__oracle_response_undoable_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__oracle_response_undoable_1_0_i2);
	}
	MR_r1 = ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 0));
	MR_proceed();
MR_def_label(mdb__declarative_oracle__oracle_response_undoable_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(mdb__declarative_user__user_state_init_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__bimap__init_0_0);
MR_decl_entry(bimap__set_4_0);
MR_decl_entry(counter__init_2_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module1)
	MR_init_entry1(mdb__declarative_oracle__oracle_state_init_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__oracle_state_init_5_0);
	MR_init_label10(mdb__declarative_oracle__oracle_state_init_5_0,2,3,4,6,7,8,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'oracle_state_init'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__oracle_state_init_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(map__init_1_0,
		mdb__declarative_oracle__oracle_state_init_5_0_i2);
MR_def_label(mdb__declarative_oracle__oracle_state_init_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_np_call_localret_ent(map__init_1_0,
		mdb__declarative_oracle__oracle_state_init_5_0_i3);
MR_def_label(mdb__declarative_oracle__oracle_state_init_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	MR_np_call_localret_ent(map__init_1_0,
		mdb__declarative_oracle__oracle_state_init_5_0_i4);
MR_def_label(mdb__declarative_oracle__oracle_state_init_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__init_1_0,
		mdb__declarative_oracle__oracle_state_init_5_0_i6);
MR_def_label(mdb__declarative_oracle__oracle_state_init_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_np_call_localret_ent(map__init_1_0,
		mdb__declarative_oracle__oracle_state_init_5_0_i7);
MR_def_label(mdb__declarative_oracle__oracle_state_init_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	MR_np_call_localret_ent(map__init_1_0,
		mdb__declarative_oracle__oracle_state_init_5_0_i8);
MR_def_label(mdb__declarative_oracle__oracle_state_init_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(mdb__declarative_user__user_state_init_5_0,
		mdb__declarative_oracle__oracle_state_init_5_0_i10);
MR_def_label(mdb__declarative_oracle__oracle_state_init_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__bimap__init_0_0,
		mdb__declarative_oracle__oracle_state_init_5_0_i11);
MR_def_label(mdb__declarative_oracle__oracle_state_init_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(bimap__set_4_0,
		mdb__declarative_oracle__oracle_state_init_5_0_i12);
MR_def_label(mdb__declarative_oracle__oracle_state_init_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(counter__init_2_0,
		mdb__declarative_oracle__oracle_state_init_5_0_i13);
MR_def_label(mdb__declarative_oracle__oracle_state_init_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(bimap__insert_4_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module2)
	MR_init_entry1(mdb__declarative_oracle__add_trusted_module_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__add_trusted_module_3_0);
	MR_init_label3(mdb__declarative_oracle__add_trusted_module_3_0,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_trusted_module'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__add_trusted_module_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(counter__allocate_3_0,
		mdb__declarative_oracle__add_trusted_module_3_0_i2);
MR_def_label(mdb__declarative_oracle__add_trusted_module_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(1);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_sv(2), 3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(bimap__insert_4_0,
		mdb__declarative_oracle__add_trusted_module_3_0_i5);
MR_def_label(mdb__declarative_oracle__add_trusted_module_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__add_trusted_module_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_tfield(0, MR_r1, 4) = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__declarative_oracle__add_trusted_module_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module3)
	MR_init_entry1(mdb__declarative_oracle__add_trusted_pred_or_func_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__add_trusted_pred_or_func_3_0);
	MR_init_label9(mdb__declarative_oracle__add_trusted_pred_or_func_3_0,2,3,5,4,11,9,14,8,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_trusted_pred_or_func'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__add_trusted_pred_or_func_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(counter__allocate_3_0,
		mdb__declarative_oracle__add_trusted_pred_or_func_3_0_i2);
MR_def_label(mdb__declarative_oracle__add_trusted_pred_or_func_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,
		mdb__declarative_oracle__add_trusted_pred_or_func_3_0_i3);
MR_def_label(mdb__declarative_oracle__add_trusted_pred_or_func_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_oracle__add_trusted_pred_or_func_3_0_i5);
	}
	MR_r5 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r6 = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	MR_GOTO_LAB(mdb__declarative_oracle__add_trusted_pred_or_func_3_0_i4);
	}
MR_def_label(mdb__declarative_oracle__add_trusted_pred_or_func_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(1, MR_tempr1, 3);
	MR_r4 = MR_tfield(1, MR_tempr1, 4);
	}
MR_def_label(mdb__declarative_oracle__add_trusted_pred_or_func_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__add_trusted_pred_or_func_3_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tfield(3, MR_tempr1, 2) = MR_r4;
	MR_tempr2 = MR_sv(3);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr2, 3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(bimap__insert_4_0,
		mdb__declarative_oracle__add_trusted_pred_or_func_3_0_i11);
MR_def_label(mdb__declarative_oracle__add_trusted_pred_or_func_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__add_trusted_pred_or_func_3_0_i7);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(mdb__declarative_oracle__add_trusted_pred_or_func_3_0_i8);
MR_def_label(mdb__declarative_oracle__add_trusted_pred_or_func_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_r3;
	MR_tfield(2, MR_tempr1, 2) = MR_r4;
	MR_tempr2 = MR_sv(3);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr2, 3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(bimap__insert_4_0,
		mdb__declarative_oracle__add_trusted_pred_or_func_3_0_i14);
MR_def_label(mdb__declarative_oracle__add_trusted_pred_or_func_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__add_trusted_pred_or_func_3_0_i7);
	}
	MR_r1 = MR_r2;
MR_def_label(mdb__declarative_oracle__add_trusted_pred_or_func_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(mdb__declarative_oracle__add_trusted_pred_or_func_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_oracle_module4)
	MR_init_entry1(mdb__declarative_oracle__trust_standard_library_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__trust_standard_library_2_0);
	MR_init_label3(mdb__declarative_oracle__trust_standard_library_2_0,2,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trust_standard_library'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__trust_standard_library_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_np_call_localret_ent(counter__allocate_3_0,
		mdb__declarative_oracle__trust_standard_library_2_0_i2);
MR_def_label(mdb__declarative_oracle__trust_standard_library_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_sv(2), 3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(bimap__insert_4_0,
		mdb__declarative_oracle__trust_standard_library_2_0_i4);
MR_def_label(mdb__declarative_oracle__trust_standard_library_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__trust_standard_library_2_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_tfield(0, MR_r1, 4) = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__declarative_oracle__trust_standard_library_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__search_3_1);
MR_decl_entry(bimap__delete_value_3_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module5)
	MR_init_entry1(mdb__declarative_oracle__remove_trusted_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__remove_trusted_3_0);
	MR_init_label3(mdb__declarative_oracle__remove_trusted_3_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_trusted'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__remove_trusted_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(0, MR_sv(2), 3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(bimap__search_3_1,
		mdb__declarative_oracle__remove_trusted_3_0_i2);
MR_def_label(mdb__declarative_oracle__remove_trusted_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__remove_trusted_3_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(bimap__delete_value_3_0,
		mdb__declarative_oracle__remove_trusted_3_0_i4);
MR_def_label(mdb__declarative_oracle__remove_trusted_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__declarative_oracle__remove_trusted_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bimap__reverse_map_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(map__foldl_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__bimap__ordinates_1_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module6)
	MR_init_entry1(mdb__declarative_oracle__get_trusted_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__get_trusted_list_3_0);
	MR_init_label5(mdb__declarative_oracle__get_trusted_list_3_0,4,6,7,3,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_trusted_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__get_trusted_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_oracle__get_trusted_list_3_0_i3);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_sv(2) = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__bimap__reverse_map_1_0,
		mdb__declarative_oracle__get_trusted_list_3_0_i4);
MR_def_label(mdb__declarative_oracle__get_trusted_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		mdb__declarative_oracle__get_trusted_list_3_0_i6);
MR_def_label(mdb__declarative_oracle__get_trusted_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdb__declarative_oracle__get_trusted_list_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("There are no trusted modules, predicates or functions.\n", 55);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__declarative_oracle__get_trusted_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Trusted Objects:\n", 17);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(mdb__declarative_oracle__get_trusted_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__bimap__ordinates_1_0,
		mdb__declarative_oracle__get_trusted_list_3_0_i11);
MR_def_label(mdb__declarative_oracle__get_trusted_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_string_const("", 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_oracle_module7)
	MR_init_entry1(mdb__declarative_oracle__get_kb_ground_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__get_kb_ground_map_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_kb_ground_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_oracle__get_kb_ground_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_oracle_module8)
	MR_init_entry1(mdb__declarative_oracle__get_kb_complete_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__get_kb_complete_map_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_kb_complete_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_oracle__get_kb_complete_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_oracle_module9)
	MR_init_entry1(mdb__declarative_oracle__get_kb_exceptions_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__get_kb_exceptions_map_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_kb_exceptions_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_oracle__get_kb_exceptions_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__declarative_debugger__get_decl_question_atom_1_0);
MR_decl_entry(bimap__search_3_0);
MR_decl_entry(fn__mdb__declarative_debugger__get_decl_question_node_1_0);
MR_decl_entry(library__mercury_std_library_module_1_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module10)
	MR_init_entry1(mdb__declarative_oracle__answer_known_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__answer_known_3_0);
	MR_init_label10(mdb__declarative_oracle__answer_known_3_0,2,4,13,11,16,9,20,18,22,25)
	MR_init_label4(mdb__declarative_oracle__answer_known_3_0,26,40,28,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'answer_known'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__answer_known_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdb__declarative_debugger__get_decl_question_atom_1_0,
		mdb__declarative_oracle__answer_known_3_0_i2);
MR_def_label(mdb__declarative_oracle__answer_known_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_sv(1), 3);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,
		mdb__declarative_oracle__answer_known_3_0_i4);
MR_def_label(mdb__declarative_oracle__answer_known_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_oracle__answer_known_3_0_i40);
	}
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__answer_known_3_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(3, MR_tempr2, 1) = MR_tfield(0, MR_r1, 3);
	MR_tfield(3, MR_tempr2, 2) = MR_tfield(0, MR_r1, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(bimap__search_3_0,
		mdb__declarative_oracle__answer_known_3_0_i13);
MR_def_label(mdb__declarative_oracle__answer_known_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__answer_known_3_0_i9);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdb__declarative_debugger__get_decl_question_node_1_0,
		mdb__declarative_oracle__answer_known_3_0_i28);
MR_def_label(mdb__declarative_oracle__answer_known_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(0, MR_r1, 3);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(0, MR_r1, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(bimap__search_3_0,
		mdb__declarative_oracle__answer_known_3_0_i16);
MR_def_label(mdb__declarative_oracle__answer_known_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__answer_known_3_0_i9);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdb__declarative_debugger__get_decl_question_node_1_0,
		mdb__declarative_oracle__answer_known_3_0_i28);
MR_def_label(mdb__declarative_oracle__answer_known_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(bimap__search_3_0,
		mdb__declarative_oracle__answer_known_3_0_i20);
MR_def_label(mdb__declarative_oracle__answer_known_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__answer_known_3_0_i18);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdb__declarative_debugger__get_decl_question_node_1_0,
		mdb__declarative_oracle__answer_known_3_0_i28);
MR_def_label(mdb__declarative_oracle__answer_known_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(bimap__search_3_0,
		mdb__declarative_oracle__answer_known_3_0_i22);
MR_def_label(mdb__declarative_oracle__answer_known_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__answer_known_3_0_i3);
	}
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__answer_known_3_0_i25);
	}
	MR_r1 = MR_tfield(1, MR_sv(5), 1);
	MR_np_call_localret_ent(library__mercury_std_library_module_1_0,
		mdb__declarative_oracle__answer_known_3_0_i26);
MR_def_label(mdb__declarative_oracle__answer_known_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(5), 0);
	MR_np_call_localret_ent(library__mercury_std_library_module_1_0,
		mdb__declarative_oracle__answer_known_3_0_i26);
MR_def_label(mdb__declarative_oracle__answer_known_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__answer_known_3_0_i3);
	}
MR_def_label(mdb__declarative_oracle__answer_known_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdb__declarative_debugger__get_decl_question_node_1_0,
		mdb__declarative_oracle__answer_known_3_0_i28);
MR_def_label(mdb__declarative_oracle__answer_known_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_oracle__answer_known_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_oracle_module11)
	MR_init_entry1(mdb__declarative_oracle__set_kb_ground_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__set_kb_ground_map_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_kb_ground_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_oracle__set_kb_ground_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_oracle_module12)
	MR_init_entry1(mdb__declarative_oracle__set_kb_complete_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__set_kb_complete_map_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_kb_complete_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_oracle__set_kb_complete_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_oracle_module13)
	MR_init_entry1(mdb__declarative_oracle__set_kb_exceptions_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__set_kb_exceptions_map_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_kb_exceptions_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_oracle__set_kb_exceptions_map_3_0)
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

MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module14)
	MR_init_entry1(mdb__declarative_oracle__add_atom_to_ground_map_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__add_atom_to_ground_map_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_atom_to_ground_map'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_oracle__add_atom_to_ground_map_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tfield(0, MR_r2, 0), 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(svmap__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_user__query_user_6_0);
MR_decl_entry(mdb__declarative_execution__get_pred_attributes_5_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module15)
	MR_init_entry1(mdb__declarative_oracle__query_oracle_user_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__query_oracle_user_6_0);
	MR_init_label10(mdb__declarative_oracle__query_oracle_user_6_0,2,31,4,5,7,8,24,25,26,35)
	MR_init_label9(mdb__declarative_oracle__query_oracle_user_6_0,10,14,16,17,18,19,20,21,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'query_oracle_user'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_oracle__query_oracle_user_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(0, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_user__query_user_6_0,
		mdb__declarative_oracle__query_oracle_user_6_0_i2);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mdb__declarative_oracle__query_oracle_user_6_0_i31) MR_AND
		MR_LABEL_AP(mdb__declarative_oracle__query_oracle_user_6_0_i5) MR_AND
		MR_LABEL_AP(mdb__declarative_oracle__query_oracle_user_6_0_i24) MR_AND
		MR_LABEL_AP(mdb__declarative_oracle__query_oracle_user_6_0_i35));
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_user_6_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_sv(6);
	MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_user_6_0_i3);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_sv(6);
	MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_user_6_0_i3);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_sv(6);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,
		mdb__declarative_oracle__query_oracle_user_6_0_i7);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,
		mdb__declarative_oracle__query_oracle_user_6_0_i8);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_user_6_0_i3);
	}
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdb__declarative_debugger__get_decl_question_atom_1_0,
		mdb__declarative_oracle__query_oracle_user_6_0_i25);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mdb__declarative_oracle__add_trusted_pred_or_func_3_0,
		mdb__declarative_oracle__query_oracle_user_6_0_i26);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdb__declarative_debugger__get_decl_question_node_1_0,
		mdb__declarative_oracle__query_oracle_user_6_0_i21);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_user_6_0_i16);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_user_6_0_i14);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_user_6_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_sv(6);
	MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_user_6_0_i3);
	}
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_sv(6);
	MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_user_6_0_i3);
	}
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_sv(6);
	MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_user_6_0_i3);
	}
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdb__declarative_debugger__get_decl_question_atom_1_0,
		mdb__declarative_oracle__query_oracle_user_6_0_i17);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,
		mdb__declarative_oracle__query_oracle_user_6_0_i18);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__declarative_execution__get_pred_attributes_5_0,
		mdb__declarative_oracle__query_oracle_user_6_0_i19);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mdb__declarative_oracle__add_trusted_module_3_0,
		mdb__declarative_oracle__query_oracle_user_6_0_i20);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdb__declarative_debugger__get_decl_question_node_1_0,
		mdb__declarative_oracle__query_oracle_user_6_0_i21);
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	}
MR_def_label(mdb__declarative_oracle__query_oracle_user_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module16)
	MR_init_entry1(mdb__declarative_oracle__query_oracle_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__query_oracle_7_0);
	MR_init_label10(mdb__declarative_oracle__query_oracle_7_0,4,2,14,17,16,21,20,24,28,29)
	MR_init_label7(mdb__declarative_oracle__query_oracle_7_0,30,31,10,11,9,7,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'query_oracle'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__query_oracle_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__answer_known_3_0,
		mdb__declarative_oracle__query_oracle_7_0_i4);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i10);
	}
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i30);
	}
	MR_sv(4) = MR_tfield(2, MR_r2, 0);
	MR_sv(5) = MR_tfield(2, MR_r2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_r3, 1), 2);
	MR_r4 = MR_tfield(2, MR_sv(1), 1);
	MR_np_call_localret_ent(map__search_3_0,
		mdb__declarative_oracle__query_oracle_7_0_i14);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i7);
	}
	MR_sv(7) = MR_tfield(0, MR_r2, 2);
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__member_2_0,
		mdb__declarative_oracle__query_oracle_7_0_i17);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i28);
	}
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(set__member_2_0,
		mdb__declarative_oracle__query_oracle_7_0_i21);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i28);
	}
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(set__member_2_0,
		mdb__declarative_oracle__query_oracle_7_0_i24);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 2;
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i29);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i7);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i9);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_r3, 1), 0);
	MR_r4 = MR_tfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(map__search_3_0,
		mdb__declarative_oracle__query_oracle_7_0_i31);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i7);
	}
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i9);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_r3, 1), 1);
	MR_r4 = MR_tfield(1, MR_sv(1), 1);
	MR_np_call_localret_ent(map__search_3_0,
		mdb__declarative_oracle__query_oracle_7_0_i11);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__query_oracle_7_0_i7);
	}
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__query_oracle_user_6_0,
		mdb__declarative_oracle__query_oracle_7_0_i38);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__query_oracle_user_6_0,
		mdb__declarative_oracle__query_oracle_7_0_i38);
MR_def_label(mdb__declarative_oracle__query_oracle_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_user__user_confirm_bug_6_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module17)
	MR_init_entry1(mdb__declarative_oracle__oracle_confirm_bug_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__oracle_confirm_bug_7_0);
	MR_init_label3(mdb__declarative_oracle__oracle_confirm_bug_7_0,2,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'oracle_confirm_bug'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__oracle_confirm_bug_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(mdb__declarative_user__user_confirm_bug_6_0,
		mdb__declarative_oracle__oracle_confirm_bug_7_0_i2);
MR_def_label(mdb__declarative_oracle__oracle_confirm_bug_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tempr6 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr6, 4);
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__oracle_confirm_bug_7_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_oracle__revise_oracle_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tempr7 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_debugger, decl_question);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr7;
	MR_tempr4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, oracle_state);
	MR_r3 = MR_tempr2;
	MR_tempr5 = MR_tempr1;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdb__declarative_oracle__oracle_confirm_bug_7_0_i8);
MR_def_label(mdb__declarative_oracle__oracle_confirm_bug_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(mdb__declarative_oracle__oracle_confirm_bug_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_oracle_module18)
	MR_init_entry1(mdb__declarative_oracle__revise_oracle_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__revise_oracle_3_0);
	MR_init_label10(mdb__declarative_oracle__revise_oracle_3_0,10,13,12,17,16,20,25,26,5,6)
	MR_init_label4(mdb__declarative_oracle__revise_oracle_3_0,4,31,32,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'revise_oracle'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__revise_oracle_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__revise_oracle_3_0_i5);
	}
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_oracle__revise_oracle_3_0_i25);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(2, MR_r2, 0);
	MR_sv(5) = MR_tfield(2, MR_r2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	MR_r3 = MR_tfield(0, MR_sv(2), 2);
	MR_r4 = MR_tfield(2, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		mdb__declarative_oracle__revise_oracle_3_0_i10);
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__revise_oracle_3_0_i2);
	}
	MR_sv(7) = MR_tfield(0, MR_r2, 2);
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__member_2_0,
		mdb__declarative_oracle__revise_oracle_3_0_i13);
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__revise_oracle_3_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_GOTO_LAB(mdb__declarative_oracle__revise_oracle_3_0_i4);
	}
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(set__member_2_0,
		mdb__declarative_oracle__revise_oracle_3_0_i17);
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__revise_oracle_3_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_GOTO_LAB(mdb__declarative_oracle__revise_oracle_3_0_i4);
	}
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(set__member_2_0,
		mdb__declarative_oracle__revise_oracle_3_0_i20);
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__revise_oracle_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_GOTO_LAB(mdb__declarative_oracle__revise_oracle_3_0_i4);
	}
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_r4 = MR_tfield(0, MR_sv(1), 2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		mdb__declarative_oracle__revise_oracle_3_0_i26);
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__revise_oracle_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_GOTO_LAB(mdb__declarative_oracle__revise_oracle_3_0_i4);
	}
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r3 = MR_tfield(0, MR_sv(2), 1);
	MR_r4 = MR_tfield(1, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		mdb__declarative_oracle__revise_oracle_3_0_i6);
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_oracle__revise_oracle_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,
		mdb__declarative_oracle__revise_oracle_3_0_i31);
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_sv(3), 1);
	}
	MR_np_call_localret_ent(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,
		mdb__declarative_oracle__revise_oracle_3_0_i32);
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(mdb__declarative_oracle__revise_oracle_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_oracle_module19)
	MR_init_entry1(mdb__declarative_oracle__update_revised_knowledge_base_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__update_revised_knowledge_base_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_revised_knowledge_base'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__update_revised_knowledge_base_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__declarative_user__get_browser_state_1_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module20)
	MR_init_entry1(fn__mdb__declarative_oracle__get_browser_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_oracle__get_browser_state_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_browser_state'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_oracle__get_browser_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_tailcall_ent(fn__mdb__declarative_user__get_browser_state_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_user__set_browser_state_3_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module21)
	MR_init_entry1(mdb__declarative_oracle__set_browser_state_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__set_browser_state_3_0);
	MR_init_label1(mdb__declarative_oracle__set_browser_state_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_browser_state'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__set_browser_state_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(mdb__declarative_user__set_browser_state_3_0,
		mdb__declarative_oracle__set_browser_state_3_0_i2);
MR_def_label(mdb__declarative_oracle__set_browser_state_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__declarative_user__get_user_output_stream_1_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module22)
	MR_init_entry1(fn__mdb__declarative_oracle__get_user_output_stream_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_oracle__get_user_output_stream_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_user_output_stream'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_oracle__get_user_output_stream_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_tailcall_ent(fn__mdb__declarative_user__get_user_output_stream_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__declarative_user__get_user_input_stream_1_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module23)
	MR_init_entry1(fn__mdb__declarative_oracle__get_user_input_stream_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_oracle__get_user_input_stream_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_user_input_stream'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_oracle__get_user_input_stream_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_tailcall_ent(fn__mdb__declarative_user__get_user_input_stream_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_user__set_user_testing_flag_3_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module24)
	MR_init_entry1(mdb__declarative_oracle__set_oracle_testing_flag_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__set_oracle_testing_flag_3_0);
	MR_init_label1(mdb__declarative_oracle__set_oracle_testing_flag_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_oracle_testing_flag'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__set_oracle_testing_flag_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(mdb__declarative_user__set_user_testing_flag_3_0,
		mdb__declarative_oracle__set_oracle_testing_flag_3_0_i2);
MR_def_label(mdb__declarative_oracle__set_oracle_testing_flag_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_oracle_module25)
	MR_init_entry1(mdb__declarative_oracle__reset_oracle_knowledge_base_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__reset_oracle_knowledge_base_2_0);
	MR_init_label3(mdb__declarative_oracle__reset_oracle_knowledge_base_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_oracle_knowledge_base'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_oracle__reset_oracle_knowledge_base_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(map__init_1_0,
		mdb__declarative_oracle__reset_oracle_knowledge_base_2_0_i2);
MR_def_label(mdb__declarative_oracle__reset_oracle_knowledge_base_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_np_call_localret_ent(map__init_1_0,
		mdb__declarative_oracle__reset_oracle_knowledge_base_2_0_i3);
MR_def_label(mdb__declarative_oracle__reset_oracle_knowledge_base_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	MR_np_call_localret_ent(map__init_1_0,
		mdb__declarative_oracle__reset_oracle_knowledge_base_2_0_i4);
MR_def_label(mdb__declarative_oracle__reset_oracle_knowledge_base_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module26)
	MR_init_entry1(mdb__declarative_oracle__format_trust_command_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__format_trust_command_3_0);
	MR_init_label10(mdb__declarative_oracle__format_trust_command_3_0,28,38,14,15,39,19,20,21,22,23)
	MR_init_label10(mdb__declarative_oracle__format_trust_command_3_0,24,25,40,4,5,6,7,8,9,10)
	MR_init_label1(mdb__declarative_oracle__format_trust_command_3_0,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_trust_command'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_oracle__format_trust_command_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mdb__declarative_oracle__format_trust_command_3_0_i28) MR_AND
		MR_LABEL_AP(mdb__declarative_oracle__format_trust_command_3_0_i38) MR_AND
		MR_LABEL_AP(mdb__declarative_oracle__format_trust_command_3_0_i39) MR_AND
		MR_LABEL_AP(mdb__declarative_oracle__format_trust_command_3_0_i40));
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("trust std lib\n", 14);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		mdb__declarative_oracle__format_trust_command_3_0_i14);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i15);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("trust ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i11);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_r1, 0);
	MR_sv(3) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r1, 2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_oracle__format_trust_command_3_0_i19);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		mdb__declarative_oracle__format_trust_command_3_0_i20);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i21);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i22);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i23);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i24);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i25);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("trust pred*", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i11);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r1, 0);
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_tfield(3, MR_r1, 2) - (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_oracle__format_trust_command_3_0_i4);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		mdb__declarative_oracle__format_trust_command_3_0_i5);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i6);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i7);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i8);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i9);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i10);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("trust func*", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_command_3_0_i11);
MR_def_label(mdb__declarative_oracle__format_trust_command_3_0,11)
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


MR_BEGIN_MODULE(mdb__declarative_oracle_module27)
	MR_init_entry1(mdb__declarative_oracle__format_trust_display_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__format_trust_display_4_0);
	MR_init_label10(mdb__declarative_oracle__format_trust_display_4_0,34,35,15,16,17,18,19,22,23,24)
	MR_init_label10(mdb__declarative_oracle__format_trust_display_4_0,25,26,27,28,29,30,31,3,4,5)
	MR_init_label8(mdb__declarative_oracle__format_trust_display_4_0,6,7,8,9,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_trust_display'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_oracle__format_trust_display_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(mdb__declarative_oracle__format_trust_display_4_0_i34) MR_AND
		MR_LABEL_AP(mdb__declarative_oracle__format_trust_display_4_0_i15) MR_AND
		MR_LABEL_AP(mdb__declarative_oracle__format_trust_display_4_0_i22) MR_AND
		MR_LABEL_AP(mdb__declarative_oracle__format_trust_display_4_0_i3));
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_oracle__format_trust_display_4_0_i35);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(": the Mercury standard library\n", 31);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i13);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		mdb__declarative_oracle__format_trust_display_4_0_i16);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_oracle__format_trust_display_4_0_i17);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i18);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": module ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i19);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i13);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_r2, 1);
	MR_sv(4) = MR_tfield(2, MR_r2, 2);
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		mdb__declarative_oracle__format_trust_display_4_0_i23);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_oracle__format_trust_display_4_0_i24);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_oracle__format_trust_display_4_0_i25);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i26);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i27);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i28);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i29);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i30);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": predicate ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i31);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i13);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r2, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		mdb__declarative_oracle__format_trust_display_4_0_i4);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_oracle__format_trust_display_4_0_i5);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_oracle__format_trust_display_4_0_i6);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i7);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i8);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i9);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i10);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i11);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": function ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i12);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_oracle__format_trust_display_4_0_i13);
MR_def_label(mdb__declarative_oracle__format_trust_display_4_0,13)
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

MR_decl_entry(svmap__delete_3_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module28)
	MR_init_entry1(mdb__declarative_oracle__remove_atom_from_ground_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_oracle__remove_atom_from_ground_map_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_atom_from_ground_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_oracle__remove_atom_from_ground_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tfield(0, MR_r1, 0), 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(svmap__delete_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module29)
	MR_init_entry1(__Unify___mdb__declarative_oracle__known_exceptions_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_oracle__known_exceptions_0_0);
	MR_init_label4(__Unify___mdb__declarative_oracle__known_exceptions_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__declarative_oracle__known_exceptions_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__known_exceptions_0_0_i10);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___mdb__declarative_oracle__known_exceptions_0_0_i4);
MR_def_label(__Unify___mdb__declarative_oracle__known_exceptions_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__known_exceptions_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___mdb__declarative_oracle__known_exceptions_0_0_i6);
MR_def_label(__Unify___mdb__declarative_oracle__known_exceptions_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__known_exceptions_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___mdb__declarative_oracle__known_exceptions_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_oracle__known_exceptions_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module30)
	MR_init_entry1(__Compare___mdb__declarative_oracle__known_exceptions_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_oracle__known_exceptions_0_0);
	MR_init_label5(__Compare___mdb__declarative_oracle__known_exceptions_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__declarative_oracle__known_exceptions_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__known_exceptions_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_oracle__known_exceptions_0_0_i2);
MR_def_label(__Compare___mdb__declarative_oracle__known_exceptions_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_oracle__known_exceptions_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___mdb__declarative_oracle__known_exceptions_0_0_i5);
MR_def_label(__Compare___mdb__declarative_oracle__known_exceptions_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__known_exceptions_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___mdb__declarative_oracle__known_exceptions_0_0_i9);
MR_def_label(__Compare___mdb__declarative_oracle__known_exceptions_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__known_exceptions_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___mdb__declarative_oracle__known_exceptions_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module31)
	MR_init_entry1(__Unify___mdb__declarative_oracle__oracle_kb_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_oracle__oracle_kb_0_0);
	MR_init_label4(__Unify___mdb__declarative_oracle__oracle_kb_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__declarative_oracle__oracle_kb_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_kb_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___mdb__declarative_oracle__oracle_kb_0_0_i4);
MR_def_label(__Unify___mdb__declarative_oracle__oracle_kb_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_kb_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___mdb__declarative_oracle__oracle_kb_0_0_i6);
MR_def_label(__Unify___mdb__declarative_oracle__oracle_kb_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_kb_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___mdb__declarative_oracle__oracle_kb_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_oracle__oracle_kb_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module32)
	MR_init_entry1(__Compare___mdb__declarative_oracle__oracle_kb_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_oracle__oracle_kb_0_0);
	MR_init_label5(__Compare___mdb__declarative_oracle__oracle_kb_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__declarative_oracle__oracle_kb_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_kb_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_kb_0_0_i2);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_kb_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_oracle__oracle_kb_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___mdb__declarative_oracle__oracle_kb_0_0_i5);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_kb_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_kb_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___mdb__declarative_oracle__oracle_kb_0_0_i9);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_kb_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_kb_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_kb_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdb__declarative_debugger__decl_answer_1_0);
MR_decl_entry(__Unify___io__output_stream_0_0);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module33)
	MR_init_entry1(__Unify___mdb__declarative_oracle__oracle_response_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_oracle__oracle_response_1_0);
	MR_init_label7(__Unify___mdb__declarative_oracle__oracle_response_1_0,21,6,16,25,12,27,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_oracle__oracle_response_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_response_1_0_i27);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___mdb__declarative_oracle__oracle_response_1_0_i21) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_oracle__oracle_response_1_0_i6) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_oracle__oracle_response_1_0_i16) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_oracle__oracle_response_1_0_i25));
MR_def_label(__Unify___mdb__declarative_oracle__oracle_response_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__declarative_oracle__oracle_response_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_response_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___mdb__declarative_debugger__decl_answer_1_0);
MR_def_label(__Unify___mdb__declarative_oracle__oracle_response_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_response_1_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___io__output_stream_0_0);
MR_def_label(__Unify___mdb__declarative_oracle__oracle_response_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_response_1_0_i12);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_response_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__declarative_oracle__oracle_response_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_response_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdb__declarative_oracle__oracle_response_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_oracle__oracle_response_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdb__declarative_debugger__decl_answer_1_0);
MR_decl_entry(__Compare___io__output_stream_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module34)
	MR_init_entry1(__Compare___mdb__declarative_oracle__oracle_response_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_oracle__oracle_response_1_0);
	MR_init_label10(__Compare___mdb__declarative_oracle__oracle_response_1_0,93,87,102,91,5,13,17,19,28,22)
	MR_init_label10(__Compare___mdb__declarative_oracle__oracle_response_1_0,32,64,73,157,70,97,47,49,58,62)
	MR_init_label2(__Compare___mdb__declarative_oracle__oracle_response_1_0,114,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_oracle__oracle_response_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i102);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i93) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i19) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i64) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i97));
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(1)),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i5);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i87) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i114) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i114) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i91));
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i157);
	}
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i157);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i13) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i114) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i114) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i17));
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i102);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i114);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i28) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i22) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i157) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i32));
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i157);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___mdb__declarative_debugger__decl_answer_1_0);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i157);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i73) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i114) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i70) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i157));
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i157);
	}
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___io__output_stream_0_0);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i49);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i157) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i114) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i114) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i47));
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i157);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i58) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i114) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i114) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__oracle_response_1_0_i62));
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i157);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_response_1_0_i54);
	}
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_response_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdb__declarative_user__user_state_0_0);
MR_decl_entry(__Unify___bimap__bimap_2_0);
MR_decl_entry(__Unify___counter__counter_0_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module35)
	MR_init_entry1(__Unify___mdb__declarative_oracle__oracle_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_oracle__oracle_state_0_0);
	MR_init_label6(__Unify___mdb__declarative_oracle__oracle_state_0_0,4,6,8,10,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_oracle__oracle_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_state_0_0_i14);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__declarative_oracle__oracle_kb_0_0,
		__Unify___mdb__declarative_oracle__oracle_state_0_0_i4);
MR_def_label(__Unify___mdb__declarative_oracle__oracle_state_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_state_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdb__declarative_oracle__oracle_kb_0_0,
		__Unify___mdb__declarative_oracle__oracle_state_0_0_i6);
MR_def_label(__Unify___mdb__declarative_oracle__oracle_state_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_state_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___mdb__declarative_user__user_state_0_0,
		__Unify___mdb__declarative_oracle__oracle_state_0_0_i8);
MR_def_label(__Unify___mdb__declarative_oracle__oracle_state_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_state_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___bimap__bimap_2_0,
		__Unify___mdb__declarative_oracle__oracle_state_0_0_i10);
MR_def_label(__Unify___mdb__declarative_oracle__oracle_state_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__oracle_state_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___counter__counter_0_0);
MR_def_label(__Unify___mdb__declarative_oracle__oracle_state_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_oracle__oracle_state_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdb__declarative_user__user_state_0_0);
MR_decl_entry(__Compare___bimap__bimap_2_0);
MR_decl_entry(__Compare___counter__counter_0_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module36)
	MR_init_entry1(__Compare___mdb__declarative_oracle__oracle_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_oracle__oracle_state_0_0);
	MR_init_label7(__Compare___mdb__declarative_oracle__oracle_state_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_oracle__oracle_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_state_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_state_0_0_i2);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_state_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_oracle__oracle_state_0_0,2)
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
	MR_np_call_localret_ent(__Compare___mdb__declarative_oracle__oracle_kb_0_0,
		__Compare___mdb__declarative_oracle__oracle_state_0_0_i5);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_state_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_state_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdb__declarative_oracle__oracle_kb_0_0,
		__Compare___mdb__declarative_oracle__oracle_state_0_0_i9);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_state_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_state_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdb__declarative_user__user_state_0_0,
		__Compare___mdb__declarative_oracle__oracle_state_0_0_i13);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_state_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_state_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, trusted_object);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___bimap__bimap_2_0,
		__Compare___mdb__declarative_oracle__oracle_state_0_0_i17);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_state_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__oracle_state_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___counter__counter_0_0);
MR_def_label(__Compare___mdb__declarative_oracle__oracle_state_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module37)
	MR_init_entry1(__Unify___mdb__declarative_oracle__trusted_object_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_oracle__trusted_object_0_0);
	MR_init_label8(__Unify___mdb__declarative_oracle__trusted_object_0_0,17,9,13,15,5,7,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__declarative_oracle__trusted_object_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__trusted_object_0_0_i22);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___mdb__declarative_oracle__trusted_object_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_oracle__trusted_object_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_oracle__trusted_object_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_oracle__trusted_object_0_0_i5));
MR_def_label(__Unify___mdb__declarative_oracle__trusted_object_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdb__declarative_oracle__trusted_object_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__trusted_object_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___mdb__declarative_oracle__trusted_object_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__trusted_object_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___mdb__declarative_oracle__trusted_object_0_0_i15);
MR_def_label(__Unify___mdb__declarative_oracle__trusted_object_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__trusted_object_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(3)) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__trusted_object_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdb__declarative_oracle__trusted_object_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__trusted_object_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___mdb__declarative_oracle__trusted_object_0_0_i7);
MR_def_label(__Unify___mdb__declarative_oracle__trusted_object_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__trusted_object_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(3)) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_oracle__trusted_object_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdb__declarative_oracle__trusted_object_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_oracle__trusted_object_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module38)
	MR_init_entry1(__Compare___mdb__declarative_oracle__trusted_object_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_oracle__trusted_object_0_0);
	MR_init_label10(__Compare___mdb__declarative_oracle__trusted_object_0_0,58,63,26,37,41,43,47,5,21,20)
	MR_init_label4(__Compare___mdb__declarative_oracle__trusted_object_0_0,7,9,13,72)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__declarative_oracle__trusted_object_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__trusted_object_0_0_i63);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0_i58) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0_i26) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0_i5));
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__trusted_object_0_0_i20);
	}
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__trusted_object_0_0_i21);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0_i21) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0_i21));
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,41)
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___mdb__declarative_oracle__trusted_object_0_0_i43);
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__trusted_object_0_0_i72);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__declarative_oracle__trusted_object_0_0_i47);
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__trusted_object_0_0_i72);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0_i21) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_oracle__trusted_object_0_0_i7));
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 0);
	MR_r2 = MR_tfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___mdb__declarative_oracle__trusted_object_0_0_i9);
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__trusted_object_0_0_i72);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__declarative_oracle__trusted_object_0_0_i13);
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_oracle__trusted_object_0_0_i72);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_oracle__trusted_object_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_oracle_module39)
	MR_init_entry1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0);
	MR_init_label10(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,8,11,10,15,14,18,23,24,3,4)
	MR_init_label1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__query_oracle_kb__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i3);
	}
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i23);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(2, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i8);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i1);
	}
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__member_2_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i11);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__member_2_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i15);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i14);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__member_2_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i18);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, final_decl_atom);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i24);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i4);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(map__set_4_0);
MR_decl_entry(fn__mdbcomp__rtti_access__get_all_modes_for_layout_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0;

MR_BEGIN_MODULE(mdb__declarative_oracle_module40)
	MR_init_entry1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0);
	MR_init_label10(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,13,15,14,17,18,19,21,24,23,27)
	MR_init_label10(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,26,29,31,33,34,38,36,41,8,9)
	MR_init_label2(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,10,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__assert_oracle_kb__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r2),0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i4);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i8);
	}
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(2, MR_r1, 1);
	MR_sv(3) = MR_tfield(2, MR_r1, 2);
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__get_kb_exceptions_map_2_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i13);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i15);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i14);
	}
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i21);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(set__init_1_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i17);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(set__init_1_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i18);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_np_call_localret_ent(set__init_1_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i19);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i23);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_np_call_localret_ent(set__insert_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i24);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	}
	MR_np_call_localret_ent(map__set_4_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i31);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i26);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(set__insert_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i27);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	}
	MR_np_call_localret_ent(map__set_4_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i31);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i29);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	}
	MR_np_call_localret_ent(map__set_4_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i31);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdb__declarative_oracle__set_kb_exceptions_map_3_0);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__get_kb_ground_map_2_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i34);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_oracle__add_atom_to_ground_map_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_tempr1, 4), 0), 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_all_modes_for_layout_1_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i38);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__rtti_access, proc_layout);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i41);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_r2, 0), 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__add_atom_to_ground_map_5_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i41);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdb__declarative_oracle__set_kb_ground_map_3_0);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_oracle__get_kb_complete_map_2_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i9);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__set_4_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0_i10);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdb__declarative_oracle__set_kb_complete_map_3_0);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__delete_3_0);
MR_decl_entry(map__delete_3_0);

MR_BEGIN_MODULE(mdb__declarative_oracle_module41)
	MR_init_entry1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0);
	MR_init_label10(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,8,10,11,12,7,15,17,19,21,3)
	MR_init_label1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__retract_oracle_kb__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i17);
	}
	MR_r3 = MR_tfield(0, MR_r2, 2);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_r1, 1);
	MR_sv(3) = MR_tfield(2, MR_r1, 2);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i8);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i7);
	}
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 2);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__delete_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i10);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(set__delete_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i11);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__delete_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i12);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_oracle, known_exceptions);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i15);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_oracle__remove_atom_from_ground_map_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 2);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_tempr1, 3), 0), 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_all_modes_for_layout_1_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i19);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__rtti_access, proc_layout);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i21);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, init_decl_atom);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, decl_truth);
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__delete_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0_i4);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_111_114_97_99_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdb__declarative_oracle_maybe_bunch_0(void)
{
	mdb__declarative_oracle_module0();
	mdb__declarative_oracle_module1();
	mdb__declarative_oracle_module2();
	mdb__declarative_oracle_module3();
	mdb__declarative_oracle_module4();
	mdb__declarative_oracle_module5();
	mdb__declarative_oracle_module6();
	mdb__declarative_oracle_module7();
	mdb__declarative_oracle_module8();
	mdb__declarative_oracle_module9();
	mdb__declarative_oracle_module10();
	mdb__declarative_oracle_module11();
	mdb__declarative_oracle_module12();
	mdb__declarative_oracle_module13();
	mdb__declarative_oracle_module14();
	mdb__declarative_oracle_module15();
	mdb__declarative_oracle_module16();
	mdb__declarative_oracle_module17();
	mdb__declarative_oracle_module18();
	mdb__declarative_oracle_module19();
	mdb__declarative_oracle_module20();
	mdb__declarative_oracle_module21();
	mdb__declarative_oracle_module22();
	mdb__declarative_oracle_module23();
	mdb__declarative_oracle_module24();
	mdb__declarative_oracle_module25();
	mdb__declarative_oracle_module26();
	mdb__declarative_oracle_module27();
	mdb__declarative_oracle_module28();
	mdb__declarative_oracle_module29();
	mdb__declarative_oracle_module30();
	mdb__declarative_oracle_module31();
	mdb__declarative_oracle_module32();
	mdb__declarative_oracle_module33();
	mdb__declarative_oracle_module34();
	mdb__declarative_oracle_module35();
	mdb__declarative_oracle_module36();
	mdb__declarative_oracle_module37();
	mdb__declarative_oracle_module38();
	mdb__declarative_oracle_module39();
}

static void mercury__mdb__declarative_oracle_maybe_bunch_1(void)
{
	mdb__declarative_oracle_module40();
	mdb__declarative_oracle_module41();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__declarative_oracle__init(void);
void mercury__mdb__declarative_oracle__init_type_tables(void);
void mercury__mdb__declarative_oracle__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__declarative_oracle__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__declarative_oracle__init_complexity_procs(void);
#endif

void mercury__mdb__declarative_oracle__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__declarative_oracle_maybe_bunch_0();
	mercury__mdb__declarative_oracle_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_oracle__type_ctor_info_known_exceptions_0,
		mdb__declarative_oracle__known_exceptions_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_kb_0,
		mdb__declarative_oracle__oracle_kb_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_response_1,
		mdb__declarative_oracle__oracle_response_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_state_0,
		mdb__declarative_oracle__oracle_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_oracle__type_ctor_info_trusted_object_0,
		mdb__declarative_oracle__trusted_object_0_0);
	mercury__mdb__declarative_oracle__init_debugger();
}

void mercury__mdb__declarative_oracle__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_oracle__type_ctor_info_known_exceptions_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_kb_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_response_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_oracle__type_ctor_info_trusted_object_0);
	}
}


void mercury__mdb__declarative_oracle__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__declarative_oracle__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__declarative_oracle);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__declarative_oracle__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
