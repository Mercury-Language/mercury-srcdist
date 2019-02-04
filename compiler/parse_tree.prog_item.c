/*
** Automatically generated from `prog_item.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__parse_tree__prog_item__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 130 "../library/io.int2"
#include "io.mh"

#line 27 "parse_tree.prog_item.c"
#line 136 "../library/io.int2"
#include "string.mh"

#line 31 "parse_tree.prog_item.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "parse_tree.prog_item.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "parse_tree.prog_item.c"
#line 40 "parse_tree.prog_item.c"
#include "parse_tree.prog_item.mh"

#line 43 "parse_tree.prog_item.c"
#line 44 "parse_tree.prog_item.c"
#ifndef PARSE_TREE__PROG_ITEM_DECL_GUARD
#define PARSE_TREE__PROG_ITEM_DECL_GUARD

#line 48 "parse_tree.prog_item.c"
#line 49 "parse_tree.prog_item.c"

#endif
#line 52 "parse_tree.prog_item.c"


struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Integer f4;
	MR_Integer f5;
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
static const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_item__type_ctor_info_pragma_type_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_mutable_trailed_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_mutable_thread_local_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_module_defn_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_message_list_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_warning_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_list_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_compiler_origin_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_item__type_ctor_info_item_and_context_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_goals_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_goal_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_foreign_name_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_compilation_unit_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_class_methods_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_class_method_0;
MR_decl_label2(parse_tree__prog_item__set_mutable_add_foreign_name_3_0, 3,2)
MR_decl_label8(__Unify___parse_tree__prog_item__class_method_0_0, 5,7,9,11,13,15,17,19)
MR_decl_label8(__Unify___parse_tree__prog_item__class_method_0_0, 21,23,3,28,30,32,34,36)
MR_decl_label3(__Unify___parse_tree__prog_item__class_method_0_0, 38,40,1)
MR_decl_label2(__Unify___parse_tree__prog_item__compilation_unit_0_0, 2,1)
MR_decl_label1(__Unify___parse_tree__prog_item__foreign_name_0_0, 1)
MR_decl_label8(__Unify___parse_tree__prog_item__goal_expr_0_0, 4,445,8,446,14,18,448,21)
MR_decl_label8(__Unify___parse_tree__prog_item__goal_expr_0_0, 449,27,450,33,451,39,452,45)
MR_decl_label8(__Unify___parse_tree__prog_item__goal_expr_0_0, 49,453,55,57,59,454,65,67)
MR_decl_label8(__Unify___parse_tree__prog_item__goal_expr_0_0, 69,455,75,77,79,456,85,87)
MR_decl_label8(__Unify___parse_tree__prog_item__goal_expr_0_0, 89,91,457,97,458,103,107,459)
MR_decl_label8(__Unify___parse_tree__prog_item__goal_expr_0_0, 113,115,117,119,123,460,129,131)
MR_decl_label5(__Unify___parse_tree__prog_item__goal_expr_0_0, 461,135,137,462,1)
MR_decl_label8(__Unify___parse_tree__prog_item__item_0_0, 498,6,8,10,12,499,18,20)
MR_decl_label8(__Unify___parse_tree__prog_item__item_0_0, 22,24,500,30,32,34,36,40)
MR_decl_label8(__Unify___parse_tree__prog_item__item_0_0, 501,43,45,47,49,502,55,503)
MR_decl_label8(__Unify___parse_tree__prog_item__item_0_0, 61,63,65,67,69,71,73,75)
MR_decl_label8(__Unify___parse_tree__prog_item__item_0_0, 77,79,504,85,87,89,91,93)
MR_decl_label8(__Unify___parse_tree__prog_item__item_0_0, 95,505,101,506,107,109,507,115)
MR_decl_label8(__Unify___parse_tree__prog_item__item_0_0, 117,119,121,123,508,129,131,133)
MR_decl_label8(__Unify___parse_tree__prog_item__item_0_0, 135,137,509,143,145,510,149,151)
MR_decl_label8(__Unify___parse_tree__prog_item__item_0_0, 511,155,157,159,161,165,512,1)
MR_decl_label2(__Unify___parse_tree__prog_item__item_and_context_0_0, 2,1)
MR_decl_label2(__Unify___parse_tree__prog_item__item_origin_0_0, 3,1)
MR_decl_label2(__Unify___parse_tree__prog_item__item_warning_0_0, 2,1)
MR_decl_label8(__Unify___parse_tree__prog_item__module_defn_0_0, 10,11,15,19,20,22,158,26)
MR_decl_label8(__Unify___parse_tree__prog_item__module_defn_0_0, 30,34,38,42,159,48,155,1)
MR_decl_label2(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0, 2,1)
MR_decl_label8(__Unify___parse_tree__prog_item__pragma_type_0_0, 4,6,674,10,12,14,16,18)
MR_decl_label8(__Unify___parse_tree__prog_item__pragma_type_0_0, 22,23,678,29,31,679,35,37)
MR_decl_label8(__Unify___parse_tree__prog_item__pragma_type_0_0, 39,680,43,45,47,49,51,53)
MR_decl_label8(__Unify___parse_tree__prog_item__pragma_type_0_0, 681,59,682,63,683,67,684,73)
MR_decl_label8(__Unify___parse_tree__prog_item__pragma_type_0_0, 685,79,686,83,687,87,89,688)
MR_decl_label8(__Unify___parse_tree__prog_item__pragma_type_0_0, 93,95,97,99,689,105,690,109)
MR_decl_label8(__Unify___parse_tree__prog_item__pragma_type_0_0, 691,113,692,117,693,121,694,125)
MR_decl_label8(__Unify___parse_tree__prog_item__pragma_type_0_0, 127,129,695,135,137,139,141,696)
MR_decl_label8(__Unify___parse_tree__prog_item__pragma_type_0_0, 147,697,151,698,155,699,159,700)
MR_decl_label8(__Unify___parse_tree__prog_item__pragma_type_0_0, 163,165,167,169,701,175,177,179)
MR_decl_label3(__Unify___parse_tree__prog_item__pragma_type_0_0, 181,675,1)
MR_decl_label8(__Index___parse_tree__prog_item__goal_expr_0_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(__Index___parse_tree__prog_item__goal_expr_0_0, 12,13,14,15,16,17,18,19)
MR_decl_label6(__Index___parse_tree__prog_item__goal_expr_0_0, 20,21,22,23,24,25)
MR_decl_label8(__Index___parse_tree__prog_item__item_0_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(__Index___parse_tree__prog_item__item_0_0, 12,13,14,15,16,17,18,19)
MR_decl_label8(__Index___parse_tree__prog_item__module_defn_0_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(__Index___parse_tree__prog_item__module_defn_0_0, 12,13,14,15,16,17,18,19)
MR_decl_label2(__Index___parse_tree__prog_item__module_defn_0_0, 20,21)
MR_decl_label8(__Index___parse_tree__prog_item__pragma_type_0_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(__Index___parse_tree__prog_item__pragma_type_0_0, 12,13,14,15,16,17,18,19)
MR_decl_label8(__Index___parse_tree__prog_item__pragma_type_0_0, 20,21,22,23,24,25,26,27)
MR_decl_label6(__Index___parse_tree__prog_item__pragma_type_0_0, 28,29,30,31,32,33)
MR_decl_label8(__Compare___parse_tree__prog_item__class_method_0_0, 7,11,15,19,23,27,31,35)
MR_decl_label8(__Compare___parse_tree__prog_item__class_method_0_0, 39,43,47,51,5,3,202,70)
MR_decl_label7(__Compare___parse_tree__prog_item__class_method_0_0, 74,78,82,86,90,94,199)
MR_decl_label2(__Compare___parse_tree__prog_item__compilation_unit_0_0, 3,7)
MR_decl_label2(__Compare___parse_tree__prog_item__foreign_name_0_0, 3,7)
MR_decl_label8(__Compare___parse_tree__prog_item__goal_expr_0_0, 2,3,4,5,9,11,14,19)
MR_decl_label8(__Compare___parse_tree__prog_item__goal_expr_0_0, 22,27,28,31,36,39,44,47)
MR_decl_label8(__Compare___parse_tree__prog_item__goal_expr_0_0, 52,55,60,63,68,71,75,81)
MR_decl_label8(__Compare___parse_tree__prog_item__goal_expr_0_0, 84,88,92,99,102,106,110,117)
MR_decl_label8(__Compare___parse_tree__prog_item__goal_expr_0_0, 120,124,128,135,138,142,146,150)
MR_decl_label8(__Compare___parse_tree__prog_item__goal_expr_0_0, 158,161,166,169,174,177,180,184)
MR_decl_label8(__Compare___parse_tree__prog_item__goal_expr_0_0, 188,192,200,203,208,211,215,221)
MR_decl_label4(__Compare___parse_tree__prog_item__goal_expr_0_0, 224,228,6,237)
MR_decl_label8(__Compare___parse_tree__prog_item__item_0_0, 2,3,4,5,9,12,16,20)
MR_decl_label8(__Compare___parse_tree__prog_item__item_0_0, 24,28,37,40,44,48,52,60)
MR_decl_label8(__Compare___parse_tree__prog_item__item_0_0, 63,67,71,75,83,84,87,91)
MR_decl_label8(__Compare___parse_tree__prog_item__item_0_0, 95,99,107,110,115,118,122,126)
MR_decl_label8(__Compare___parse_tree__prog_item__item_0_0, 130,134,138,142,146,150,154,158)
MR_decl_label8(__Compare___parse_tree__prog_item__item_0_0, 162,178,181,185,189,193,197,201)
MR_decl_label8(__Compare___parse_tree__prog_item__item_0_0, 211,214,219,222,226,230,237,240)
MR_decl_label8(__Compare___parse_tree__prog_item__item_0_0, 244,248,252,256,265,268,272,276)
MR_decl_label8(__Compare___parse_tree__prog_item__item_0_0, 280,284,293,296,300,306,309,313)
MR_decl_label8(__Compare___parse_tree__prog_item__item_0_0, 319,322,326,330,334,338,347,6)
MR_decl_label1(__Compare___parse_tree__prog_item__item_0_0, 353)
MR_decl_label2(__Compare___parse_tree__prog_item__item_and_context_0_0, 3,7)
MR_decl_label3(__Compare___parse_tree__prog_item__item_origin_0_0, 5,3,7)
MR_decl_label3(__Compare___parse_tree__prog_item__item_warning_0_0, 3,7,12)
MR_decl_label8(__Compare___parse_tree__prog_item__module_defn_0_0, 2,3,4,5,15,16,19,22)
MR_decl_label8(__Compare___parse_tree__prog_item__module_defn_0_0, 23,26,29,32,37,40,43,46)
MR_decl_label4(__Compare___parse_tree__prog_item__module_defn_0_0, 49,52,6,60)
MR_decl_label5(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0, 3,7,11,15,22)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 2,3,4,5,9,12,16,22)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 25,30,33,37,41,45,49,53)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 63,64,67,72,75,79,83,87)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 95,98,102,106,110,118,121,125)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 129,133,137,141,145,156,159,164)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 167,172,175,179,183,187,195,198)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 202,206,210,218,221,225,229,233)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 241,244,248,252,256,264,267,272)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 275,278,282,286,290,294,303,306)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 310,316,319,324,327,332,335,340)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 343,348,351,355,359,363,371,374)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 378,382,386,390,399,402,407,410)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 415,418,423,426,431,434,438,442)
MR_decl_label8(__Compare___parse_tree__prog_item__pragma_type_0_0, 446,450,459,462,466,470,474,478)
MR_decl_label2(__Compare___parse_tree__prog_item__pragma_type_0_0, 6,490)
MR_def_extern_entry(fn__parse_tree__prog_item__default_mutable_attributes_0_0)
MR_def_extern_entry(fn__parse_tree__prog_item__mutable_var_trailed_1_0)
MR_def_extern_entry(fn__parse_tree__prog_item__mutable_var_maybe_foreign_names_1_0)
MR_def_extern_entry(fn__parse_tree__prog_item__mutable_var_constant_1_0)
MR_def_extern_entry(fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0)
MR_def_extern_entry(fn__parse_tree__prog_item__mutable_var_thread_local_1_0)
MR_def_extern_entry(parse_tree__prog_item__set_mutable_var_trailed_3_0)
MR_def_extern_entry(parse_tree__prog_item__set_mutable_add_foreign_name_3_0)
MR_def_extern_entry(parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_0)
MR_def_extern_entry(parse_tree__prog_item__set_mutable_var_constant_3_0)
MR_def_extern_entry(parse_tree__prog_item__set_mutable_var_thread_local_3_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__class_method_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__class_method_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__class_methods_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__class_methods_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__compilation_unit_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__compilation_unit_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__foreign_name_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__foreign_name_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__goal_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__goal_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__goal_expr_0_0)
MR_def_extern_entry(__Index___parse_tree__prog_item__goal_expr_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__goal_expr_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__goals_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__goals_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_0_0)
MR_def_extern_entry(__Index___parse_tree__prog_item__item_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_and_context_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_and_context_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_compiler_origin_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_compiler_origin_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_list_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_list_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_origin_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_origin_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_warning_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_warning_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__message_list_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__message_list_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__module_defn_0_0)
MR_def_extern_entry(__Index___parse_tree__prog_item__module_defn_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__module_defn_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__mutable_thread_local_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__mutable_thread_local_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__mutable_trailed_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__mutable_trailed_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__pragma_type_0_0)
MR_def_extern_entry(__Index___parse_tree__prog_item__pragma_type_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__pragma_type_0_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0,
MR_tbmkword(0, 0),
0,
0,
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_expr_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_compiletime_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_runtime_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_arg_size_constr_0;
static const struct mercury_type_1 mercury_common_1[11] =
{
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
MR_CTOR1_ADDR(parse_tree__prog_data, trace_expr),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_compiletime)
}
},
{
{
MR_CTOR1_ADDR(parse_tree__prog_data, trace_expr),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_runtime)
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
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_item, foreign_name)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_CTOR1_ADDR(parse_tree__prog_data, generic_arg_size_info),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, arg_size_constr)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_generic_termination_info_2;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr),
MR_CTOR0_ADDR(term, context)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,1,6)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(parse_tree__prog_data, generic_termination_info, 2),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_0[] = {
	"decl_lang",
	"decl_is_local",
	"decl_decl"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_0 = {
	"pragma_foreign_decl",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_0,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_1[] = {
	"code_lang",
	"code_code"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_1 = {
	"pragma_foreign_code",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_1,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_1,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_attributes_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_var_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_pragma_var_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_pragma_var_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_foreign_code_impl_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_attributes_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_foreign_code_impl_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_attributes_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_pragma_var_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_pragma_foreign_code_impl_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_2[] = {
	"proc_attrs",
	"proc_name",
	"proc_p_or_f",
	"proc_vars",
	"proc_varset",
	"proc_instvarset",
	"proc_impl"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_2 = {
	"pragma_foreign_proc",
	7,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_2,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_2,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_3[] = {
	"imp_lang",
	"imp_module"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_3 = {
	"pragma_foreign_import_module",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_3,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_3,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_4[] = {
	"exp_language",
	"exp_predname",
	"exp_p_or_f",
	"exp_modes",
	"exp_foreign_name"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_4 = {
	"pragma_foreign_export",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_4,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_4,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_attributes_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_5[] = {
	"import_pred_name",
	"import_p_or_f",
	"import_modes",
	"import_attrs",
	"import_foreign_name"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_5 = {
	"pragma_import",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_5,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_5,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_recompilation__type_ctor_info_item_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_recompilation__type_ctor_info_item_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1recompilation__type_ctor_info_item_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_recompilation__type_ctor_info_item_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1recompilation__type_ctor_info_item_id_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_6[] = {
	"tspec_pred_name",
	"tspec_new_name",
	"tspec_arity",
	"tspec_p_or_f",
	"tspec_modes",
	"tspec_tsubst",
	"tspec_tvarset",
	"tspec_items"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_6 = {
	"pragma_type_spec",
	8,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_6,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_6,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_7[] = {
	"inline_name",
	"inline_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_7 = {
	"pragma_inline",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_7,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_7,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_8[] = {
	"noinline_name",
	"noinline_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_8 = {
	"pragma_no_inline",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_8,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_8,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_9[] = {
	"unused_p_or_f",
	"unused_name",
	"unused_arity",
	"unused_mode",
	"unused_args"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_9 = {
	"pragma_unused_args",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_9,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_9,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_exception_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_exception_status_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_exception_status_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_10[] = {
	"exceptions_p_or_f",
	"exceptions_name",
	"exceptions_arity",
	"exceptions_mode",
	"exceptions_status"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_10 = {
	"pragma_exceptions",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	10,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_10,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_10,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trailing_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trailing_status_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_trailing_status_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_11[] = {
	"trailing_info_p_or_f",
	"trailing_info_name",
	"trailing_info_arity",
	"trailing_info_mode",
	"trailing_info_status"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_11 = {
	"pragma_trailing_info",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	11,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_11,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_11,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mm_tabling_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mm_tabling_status_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mm_tabling_status_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_12[] = {
	"mm_tabling_info_p_or_f",
	"mm_tabling_info_name",
	"mm_tabling_info_arity",
	"mm_tabling_info_mode",
	"mm_tabling_info_status"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_12 = {
	"pragma_mm_tabling_info",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	12,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_12,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_12,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_13[] = {
	"obsolete_name",
	"obsolete_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_13 = {
	"pragma_obsolete",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	13,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_13,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_13,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_14[] = {
	"pragma_source_file"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_14 = {
	"pragma_source_file",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	14,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_14,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_14,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_table_attributes_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_table_attributes_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_table_attributes_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_table_attributes_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_table_attributes_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_15[] = {
	"tabled_method",
	"tabled_name",
	"tabled_arity",
	"tabled_p_or_f",
	"tabled_mode",
	"tabled_attributes"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_15 = {
	"pragma_tabled",
	6,
	0,
	MR_SECTAG_REMOTE,
	3,
	12,
	15,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_15,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_15,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_16[] = {
	"fact_table_name",
	"fact_table_arity",
	"fact_table_file"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_16 = {
	"pragma_fact_table",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	13,
	16,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_16,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_16,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_17[] = {
	"restag_type",
	"restag_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_17 = {
	"pragma_reserve_tag",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	14,
	17,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_17,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_17,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_18[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_18[] = {
	"eqv_clauses_name",
	"eqv_clauses_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_18 = {
	"pragma_promise_equivalent_clauses",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	15,
	18,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_18,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_18,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_19[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_19[] = {
	"pure_name",
	"pure_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_19 = {
	"pragma_promise_pure",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	16,
	19,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_19,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_19,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_20[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_20[] = {
	"semipure_name",
	"semipure_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_20 = {
	"pragma_promise_semipure",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	17,
	20,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_20,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_20,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_parse_tree__prog_data__ti_generic_arg_size_info_1unit__type_ctor_info_unit_0 = {
	&mercury_data_parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1,
{	(MR_TypeInfo) &mercury_data_unit__type_ctor_info_unit_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_generic_arg_size_info_1unit__type_ctor_info_unit_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__ti_generic_arg_size_info_1unit__type_ctor_info_unit_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0 = {
	&mercury_data_parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
{	(MR_TypeInfo) &mercury_data_unit__type_ctor_info_unit_0,
	(MR_TypeInfo) &mercury_data_unit__type_ctor_info_unit_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_21[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_generic_arg_size_info_1unit__type_ctor_info_unit_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_21[] = {
	"terminfo_p_or_f",
	"terminfo_name",
	"terminfo_mode",
	"terminfo_args",
	"terminfo_term"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_21 = {
	"pragma_termination_info",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	18,
	21,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_21,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_21,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_arg_size_constr_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_22[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_22[] = {
	"terminfo2_p_or_f",
	"terminfo2_name",
	"terminfo2_mode",
	"terminfo2_args",
	"terminfo2_args2",
	"terminfo2_term"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_22 = {
	"pragma_termination2_info",
	6,
	0,
	MR_SECTAG_REMOTE,
	3,
	19,
	22,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_22,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_22,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_23[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_23[] = {
	"term_name",
	"term_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_23 = {
	"pragma_terminates",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	20,
	23,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_23,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_23,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_24[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_24[] = {
	"noterm_name",
	"noterm_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_24 = {
	"pragma_does_not_terminate",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	21,
	24,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_24,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_24,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_25[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_25[] = {
	"checkterm_name",
	"checkterm_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_25 = {
	"pragma_check_termination",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	22,
	25,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_25,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_25,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_26[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_26[] = {
	"mode_check_clause_name",
	"mode_check_clause_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_26 = {
	"pragma_mode_check_clauses",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	23,
	26,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_26,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_26,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_structure_sharing_domain_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_structure_sharing_domain_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_structure_sharing_domain_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_structure_sharing_domain_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_27[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_structure_sharing_domain_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_27[] = {
	"sharing_p_or_f",
	"sharing_name",
	"sharing_mode",
	"sharing_headvars",
	"sharing_headvartypes",
	"sharing_description"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_27 = {
	"pragma_structure_sharing",
	6,
	0,
	MR_SECTAG_REMOTE,
	3,
	24,
	27,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_27,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_27,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_structure_reuse_domain_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_structure_reuse_domain_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_structure_reuse_domain_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_structure_reuse_domain_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_28[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_structure_reuse_domain_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_28[] = {
	"reuse_p_or_f",
	"reuse_name",
	"reuse_mode",
	"reuse_headvars",
	"reuse_headvartypes",
	"reuse_description"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_28 = {
	"pragma_structure_reuse",
	6,
	0,
	MR_SECTAG_REMOTE,
	3,
	25,
	28,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_28,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_28,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_pragma_type_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_pragma_type_0_1[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_1

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_pragma_type_0_2[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_2

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_pragma_type_0_3[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_3,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_4,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_5,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_6,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_7,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_8,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_9,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_10,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_11,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_12,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_13,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_14,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_15,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_16,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_17,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_18,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_19,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_20,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_21,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_22,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_23,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_24,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_25,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_26,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_27,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_28

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_pragma_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_pragma_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_pragma_type_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_pragma_type_0_2 },
	{ 26, MR_SECTAG_REMOTE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_pragma_type_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_pragma_type_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_25,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_24,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_10,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_16,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_1,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_0,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_4,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_3,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_2,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_5,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_7,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_12,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_26,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_8,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_13,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_18,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_19,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_20,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_17,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_14,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_28,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_27,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_15,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_23,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_22,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_21,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_11,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_6,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_9
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_pragma_type_0[] = {
	5,
	4,
	8,
	7,
	6,
	9,
	27,
	10,
	13,
	28,
	2,
	26,
	11,
	14,
	19,
	22,
	3,
	18,
	15,
	16,
	17,
	25,
	24,
	23,
	1,
	0,
	12,
	21,
	20 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_pragma_type_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__pragma_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__pragma_type_0_0)),
	"parse_tree.prog_item",
	"pragma_type",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_pragma_type_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_pragma_type_0 },
	29,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_pragma_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_foreign_name_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_foreign_name_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_foreign_name_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_item__type_ctor_info_foreign_name_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_foreign_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_mutable_trailed_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_mutable_thread_local_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_mutable_var_attributes_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_mutable_trailed_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_item__type_ctor_info_foreign_name_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_mutable_thread_local_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_mutable_var_attributes_0_0[] = {
	"mutable_trailed",
	"mutable_foreign_names",
	"mutable_attach_to_io_state",
	"mutable_constant",
	"mutable_thread_local"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_mutable_var_attributes_0_0 = {
	"mutable_var_attributes",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_mutable_var_attributes_0_0,
	mercury_data_parse_tree__prog_item__field_names_mutable_var_attributes_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_mutable_var_attributes_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_mutable_var_attributes_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_mutable_var_attributes_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_mutable_var_attributes_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_mutable_var_attributes_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_mutable_var_attributes_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_mutable_var_attributes_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0)),
	"parse_tree.prog_item",
	"mutable_var_attributes",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_mutable_var_attributes_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_mutable_var_attributes_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_mutable_var_attributes_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_item__enum_functor_desc_mutable_trailed_0_0 = {
	"mutable_trailed",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_item__enum_functor_desc_mutable_trailed_0_1 = {
	"mutable_untrailed",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_item__enum_value_ordered_mutable_trailed_0[] = {
	&mercury_data_parse_tree__prog_item__enum_functor_desc_mutable_trailed_0_0,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_mutable_trailed_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_item__enum_name_ordered_mutable_trailed_0[] = {
	&mercury_data_parse_tree__prog_item__enum_functor_desc_mutable_trailed_0_0,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_mutable_trailed_0_1
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_mutable_trailed_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_mutable_trailed_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__mutable_trailed_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__mutable_trailed_0_0)),
	"parse_tree.prog_item",
	"mutable_trailed",
	{ (void *)mercury_data_parse_tree__prog_item__enum_name_ordered_mutable_trailed_0 },
	{ (void *)mercury_data_parse_tree__prog_item__enum_value_ordered_mutable_trailed_0 },
	2,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_mutable_trailed_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_item__enum_functor_desc_mutable_thread_local_0_0 = {
	"mutable_thread_local",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_item__enum_functor_desc_mutable_thread_local_0_1 = {
	"mutable_not_thread_local",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_item__enum_value_ordered_mutable_thread_local_0[] = {
	&mercury_data_parse_tree__prog_item__enum_functor_desc_mutable_thread_local_0_0,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_mutable_thread_local_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_item__enum_name_ordered_mutable_thread_local_0[] = {
	&mercury_data_parse_tree__prog_item__enum_functor_desc_mutable_thread_local_0_1,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_mutable_thread_local_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_mutable_thread_local_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_mutable_thread_local_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__mutable_thread_local_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__mutable_thread_local_0_0)),
	"parse_tree.prog_item",
	"mutable_thread_local",
	{ (void *)mercury_data_parse_tree__prog_item__enum_name_ordered_mutable_thread_local_0 },
	{ (void *)mercury_data_parse_tree__prog_item__enum_value_ordered_mutable_thread_local_0 },
	2,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_mutable_thread_local_0
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_module_defn_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_0 = {
	"md_module",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_module_defn_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_module_defn_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_1 = {
	"md_end_module",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_module_defn_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_2 = {
	"md_interface",
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

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_3 = {
	"md_implementation",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_4 = {
	"md_private_interface",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_import_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_import_locn_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_module_defn_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_import_locn_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_5 = {
	"md_imported",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	5,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_module_defn_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_module_defn_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_import_locn_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_6 = {
	"md_used",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_module_defn_0_6,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_7 = {
	"md_abstract_imported",
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

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_8 = {
	"md_opt_imported",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_9 = {
	"md_transitively_imported",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_backend_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_backend_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_backend_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_backend_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_sym_name_specifier_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_sym_name_specifier_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_module_defn_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_backend_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_sym_name_specifier_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_10 = {
	"md_external",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	10,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_module_defn_0_10,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_sym_list_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_sym_list_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_module_defn_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_sym_list_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_11 = {
	"md_export",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	11,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_module_defn_0_11,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_module_defn_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_sym_list_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_12 = {
	"md_import",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	12,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_module_defn_0_12,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_module_defn_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_sym_list_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_13 = {
	"md_use",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	13,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_module_defn_0_13,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_module_defn_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_14 = {
	"md_include_module",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	14,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_module_defn_0_14,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_recompilation__type_ctor_info_version_numbers_0;
extern const MR_TypeCtorInfo_Struct mercury_data_recompilation__type_ctor_info_version_numbers_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_module_defn_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_recompilation__type_ctor_info_version_numbers_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_15 = {
	"md_version_numbers",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	15,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_module_defn_0_15,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_module_defn_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_2,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_3,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_4,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_7,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_8,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_9

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_module_defn_0_1[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_module_defn_0_2[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_1

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_module_defn_0_3[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_5,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_6,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_10,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_11,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_12,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_13,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_14,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_15

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_module_defn_0[] = {
	{ 6, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__prog_item__du_stag_ordered_module_defn_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_module_defn_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_module_defn_0_2 },
	{ 8, MR_SECTAG_REMOTE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_module_defn_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_module_defn_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_7,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_1,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_11,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_10,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_3,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_12,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_5,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_14,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_2,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_0,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_8,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_4,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_9,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_13,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_6,
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_defn_0_15
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_module_defn_0[] = {
	9,
	1,
	8,
	4,
	11,
	6,
	14,
	0,
	10,
	12,
	3,
	2,
	5,
	13,
	7,
	15 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_module_defn_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__module_defn_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__module_defn_0_0)),
	"parse_tree.prog_item",
	"module_defn",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_module_defn_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_module_defn_0 },
	16,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_module_defn_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_term_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_string_0term__ti_term_1term__type_ctor_info_generic_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_term__ti_term_1term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0term__ti_term_1term__type_ctor_info_generic_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_string_0term__ti_term_1term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_message_list_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__message_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__message_list_0_0)),
	"parse_tree.prog_item",
	"message_list",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0term__ti_term_1term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1libs__options__type_ctor_info_option_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_libs__options__type_ctor_info_option_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_warning_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1libs__options__type_ctor_info_option_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_term_1term__type_ctor_info_generic_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_warning_0_0 = {
	"item_warning",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_warning_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_warning_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_warning_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_warning_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_warning_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_warning_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_warning_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_warning_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_warning_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_warning_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_warning_0_0)),
	"parse_tree.prog_item",
	"item_warning",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_warning_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_warning_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_warning_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_origin_0_0 = {
	"user",
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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_compiler_origin_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_origin_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_compiler_origin_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_origin_0_1 = {
	"compiler",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_origin_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_origin_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_origin_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_origin_0_1[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_origin_0_1

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_origin_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_origin_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_origin_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_origin_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_origin_0_1,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_origin_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_origin_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_origin_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_origin_0_0)),
	"parse_tree.prog_item",
	"item_origin",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_origin_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_origin_0 },
	2,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_origin_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_and_context_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_and_context_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_and_context_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_list_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_list_0_0)),
	"parse_tree.prog_item",
	"item_list",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_and_context_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_0 = {
	"initialise_decl",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_1 = {
	"finalise_decl",
	1
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_2 = {
	"mutable_decl",
	2
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_3 = {
	"solver_type",
	3
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_4 = {
	"pragma_memo_attribute",
	4
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_5 = {
	"foreign_imports",
	5
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_item__enum_value_ordered_item_compiler_origin_0[] = {
	&mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_0,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_1,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_2,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_3,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_4,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_5
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_item__enum_name_ordered_item_compiler_origin_0[] = {
	&mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_1,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_5,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_0,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_2,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_4,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_item_compiler_origin_0_3
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_compiler_origin_0[] = {
	2,
	0,
	3,
	5,
	4,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_compiler_origin_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_compiler_origin_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_compiler_origin_0_0)),
	"parse_tree.prog_item",
	"item_compiler_origin",
	{ (void *)mercury_data_parse_tree__prog_item__enum_name_ordered_item_compiler_origin_0 },
	{ (void *)mercury_data_parse_tree__prog_item__enum_value_ordered_item_compiler_origin_0 },
	6,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_compiler_origin_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_and_context_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_and_context_0_0 = {
	"item_and_context",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_and_context_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_and_context_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_and_context_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_and_context_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_and_context_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_and_context_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_and_context_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_and_context_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_and_context_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_and_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_and_context_0_0)),
	"parse_tree.prog_item",
	"item_and_context",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_and_context_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_and_context_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_and_context_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0,
	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_0[] = {
	"cl_origin",
	"cl_varset",
	"cl_pred_or_func",
	"cl_predname",
	"cl_head_args",
	"cl_body"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_0 = {
	"item_clause",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_0_0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_condition_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_condition_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_condition_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_1[] = {
	"td_tvarset",
	"td_ctor_name",
	"td_ctor_args",
	"td_ctor_defn",
	"td_cond"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_1 = {
	"item_type_defn",
	5,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_1,
	mercury_data_parse_tree__prog_item__field_names_item_0_1,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_defn_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_condition_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_2[] = {
	"id_varset",
	"id_inst_name",
	"id_inst_args",
	"id_inst_defn",
	"id_cond"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_2 = {
	"item_inst_defn",
	5,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_2,
	mercury_data_parse_tree__prog_item__field_names_item_0_2,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mode_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mode_defn_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mode_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_condition_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_3[] = {
	"md_varset",
	"md_mode_name",
	"md_mode_args",
	"md_mode_defn",
	"md_cond"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_3 = {
	"item_mode_defn",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_3,
	mercury_data_parse_tree__prog_item__field_names_item_0_3,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_module_defn_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_module_defn_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_4[] = {
	"module_defn_varset",
	"module_defn_module_defn"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_4 = {
	"item_module_defn",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_4,
	mercury_data_parse_tree__prog_item__field_names_item_0_4,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_and_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_and_mode_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_type_and_mode_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_and_mode_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_purity_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraints_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_purity_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraints_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_type_and_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_condition_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_purity_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraints_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_5[] = {
	"pf_origin",
	"pf_tvarset",
	"pf_instvarset",
	"pf_existqvars",
	"pf_which",
	"pf_name",
	"pf_arg_decls",
	"pf_maybe_with_type",
	"pf_maybe_with_inst",
	"pf_maybe_detism",
	"pf_cond",
	"pf_purity",
	"pf_class_context"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_5 = {
	"item_pred_or_func",
	13,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_5,
	mercury_data_parse_tree__prog_item__field_names_item_0_5,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_condition_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_6[] = {
	"pfm_instvarset",
	"pfm_which",
	"pfm_name",
	"pfm_arg_modes",
	"pfm_maybe_with_inst",
	"pfm_maybe_detism",
	"pfm_cond"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_6 = {
	"item_pred_or_func_mode",
	7,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_6,
	mercury_data_parse_tree__prog_item__field_names_item_0_6,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_pragma_type_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_pragma_type_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_7[] = {
	"pragma_origin",
	"pragma_type"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_7 = {
	"item_pragma",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_7,
	mercury_data_parse_tree__prog_item__field_names_item_0_7,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_promise_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_promise_type_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_promise_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_8[] = {
	"prom_type",
	"prom_clause",
	"prom_varset",
	"prom_univ_quant_vars"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_8 = {
	"item_promise",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_8,
	mercury_data_parse_tree__prog_item__field_names_item_0_8,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_fundep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_fundep_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_fundep_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_fundep_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_interface_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_interface_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_fundep_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_class_interface_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_9[] = {
	"tc_constraints",
	"tc_fundeps",
	"tc_class_name",
	"tc_class_params",
	"tc_class_methods",
	"tc_varset"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_9 = {
	"item_typeclass",
	6,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_9,
	mercury_data_parse_tree__prog_item__field_names_item_0_9,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_instance_body_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_instance_body_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_instance_body_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_10[] = {
	"ci_deriving_class",
	"ci_class_name",
	"ci_types",
	"ci_method_instances",
	"ci_varset",
	"ci_module_containing_instance"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_10 = {
	"item_instance",
	6,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	10,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_10,
	mercury_data_parse_tree__prog_item__field_names_item_0_10,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_11 = {
	"item_initialise",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	11,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_11,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_12 = {
	"item_finalise",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	12,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_12,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_13[] = {
	"mut_name",
	"mut_type",
	"mut_init_value",
	"mut_inst",
	"mut_attrs",
	"mut_varset"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_13 = {
	"item_mutable",
	6,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	13,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_13,
	mercury_data_parse_tree__prog_item__field_names_item_0_13,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_warning_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_item_warning_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_warning_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_item_warning_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_0_14[] = {
	"nothing_maybe_warning"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_14 = {
	"item_nothing",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	14,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_14,
	mercury_data_parse_tree__prog_item__field_names_item_0_14,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_0_1[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_1

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_0_2[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_2

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_0_3[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_3,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_4,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_5,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_6,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_7,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_8,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_9,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_10,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_11,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_12,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_13,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_14

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_0_2 },
	{ 12, MR_SECTAG_REMOTE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_0,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_12,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_11,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_2,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_10,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_3,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_4,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_13,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_14,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_7,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_5,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_6,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_8,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_1,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_9
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_0[] = {
	0,
	13,
	3,
	5,
	6,
	10,
	11,
	9,
	12,
	14,
	4,
	2,
	1,
	7,
	8 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_0_0)),
	"parse_tree.prog_item",
	"item",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_0 },
	15,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goals_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__goals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__goals_0_0)),
	"parse_tree.prog_item",
	"goals",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_0 = {
	"conj_expr",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_1 = {
	"true_expr",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_2 = {
	"par_conj_expr",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_3 = {
	"disj_expr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_3,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_4 = {
	"fail_expr",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_5 = {
	"some_expr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	5,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_6 = {
	"all_expr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	6,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_6,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_7 = {
	"some_state_vars_expr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	7,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_7,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_8 = {
	"all_state_vars_expr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	8,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_8,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_implicit_purity_promise_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_implicit_purity_promise_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_implicit_purity_promise_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_purity_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_9 = {
	"promise_purity_expr",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	9,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_9,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_10 = {
	"promise_equivalent_solutions_expr",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	10,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_10,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_11 = {
	"promise_equivalent_solution_sets_expr",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	11,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_11,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_12 = {
	"promise_equivalent_solution_arbitrary_expr",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	12,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_12,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_compiletime_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_compiletime_0 = {
	&mercury_data_parse_tree__prog_data__type_ctor_info_trace_expr_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_trace_compiletime_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_compiletime_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_compiletime_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_runtime_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
	&mercury_data_parse_tree__prog_data__type_ctor_info_trace_expr_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_trace_runtime_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_trace_mutable_var_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_trace_mutable_var_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_compiletime_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_trace_mutable_var_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_goal_expr_0_13[] = {
	"texpr_compiletime",
	"texpr_runtime",
	"texpr_maybe_io",
	"texpr_mutable_vars",
	"texpr_goal"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_13 = {
	"trace_expr",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	13,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_13,
	mercury_data_parse_tree__prog_item__field_names_goal_expr_0_13,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_14 = {
	"implies_expr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	14,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_14,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_15 = {
	"equivalent_expr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	15,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_15,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_16 = {
	"not_expr",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	12,
	16,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_16,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_17 = {
	"if_then_else_expr",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	13,
	17,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_17,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_18[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_18 = {
	"event_expr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	14,
	18,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_18,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_19[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_purity_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_19 = {
	"call_expr",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	15,
	19,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_19,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_20[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_purity_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_20 = {
	"unify_expr",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	16,
	20,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_20,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_goal_expr_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_1,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_4

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_goal_expr_0_1[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_goal_expr_0_2[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_2

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_goal_expr_0_3[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_3,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_5,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_6,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_7,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_8,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_9,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_10,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_11,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_12,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_13,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_14,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_15,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_16,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_17,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_18,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_19,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_20

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_goal_expr_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__prog_item__du_stag_ordered_goal_expr_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_goal_expr_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_goal_expr_0_2 },
	{ 17, MR_SECTAG_REMOTE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_goal_expr_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_goal_expr_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_6,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_8,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_19,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_0,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_3,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_15,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_18,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_4,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_17,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_14,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_16,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_2,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_12,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_11,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_10,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_9,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_5,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_7,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_13,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_1,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_20
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_goal_expr_0[] = {
	3,
	19,
	11,
	4,
	7,
	16,
	0,
	17,
	1,
	15,
	14,
	13,
	12,
	18,
	9,
	5,
	10,
	8,
	6,
	2,
	20 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__goal_expr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__goal_expr_0_0)),
	"parse_tree.prog_item",
	"goal_expr",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_goal_expr_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_goal_expr_0 },
	21,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_goal_expr_0
};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__goal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__goal_0_0)),
	"parse_tree.prog_item",
	"goal",
	{ 0 },
	{ (void *)&mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_foreign_name_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_foreign_name_0_0[] = {
	"foreign_name_lang",
	"foreign_name_name"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_foreign_name_0_0 = {
	"foreign_name",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_foreign_name_0_0,
	mercury_data_parse_tree__prog_item__field_names_foreign_name_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_foreign_name_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_foreign_name_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_foreign_name_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_foreign_name_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_foreign_name_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_foreign_name_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_foreign_name_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_foreign_name_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__foreign_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__foreign_name_0_0)),
	"parse_tree.prog_item",
	"foreign_name",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_foreign_name_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_foreign_name_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_foreign_name_0
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_compilation_unit_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_and_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_compilation_unit_0_0 = {
	"unit_module",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_compilation_unit_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_compilation_unit_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_compilation_unit_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_compilation_unit_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_compilation_unit_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_compilation_unit_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_compilation_unit_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_compilation_unit_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_compilation_unit_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__compilation_unit_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__compilation_unit_0_0)),
	"parse_tree.prog_item",
	"compilation_unit",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_compilation_unit_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_compilation_unit_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_compilation_unit_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_class_method_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_class_method_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_class_method_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_class_methods_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__class_methods_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__class_methods_0_0)),
	"parse_tree.prog_item",
	"class_methods",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_class_method_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_class_method_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_type_and_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_condition_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_purity_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraints_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_class_method_0_0 = {
	"method_pred_or_func",
	13,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_class_method_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_class_method_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_condition_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_class_method_0_1 = {
	"method_pred_or_func_mode",
	8,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_class_method_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_class_method_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_class_method_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_class_method_0_1[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_class_method_0_1

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_class_method_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_class_method_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_class_method_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_class_method_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_class_method_0_0,
	&mercury_data_parse_tree__prog_item__du_functor_desc_class_method_0_1
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_class_method_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_class_method_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__class_method_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__class_method_0_0)),
	"parse_tree.prog_item",
	"class_method",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_class_method_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_class_method_0 },
	2,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_class_method_0
};


MR_BEGIN_MODULE(parse_tree__prog_item_module0)
	MR_init_entry1(fn__parse_tree__prog_item__default_mutable_attributes_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_item__default_mutable_attributes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module1)
	MR_init_entry1(fn__parse_tree__prog_item__mutable_var_trailed_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_item__mutable_var_trailed_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module2)
	MR_init_entry1(fn__parse_tree__prog_item__mutable_var_maybe_foreign_names_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_item__mutable_var_maybe_foreign_names_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module3)
	MR_init_entry1(fn__parse_tree__prog_item__mutable_var_constant_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_item__mutable_var_constant_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module4)
	MR_init_entry1(fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module5)
	MR_init_entry1(fn__parse_tree__prog_item__mutable_var_thread_local_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_item__mutable_var_thread_local_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module6)
	MR_init_entry1(parse_tree__prog_item__set_mutable_var_trailed_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_item__set_mutable_var_trailed_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module7)
	MR_init_entry1(parse_tree__prog_item__set_mutable_add_foreign_name_3_0);
	MR_init_label2(parse_tree__prog_item__set_mutable_add_foreign_name_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_item__set_mutable_add_foreign_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_item__set_mutable_add_foreign_name_3_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_r6 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_ctfield(0, MR_tempr3, 4);
	MR_r4 = MR_ctfield(0, MR_tempr3, 3);
	MR_r5 = MR_ctfield(0, MR_tempr3, 2);
	MR_GOTO_LAB(parse_tree__prog_item__set_mutable_add_foreign_name_3_0_i2);
	}
MR_def_label(parse_tree__prog_item__set_mutable_add_foreign_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_ctfield(0, MR_tempr3, 4);
	MR_r4 = MR_ctfield(0, MR_tempr3, 3);
	MR_r5 = MR_ctfield(0, MR_tempr3, 2);
	}
MR_def_label(parse_tree__prog_item__set_mutable_add_foreign_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module8)
	MR_init_entry1(parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module9)
	MR_init_entry1(parse_tree__prog_item__set_mutable_var_constant_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_item__set_mutable_var_constant_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module10)
	MR_init_entry1(parse_tree__prog_item__set_mutable_var_thread_local_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_item__set_mutable_var_thread_local_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__condition_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__prog_constraints_0_0);
MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module11)
	MR_init_entry1(__Unify___parse_tree__prog_item__class_method_0_0);
	MR_init_label8(__Unify___parse_tree__prog_item__class_method_0_0,5,7,9,11,13,15,17,19)
	MR_init_label8(__Unify___parse_tree__prog_item__class_method_0_0,21,23,3,28,30,32,34,36)
	MR_init_label3(__Unify___parse_tree__prog_item__class_method_0_0,38,40,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__class_method_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(6) = MR_ctfield(0, MR_r1, 6);
	MR_sv(7) = MR_ctfield(0, MR_r1, 7);
	MR_sv(8) = MR_ctfield(0, MR_r1, 8);
	MR_sv(9) = MR_ctfield(0, MR_r1, 9);
	MR_sv(10) = MR_ctfield(0, MR_r1, 10);
	MR_sv(11) = MR_ctfield(0, MR_r1, 11);
	MR_sv(12) = MR_ctfield(0, MR_r1, 12);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(13) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(14) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(15) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(16) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(17) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(18) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(19) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(20) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(21) = MR_ctfield(0, MR_tempr3, 9);
	MR_sv(22) = MR_ctfield(0, MR_tempr3, 10);
	MR_sv(23) = MR_ctfield(0, MR_tempr3, 11);
	MR_sv(24) = MR_ctfield(0, MR_tempr3, 12);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i5);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i7);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i9);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(15))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i11);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i13);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i15);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i17);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i19);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__condition_0_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i21);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	if ((MR_sv(10) != MR_sv(22))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__prog_constraints_0_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i23);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(24);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 2);
	MR_sv(3) = MR_ctfield(1, MR_r1, 3);
	MR_sv(4) = MR_ctfield(1, MR_r1, 4);
	MR_sv(5) = MR_ctfield(1, MR_r1, 5);
	MR_sv(6) = MR_ctfield(1, MR_r1, 6);
	MR_sv(7) = MR_ctfield(1, MR_r1, 7);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(8) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(9) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(10) = MR_ctfield(1, MR_tempr3, 3);
	MR_sv(11) = MR_ctfield(1, MR_tempr3, 4);
	MR_sv(12) = MR_ctfield(1, MR_tempr3, 5);
	MR_sv(13) = MR_ctfield(1, MR_tempr3, 6);
	MR_sv(14) = MR_ctfield(1, MR_tempr3, 7);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i28);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i30);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i32);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i34);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i36);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i38);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__condition_0_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i40);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(__Compare___parse_tree__prog_data__condition_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__prog_constraints_0_0);
MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module12)
	MR_init_entry1(__Compare___parse_tree__prog_item__class_method_0_0);
	MR_init_label8(__Compare___parse_tree__prog_item__class_method_0_0,7,11,15,19,23,27,31,35)
	MR_init_label8(__Compare___parse_tree__prog_item__class_method_0_0,39,43,47,51,5,3,202,70)
	MR_init_label7(__Compare___parse_tree__prog_item__class_method_0_0,74,78,82,86,90,94,199)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__class_method_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i5);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	MR_sv(24) = MR_ctfield(0, MR_r1, 1);
	MR_sv(23) = MR_ctfield(0, MR_r1, 2);
	MR_sv(22) = MR_ctfield(0, MR_r1, 3);
	MR_sv(21) = MR_ctfield(0, MR_r1, 4);
	MR_sv(20) = MR_ctfield(0, MR_r1, 5);
	MR_sv(19) = MR_ctfield(0, MR_r1, 6);
	MR_sv(18) = MR_ctfield(0, MR_r1, 7);
	MR_sv(17) = MR_ctfield(0, MR_r1, 8);
	MR_sv(16) = MR_ctfield(0, MR_r1, 9);
	MR_sv(15) = MR_ctfield(0, MR_r1, 10);
	MR_sv(14) = MR_ctfield(0, MR_r1, 11);
	MR_sv(13) = MR_ctfield(0, MR_r1, 12);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(12) = MR_ctfield(0, MR_tempr3, 12);
	MR_sv(11) = MR_ctfield(0, MR_tempr3, 11);
	MR_sv(10) = MR_ctfield(0, MR_tempr3, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr3, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i7);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i11);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i15);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i19);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i23);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i27);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i31);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i35);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i39);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__condition_0_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i43);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i47);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__prog_constraints_0_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i51);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i202);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	MR_sv(14) = MR_ctfield(1, MR_r1, 1);
	MR_sv(13) = MR_ctfield(1, MR_r1, 2);
	MR_sv(12) = MR_ctfield(1, MR_r1, 3);
	MR_sv(11) = MR_ctfield(1, MR_r1, 4);
	MR_sv(10) = MR_ctfield(1, MR_r1, 5);
	MR_sv(9) = MR_ctfield(1, MR_r1, 6);
	MR_sv(8) = MR_ctfield(1, MR_r1, 7);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(7) = MR_ctfield(1, MR_tempr3, 7);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 6);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 5);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 4);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 3);
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i70);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i74);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i78);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i82);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i86);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i90);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__condition_0_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i94);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i199);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module13)
	MR_init_entry1(__Unify___parse_tree__prog_item__class_methods_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__class_methods_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, class_method);
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


MR_BEGIN_MODULE(parse_tree__prog_item_module14)
	MR_init_entry1(__Compare___parse_tree__prog_item__class_methods_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__class_methods_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, class_method);
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


MR_BEGIN_MODULE(parse_tree__prog_item_module15)
	MR_init_entry1(__Unify___parse_tree__prog_item__compilation_unit_0_0);
	MR_init_label2(__Unify___parse_tree__prog_item__compilation_unit_0_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__compilation_unit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__compilation_unit_0_0_i2);
MR_def_label(__Unify___parse_tree__prog_item__compilation_unit_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__compilation_unit_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item_and_context);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_item__compilation_unit_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module16)
	MR_init_entry1(__Compare___parse_tree__prog_item__compilation_unit_0_0);
	MR_init_label2(__Compare___parse_tree__prog_item__compilation_unit_0_0,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__compilation_unit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__compilation_unit_0_0_i3);
MR_def_label(__Compare___parse_tree__prog_item__compilation_unit_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__compilation_unit_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item_and_context);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__compilation_unit_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module17)
	MR_init_entry1(__Unify___parse_tree__prog_item__foreign_name_0_0);
	MR_init_label1(__Unify___parse_tree__prog_item__foreign_name_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__foreign_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__foreign_name_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_item__foreign_name_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module18)
	MR_init_entry1(__Compare___parse_tree__prog_item__foreign_name_0_0);
	MR_init_label2(__Compare___parse_tree__prog_item__foreign_name_0_0,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__foreign_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__foreign_name_0_0_i3);
MR_def_label(__Compare___parse_tree__prog_item__foreign_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__foreign_name_0_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__foreign_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___pair__pair_2_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module19)
	MR_init_entry1(__Unify___parse_tree__prog_item__goal_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___pair__pair_2_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module20)
	MR_init_entry1(__Compare___parse_tree__prog_item__goal_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__term_1_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module21)
	MR_init_entry1(__Unify___parse_tree__prog_item__goal_expr_0_0);
	MR_init_label8(__Unify___parse_tree__prog_item__goal_expr_0_0,4,445,8,446,14,18,448,21)
	MR_init_label8(__Unify___parse_tree__prog_item__goal_expr_0_0,449,27,450,33,451,39,452,45)
	MR_init_label8(__Unify___parse_tree__prog_item__goal_expr_0_0,49,453,55,57,59,454,65,67)
	MR_init_label8(__Unify___parse_tree__prog_item__goal_expr_0_0,69,455,75,77,79,456,85,87)
	MR_init_label8(__Unify___parse_tree__prog_item__goal_expr_0_0,89,91,457,97,458,103,107,459)
	MR_init_label8(__Unify___parse_tree__prog_item__goal_expr_0_0,113,115,117,119,123,460,129,131)
	MR_init_label5(__Unify___parse_tree__prog_item__goal_expr_0_0,461,135,137,462,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__goal_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i4) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i445) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i446) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i18));
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,445)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,446)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr3, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_ctfield(2, MR_tempr1, 0);
	MR_r4 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i14);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i448) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i449) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i450) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i451) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i452) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i49) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i453) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i454) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i455) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i456) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i457) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i458) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i107) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i459) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i123) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i460) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i461));
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,448)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i21);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,449)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i27);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,450)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i33);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,451)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i39);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,452)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i45);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i462);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i462);
	}
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i462);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r4 = MR_ctfield(3, MR_tempr2, 3);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,453)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i55);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i57);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i59);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,454)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i65);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i67);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i69);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,455)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i75);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i77);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i79);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,456)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 5);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i85);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i87);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i89);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i91);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,457)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i97);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,458)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,11)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i103);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,12)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i462);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_ctfield(3, MR_tempr2, 1);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,459)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,13)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 5);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i113);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i115);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i117);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i119);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,14)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i462);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i462);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(3, MR_tempr2, 2);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,460)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,15)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i129);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i131);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(10);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,461)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,16)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__term_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i135);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__term_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i137);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(10);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,462)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module22)
	MR_init_entry1(__Index___parse_tree__prog_item__goal_expr_0_0);
	MR_init_label8(__Index___parse_tree__prog_item__goal_expr_0_0,4,5,6,7,8,9,10,11)
	MR_init_label8(__Index___parse_tree__prog_item__goal_expr_0_0,12,13,14,15,16,17,18,19)
	MR_init_label6(__Index___parse_tree__prog_item__goal_expr_0_0,20,21,22,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___parse_tree__prog_item__goal_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i8));
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(__Index___parse_tree__prog_item__goal_expr_0_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i23) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i25));
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__term_1_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module23)
	MR_init_entry1(__Compare___parse_tree__prog_item__goal_expr_0_0);
	MR_init_label8(__Compare___parse_tree__prog_item__goal_expr_0_0,2,3,4,5,9,11,14,19)
	MR_init_label8(__Compare___parse_tree__prog_item__goal_expr_0_0,22,27,28,31,36,39,44,47)
	MR_init_label8(__Compare___parse_tree__prog_item__goal_expr_0_0,52,55,60,63,68,71,75,81)
	MR_init_label8(__Compare___parse_tree__prog_item__goal_expr_0_0,84,88,92,99,102,106,110,117)
	MR_init_label8(__Compare___parse_tree__prog_item__goal_expr_0_0,120,124,128,135,138,142,146,150)
	MR_init_label8(__Compare___parse_tree__prog_item__goal_expr_0_0,158,161,166,169,174,177,180,184)
	MR_init_label8(__Compare___parse_tree__prog_item__goal_expr_0_0,188,192,200,203,208,211,215,221)
	MR_init_label4(__Compare___parse_tree__prog_item__goal_expr_0_0,224,228,6,237)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__goal_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__goal_expr_0_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__goal_expr_0_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i3);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i5);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i9) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i11) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i27));
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r4;
	MR_tempr2 = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_ctfield(1, MR_tempr5, 0);
	MR_r4 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i14);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(2, MR_tempr4, 1);
	MR_tempr5 = MR_r4;
	MR_tempr2 = MR_ctfield(2, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_ctfield(2, MR_tempr5, 0);
	MR_r4 = MR_ctfield(2, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i22);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i28) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i36) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i44) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i52) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i60) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i68) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i99) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i135) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i166) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i174) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i177) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i208) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i221));
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_ctfield(3, MR_tempr5, 1);
	MR_r4 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i31);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i39);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i47);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i55);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i63);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i71);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i75);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i84);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i88);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i92);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i102);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i106);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i110);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i120);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i124);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i128);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i138);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i142);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i146);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i150);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_ctfield(3, MR_tempr5, 1);
	MR_r4 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i161);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_ctfield(3, MR_tempr5, 1);
	MR_r4 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i169);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_ctfield(3, MR_r4, 1);
	MR_r4 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i180);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i184);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i188);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i192);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i203);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i211);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i215);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___term__term_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i224);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___term__term_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i228);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i237);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module24)
	MR_init_entry1(__Unify___parse_tree__prog_item__goals_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
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


MR_BEGIN_MODULE(parse_tree__prog_item_module25)
	MR_init_entry1(__Compare___parse_tree__prog_item__goals_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
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

MR_decl_entry(__Unify___parse_tree__prog_data__type_defn_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__inst_defn_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mode_defn_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__class_interface_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__instance_body_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module26)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_0_0);
	MR_init_label8(__Unify___parse_tree__prog_item__item_0_0,498,6,8,10,12,499,18,20)
	MR_init_label8(__Unify___parse_tree__prog_item__item_0_0,22,24,500,30,32,34,36,40)
	MR_init_label8(__Unify___parse_tree__prog_item__item_0_0,501,43,45,47,49,502,55,503)
	MR_init_label8(__Unify___parse_tree__prog_item__item_0_0,61,63,65,67,69,71,73,75)
	MR_init_label8(__Unify___parse_tree__prog_item__item_0_0,77,79,504,85,87,89,91,93)
	MR_init_label8(__Unify___parse_tree__prog_item__item_0_0,95,505,101,506,107,109,507,115)
	MR_init_label8(__Unify___parse_tree__prog_item__item_0_0,117,119,121,123,508,129,131,133)
	MR_init_label8(__Unify___parse_tree__prog_item__item_0_0,135,137,509,143,145,510,149,151)
	MR_init_label8(__Unify___parse_tree__prog_item__item_0_0,511,155,157,159,161,165,512,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i498) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i499) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i500) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i40));
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,498)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 5);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__item_origin_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i10);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i12);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,499)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 2);
	MR_sv(3) = MR_ctfield(1, MR_r1, 3);
	MR_sv(4) = MR_ctfield(1, MR_r1, 4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(7) = MR_ctfield(1, MR_tempr3, 3);
	MR_sv(8) = MR_ctfield(1, MR_tempr3, 4);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i18);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i20);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i22);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__type_defn_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i24);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__condition_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,500)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	MR_sv(2) = MR_ctfield(2, MR_r1, 2);
	MR_sv(3) = MR_ctfield(2, MR_r1, 3);
	MR_sv(4) = MR_ctfield(2, MR_r1, 4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(5) = MR_ctfield(2, MR_tempr3, 1);
	MR_sv(6) = MR_ctfield(2, MR_tempr3, 2);
	MR_sv(7) = MR_ctfield(2, MR_tempr3, 3);
	MR_sv(8) = MR_ctfield(2, MR_tempr3, 4);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	MR_r3 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i30);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i32);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i34);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__inst_defn_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i36);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__condition_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i501) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i502) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i503) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i504) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i505) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i506) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i507) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i508) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i509) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i510) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i511) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i165));
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,501)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 5);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i43);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i45);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i47);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mode_defn_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i49);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__condition_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,502)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i55);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__module_defn_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,503)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	MR_sv(5) = MR_ctfield(3, MR_r1, 6);
	MR_sv(6) = MR_ctfield(3, MR_r1, 7);
	MR_sv(7) = MR_ctfield(3, MR_r1, 8);
	MR_sv(8) = MR_ctfield(3, MR_r1, 9);
	MR_sv(9) = MR_ctfield(3, MR_r1, 10);
	MR_sv(10) = MR_ctfield(3, MR_r1, 11);
	MR_sv(11) = MR_ctfield(3, MR_r1, 12);
	MR_sv(12) = MR_ctfield(3, MR_r1, 13);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(13) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(14) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(15) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(16) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(17) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(18) = MR_ctfield(3, MR_tempr1, 7);
	MR_sv(19) = MR_ctfield(3, MR_tempr1, 8);
	MR_sv(20) = MR_ctfield(3, MR_tempr1, 9);
	MR_sv(21) = MR_ctfield(3, MR_tempr1, 10);
	MR_sv(22) = MR_ctfield(3, MR_tempr1, 11);
	MR_sv(23) = MR_ctfield(3, MR_tempr1, 12);
	MR_sv(24) = MR_ctfield(3, MR_tempr1, 13);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__item_origin_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i61);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i63);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i65);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i67);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(16))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i69);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i71);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i73);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i75);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i77);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__condition_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i79);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	if ((MR_sv(11) != MR_sv(23))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(24);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__prog_constraints_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,504)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	MR_sv(5) = MR_ctfield(3, MR_r1, 6);
	MR_sv(6) = MR_ctfield(3, MR_r1, 7);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(9) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(10) = MR_ctfield(3, MR_tempr3, 5);
	MR_sv(11) = MR_ctfield(3, MR_tempr3, 6);
	MR_sv(12) = MR_ctfield(3, MR_tempr3, 7);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i85);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i87);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i89);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i91);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i93);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i95);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__condition_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,505)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__item_origin_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i101);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__pragma_type_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,506)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 4);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__item_0_0_i107);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i109);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,507)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	MR_sv(5) = MR_ctfield(3, MR_r1, 6);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(9) = MR_ctfield(3, MR_tempr3, 5);
	MR_sv(10) = MR_ctfield(3, MR_tempr3, 6);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i115);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_fundep);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i117);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i119);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i121);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__class_interface_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i123);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___varset__varset_1_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,508)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	MR_sv(5) = MR_ctfield(3, MR_r1, 6);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(9) = MR_ctfield(3, MR_tempr3, 5);
	MR_sv(10) = MR_ctfield(3, MR_tempr3, 6);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i129);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i131);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i133);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__instance_body_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i135);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i137);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,509)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__item_origin_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i143);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i145);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(25);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,510)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__item_origin_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i149);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i151);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(25);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,511)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_sv(3) = MR_ctfield(3, MR_r1, 5);
	MR_sv(4) = MR_ctfield(3, MR_r1, 6);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 6);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i155);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___term__term_1_0,
		__Unify___parse_tree__prog_item__item_0_0_i157);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i159);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0,
		__Unify___parse_tree__prog_item__item_0_0_i161);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___varset__varset_1_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,11)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i512);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item_warning);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,512)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module27)
	MR_init_entry1(__Index___parse_tree__prog_item__item_0_0);
	MR_init_label8(__Index___parse_tree__prog_item__item_0_0,4,5,6,7,8,9,10,11)
	MR_init_label8(__Index___parse_tree__prog_item__item_0_0,12,13,14,15,16,17,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___parse_tree__prog_item__item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i7));
MR_def_label(__Index___parse_tree__prog_item__item_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i19));
MR_def_label(__Index___parse_tree__prog_item__item_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__type_defn_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__inst_defn_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mode_defn_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__class_interface_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__instance_body_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module28)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_0_0);
	MR_init_label8(__Compare___parse_tree__prog_item__item_0_0,2,3,4,5,9,12,16,20)
	MR_init_label8(__Compare___parse_tree__prog_item__item_0_0,24,28,37,40,44,48,52,60)
	MR_init_label8(__Compare___parse_tree__prog_item__item_0_0,63,67,71,75,83,84,87,91)
	MR_init_label8(__Compare___parse_tree__prog_item__item_0_0,95,99,107,110,115,118,122,126)
	MR_init_label8(__Compare___parse_tree__prog_item__item_0_0,130,134,138,142,146,150,154,158)
	MR_init_label8(__Compare___parse_tree__prog_item__item_0_0,162,178,181,185,189,193,197,201)
	MR_init_label8(__Compare___parse_tree__prog_item__item_0_0,211,214,219,222,226,230,237,240)
	MR_init_label8(__Compare___parse_tree__prog_item__item_0_0,244,248,252,256,265,268,272,276)
	MR_init_label8(__Compare___parse_tree__prog_item__item_0_0,280,284,293,296,300,306,309,313)
	MR_init_label8(__Compare___parse_tree__prog_item__item_0_0,319,322,326,330,334,338,347,6)
	MR_init_label1(__Compare___parse_tree__prog_item__item_0_0,353)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__item_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__item_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i3);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i5);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i9) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i60) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i83));
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(10) = MR_ctfield(0, MR_tempr4, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr4, 1);
	MR_tempr5 = MR_r3;
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr5, 0);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__item_origin_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i12);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i16);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__item_0_0_i20);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i24);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i28);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(1, MR_tempr4, 4);
	MR_sv(7) = MR_ctfield(1, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(1, MR_tempr4, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 4);
	MR_sv(3) = MR_ctfield(1, MR_tempr5, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_ctfield(1, MR_tempr5, 0);
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i40);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i44);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i48);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__type_defn_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i52);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__condition_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(2, MR_tempr4, 4);
	MR_sv(7) = MR_ctfield(2, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(2, MR_tempr4, 2);
	MR_sv(5) = MR_ctfield(2, MR_tempr4, 1);
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_ctfield(2, MR_tempr5, 4);
	MR_sv(3) = MR_ctfield(2, MR_tempr5, 3);
	MR_tempr1 = MR_ctfield(2, MR_tempr5, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_ctfield(2, MR_tempr5, 0);
	MR_r3 = MR_ctfield(2, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i63);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i67);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i71);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__inst_defn_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i75);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__condition_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i84) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i107) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i115) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i178) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i211) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i237) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i265) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i293) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i306) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i319) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i347));
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i87);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i91);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i95);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mode_defn_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i99);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__condition_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i110);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__module_defn_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(24) = MR_ctfield(3, MR_tempr4, 13);
	MR_sv(23) = MR_ctfield(3, MR_tempr4, 12);
	MR_sv(22) = MR_ctfield(3, MR_tempr4, 11);
	MR_sv(21) = MR_ctfield(3, MR_tempr4, 10);
	MR_sv(20) = MR_ctfield(3, MR_tempr4, 9);
	MR_sv(19) = MR_ctfield(3, MR_tempr4, 8);
	MR_sv(18) = MR_ctfield(3, MR_tempr4, 7);
	MR_sv(17) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(16) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(15) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(14) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(13) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(12) = MR_ctfield(3, MR_tempr5, 13);
	MR_sv(11) = MR_ctfield(3, MR_tempr5, 12);
	MR_sv(10) = MR_ctfield(3, MR_tempr5, 11);
	MR_sv(9) = MR_ctfield(3, MR_tempr5, 10);
	MR_sv(8) = MR_ctfield(3, MR_tempr5, 9);
	MR_sv(7) = MR_ctfield(3, MR_tempr5, 8);
	MR_sv(6) = MR_ctfield(3, MR_tempr5, 7);
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__item_origin_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i118);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i122);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i126);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i130);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__item_0_0_i134);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i138);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i142);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i146);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i150);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i154);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__condition_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i158);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__item_0_0_i162);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(24);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__prog_constraints_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(12) = MR_ctfield(3, MR_tempr4, 7);
	MR_sv(11) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(6) = MR_ctfield(3, MR_tempr5, 7);
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i181);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i185);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i189);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i193);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i197);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i201);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__condition_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__item_origin_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i214);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__pragma_type_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__item_0_0_i222);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__item_0_0_i226);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i230);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i240);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_fundep);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i244);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i248);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i252);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__class_interface_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i256);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___varset__varset_1_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i268);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i272);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i276);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__instance_body_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i280);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i284);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__item_origin_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i296);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i300);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__item_origin_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i309);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i313);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,319)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_item__item_0_0_i322);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i326);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___term__term_1_0,
		__Compare___parse_tree__prog_item__item_0_0_i330);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i334);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i338);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i353);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___varset__varset_1_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item_warning);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module29)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_and_context_0_0);
	MR_init_label2(__Unify___parse_tree__prog_item__item_and_context_0_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_and_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__item_0_0,
		__Unify___parse_tree__prog_item__item_and_context_0_0_i2);
MR_def_label(__Unify___parse_tree__prog_item__item_and_context_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_and_context_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_and_context_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module30)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_and_context_0_0);
	MR_init_label2(__Compare___parse_tree__prog_item__item_and_context_0_0,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_and_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__item_0_0,
		__Compare___parse_tree__prog_item__item_and_context_0_0_i3);
MR_def_label(__Compare___parse_tree__prog_item__item_and_context_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_and_context_0_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_and_context_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module31)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_compiler_origin_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_compiler_origin_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module32)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_compiler_origin_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_compiler_origin_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module33)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item_and_context);
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


MR_BEGIN_MODULE(parse_tree__prog_item_module34)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item_and_context);
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


MR_BEGIN_MODULE(parse_tree__prog_item_module35)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_origin_0_0);
	MR_init_label2(__Unify___parse_tree__prog_item__item_origin_0_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_origin_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_origin_0_0_i3);
	}
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_origin_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_origin_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_item__item_origin_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module36)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_origin_0_0);
	MR_init_label3(__Compare___parse_tree__prog_item__item_origin_0_0,5,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_origin_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_origin_0_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_origin_0_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_origin_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_origin_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_origin_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_origin_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module37)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_warning_0_0);
	MR_init_label2(__Unify___parse_tree__prog_item__item_warning_0_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_warning_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_warning_0_0_i2);
MR_def_label(__Unify___parse_tree__prog_item__item_warning_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_warning_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(1), (char *)MR_sv(3)) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_warning_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___term__term_1_0);
MR_def_label(__Unify___parse_tree__prog_item__item_warning_0_0,1)
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


MR_BEGIN_MODULE(parse_tree__prog_item_module38)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_warning_0_0);
	MR_init_label3(__Compare___parse_tree__prog_item__item_warning_0_0,3,7,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_warning_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_warning_0_0_i3);
MR_def_label(__Compare___parse_tree__prog_item__item_warning_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_warning_0_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_item__item_warning_0_0_i7);
MR_def_label(__Compare___parse_tree__prog_item__item_warning_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_warning_0_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___term__term_1_0);
MR_def_label(__Compare___parse_tree__prog_item__item_warning_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module39)
	MR_init_entry1(__Unify___parse_tree__prog_item__message_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__message_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
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


MR_BEGIN_MODULE(parse_tree__prog_item_module40)
	MR_init_entry1(__Compare___parse_tree__prog_item__message_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__message_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
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

MR_decl_entry(__Unify___parse_tree__prog_data__sym_name_specifier_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__sym_list_0_0);
MR_decl_entry(__Unify___recompilation__version_numbers_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module41)
	MR_init_entry1(__Unify___parse_tree__prog_item__module_defn_0_0);
	MR_init_label8(__Unify___parse_tree__prog_item__module_defn_0_0,10,11,15,19,20,22,158,26)
	MR_init_label8(__Unify___parse_tree__prog_item__module_defn_0_0,30,34,38,42,159,48,155,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__module_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i19));
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i155);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i155);
	}
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i20) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i22) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i158) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i30) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i34) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i38) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i42) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i159));
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i155);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i155);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, backend);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__module_defn_0_0_i26);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__sym_name_specifier_0_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i155);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__sym_list_0_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i155);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__sym_list_0_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i155);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__sym_list_0_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i155);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__module_defn_0_0_i48);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___recompilation__version_numbers_0_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module42)
	MR_init_entry1(__Index___parse_tree__prog_item__module_defn_0_0);
	MR_init_label8(__Index___parse_tree__prog_item__module_defn_0_0,4,5,6,7,8,9,10,11)
	MR_init_label8(__Index___parse_tree__prog_item__module_defn_0_0,12,13,14,15,16,17,18,19)
	MR_init_label2(__Index___parse_tree__prog_item__module_defn_0_0,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___parse_tree__prog_item__module_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i13));
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i10));
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i21));
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__sym_name_specifier_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__sym_list_0_0);
MR_decl_entry(__Compare___recompilation__version_numbers_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module43)
	MR_init_entry1(__Compare___parse_tree__prog_item__module_defn_0_0);
	MR_init_label8(__Compare___parse_tree__prog_item__module_defn_0_0,2,3,4,5,15,16,19,22)
	MR_init_label8(__Compare___parse_tree__prog_item__module_defn_0_0,23,26,29,32,37,40,43,46)
	MR_init_label4(__Compare___parse_tree__prog_item__module_defn_0_0,49,52,6,60)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__module_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__module_defn_0_0,
		__Compare___parse_tree__prog_item__module_defn_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__module_defn_0_0,
		__Compare___parse_tree__prog_item__module_defn_0_0_i3);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i5);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i15) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i16) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i22));
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i6);
	}
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i6);
	}
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i23) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i26) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i29) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i40) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i43) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i49));
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i6);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i6);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(3, MR_r2, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, backend);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__module_defn_0_0_i32);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i60);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__sym_name_specifier_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i6);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__sym_list_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i6);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__sym_list_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i6);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__sym_list_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__module_defn_0_0_i52);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i60);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___recompilation__version_numbers_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module44)
	MR_init_entry1(__Unify___parse_tree__prog_item__mutable_thread_local_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__mutable_thread_local_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module45)
	MR_init_entry1(__Compare___parse_tree__prog_item__mutable_thread_local_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__mutable_thread_local_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module46)
	MR_init_entry1(__Unify___parse_tree__prog_item__mutable_trailed_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__mutable_trailed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module47)
	MR_init_entry1(__Compare___parse_tree__prog_item__mutable_trailed_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__mutable_trailed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module48)
	MR_init_entry1(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0);
	MR_init_label2(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__mutable_var_attributes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 2);
	MR_sv(2) = MR_ctfield(0, MR_r1, 3);
	MR_sv(3) = MR_ctfield(0, MR_r1, 4);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 4);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__mutable_var_attributes_0_0_i2);
MR_def_label(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module49)
	MR_init_entry1(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0);
	MR_init_label5(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,3,7,11,15,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__mutable_var_attributes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i3);
MR_def_label(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i22);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i7);
MR_def_label(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i22);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i11);
MR_def_label(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i22);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i15);
MR_def_label(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i22);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__pragma_foreign_code_impl_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(__Unify___parse_tree__prog_data__exception_status_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__eval_method_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module50)
	MR_init_entry1(__Unify___parse_tree__prog_item__pragma_type_0_0);
	MR_init_label8(__Unify___parse_tree__prog_item__pragma_type_0_0,4,6,674,10,12,14,16,18)
	MR_init_label8(__Unify___parse_tree__prog_item__pragma_type_0_0,22,23,678,29,31,679,35,37)
	MR_init_label8(__Unify___parse_tree__prog_item__pragma_type_0_0,39,680,43,45,47,49,51,53)
	MR_init_label8(__Unify___parse_tree__prog_item__pragma_type_0_0,681,59,682,63,683,67,684,73)
	MR_init_label8(__Unify___parse_tree__prog_item__pragma_type_0_0,685,79,686,83,687,87,89,688)
	MR_init_label8(__Unify___parse_tree__prog_item__pragma_type_0_0,93,95,97,99,689,105,690,109)
	MR_init_label8(__Unify___parse_tree__prog_item__pragma_type_0_0,691,113,692,117,693,121,694,125)
	MR_init_label8(__Unify___parse_tree__prog_item__pragma_type_0_0,127,129,695,135,137,139,141,696)
	MR_init_label8(__Unify___parse_tree__prog_item__pragma_type_0_0,147,697,151,698,155,699,159,700)
	MR_init_label8(__Unify___parse_tree__prog_item__pragma_type_0_0,163,165,167,169,701,175,177,179)
	MR_init_label3(__Unify___parse_tree__prog_item__pragma_type_0_0,181,675,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__pragma_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i4) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i674) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i22));
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i675);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i675);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i675);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 2);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i675);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i675);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,674)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	MR_sv(2) = MR_ctfield(2, MR_r1, 2);
	MR_sv(3) = MR_ctfield(2, MR_r1, 3);
	MR_sv(4) = MR_ctfield(2, MR_r1, 4);
	MR_sv(5) = MR_ctfield(2, MR_r1, 5);
	MR_sv(6) = MR_ctfield(2, MR_r1, 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(10) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(11) = MR_ctfield(2, MR_tempr1, 5);
	MR_sv(12) = MR_ctfield(2, MR_tempr1, 6);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i10);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i12);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, pragma_var);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i14);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i16);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i18);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__pragma_foreign_code_impl_0_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i678) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i679) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i680) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i681) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i682) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i683) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i684) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i685) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i686) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i687) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i89) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i688) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i689) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i690) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i691) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i692) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i693) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i694) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i695) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i696) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i697) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i698) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i699) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i700) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i701));
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i675);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_r2, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i675);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
	}
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,678)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_sv(3) = MR_ctfield(3, MR_r1, 5);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 5);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i29);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i31);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(3), (char *)MR_sv(6)) == 0);
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,679)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 5);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i35);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i37);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i39);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(4), (char *)MR_sv(8)) == 0);
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,680)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	MR_sv(5) = MR_ctfield(3, MR_r1, 6);
	MR_sv(6) = MR_ctfield(3, MR_r1, 7);
	MR_sv(7) = MR_ctfield(3, MR_r1, 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(10) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(11) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(12) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(13) = MR_ctfield(3, MR_tempr1, 7);
	MR_sv(14) = MR_ctfield(3, MR_tempr1, 8);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i43);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i45);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i47);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i49);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i51);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i53);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(recompilation, item_id);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,681)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i59);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,682)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i63);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,683)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_sv(3) = MR_ctfield(3, MR_r1, 5);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 5);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i67);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,684)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_sv(3) = MR_ctfield(3, MR_r1, 5);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 5);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i73);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__exception_status_0_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,685)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_sv(3) = MR_ctfield(3, MR_r1, 5);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 5);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i79);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,686)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_sv(3) = MR_ctfield(3, MR_r1, 5);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 5);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i83);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,687)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i87);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,11)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i675);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_r2, 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,688)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,12)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	MR_sv(5) = MR_ctfield(3, MR_r1, 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(10) = MR_ctfield(3, MR_tempr1, 6);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__eval_method_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i93);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i95);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i97);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i99);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, table_attributes);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,689)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,13)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i105);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(2), (char *)MR_sv(4)) == 0);
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,690)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,14)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i109);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,691)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,15)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i113);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,692)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,16)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i117);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,693)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,17)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i121);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,694)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,18)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_sv(3) = MR_ctfield(3, MR_r1, 5);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 5);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i125);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i127);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i129);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,695)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,19)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_sv(3) = MR_ctfield(3, MR_r1, 5);
	MR_sv(4) = MR_ctfield(3, MR_r1, 6);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 6);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i135);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i137);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i139);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i141);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,696)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,20)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i147);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,697)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,21)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i151);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,698)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,22)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i155);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,699)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,23)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i159);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,700)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,24)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_sv(3) = MR_ctfield(3, MR_r1, 5);
	MR_sv(4) = MR_ctfield(3, MR_r1, 6);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 6);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i163);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i165);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i167);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i169);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_sharing_domain);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,701)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,25)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_sv(3) = MR_ctfield(3, MR_r1, 5);
	MR_sv(4) = MR_ctfield(3, MR_r1, 6);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr3, 6);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i175);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i177);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i179);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i181);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_domain);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,675)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module51)
	MR_init_entry1(__Index___parse_tree__prog_item__pragma_type_0_0);
	MR_init_label8(__Index___parse_tree__prog_item__pragma_type_0_0,4,5,6,7,8,9,10,11)
	MR_init_label8(__Index___parse_tree__prog_item__pragma_type_0_0,12,13,14,15,16,17,18,19)
	MR_init_label8(__Index___parse_tree__prog_item__pragma_type_0_0,20,21,22,23,24,25,26,27)
	MR_init_label6(__Index___parse_tree__prog_item__pragma_type_0_0,28,29,30,31,32,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___parse_tree__prog_item__pragma_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i7));
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i23) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i25) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i26) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i27) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i28) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i29) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i30) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i31) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i32) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i33));
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 24;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 26;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 27;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 28;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__pragma_foreign_code_impl_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__exception_status_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__eval_method_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module52)
	MR_init_entry1(__Compare___parse_tree__prog_item__pragma_type_0_0);
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,2,3,4,5,9,12,16,22)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,25,30,33,37,41,45,49,53)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,63,64,67,72,75,79,83,87)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,95,98,102,106,110,118,121,125)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,129,133,137,141,145,156,159,164)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,167,172,175,179,183,187,195,198)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,202,206,210,218,221,225,229,233)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,241,244,248,252,256,264,267,272)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,275,278,282,286,290,294,303,306)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,310,316,319,324,327,332,335,340)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,343,348,351,355,359,363,371,374)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,378,382,386,390,399,402,407,410)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,415,418,423,426,431,434,438,442)
	MR_init_label8(__Compare___parse_tree__prog_item__pragma_type_0_0,446,450,459,462,466,470,474,478)
	MR_init_label2(__Compare___parse_tree__prog_item__pragma_type_0_0,6,490)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__pragma_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__pragma_type_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__pragma_type_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i3);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(15);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i5);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(15);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i9) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i30) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i63));
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 1);
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr5, 0);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i12);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i16);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr5, 0);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i25);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(12) = MR_ctfield(2, MR_tempr4, 6);
	MR_sv(11) = MR_ctfield(2, MR_tempr4, 5);
	MR_sv(10) = MR_ctfield(2, MR_tempr4, 4);
	MR_sv(9) = MR_ctfield(2, MR_tempr4, 3);
	MR_sv(8) = MR_ctfield(2, MR_tempr4, 2);
	MR_sv(7) = MR_ctfield(2, MR_tempr4, 1);
	MR_tempr5 = MR_r3;
	MR_sv(6) = MR_ctfield(2, MR_tempr5, 6);
	MR_sv(5) = MR_ctfield(2, MR_tempr5, 5);
	MR_sv(4) = MR_ctfield(2, MR_tempr5, 4);
	MR_sv(3) = MR_ctfield(2, MR_tempr5, 3);
	MR_tempr1 = MR_ctfield(2, MR_tempr5, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr5, 0);
	MR_r2 = MR_ctfield(2, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i33);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i37);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i41);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, pragma_var);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i45);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i49);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i53);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__pragma_foreign_code_impl_0_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i64) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i72) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i95) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i118) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i156) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i172) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i195) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i218) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i241) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i264) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i272) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i275) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i303) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i316) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i324) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i332) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i340) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i348) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i371) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i399) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i407) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i415) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i423) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i431) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i459));
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i67);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i75);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i79);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i83);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i87);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i98);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i102);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i106);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i110);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(14) = MR_ctfield(3, MR_tempr4, 8);
	MR_sv(13) = MR_ctfield(3, MR_tempr4, 7);
	MR_sv(12) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(11) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(7) = MR_ctfield(3, MR_tempr5, 8);
	MR_sv(6) = MR_ctfield(3, MR_tempr5, 7);
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i121);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i125);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i129);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i133);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i137);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i141);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i145);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(recompilation, item_id);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i159);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i167);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i175);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i179);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i183);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i187);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i198);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i202);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i206);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i210);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__exception_status_0_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i221);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i225);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i229);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i233);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i244);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i248);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i252);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i256);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i267);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__eval_method_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i278);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i282);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i286);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i290);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i294);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, table_attributes);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i306);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i310);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i319);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,319)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i327);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i335);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i343);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,343)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i351);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i355);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i359);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i363);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,363)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,371)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i374);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,374)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i378);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,378)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i382);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,382)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i386);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,386)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i390);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,390)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,399)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i402);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,402)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,407)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i410);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,410)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,415)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i418);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,418)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,423)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i426);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,426)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,431)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i434);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,434)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i438);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,438)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i442);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,442)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i446);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,446)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i450);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,450)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_sharing_domain);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,459)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i462);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,462)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i466);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,466)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i470);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,470)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i474);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,474)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i478);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,478)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i490);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_domain);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,490)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__prog_item_maybe_bunch_0(void)
{
	parse_tree__prog_item_module0();
	parse_tree__prog_item_module1();
	parse_tree__prog_item_module2();
	parse_tree__prog_item_module3();
	parse_tree__prog_item_module4();
	parse_tree__prog_item_module5();
	parse_tree__prog_item_module6();
	parse_tree__prog_item_module7();
	parse_tree__prog_item_module8();
	parse_tree__prog_item_module9();
	parse_tree__prog_item_module10();
	parse_tree__prog_item_module11();
	parse_tree__prog_item_module12();
	parse_tree__prog_item_module13();
	parse_tree__prog_item_module14();
	parse_tree__prog_item_module15();
	parse_tree__prog_item_module16();
	parse_tree__prog_item_module17();
	parse_tree__prog_item_module18();
	parse_tree__prog_item_module19();
	parse_tree__prog_item_module20();
	parse_tree__prog_item_module21();
	parse_tree__prog_item_module22();
	parse_tree__prog_item_module23();
	parse_tree__prog_item_module24();
	parse_tree__prog_item_module25();
	parse_tree__prog_item_module26();
	parse_tree__prog_item_module27();
	parse_tree__prog_item_module28();
	parse_tree__prog_item_module29();
	parse_tree__prog_item_module30();
	parse_tree__prog_item_module31();
	parse_tree__prog_item_module32();
	parse_tree__prog_item_module33();
	parse_tree__prog_item_module34();
	parse_tree__prog_item_module35();
	parse_tree__prog_item_module36();
	parse_tree__prog_item_module37();
	parse_tree__prog_item_module38();
	parse_tree__prog_item_module39();
}

static void mercury__parse_tree__prog_item_maybe_bunch_1(void)
{
	parse_tree__prog_item_module40();
	parse_tree__prog_item_module41();
	parse_tree__prog_item_module42();
	parse_tree__prog_item_module43();
	parse_tree__prog_item_module44();
	parse_tree__prog_item_module45();
	parse_tree__prog_item_module46();
	parse_tree__prog_item_module47();
	parse_tree__prog_item_module48();
	parse_tree__prog_item_module49();
	parse_tree__prog_item_module50();
	parse_tree__prog_item_module51();
	parse_tree__prog_item_module52();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_item__init(void);
void mercury__parse_tree__prog_item__init_type_tables(void);
void mercury__parse_tree__prog_item__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_item__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__prog_item__init_complexity_procs(void);
#endif

void mercury__parse_tree__prog_item__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__prog_item_maybe_bunch_0();
	mercury__parse_tree__prog_item_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_pragma_type_0,
		parse_tree__prog_item__pragma_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0,
		parse_tree__prog_item__mutable_var_attributes_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_mutable_trailed_0,
		parse_tree__prog_item__mutable_trailed_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_mutable_thread_local_0,
		parse_tree__prog_item__mutable_thread_local_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_module_defn_0,
		parse_tree__prog_item__module_defn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_message_list_0,
		parse_tree__prog_item__message_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_warning_0,
		parse_tree__prog_item__item_warning_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
		parse_tree__prog_item__item_origin_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_list_0,
		parse_tree__prog_item__item_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_compiler_origin_0,
		parse_tree__prog_item__item_compiler_origin_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_and_context_0,
		parse_tree__prog_item__item_and_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_0,
		parse_tree__prog_item__item_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_goals_0,
		parse_tree__prog_item__goals_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0,
		parse_tree__prog_item__goal_expr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_goal_0,
		parse_tree__prog_item__goal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_foreign_name_0,
		parse_tree__prog_item__foreign_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_compilation_unit_0,
		parse_tree__prog_item__compilation_unit_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_class_methods_0,
		parse_tree__prog_item__class_methods_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_class_method_0,
		parse_tree__prog_item__class_method_0_0);
	mercury__parse_tree__prog_item__init_debugger();
}

void mercury__parse_tree__prog_item__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_pragma_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_mutable_trailed_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_mutable_thread_local_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_module_defn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_message_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_warning_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_compiler_origin_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_and_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_goals_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_goal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_foreign_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_compilation_unit_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_class_methods_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_class_method_0);
	}
}


void mercury__parse_tree__prog_item__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__prog_item__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_item__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
