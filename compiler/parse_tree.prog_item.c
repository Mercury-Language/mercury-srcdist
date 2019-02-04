/*
** Automatically generated from `prog_item.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
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
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "parse_tree.prog_item.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "parse_tree.prog_item.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "parse_tree.prog_item.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "parse_tree.prog_item.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "parse_tree.prog_item.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "parse_tree.prog_item.c"
#line 48 "parse_tree.prog_item.c"
#include "parse_tree.prog_item.mh"

#line 51 "parse_tree.prog_item.c"
#line 52 "parse_tree.prog_item.c"
#ifndef PARSE_TREE__PROG_ITEM_DECL_GUARD
#define PARSE_TREE__PROG_ITEM_DECL_GUARD

#line 56 "parse_tree.prog_item.c"
#line 57 "parse_tree.prog_item.c"

#endif
#line 60 "parse_tree.prog_item.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Integer f4;
	MR_Integer f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_item__type_ctor_info_catch_any_expr_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_catch_expr_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_class_method_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_class_methods_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_compilation_unit_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_contains_foreign_code_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_contains_foreign_export_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_foreign_name_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_goal_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_item__type_ctor_info_goals_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_clause_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_compiler_origin_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_finalise_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_initialise_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_instance_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_item__type_ctor_info_item_module_defn_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_mutable_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_nothing_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_pragma_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_promise_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_item_warning_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_item__type_ctor_info_module_defn_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_module_foreign_info_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_mutable_thread_local_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_mutable_trailed_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0,
	mercury_data_parse_tree__prog_item__type_ctor_info_pragma_type_0;
MR_decl_label10(parse_tree__prog_item__do_get_item_foreign_code_5_0, 2,3,7,4,5,13,15,18,14,23)
MR_decl_label10(parse_tree__prog_item__do_get_item_foreign_code_5_0, 25,11,32,34,29,30,39,36,37,45)
MR_decl_label2(parse_tree__prog_item__do_get_item_foreign_code_5_0, 49,44)
MR_decl_label7(parse_tree__prog_item__get_item_foreign_code_4_0, 2,7,5,11,10,13,9)
MR_decl_label5(parse_tree__prog_item__get_item_list_foreign_code_5_0, 2,3,6,7,8)
MR_decl_label2(parse_tree__prog_item__set_mutable_add_foreign_name_3_0, 3,2)
MR_decl_label10(fn__parse_tree__prog_item__get_item_context_1_0, 10,3,16,21,5,8,9,12,13,14)
MR_decl_label2(fn__parse_tree__prog_item__get_item_context_1_0, 15,17)
MR_decl_label3(__Unify___parse_tree__prog_item__catch_any_expr_0_0, 4,8,1)
MR_decl_label3(__Unify___parse_tree__prog_item__catch_expr_0_0, 4,8,1)
MR_decl_label10(__Unify___parse_tree__prog_item__class_method_0_0, 7,9,12,14,16,18,20,22,24,26)
MR_decl_label10(__Unify___parse_tree__prog_item__class_method_0_0, 63,5,31,33,35,37,39,41,43,1)
MR_decl_label3(__Unify___parse_tree__prog_item__compilation_unit_0_0, 4,8,1)
MR_decl_label3(__Unify___parse_tree__prog_item__contains_foreign_code_0_0, 5,13,1)
MR_decl_label2(__Unify___parse_tree__prog_item__foreign_name_0_0, 4,1)
MR_decl_label10(__Unify___parse_tree__prog_item__goal_expr_0_0, 183,41,43,88,90,187,5,8,12,15)
MR_decl_label10(__Unify___parse_tree__prog_item__goal_expr_0_0, 19,21,23,27,30,34,36,39,47,49)
MR_decl_label10(__Unify___parse_tree__prog_item__goal_expr_0_0, 53,55,59,65,68,70,72,74,78,80)
MR_decl_label10(__Unify___parse_tree__prog_item__goal_expr_0_0, 84,94,97,99,101,105,108,110,112,116)
MR_decl_label10(__Unify___parse_tree__prog_item__goal_expr_0_0, 119,121,123,127,131,134,138,141,145,148)
MR_decl_label10(__Unify___parse_tree__prog_item__goal_expr_0_0, 151,154,156,161,164,167,169,171,173,177)
MR_decl_label4(__Unify___parse_tree__prog_item__goal_expr_0_0, 179,181,188,1)
MR_decl_label10(__Unify___parse_tree__prog_item__item_0_0, 33,5,57,68,9,13,17,21,25,29)
MR_decl_label8(__Unify___parse_tree__prog_item__item_0_0, 37,41,45,49,53,61,69,1)
MR_decl_label8(__Unify___parse_tree__prog_item__item_clause_info_0_0, 4,6,8,11,13,15,17,1)
MR_decl_label5(__Unify___parse_tree__prog_item__item_finalise_info_0_0, 4,6,8,10,1)
MR_decl_label5(__Unify___parse_tree__prog_item__item_initialise_info_0_0, 4,6,8,10,1)
MR_decl_label8(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0, 4,6,9,11,13,15,17,1)
MR_decl_label9(__Unify___parse_tree__prog_item__item_instance_info_0_0, 4,6,8,10,12,14,16,18,1)
MR_decl_label10(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0, 4,6,8,10,12,14,16,18,20,1)
MR_decl_label8(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0, 4,6,9,11,13,15,17,1)
MR_decl_label4(__Unify___parse_tree__prog_item__item_module_defn_info_0_0, 4,6,8,1)
MR_decl_label8(__Unify___parse_tree__prog_item__item_mutable_info_0_0, 4,6,8,10,12,14,16,1)
MR_decl_label4(__Unify___parse_tree__prog_item__item_nothing_info_0_0, 4,6,8,1)
MR_decl_label3(__Unify___parse_tree__prog_item__item_origin_0_0, 10,5,1)
MR_decl_label5(__Unify___parse_tree__prog_item__item_pragma_info_0_0, 4,6,8,10,1)
MR_decl_label10(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0, 4,6,8,11,13,15,17,19,21,23)
MR_decl_label4(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0, 25,27,29,1)
MR_decl_label6(__Unify___parse_tree__prog_item__item_promise_info_0_0, 4,6,9,11,13,1)
MR_decl_label8(__Unify___parse_tree__prog_item__item_type_defn_info_0_0, 4,6,9,11,13,15,17,1)
MR_decl_label9(__Unify___parse_tree__prog_item__item_typeclass_info_0_0, 4,6,8,11,13,15,17,19,1)
MR_decl_label3(__Unify___parse_tree__prog_item__item_warning_0_0, 4,8,1)
MR_decl_label10(__Unify___parse_tree__prog_item__module_defn_0_0, 32,6,54,10,14,16,21,25,27,38)
MR_decl_label6(__Unify___parse_tree__prog_item__module_defn_0_0, 39,43,45,47,55,1)
MR_decl_label5(__Unify___parse_tree__prog_item__module_foreign_info_0_0, 4,6,8,10,1)
MR_decl_label3(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0, 5,7,1)
MR_decl_label10(__Unify___parse_tree__prog_item__pragma_type_0_0, 25,23,53,55,57,59,61,63,218,5)
MR_decl_label10(__Unify___parse_tree__prog_item__pragma_type_0_0, 7,9,11,13,15,19,21,27,29,34)
MR_decl_label10(__Unify___parse_tree__prog_item__pragma_type_0_0, 36,38,40,42,44,49,67,69,71,73)
MR_decl_label10(__Unify___parse_tree__prog_item__pragma_type_0_0, 75,77,79,81,83,85,87,89,91,93)
MR_decl_label10(__Unify___parse_tree__prog_item__pragma_type_0_0, 95,97,99,101,103,105,107,111,113,115)
MR_decl_label10(__Unify___parse_tree__prog_item__pragma_type_0_0, 117,119,121,124,126,130,132,134,137,139)
MR_decl_label10(__Unify___parse_tree__prog_item__pragma_type_0_0, 143,145,147,149,152,156,158,160,162,164)
MR_decl_label10(__Unify___parse_tree__prog_item__pragma_type_0_0, 167,169,174,176,178,181,186,188,190,192)
MR_decl_label9(__Unify___parse_tree__prog_item__pragma_type_0_0, 194,196,199,203,205,209,211,219,1)
MR_decl_label10(__Index___parse_tree__prog_item__goal_expr_0_0, 26,11,7,15,30,3,4,5,6,8)
MR_decl_label10(__Index___parse_tree__prog_item__goal_expr_0_0, 9,10,12,13,14,16,17,18,19,20)
MR_decl_label4(__Index___parse_tree__prog_item__goal_expr_0_0, 21,22,24,25)
MR_decl_label10(__Index___parse_tree__prog_item__item_0_0, 10,3,16,21,4,5,6,7,8,9)
MR_decl_label6(__Index___parse_tree__prog_item__item_0_0, 11,12,13,14,15,17)
MR_decl_label10(__Index___parse_tree__prog_item__module_defn_0_0, 19,12,4,22,3,5,6,7,8,9)
MR_decl_label8(__Index___parse_tree__prog_item__module_defn_0_0, 10,11,13,14,15,16,17,18)
MR_decl_label10(__Index___parse_tree__prog_item__pragma_type_0_0, 8,7,13,38,3,4,5,6,9,10)
MR_decl_label10(__Index___parse_tree__prog_item__pragma_type_0_0, 11,12,14,15,16,17,18,19,20,21)
MR_decl_label10(__Index___parse_tree__prog_item__pragma_type_0_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label3(__Index___parse_tree__prog_item__pragma_type_0_0, 32,33,34)
MR_decl_label4(__Compare___parse_tree__prog_item__catch_any_expr_0_0, 3,2,5,21)
MR_decl_label4(__Compare___parse_tree__prog_item__catch_expr_0_0, 3,2,5,21)
MR_decl_label10(__Compare___parse_tree__prog_item__class_method_0_0, 3,2,9,13,18,22,26,30,34,38)
MR_decl_label10(__Compare___parse_tree__prog_item__class_method_0_0, 42,46,50,54,7,5,71,73,77,81)
MR_decl_label5(__Compare___parse_tree__prog_item__class_method_0_0, 85,89,93,97,208)
MR_decl_label4(__Compare___parse_tree__prog_item__compilation_unit_0_0, 3,2,5,21)
MR_decl_label6(__Compare___parse_tree__prog_item__contains_foreign_code_0_0, 34,13,44,5,38,7)
MR_decl_label4(__Compare___parse_tree__prog_item__foreign_name_0_0, 3,2,5,21)
MR_decl_label10(__Compare___parse_tree__prog_item__goal_expr_0_0, 4,5,6,7,305,68,71,138,141,309)
MR_decl_label10(__Compare___parse_tree__prog_item__goal_expr_0_0, 10,14,19,23,28,31,35,41,45,54)
MR_decl_label10(__Compare___parse_tree__prog_item__goal_expr_0_0, 57,62,76,79,84,87,92,95,102,106)
MR_decl_label10(__Compare___parse_tree__prog_item__goal_expr_0_0, 111,115,119,127,130,135,146,150,155,160)
MR_decl_label10(__Compare___parse_tree__prog_item__goal_expr_0_0, 167,171,176,181,188,192,197,202,209,212)
MR_decl_label10(__Compare___parse_tree__prog_item__goal_expr_0_0, 217,221,226,230,235,239,244,249,253,262)
MR_decl_label10(__Compare___parse_tree__prog_item__goal_expr_0_0, 266,270,274,279,283,292,295,299,8,314)
MR_decl_label10(__Compare___parse_tree__prog_item__item_0_0, 3,2,4,5,6,7,31,10,49,58)
MR_decl_label10(__Compare___parse_tree__prog_item__item_0_0, 13,16,19,22,25,28,34,37,40,43)
MR_decl_label3(__Compare___parse_tree__prog_item__item_0_0, 46,52,156)
MR_decl_label10(__Compare___parse_tree__prog_item__item_clause_info_0_0, 3,2,5,9,13,17,22,26,30,70)
MR_decl_label7(__Compare___parse_tree__prog_item__item_finalise_info_0_0, 3,2,5,9,13,17,45)
MR_decl_label7(__Compare___parse_tree__prog_item__item_initialise_info_0_0, 3,2,5,9,13,17,45)
MR_decl_label9(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0, 3,2,5,9,14,18,22,26,62)
MR_decl_label10(__Compare___parse_tree__prog_item__item_instance_info_0_0, 3,2,5,9,13,17,21,25,29,69)
MR_decl_label10(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label1(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0, 77)
MR_decl_label9(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0, 3,2,5,9,14,18,22,26,62)
MR_decl_label5(__Compare___parse_tree__prog_item__item_module_defn_info_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___parse_tree__prog_item__item_mutable_info_0_0, 3,2,5,9,13,17,21,25,29,69)
MR_decl_label5(__Compare___parse_tree__prog_item__item_nothing_info_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___parse_tree__prog_item__item_origin_0_0, 18,7,5,9)
MR_decl_label6(__Compare___parse_tree__prog_item__item_pragma_info_0_0, 3,2,5,9,13,37)
MR_decl_label10(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0, 3,2,5,9,13,18,22,26,30,34)
MR_decl_label7(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0, 38,42,46,50,54,58,126)
MR_decl_label8(__Compare___parse_tree__prog_item__item_promise_info_0_0, 3,2,5,9,13,18,22,54)
MR_decl_label9(__Compare___parse_tree__prog_item__item_type_defn_info_0_0, 3,2,5,9,14,18,22,26,62)
MR_decl_label10(__Compare___parse_tree__prog_item__item_typeclass_info_0_0, 3,2,5,9,13,18,22,26,30,70)
MR_decl_label5(__Compare___parse_tree__prog_item__item_warning_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___parse_tree__prog_item__module_defn_0_0, 4,5,6,7,36,11,59,14,17,20)
MR_decl_label10(__Compare___parse_tree__prog_item__module_defn_0_0, 26,29,32,41,42,45,48,51,8,64)
MR_decl_label6(__Compare___parse_tree__prog_item__module_foreign_info_0_0, 3,2,5,9,13,37)
MR_decl_label7(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0, 3,2,5,10,14,18,46)
MR_decl_label10(__Compare___parse_tree__prog_item__pragma_type_0_0, 3,2,4,5,6,7,70,73,77,62)
MR_decl_label10(__Compare___parse_tree__prog_item__pragma_type_0_0, 65,157,160,164,168,172,176,180,547,10)
MR_decl_label10(__Compare___parse_tree__prog_item__pragma_type_0_0, 13,18,21,26,29,33,37,41,49,52)
MR_decl_label10(__Compare___parse_tree__prog_item__pragma_type_0_0, 56,83,86,90,94,102,105,109,113,117)
MR_decl_label10(__Compare___parse_tree__prog_item__pragma_type_0_0, 125,128,132,136,140,149,152,190,193,197)
MR_decl_label10(__Compare___parse_tree__prog_item__pragma_type_0_0, 201,205,213,216,221,224,228,232,236,244)
MR_decl_label10(__Compare___parse_tree__prog_item__pragma_type_0_0, 247,252,255,260,263,268,271,276,279,284)
MR_decl_label10(__Compare___parse_tree__prog_item__pragma_type_0_0, 287,292,295,298,303,306,309,313,317,322)
MR_decl_label10(__Compare___parse_tree__prog_item__pragma_type_0_0, 326,335,338,342,346,351,355,364,367,371)
MR_decl_label10(__Compare___parse_tree__prog_item__pragma_type_0_0, 375,379,384,393,396,401,404,408,412,417)
MR_decl_label10(__Compare___parse_tree__prog_item__pragma_type_0_0, 422,432,435,439,443,448,457,460,464,468)
MR_decl_label10(__Compare___parse_tree__prog_item__pragma_type_0_0, 472,480,483,487,491,495,500,506,510,521)
MR_decl_label6(__Compare___parse_tree__prog_item__pragma_type_0_0, 524,528,532,536,1070,1071)
MR_def_extern_entry(fn__parse_tree__prog_item__get_item_context_1_0)
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
MR_def_extern_entry(parse_tree__prog_item__get_item_list_foreign_code_5_0)
MR_decl_static(parse_tree__prog_item__do_get_item_foreign_code_5_0)
MR_decl_static(parse_tree__prog_item__get_item_foreign_code_4_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__catch_any_expr_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__catch_any_expr_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__catch_expr_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__catch_expr_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__class_method_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__class_method_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__class_methods_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__class_methods_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__compilation_unit_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__compilation_unit_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__contains_foreign_code_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__contains_foreign_code_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__contains_foreign_export_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__contains_foreign_export_0_0)
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
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_clause_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_clause_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_compiler_origin_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_compiler_origin_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_finalise_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_finalise_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_initialise_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_initialise_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_instance_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_instance_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_module_defn_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_module_defn_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_mutable_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_mutable_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_nothing_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_nothing_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_origin_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_origin_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_pragma_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_pragma_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_promise_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_promise_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_type_defn_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_type_defn_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_typeclass_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_typeclass_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__item_warning_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__item_warning_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_item__module_defn_0_0)
MR_def_extern_entry(__Index___parse_tree__prog_item__module_defn_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_item__module_defn_0_0)
MR_decl_static(__Unify___parse_tree__prog_item__module_foreign_info_0_0)
MR_decl_static(__Compare___parse_tree__prog_item__module_foreign_info_0_0)
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

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_item__get_item_list_foreign_code_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_module_foreign_info_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_item__get_item_list_foreign_code_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(parse_tree__prog_item, item),
MR_CTOR0_ADDR(parse_tree__prog_item, module_foreign_info),
MR_CTOR0_ADDR(parse_tree__prog_item, module_foreign_info)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_expr_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_compiletime_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_runtime_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_arg_size_constr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
static const struct mercury_type_2 mercury_common_2[11] =
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
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,2,1)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, arg_size_constr)
}
},
{
{
MR_CTOR1_ADDR(parse_tree__prog_data, generic_arg_size_info),
MR_CTOR0_ADDR(unit, unit)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_generic_termination_info_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_3 mercury_common_3[4] =
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
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(parse_tree__prog_data, generic_termination_info, 2),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,2,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0,
	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_catch_any_expr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_catch_any_expr_0_0[] = {
	"catch_any_var",
	"catch_any_goal"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_catch_any_expr_0_0 = {
	"catch_any_expr",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_catch_any_expr_0_0,
	mercury_data_parse_tree__prog_item__field_names_catch_any_expr_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_catch_any_expr_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_catch_any_expr_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_catch_any_expr_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_catch_any_expr_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_catch_any_expr_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_catch_any_expr_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_catch_any_expr_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_catch_any_expr_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__catch_any_expr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__catch_any_expr_0_0)),
	"parse_tree.prog_item",
	"catch_any_expr",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_catch_any_expr_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_catch_any_expr_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_catch_any_expr_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_catch_expr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_catch_expr_0_0[] = {
	"catch_pattern",
	"catch_goal"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_catch_expr_0_0 = {
	"catch_expr",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_catch_expr_0_0,
	mercury_data_parse_tree__prog_item__field_names_catch_expr_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_catch_expr_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_catch_expr_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_catch_expr_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_catch_expr_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_catch_expr_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_catch_expr_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_catch_expr_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_catch_expr_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__catch_expr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__catch_expr_0_0)),
	"parse_tree.prog_item",
	"catch_expr",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_catch_expr_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_catch_expr_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_catch_expr_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_and_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_and_mode_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_type_and_mode_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_and_mode_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_condition_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_purity_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraints_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_condition_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_purity_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraints_0;

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

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0
}};

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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_compilation_unit_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
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
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_contains_foreign_code_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_contains_foreign_code_0_0 = {
	"contains_foreign_code",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_contains_foreign_code_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_contains_foreign_code_0_1 = {
	"contains_no_foreign_code",
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

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_contains_foreign_code_0_2 = {
	"contains_foreign_code_unknown",
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

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_contains_foreign_code_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_contains_foreign_code_0_1,
	&mercury_data_parse_tree__prog_item__du_functor_desc_contains_foreign_code_0_2

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_contains_foreign_code_0_1[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_contains_foreign_code_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_contains_foreign_code_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__prog_item__du_stag_ordered_contains_foreign_code_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_contains_foreign_code_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_contains_foreign_code_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_contains_foreign_code_0_0,
	&mercury_data_parse_tree__prog_item__du_functor_desc_contains_foreign_code_0_2,
	&mercury_data_parse_tree__prog_item__du_functor_desc_contains_foreign_code_0_1
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_contains_foreign_code_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_contains_foreign_code_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__contains_foreign_code_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__contains_foreign_code_0_0)),
	"parse_tree.prog_item",
	"contains_foreign_code",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_contains_foreign_code_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_contains_foreign_code_0 },
	3,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_contains_foreign_code_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_item__enum_functor_desc_contains_foreign_export_0_0 = {
	"contains_foreign_export",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_item__enum_functor_desc_contains_foreign_export_0_1 = {
	"contains_no_foreign_export",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_item__enum_value_ordered_contains_foreign_export_0[] = {
	&mercury_data_parse_tree__prog_item__enum_functor_desc_contains_foreign_export_0_0,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_contains_foreign_export_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_item__enum_name_ordered_contains_foreign_export_0[] = {
	&mercury_data_parse_tree__prog_item__enum_functor_desc_contains_foreign_export_0_0,
	&mercury_data_parse_tree__prog_item__enum_functor_desc_contains_foreign_export_0_1
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_contains_foreign_export_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_contains_foreign_export_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__contains_foreign_export_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__contains_foreign_export_0_0)),
	"parse_tree.prog_item",
	"contains_foreign_export",
	{ (void *)mercury_data_parse_tree__prog_item__enum_name_ordered_contains_foreign_export_0 },
	{ (void *)mercury_data_parse_tree__prog_item__enum_value_ordered_contains_foreign_export_0 },
	2,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_contains_foreign_export_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

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

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

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

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_purity_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_9 = {
	"promise_purity_expr",
	2,
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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_atomic_component_state_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_atomic_component_state_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_atomic_component_state_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_atomic_component_state_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_goal_expr_0_14[] = {
	"aexpr_outer",
	"aexpr_inner",
	"aexpr_output_vars",
	"aexpr_main_goal",
	"aexpr_orelse_goals"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_14 = {
	"atomic_expr",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	14,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_14,
	mercury_data_parse_tree__prog_item__field_names_goal_expr_0_14,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_catch_expr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_catch_expr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_catch_expr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_catch_any_expr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_catch_any_expr_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_catch_any_expr_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_catch_expr_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_catch_any_expr_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_goal_expr_0_15[] = {
	"tryexpr_maybe_io",
	"tryexpr_goal",
	"tryexpr_then",
	"tryexpr_maybe_else",
	"tryexpr_catches",
	"tryexpr_maybe_catch_any"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_15 = {
	"try_expr",
	6,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	15,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_15,
	mercury_data_parse_tree__prog_item__field_names_goal_expr_0_15,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_16 = {
	"implies_expr",
	2,
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
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_17 = {
	"equivalent_expr",
	2,
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
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_18 = {
	"not_expr",
	1,
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
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_19 = {
	"if_then_else_expr",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	15,
	19,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_19,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_20[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_20 = {
	"event_expr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	16,
	20,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_20,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_21[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_purity_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_21 = {
	"call_expr",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	17,
	21,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_21,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_goal_expr_0_22[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_purity_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_22 = {
	"unify_expr",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	18,
	22,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_goal_expr_0_22,
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
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_20,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_21,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_22

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_goal_expr_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__prog_item__du_stag_ordered_goal_expr_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_goal_expr_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_goal_expr_0_2 },
	{ 19, MR_SECTAG_REMOTE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_goal_expr_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_goal_expr_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_6,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_8,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_14,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_21,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_0,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_3,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_17,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_20,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_4,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_19,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_16,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_18,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_2,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_12,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_11,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_10,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_9,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_5,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_7,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_13,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_1,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_15,
	&mercury_data_parse_tree__prog_item__du_functor_desc_goal_expr_0_22
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_goal_expr_0[] = {
	4,
	20,
	12,
	5,
	8,
	17,
	0,
	18,
	1,
	16,
	15,
	14,
	13,
	19,
	2,
	21,
	10,
	6,
	11,
	9,
	7,
	3,
	22 };
	
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
	23,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_goal_expr_0
};

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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_module_defn_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_module_defn_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_0 = {
	"item_module_defn",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_clause_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_clause_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_1 = {
	"item_clause",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_2 = {
	"item_type_defn",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_3 = {
	"item_inst_defn",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_3,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_4 = {
	"item_mode_defn",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_4,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_5 = {
	"item_pred_decl",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_5,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_6 = {
	"item_mode_decl",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_6,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_pragma_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_pragma_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_7 = {
	"item_pragma",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_7,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_promise_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_promise_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_8 = {
	"item_promise",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_8,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_9 = {
	"item_typeclass",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_9,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_instance_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_instance_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_10 = {
	"item_instance",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	10,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_10,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_initialise_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_initialise_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_11 = {
	"item_initialise",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	11,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_11,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_finalise_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_finalise_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_12 = {
	"item_finalise",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	12,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_12,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_mutable_info_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_0_13 = {
	"item_mutable",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	13,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_0_13,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_nothing_info_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_nothing_info_0
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
	NULL,
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
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_1,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_12,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_11,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_3,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_10,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_6,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_4,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_0,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_13,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_14,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_7,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_5,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_8,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_2,
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_0_9
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_0[] = {
	7,
	0,
	13,
	3,
	6,
	11,
	5,
	10,
	12,
	14,
	4,
	2,
	1,
	8,
	9 };
	
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

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_clause_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_clause_info_0_0[] = {
	"cl_origin",
	"cl_varset",
	"cl_pred_or_func",
	"cl_predname",
	"cl_head_args",
	"cl_body",
	"cl_context",
	"cl_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_clause_info_0_0 = {
	"item_clause_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_clause_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_clause_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_clause_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_clause_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_clause_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_clause_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_clause_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_clause_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_clause_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_clause_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_clause_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_clause_info_0_0)),
	"parse_tree.prog_item",
	"item_clause_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_clause_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_clause_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_clause_info_0
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

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_finalise_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_finalise_info_0_0[] = {
	"final_origin",
	"final_name",
	"final_arity",
	"final_context",
	"final_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_finalise_info_0_0 = {
	"item_finalise_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_finalise_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_finalise_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_finalise_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_finalise_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_finalise_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_finalise_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_finalise_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_finalise_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_finalise_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_finalise_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_finalise_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_finalise_info_0_0)),
	"parse_tree.prog_item",
	"item_finalise_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_finalise_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_finalise_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_finalise_info_0
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_initialise_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_initialise_info_0_0[] = {
	"init_origin",
	"init_name",
	"init_arity",
	"init_context",
	"init_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_initialise_info_0_0 = {
	"item_initialise_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_initialise_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_initialise_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_initialise_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_initialise_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_initialise_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_initialise_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_initialise_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_initialise_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_initialise_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_initialise_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_initialise_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_initialise_info_0_0)),
	"parse_tree.prog_item",
	"item_initialise_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_initialise_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_initialise_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_initialise_info_0
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

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_inst_defn_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_condition_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_inst_defn_info_0_0[] = {
	"id_varset",
	"id_inst_name",
	"id_inst_args",
	"id_inst_defn",
	"id_cond",
	"id_context",
	"id_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_inst_defn_info_0_0 = {
	"item_inst_defn_info",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_inst_defn_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_inst_defn_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_inst_defn_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_inst_defn_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_inst_defn_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_inst_defn_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_inst_defn_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_inst_defn_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_inst_defn_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0)),
	"parse_tree.prog_item",
	"item_inst_defn_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_inst_defn_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_inst_defn_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_inst_defn_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_instance_body_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_instance_body_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_instance_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_instance_body_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_instance_info_0_0[] = {
	"ci_deriving_class",
	"ci_class_name",
	"ci_types",
	"ci_method_instances",
	"ci_varset",
	"ci_module_containing_instance",
	"ci_context",
	"ci_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_instance_info_0_0 = {
	"item_instance_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_instance_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_instance_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_instance_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_instance_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_instance_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_instance_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_instance_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_instance_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_instance_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_instance_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_instance_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_instance_info_0_0)),
	"parse_tree.prog_item",
	"item_instance_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_instance_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_instance_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_instance_info_0
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_mode_decl_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_condition_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_mode_decl_info_0_0[] = {
	"pfm_instvarset",
	"pfm_which",
	"pfm_name",
	"pfm_arg_modes",
	"pfm_maybe_with_inst",
	"pfm_maybe_detism",
	"pfm_cond",
	"pfm_context",
	"pfm_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_mode_decl_info_0_0 = {
	"item_mode_decl_info",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_mode_decl_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_mode_decl_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_mode_decl_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_mode_decl_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_mode_decl_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_mode_decl_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_mode_decl_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_mode_decl_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_mode_decl_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0)),
	"parse_tree.prog_item",
	"item_mode_decl_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_mode_decl_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_mode_decl_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_mode_decl_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mode_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mode_defn_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_mode_defn_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mode_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_condition_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_mode_defn_info_0_0[] = {
	"md_varset",
	"md_mode_name",
	"md_mode_args",
	"md_mode_defn",
	"md_cond",
	"md_context",
	"md_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_mode_defn_info_0_0 = {
	"item_mode_defn_info",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_mode_defn_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_mode_defn_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_mode_defn_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_mode_defn_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_mode_defn_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_mode_defn_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_mode_defn_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_mode_defn_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_mode_defn_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0)),
	"parse_tree.prog_item",
	"item_mode_defn_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_mode_defn_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_mode_defn_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_mode_defn_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_module_defn_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_module_defn_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_module_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_module_defn_info_0_0[] = {
	"module_defn_module_defn",
	"module_defn_context",
	"module_defn_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_module_defn_info_0_0 = {
	"item_module_defn_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_module_defn_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_module_defn_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_module_defn_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_module_defn_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_module_defn_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_module_defn_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_module_defn_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_module_defn_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_module_defn_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_module_defn_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_module_defn_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_module_defn_info_0_0)),
	"parse_tree.prog_item",
	"item_module_defn_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_module_defn_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_module_defn_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_module_defn_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_mutable_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_mutable_info_0_0[] = {
	"mut_name",
	"mut_type",
	"mut_init_value",
	"mut_inst",
	"mut_attrs",
	"mut_varset",
	"mut_context",
	"mut_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_mutable_info_0_0 = {
	"item_mutable_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_mutable_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_mutable_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_mutable_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_mutable_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_mutable_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_mutable_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_mutable_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_mutable_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_mutable_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_mutable_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_mutable_info_0_0)),
	"parse_tree.prog_item",
	"item_mutable_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_mutable_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_mutable_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_mutable_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_warning_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_item_warning_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_warning_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_nothing_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_item_warning_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_nothing_info_0_0[] = {
	"nothing_maybe_warning",
	"nothing_context",
	"nothing_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_nothing_info_0_0 = {
	"item_nothing_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_nothing_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_nothing_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_nothing_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_nothing_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_nothing_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_nothing_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_nothing_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_nothing_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_nothing_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_nothing_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_nothing_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_nothing_info_0_0)),
	"parse_tree.prog_item",
	"item_nothing_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_nothing_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_nothing_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_nothing_info_0
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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_pragma_type_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_pragma_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_pragma_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_pragma_info_0_0[] = {
	"pragma_origin",
	"pragma_type",
	"pragma_context",
	"pragma_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_pragma_info_0_0 = {
	"item_pragma_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_pragma_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_pragma_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_pragma_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_pragma_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_pragma_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_pragma_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_pragma_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_pragma_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_pragma_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_pragma_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_pragma_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_pragma_info_0_0)),
	"parse_tree.prog_item",
	"item_pragma_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_pragma_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_pragma_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_pragma_info_0
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_pred_decl_info_0_0[] = {
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
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraints_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_pred_decl_info_0_0[] = {
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
	"pf_class_context",
	"pf_context",
	"pf_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_pred_decl_info_0_0 = {
	"item_pred_decl_info",
	15,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_pred_decl_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_pred_decl_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_pred_decl_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_pred_decl_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_pred_decl_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_pred_decl_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_pred_decl_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_pred_decl_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_pred_decl_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0)),
	"parse_tree.prog_item",
	"item_pred_decl_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_pred_decl_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_pred_decl_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_pred_decl_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_promise_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_promise_type_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_promise_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_promise_type_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_expr_0term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_promise_info_0_0[] = {
	"prom_type",
	"prom_clause",
	"prom_varset",
	"prom_univ_quant_vars",
	"prom_context",
	"prom_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_promise_info_0_0 = {
	"item_promise_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_promise_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_promise_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_promise_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_promise_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_promise_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_promise_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_promise_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_promise_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_promise_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_promise_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_promise_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_promise_info_0_0)),
	"parse_tree.prog_item",
	"item_promise_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_promise_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_promise_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_promise_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_defn_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_type_defn_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_condition_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_type_defn_info_0_0[] = {
	"td_tvarset",
	"td_ctor_name",
	"td_ctor_args",
	"td_ctor_defn",
	"td_cond",
	"td_context",
	"td_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_type_defn_info_0_0 = {
	"item_type_defn_info",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_type_defn_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_type_defn_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_type_defn_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_type_defn_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_type_defn_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_type_defn_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_type_defn_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_type_defn_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_type_defn_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_type_defn_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_type_defn_info_0_0)),
	"parse_tree.prog_item",
	"item_type_defn_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_type_defn_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_type_defn_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_type_defn_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_fundep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_fundep_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_fundep_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_fundep_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_interface_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_interface_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_item_typeclass_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_fundep_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_class_interface_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_item_typeclass_info_0_0[] = {
	"tc_constraints",
	"tc_fundeps",
	"tc_class_name",
	"tc_class_params",
	"tc_class_methods",
	"tc_varset",
	"tc_context",
	"tc_seq_num"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_item_typeclass_info_0_0 = {
	"item_typeclass_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_item_typeclass_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_item_typeclass_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_item_typeclass_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_typeclass_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_item_typeclass_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_item_typeclass_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_item_typeclass_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_item_typeclass_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_item_typeclass_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__item_typeclass_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__item_typeclass_info_0_0)),
	"parse_tree.prog_item",
	"item_typeclass_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_item_typeclass_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_item_typeclass_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_item_typeclass_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1libs__options__type_ctor_info_option_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_libs__options__type_ctor_info_option_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_term_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
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

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_module_defn_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0
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
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0
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
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0
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
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0libs__globals__type_ctor_info_foreign_language_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_contains_foreign_export_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_module_foreign_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_contains_foreign_export_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_module_foreign_info_0_0[] = {
	"used_foreign_languages",
	"foreign_proc_languages",
	"all_foreign_import_modules",
	"module_has_foreign_export"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_module_foreign_info_0_0 = {
	"module_foreign_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_module_foreign_info_0_0,
	mercury_data_parse_tree__prog_item__field_names_module_foreign_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_stag_ordered_module_foreign_info_0_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_foreign_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_module_foreign_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_module_foreign_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_module_foreign_info_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_module_foreign_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_module_foreign_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_module_foreign_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_item__module_foreign_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_item__module_foreign_info_0_0)),
	"parse_tree.prog_item",
	"module_foreign_info",
	{ (void *)mercury_data_parse_tree__prog_item__du_name_ordered_module_foreign_info_0 },
	{ (void *)mercury_data_parse_tree__prog_item__du_ptag_ordered_module_foreign_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_module_foreign_info_0
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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0;

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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_var_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_pragma_var_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_pragma_var_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_foreign_code_impl_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_attributes_0;
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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_export_enum_attributes_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_export_enum_attributes_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_export_enum_attributes_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_6[] = {
	"export_enum_language",
	"export_enum_type_name",
	"export_enum_type_arity",
	"export_enum_attributes",
	"export_enum_overrides"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_6 = {
	"pragma_foreign_export_enum",
	5,
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
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_7[] = {
	"foreign_enum_language",
	"foreign_enum_type_name",
	"foreign_enum_type_arity",
	"foreign_enum_values"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_7 = {
	"pragma_foreign_enum",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_7,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_7,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_recompilation__type_ctor_info_item_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_recompilation__type_ctor_info_item_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_recompilation__type_ctor_info_item_id_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_8[] = {
	"tspec_pred_name",
	"tspec_new_name",
	"tspec_arity",
	"tspec_p_or_f",
	"tspec_modes",
	"tspec_tsubst",
	"tspec_tvarset",
	"tspec_items"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_8 = {
	"pragma_type_spec",
	8,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_8,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_8,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_9[] = {
	"inline_name",
	"inline_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_9 = {
	"pragma_inline",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_9,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_9,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_10[] = {
	"noinline_name",
	"noinline_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_10 = {
	"pragma_no_inline",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	10,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_10,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_10,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_11[] = {
	"unused_p_or_f",
	"unused_name",
	"unused_arity",
	"unused_mode",
	"unused_args"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_11 = {
	"pragma_unused_args",
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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_exception_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_exception_status_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_exception_status_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_12[] = {
	"exceptions_p_or_f",
	"exceptions_name",
	"exceptions_arity",
	"exceptions_mode",
	"exceptions_status"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_12 = {
	"pragma_exceptions",
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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trailing_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trailing_status_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_trailing_status_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_13[] = {
	"trailing_info_p_or_f",
	"trailing_info_name",
	"trailing_info_arity",
	"trailing_info_mode",
	"trailing_info_status"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_13 = {
	"pragma_trailing_info",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	13,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_13,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_13,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mm_tabling_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mm_tabling_status_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mm_tabling_status_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_14[] = {
	"mm_tabling_info_p_or_f",
	"mm_tabling_info_name",
	"mm_tabling_info_arity",
	"mm_tabling_info_mode",
	"mm_tabling_info_status"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_14 = {
	"pragma_mm_tabling_info",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	14,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_14,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_14,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_15[] = {
	"obsolete_name",
	"obsolete_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_15 = {
	"pragma_obsolete",
	2,
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
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_16[] = {
	"pragma_source_file"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_16 = {
	"pragma_source_file",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	13,
	16,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_16,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_16,
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

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_table_attributes_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_17[] = {
	"tabled_method",
	"tabled_name",
	"tabled_arity",
	"tabled_p_or_f",
	"tabled_mode",
	"tabled_attributes"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_17 = {
	"pragma_tabled",
	6,
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
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_18[] = {
	"fact_table_name",
	"fact_table_arity",
	"fact_table_file"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_18 = {
	"pragma_fact_table",
	3,
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
	"restag_type",
	"restag_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_19 = {
	"pragma_reserve_tag",
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
	"eqv_clauses_name",
	"eqv_clauses_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_20 = {
	"pragma_promise_equivalent_clauses",
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

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_21[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_21[] = {
	"pure_name",
	"pure_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_21 = {
	"pragma_promise_pure",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	18,
	21,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_21,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_21,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_22[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_22[] = {
	"semipure_name",
	"semipure_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_22 = {
	"pragma_promise_semipure",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	19,
	22,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_22,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_22,
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

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_23[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_generic_arg_size_info_1unit__type_ctor_info_unit_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_23[] = {
	"terminfo_p_or_f",
	"terminfo_name",
	"terminfo_mode",
	"terminfo_args",
	"terminfo_term"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_23 = {
	"pragma_termination_info",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	20,
	23,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_23,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_23,
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

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_24[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0unit__type_ctor_info_unit_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_24[] = {
	"terminfo2_p_or_f",
	"terminfo2_name",
	"terminfo2_mode",
	"terminfo2_args",
	"terminfo2_args2",
	"terminfo2_term"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_24 = {
	"pragma_termination2_info",
	6,
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
	"term_name",
	"term_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_25 = {
	"pragma_terminates",
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
	"noterm_name",
	"noterm_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_26 = {
	"pragma_does_not_terminate",
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

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_27[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_27[] = {
	"checkterm_name",
	"checkterm_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_27 = {
	"pragma_check_termination",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	24,
	27,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_27,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_27,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_28[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_28[] = {
	"mode_check_clause_name",
	"mode_check_clause_arity"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_28 = {
	"pragma_mode_check_clauses",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	25,
	28,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_28,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_28,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_structure_sharing_domain_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_structure_sharing_domain_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_structure_sharing_domain_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_structure_sharing_domain_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_29[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_structure_sharing_domain_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_29[] = {
	"sharing_p_or_f",
	"sharing_name",
	"sharing_mode",
	"sharing_headvars",
	"sharing_headvartypes",
	"sharing_description"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_29 = {
	"pragma_structure_sharing",
	6,
	0,
	MR_SECTAG_REMOTE,
	3,
	26,
	29,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_29,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_29,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_structure_reuse_domain_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_structure_reuse_domain_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_structure_reuse_domain_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_structure_reuse_domain_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_30[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_structure_reuse_domain_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_30[] = {
	"reuse_p_or_f",
	"reuse_name",
	"reuse_mode",
	"reuse_headvars",
	"reuse_headvartypes",
	"reuse_description"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_30 = {
	"pragma_structure_reuse",
	6,
	0,
	MR_SECTAG_REMOTE,
	3,
	27,
	30,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_30,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_30,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_required_feature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_required_feature_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_required_feature_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_required_feature_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_item__field_types_pragma_type_0_31[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_required_feature_0
};

const MR_ConstString mercury_data_parse_tree__prog_item__field_names_pragma_type_0_31[] = {
	"rfs_feature_set"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_31 = {
	"pragma_require_feature_set",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	28,
	31,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_item__field_types_pragma_type_0_31,
	mercury_data_parse_tree__prog_item__field_names_pragma_type_0_31,
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
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_28,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_29,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_30,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_31

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_item__du_ptag_ordered_pragma_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_pragma_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_pragma_type_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_pragma_type_0_2 },
	{ 29, MR_SECTAG_REMOTE,
	mercury_data_parse_tree__prog_item__du_stag_ordered_pragma_type_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_item__du_name_ordered_pragma_type_0[] = {
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_27,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_26,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_12,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_18,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_1,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_0,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_7,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_4,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_6,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_3,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_2,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_5,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_9,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_14,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_28,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_10,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_15,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_20,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_21,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_22,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_31,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_19,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_16,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_30,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_29,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_17,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_25,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_24,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_23,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_13,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_8,
	&mercury_data_parse_tree__prog_item__du_functor_desc_pragma_type_0_11
};

const MR_Integer mercury_data_parse_tree__prog_item__functor_number_map_pragma_type_0[] = {
	5,
	4,
	10,
	9,
	7,
	11,
	8,
	6,
	30,
	12,
	15,
	31,
	2,
	29,
	13,
	16,
	22,
	25,
	3,
	21,
	17,
	18,
	19,
	28,
	27,
	26,
	1,
	0,
	14,
	24,
	23,
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
	32,
	4,
	mercury_data_parse_tree__prog_item__functor_number_map_pragma_type_0
};


static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_item__get_item_list_foreign_code_5_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_item",
"parse_tree.prog_item",
"get_item_foreign_code",
4,
0
},
"parse_tree.prog_item",
"prog_item.m",
1061,
"d1;c11;"
};



MR_BEGIN_MODULE(parse_tree__prog_item_module0)
	MR_init_entry1(fn__parse_tree__prog_item__get_item_context_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_item__get_item_context_1_0);
	MR_init_label10(fn__parse_tree__prog_item__get_item_context_1_0,10,3,16,21,5,8,9,12,13,14)
	MR_init_label2(fn__parse_tree__prog_item__get_item_context_1_0,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_item_context'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_item__get_item_context_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i10) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i3) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i16) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i21));
MR_def_label(fn__parse_tree__prog_item__get_item_context_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 1);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_item__get_item_context_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 6);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_item__get_item_context_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(2, MR_r1, 0), 5);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_item__get_item_context_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i9) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i9) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i14) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i8) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i13) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i15) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i17) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i17) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i5) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i5) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i17) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_item__get_item_context_1_0_i12));
MR_def_label(fn__parse_tree__prog_item__get_item_context_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 3);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_item__get_item_context_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 7);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_item__get_item_context_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 5);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_item__get_item_context_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 1);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_item__get_item_context_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 2);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_item__get_item_context_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 13);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_item__get_item_context_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 4);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_item__get_item_context_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module1)
	MR_init_entry1(fn__parse_tree__prog_item__default_mutable_attributes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_item__default_mutable_attributes_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_mutable_attributes'/1 mode 0 */
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


MR_BEGIN_MODULE(parse_tree__prog_item_module2)
	MR_init_entry1(fn__parse_tree__prog_item__mutable_var_trailed_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_item__mutable_var_trailed_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_var_trailed'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_item__mutable_var_trailed_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module3)
	MR_init_entry1(fn__parse_tree__prog_item__mutable_var_maybe_foreign_names_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_item__mutable_var_maybe_foreign_names_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_var_maybe_foreign_names'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_item__mutable_var_maybe_foreign_names_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module4)
	MR_init_entry1(fn__parse_tree__prog_item__mutable_var_constant_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_item__mutable_var_constant_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_var_constant'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_item__mutable_var_constant_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module5)
	MR_init_entry1(fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_var_attach_to_io_state'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_item__mutable_var_attach_to_io_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module6)
	MR_init_entry1(fn__parse_tree__prog_item__mutable_var_thread_local_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_item__mutable_var_thread_local_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutable_var_thread_local'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_item__mutable_var_thread_local_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module7)
	MR_init_entry1(parse_tree__prog_item__set_mutable_var_trailed_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_item__set_mutable_var_trailed_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_mutable_var_trailed'/3 mode 0 */
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
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module8)
	MR_init_entry1(parse_tree__prog_item__set_mutable_add_foreign_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_item__set_mutable_add_foreign_name_3_0);
	MR_init_label2(parse_tree__prog_item__set_mutable_add_foreign_name_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_mutable_add_foreign_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_item__set_mutable_add_foreign_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_r3 = MR_tfield(0, MR_tempr4, 1);
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
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_tempr3, 4);
	MR_r4 = MR_tfield(0, MR_tempr3, 3);
	MR_r5 = MR_tfield(0, MR_tempr3, 2);
	MR_GOTO_LAB(parse_tree__prog_item__set_mutable_add_foreign_name_3_0_i2);
	}
MR_def_label(parse_tree__prog_item__set_mutable_add_foreign_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_tempr3, 4);
	MR_r4 = MR_tfield(0, MR_tempr3, 3);
	MR_r5 = MR_tfield(0, MR_tempr3, 2);
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


MR_BEGIN_MODULE(parse_tree__prog_item_module9)
	MR_init_entry1(parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_mutable_var_attach_to_io_state'/3 mode 0 */
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
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module10)
	MR_init_entry1(parse_tree__prog_item__set_mutable_var_constant_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_item__set_mutable_var_constant_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_mutable_var_constant'/3 mode 0 */
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
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module11)
	MR_init_entry1(parse_tree__prog_item__set_mutable_var_thread_local_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_item__set_mutable_var_thread_local_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_mutable_var_thread_local'/3 mode 0 */
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
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(fn__map__values_1_0);
MR_decl_entry(fn__set__insert_list_2_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module12)
	MR_init_entry1(parse_tree__prog_item__get_item_list_foreign_code_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_item__get_item_list_foreign_code_5_0);
	MR_init_label5(parse_tree__prog_item__get_item_list_foreign_code_5_0,2,3,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_item_list_foreign_code'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_item__get_item_list_foreign_code_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__init_0_0,
		parse_tree__prog_item__get_item_list_foreign_code_5_0_i2);
MR_def_label(parse_tree__prog_item__get_item_list_foreign_code_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_item__get_item_list_foreign_code_5_0_i3);
MR_def_label(parse_tree__prog_item__get_item_list_foreign_code_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_item__get_item_foreign_code_4_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, module_foreign_info);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		parse_tree__prog_item__get_item_list_foreign_code_5_0_i6);
MR_def_label(parse_tree__prog_item__get_item_list_foreign_code_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		parse_tree__prog_item__get_item_list_foreign_code_5_0_i7);
MR_def_label(parse_tree__prog_item__get_item_list_foreign_code_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__insert_list_2_0,
		parse_tree__prog_item__get_item_list_foreign_code_5_0_i8);
MR_def_label(parse_tree__prog_item__get_item_list_foreign_code_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_backend_foreign_languages_2_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(fn__set__insert_2_0);
MR_decl_entry(fn__parse_tree__prog_data__get_foreign_language_1_0);
MR_decl_entry(fn__map__elem_2_0);
MR_decl_entry(fn__parse_tree__prog_foreign__prefer_foreign_language_4_0);
MR_decl_entry(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module13)
	MR_init_entry1(parse_tree__prog_item__do_get_item_foreign_code_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_item__do_get_item_foreign_code_5_0);
	MR_init_label10(parse_tree__prog_item__do_get_item_foreign_code_5_0,2,3,7,4,5,13,15,18,14,23)
	MR_init_label10(parse_tree__prog_item__do_get_item_foreign_code_5_0,25,11,32,34,29,30,39,36,37,45)
	MR_init_label2(parse_tree__prog_item__do_get_item_foreign_code_5_0,49,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_get_item_foreign_code'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_item__do_get_item_foreign_code_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(libs__globals__get_backend_foreign_languages_2_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i2);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i3);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i5);
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i7);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_tfield(0, MR_sv(4), 0);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i49);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i11);
	}
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i13);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__map__elem_2_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i15);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i14);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__prefer_foreign_language_4_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i18);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i44);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_sv(4), 1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i25);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i23);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i44);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_sv(4), 1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i25);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i30);
	}
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i32);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_tfield(0, MR_sv(4), 0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i34);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i37);
	}
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i39);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,3)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i45);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i44);
	}
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(parse_tree__prog_item__do_get_item_foreign_code_5_0_i44);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_tfield(0, MR_sv(4), 0);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__set__insert_2_0,
		parse_tree__prog_item__do_get_item_foreign_code_5_0_i49);
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(parse_tree__prog_item__do_get_item_foreign_code_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module14)
	MR_init_entry1(parse_tree__prog_item__get_item_foreign_code_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_item__get_item_foreign_code_4_0);
	MR_init_label7(parse_tree__prog_item__get_item_foreign_code_4_0,2,7,5,11,10,13,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_item_foreign_code'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_item__get_item_foreign_code_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(parse_tree__prog_item__get_item_foreign_code_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr2, 2);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_item__do_get_item_foreign_code_5_0);
	}
MR_def_label(parse_tree__prog_item__get_item_foreign_code_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(parse_tree__prog_item__get_item_foreign_code_4_0_i5);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		parse_tree__prog_item__get_item_foreign_code_4_0_i7);
MR_def_label(parse_tree__prog_item__get_item_foreign_code_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_item__get_item_foreign_code_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(parse_tree__prog_item__get_item_foreign_code_4_0_i11);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(parse_tree__prog_item__get_item_foreign_code_4_0_i10);
MR_def_label(parse_tree__prog_item__get_item_foreign_code_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(parse_tree__prog_item__get_item_foreign_code_4_0_i9);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
MR_def_label(parse_tree__prog_item__get_item_foreign_code_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__set__insert_2_0,
		parse_tree__prog_item__get_item_foreign_code_4_0_i13);
MR_def_label(parse_tree__prog_item__get_item_foreign_code_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_item__get_item_foreign_code_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(__Unify___pair__pair_2_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module15)
	MR_init_entry1(__Unify___parse_tree__prog_item__catch_any_expr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__catch_any_expr_0_0);
	MR_init_label3(__Unify___parse_tree__prog_item__catch_any_expr_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__catch_any_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__catch_any_expr_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___parse_tree__prog_item__catch_any_expr_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__catch_any_expr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__catch_any_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__catch_any_expr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__catch_any_expr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(__Compare___pair__pair_2_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module16)
	MR_init_entry1(__Compare___parse_tree__prog_item__catch_any_expr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__catch_any_expr_0_0);
	MR_init_label4(__Compare___parse_tree__prog_item__catch_any_expr_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__catch_any_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__catch_any_expr_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__catch_any_expr_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__catch_any_expr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__catch_any_expr_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___parse_tree__prog_item__catch_any_expr_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__catch_any_expr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__catch_any_expr_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__catch_any_expr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__term_1_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module17)
	MR_init_entry1(__Unify___parse_tree__prog_item__catch_expr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__catch_expr_0_0);
	MR_init_label3(__Unify___parse_tree__prog_item__catch_expr_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__catch_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__catch_expr_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__term_1_0,
		__Unify___parse_tree__prog_item__catch_expr_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__catch_expr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__catch_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__catch_expr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__catch_expr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__term_1_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module18)
	MR_init_entry1(__Compare___parse_tree__prog_item__catch_expr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__catch_expr_0_0);
	MR_init_label4(__Compare___parse_tree__prog_item__catch_expr_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__catch_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__catch_expr_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__catch_expr_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__catch_expr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__catch_expr_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__term_1_0,
		__Compare___parse_tree__prog_item__catch_expr_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__catch_expr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__catch_expr_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__catch_expr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
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

MR_BEGIN_MODULE(parse_tree__prog_item_module19)
	MR_init_entry1(__Unify___parse_tree__prog_item__class_method_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__class_method_0_0);
	MR_init_label10(__Unify___parse_tree__prog_item__class_method_0_0,7,9,12,14,16,18,20,22,24,26)
	MR_init_label10(__Unify___parse_tree__prog_item__class_method_0_0,63,5,31,33,35,37,39,41,43,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__class_method_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i63);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr3, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr3, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr3, 10);
	MR_sv(11) = MR_tfield(0, MR_tempr3, 11);
	MR_sv(12) = MR_tfield(0, MR_tempr3, 12);
	MR_sv(13) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(14) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(15) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(16) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(17) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(18) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(19) = MR_tfield(0, MR_tempr4, 7);
	MR_sv(20) = MR_tfield(0, MR_tempr4, 8);
	MR_sv(21) = MR_tfield(0, MR_tempr4, 9);
	MR_sv(22) = MR_tfield(0, MR_tempr4, 10);
	MR_sv(23) = MR_tfield(0, MR_tempr4, 11);
	MR_sv(24) = MR_tfield(0, MR_tempr4, 12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i7);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i9);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i12);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,12)
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
		__Unify___parse_tree__prog_item__class_method_0_0_i14);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i16);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i18);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i20);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i22);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__condition_0_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i24);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,24)
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
		__Unify___parse_tree__prog_item__class_method_0_0_i26);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(24);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(1, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(1, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(1, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(1, MR_tempr2, 7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i31);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i33);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i35);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i37);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i39);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i41);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__class_method_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__condition_0_0,
		__Unify___parse_tree__prog_item__class_method_0_0_i43);
MR_def_label(__Unify___parse_tree__prog_item__class_method_0_0,43)
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
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(25);
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

MR_BEGIN_MODULE(parse_tree__prog_item_module20)
	MR_init_entry1(__Compare___parse_tree__prog_item__class_method_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__class_method_0_0);
	MR_init_label10(__Compare___parse_tree__prog_item__class_method_0_0,3,2,9,13,18,22,26,30,34,38)
	MR_init_label10(__Compare___parse_tree__prog_item__class_method_0_0,42,46,50,54,7,5,71,73,77,81)
	MR_init_label5(__Compare___parse_tree__prog_item__class_method_0_0,85,89,93,97,208)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__class_method_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i3);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 12);
	MR_tempr6 = MR_sv(2);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i18);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i22);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i26);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i30);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i34);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i38);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i42);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__condition_0_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i46);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i50);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__prog_constraints_0_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i54);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i71);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(14) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(13) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(12) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(1, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(1, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(1, MR_tempr5, 6);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 7);
	MR_tempr6 = MR_sv(2);
	MR_sv(7) = MR_tfield(1, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(1, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(1, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i73);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i77);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i81);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i85);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i89);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i93);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__condition_0_0,
		__Compare___parse_tree__prog_item__class_method_0_0_i97);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__class_method_0_0_i208);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___parse_tree__prog_item__class_method_0_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module21)
	MR_init_entry1(__Unify___parse_tree__prog_item__class_methods_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__class_methods_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(parse_tree__prog_item_module22)
	MR_init_entry1(__Compare___parse_tree__prog_item__class_methods_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__class_methods_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(parse_tree__prog_item_module23)
	MR_init_entry1(__Unify___parse_tree__prog_item__compilation_unit_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__compilation_unit_0_0);
	MR_init_label3(__Unify___parse_tree__prog_item__compilation_unit_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__compilation_unit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__compilation_unit_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__compilation_unit_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__compilation_unit_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__compilation_unit_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_item__compilation_unit_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__compilation_unit_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module24)
	MR_init_entry1(__Compare___parse_tree__prog_item__compilation_unit_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__compilation_unit_0_0);
	MR_init_label4(__Compare___parse_tree__prog_item__compilation_unit_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__compilation_unit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__compilation_unit_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__compilation_unit_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__compilation_unit_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__compilation_unit_0_0,2)
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__compilation_unit_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__compilation_unit_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__compilation_unit_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__compilation_unit_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module25)
	MR_init_entry1(__Unify___parse_tree__prog_item__contains_foreign_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__contains_foreign_code_0_0);
	MR_init_label3(__Unify___parse_tree__prog_item__contains_foreign_code_0_0,5,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__contains_foreign_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__contains_foreign_code_0_0_i13);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__contains_foreign_code_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_item__contains_foreign_code_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__contains_foreign_code_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___parse_tree__prog_item__contains_foreign_code_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__contains_foreign_code_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module26)
	MR_init_entry1(__Compare___parse_tree__prog_item__contains_foreign_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__contains_foreign_code_0_0);
	MR_init_label6(__Compare___parse_tree__prog_item__contains_foreign_code_0_0,34,13,44,5,38,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__contains_foreign_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__contains_foreign_code_0_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__contains_foreign_code_0_0_i5);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__contains_foreign_code_0_0_i13);
	}
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__contains_foreign_code_0_0_i44);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__contains_foreign_code_0_0_i38);
	}
	}
MR_def_label(__Compare___parse_tree__prog_item__contains_foreign_code_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_item__contains_foreign_code_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__contains_foreign_code_0_0_i44);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__contains_foreign_code_0_0_i34);
	}
	}
MR_def_label(__Compare___parse_tree__prog_item__contains_foreign_code_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_item__contains_foreign_code_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__contains_foreign_code_0_0_i7);
	}
	}
MR_def_label(__Compare___parse_tree__prog_item__contains_foreign_code_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_item__contains_foreign_code_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module27)
	MR_init_entry1(__Unify___parse_tree__prog_item__contains_foreign_export_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__contains_foreign_export_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__contains_foreign_export_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module28)
	MR_init_entry1(__Compare___parse_tree__prog_item__contains_foreign_export_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__contains_foreign_export_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__contains_foreign_export_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module29)
	MR_init_entry1(__Unify___parse_tree__prog_item__foreign_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__foreign_name_0_0);
	MR_init_label2(__Unify___parse_tree__prog_item__foreign_name_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__foreign_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__foreign_name_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__foreign_name_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_item__foreign_name_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__foreign_name_0_0,1)
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

MR_BEGIN_MODULE(parse_tree__prog_item_module30)
	MR_init_entry1(__Compare___parse_tree__prog_item__foreign_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__foreign_name_0_0);
	MR_init_label4(__Compare___parse_tree__prog_item__foreign_name_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__foreign_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__foreign_name_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__foreign_name_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__foreign_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__foreign_name_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__foreign_name_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__foreign_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__foreign_name_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__foreign_name_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module31)
	MR_init_entry1(__Unify___parse_tree__prog_item__goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__goal_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(parse_tree__prog_item_module32)
	MR_init_entry1(__Compare___parse_tree__prog_item__goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__goal_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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

MR_decl_entry(__Unify___parse_tree__prog_data__atomic_component_state_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module33)
	MR_init_entry1(__Unify___parse_tree__prog_item__goal_expr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__goal_expr_0_0);
	MR_init_label10(__Unify___parse_tree__prog_item__goal_expr_0_0,183,41,43,88,90,187,5,8,12,15)
	MR_init_label10(__Unify___parse_tree__prog_item__goal_expr_0_0,19,21,23,27,30,34,36,39,47,49)
	MR_init_label10(__Unify___parse_tree__prog_item__goal_expr_0_0,53,55,59,65,68,70,72,74,78,80)
	MR_init_label10(__Unify___parse_tree__prog_item__goal_expr_0_0,84,94,97,99,101,105,108,110,112,116)
	MR_init_label10(__Unify___parse_tree__prog_item__goal_expr_0_0,119,121,123,127,131,134,138,141,145,148)
	MR_init_label10(__Unify___parse_tree__prog_item__goal_expr_0_0,151,154,156,161,164,167,169,171,173,177)
	MR_init_label4(__Unify___parse_tree__prog_item__goal_expr_0_0,179,181,188,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__goal_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i188);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i183) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i41) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i88) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i187));
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(12);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i43);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	MR_r4 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i90);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i47) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i131) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i138) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i127) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i116) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i105) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i94) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i145) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i19) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i161) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i78) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i53) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i84) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i65) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i59) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i34) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__goal_expr_0_0_i177));
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i15);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__atomic_component_state_0_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i21);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__atomic_component_state_0_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i23);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i27);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i30);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i36);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i39);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(12);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i49);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i55);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	MR_r3 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i68);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i70);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i72);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i74);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i80);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_tfield(3, MR_sv(1), 1);
	MR_r4 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i97);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i99);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i101);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i108);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i110);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i112);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i119);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i121);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i123);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_tfield(3, MR_tempr3, 2);
	MR_r4 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i134);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i141);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i148);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i151);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i154);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i156);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i164);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i167);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i169);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i171);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, catch_expr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i173);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, catch_any_expr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__term_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i179);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__term_1_0,
		__Unify___parse_tree__prog_item__goal_expr_0_0_i181);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__goal_expr_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(12);
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__goal_expr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module34)
	MR_init_entry1(__Index___parse_tree__prog_item__goal_expr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___parse_tree__prog_item__goal_expr_0_0);
	MR_init_label10(__Index___parse_tree__prog_item__goal_expr_0_0,26,11,7,15,30,3,4,5,6,8)
	MR_init_label10(__Index___parse_tree__prog_item__goal_expr_0_0,9,10,12,13,14,16,17,18,19,20)
	MR_init_label4(__Index___parse_tree__prog_item__goal_expr_0_0,21,22,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___parse_tree__prog_item__goal_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i26) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i30));
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(__Index___parse_tree__prog_item__goal_expr_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i3) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__goal_expr_0_0_i25));
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__goal_expr_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__atomic_component_state_0_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module35)
	MR_init_entry1(__Compare___parse_tree__prog_item__goal_expr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__goal_expr_0_0);
	MR_init_label10(__Compare___parse_tree__prog_item__goal_expr_0_0,4,5,6,7,305,68,71,138,141,309)
	MR_init_label10(__Compare___parse_tree__prog_item__goal_expr_0_0,10,14,19,23,28,31,35,41,45,54)
	MR_init_label10(__Compare___parse_tree__prog_item__goal_expr_0_0,57,62,76,79,84,87,92,95,102,106)
	MR_init_label10(__Compare___parse_tree__prog_item__goal_expr_0_0,111,115,119,127,130,135,146,150,155,160)
	MR_init_label10(__Compare___parse_tree__prog_item__goal_expr_0_0,167,171,176,181,188,192,197,202,209,212)
	MR_init_label10(__Compare___parse_tree__prog_item__goal_expr_0_0,217,221,226,230,235,239,244,249,253,262)
	MR_init_label10(__Compare___parse_tree__prog_item__goal_expr_0_0,266,270,274,279,283,292,295,299,8,314)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__goal_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i305);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__goal_expr_0_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i4);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__goal_expr_0_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i305) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i68) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i138) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i309));
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i71);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_tfield(2, MR_tempr3, 0);
	MR_r4 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i141);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i76) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i217) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i226) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i209) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i188) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i167) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i146) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i235) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i28) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i262) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i127) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i84) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i135) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i102) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i92) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i54) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__goal_expr_0_0_i292));
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i14);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i23);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__atomic_component_state_0_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i31);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__atomic_component_state_0_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i35);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i41);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i45);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i57);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i62);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_tfield(3, MR_tempr3, 1);
	MR_r4 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i79);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_tfield(3, MR_tempr3, 1);
	MR_r4 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i87);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i95);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i106);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i111);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i115);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i119);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_tfield(3, MR_tempr3, 1);
	MR_r4 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i130);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_tfield(3, MR_sv(1), 1);
	MR_r4 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i150);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i155);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i160);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i171);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i176);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i181);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i192);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i197);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i202);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i212);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i221);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i230);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i239);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i244);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i249);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i253);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 6);
	MR_sv(9) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_tfield(3, MR_tempr6, 6);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i266);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i270);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i274);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i279);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, catch_expr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i283);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, catch_any_expr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___term__term_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i295);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___term__term_1_0,
		__Compare___parse_tree__prog_item__goal_expr_0_0_i299);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__goal_expr_0_0_i314);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___parse_tree__prog_item__goal_expr_0_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module36)
	MR_init_entry1(__Unify___parse_tree__prog_item__goals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__goals_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
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


MR_BEGIN_MODULE(parse_tree__prog_item_module37)
	MR_init_entry1(__Compare___parse_tree__prog_item__goals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__goals_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
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


MR_BEGIN_MODULE(parse_tree__prog_item_module38)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_0_0);
	MR_init_label10(__Unify___parse_tree__prog_item__item_0_0,33,5,57,68,9,13,17,21,25,29)
	MR_init_label8(__Unify___parse_tree__prog_item__item_0_0,37,41,45,49,53,61,69,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i69);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i33) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i57) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i68));
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_module_defn_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_clause_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_type_defn_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i29) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i49) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i45) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i53) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i61) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i21) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i37) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__item_0_0_i41));
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_finalise_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_initialise_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_instance_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_mutable_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_nothing_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_pragma_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_promise_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_item__item_typeclass_info_0_0);
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module39)
	MR_init_entry1(__Index___parse_tree__prog_item__item_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___parse_tree__prog_item__item_0_0);
	MR_init_label10(__Index___parse_tree__prog_item__item_0_0,10,3,16,21,4,5,6,7,8,9)
	MR_init_label6(__Index___parse_tree__prog_item__item_0_0,11,12,13,14,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___parse_tree__prog_item__item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i3) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i21));
MR_def_label(__Index___parse_tree__prog_item__item_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__item_0_0_i12));
MR_def_label(__Index___parse_tree__prog_item__item_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__item_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module40)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_0_0);
	MR_init_label10(__Compare___parse_tree__prog_item__item_0_0,3,2,4,5,6,7,31,10,49,58)
	MR_init_label10(__Compare___parse_tree__prog_item__item_0_0,13,16,19,22,25,28,34,37,40,43)
	MR_init_label3(__Compare___parse_tree__prog_item__item_0_0,46,52,156)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__item_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i4);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__item_0_0,
		__Compare___parse_tree__prog_item__item_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i31) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i58));
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_module_defn_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_clause_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_type_defn_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i28) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i43) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i25) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i40) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i52) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i16) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i13) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i34) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__item_0_0_i37));
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_finalise_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_initialise_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_instance_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_mutable_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_nothing_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_pragma_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_promise_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_0_0_i156);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_item__item_typeclass_info_0_0);
MR_def_label(__Compare___parse_tree__prog_item__item_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module41)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_clause_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_clause_info_0_0);
	MR_init_label8(__Unify___parse_tree__prog_item__item_clause_info_0_0,4,6,8,11,13,15,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_clause_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_clause_info_0_0_i17);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__item_origin_0_0,
		__Unify___parse_tree__prog_item__item_clause_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_clause_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_clause_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_clause_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_clause_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_clause_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_clause_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_clause_info_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__item_clause_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_clause_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_clause_info_0_0_i11);
MR_def_label(__Unify___parse_tree__prog_item__item_clause_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_clause_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__item_clause_info_0_0_i13);
MR_def_label(__Unify___parse_tree__prog_item__item_clause_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_clause_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_clause_info_0_0_i15);
MR_def_label(__Unify___parse_tree__prog_item__item_clause_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_clause_info_0_0_i1);
	}
	MR_r1 = (MR_sv(7) == MR_sv(14));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__item_clause_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_clause_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module42)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_clause_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_clause_info_0_0);
	MR_init_label10(__Compare___parse_tree__prog_item__item_clause_info_0_0,3,2,5,9,13,17,22,26,30,70)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_clause_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_clause_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_clause_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_clause_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_clause_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__item_origin_0_0,
		__Compare___parse_tree__prog_item__item_clause_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_clause_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_clause_info_0_0_i70);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_clause_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_clause_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_clause_info_0_0_i70);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__item_clause_info_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__item_clause_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_clause_info_0_0_i70);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_clause_info_0_0_i17);
MR_def_label(__Compare___parse_tree__prog_item__item_clause_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_clause_info_0_0_i70);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_clause_info_0_0_i22);
MR_def_label(__Compare___parse_tree__prog_item__item_clause_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_clause_info_0_0_i70);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__item_clause_info_0_0_i26);
MR_def_label(__Compare___parse_tree__prog_item__item_clause_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_clause_info_0_0_i70);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_clause_info_0_0_i30);
MR_def_label(__Compare___parse_tree__prog_item__item_clause_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_clause_info_0_0_i70);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_clause_info_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module43)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_compiler_origin_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_compiler_origin_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(parse_tree__prog_item_module44)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_compiler_origin_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_compiler_origin_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(parse_tree__prog_item_module45)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_finalise_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_finalise_info_0_0);
	MR_init_label5(__Unify___parse_tree__prog_item__item_finalise_info_0_0,4,6,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_finalise_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_finalise_info_0_0_i10);
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
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__item_origin_0_0,
		__Unify___parse_tree__prog_item__item_finalise_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_finalise_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_finalise_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_finalise_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_finalise_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_finalise_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_finalise_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_finalise_info_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__item_finalise_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_finalise_info_0_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___parse_tree__prog_item__item_finalise_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_finalise_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module46)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_finalise_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_finalise_info_0_0);
	MR_init_label7(__Compare___parse_tree__prog_item__item_finalise_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_finalise_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_finalise_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_finalise_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_finalise_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_finalise_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__item_origin_0_0,
		__Compare___parse_tree__prog_item__item_finalise_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_finalise_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_finalise_info_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_finalise_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_finalise_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_finalise_info_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__item_finalise_info_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__item_finalise_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_finalise_info_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_finalise_info_0_0_i17);
MR_def_label(__Compare___parse_tree__prog_item__item_finalise_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_finalise_info_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_finalise_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module47)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_initialise_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_initialise_info_0_0);
	MR_init_label5(__Unify___parse_tree__prog_item__item_initialise_info_0_0,4,6,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_initialise_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_initialise_info_0_0_i10);
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
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__item_origin_0_0,
		__Unify___parse_tree__prog_item__item_initialise_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_initialise_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_initialise_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_initialise_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_initialise_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_initialise_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_initialise_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_initialise_info_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__item_initialise_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_initialise_info_0_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___parse_tree__prog_item__item_initialise_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_initialise_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module48)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_initialise_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_initialise_info_0_0);
	MR_init_label7(__Compare___parse_tree__prog_item__item_initialise_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_initialise_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_initialise_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_initialise_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_initialise_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_initialise_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__item_origin_0_0,
		__Compare___parse_tree__prog_item__item_initialise_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_initialise_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_initialise_info_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_initialise_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_initialise_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_initialise_info_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__item_initialise_info_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__item_initialise_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_initialise_info_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_initialise_info_0_0_i17);
MR_def_label(__Compare___parse_tree__prog_item__item_initialise_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_initialise_info_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_initialise_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__inst_defn_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module49)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_inst_defn_info_0_0);
	MR_init_label8(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0,4,6,9,11,13,15,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_inst_defn_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i17);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i9);
MR_def_label(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__inst_defn_0_0,
		__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i11);
MR_def_label(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__condition_0_0,
		__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i13);
MR_def_label(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i15);
MR_def_label(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(12));
	MR_decr_sp_and_return(13);
MR_def_label(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_inst_defn_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__inst_defn_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module50)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_inst_defn_info_0_0);
	MR_init_label9(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0,3,2,5,9,14,18,22,26,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_inst_defn_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i62);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i14);
MR_def_label(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__inst_defn_0_0,
		__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i18);
MR_def_label(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__condition_0_0,
		__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i22);
MR_def_label(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i26);
MR_def_label(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_inst_defn_info_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__instance_body_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module51)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_instance_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_instance_info_0_0);
	MR_init_label9(__Unify___parse_tree__prog_item__item_instance_info_0_0,4,6,8,10,12,14,16,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_instance_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_instance_info_0_0_i18);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_instance_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_instance_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_instance_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_instance_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_instance_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_instance_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_instance_info_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__item_instance_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_instance_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__instance_body_0_0,
		__Unify___parse_tree__prog_item__item_instance_info_0_0_i10);
MR_def_label(__Unify___parse_tree__prog_item__item_instance_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_instance_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_instance_info_0_0_i12);
MR_def_label(__Unify___parse_tree__prog_item__item_instance_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_instance_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_instance_info_0_0_i14);
MR_def_label(__Unify___parse_tree__prog_item__item_instance_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_instance_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_instance_info_0_0_i16);
MR_def_label(__Unify___parse_tree__prog_item__item_instance_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_instance_info_0_0_i1);
	}
	MR_r1 = (MR_sv(7) == MR_sv(14));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__item_instance_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_instance_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__instance_body_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module52)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_instance_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_instance_info_0_0);
	MR_init_label10(__Compare___parse_tree__prog_item__item_instance_info_0_0,3,2,5,9,13,17,21,25,29,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_instance_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_instance_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_instance_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_instance_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_instance_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_instance_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_instance_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_instance_info_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_instance_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_instance_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_instance_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_instance_info_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__item_instance_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_instance_info_0_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__instance_body_0_0,
		__Compare___parse_tree__prog_item__item_instance_info_0_0_i17);
MR_def_label(__Compare___parse_tree__prog_item__item_instance_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_instance_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_instance_info_0_0_i21);
MR_def_label(__Compare___parse_tree__prog_item__item_instance_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_instance_info_0_0_i69);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_instance_info_0_0_i25);
MR_def_label(__Compare___parse_tree__prog_item__item_instance_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_instance_info_0_0_i69);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_instance_info_0_0_i29);
MR_def_label(__Compare___parse_tree__prog_item__item_instance_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_instance_info_0_0_i69);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_instance_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module53)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_mode_decl_info_0_0);
	MR_init_label10(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0,4,6,8,10,12,14,16,18,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_mode_decl_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i20);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i10);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i12);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i14);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__condition_0_0,
		__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i16);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i18);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0_i1);
	}
	MR_r1 = (MR_sv(8) == MR_sv(16));
	MR_decr_sp_and_return(17);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_mode_decl_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module54)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_mode_decl_info_0_0);
	MR_init_label10(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label1(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,77)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_mode_decl_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i77);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i17);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i21);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i25);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i77);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__condition_0_0,
		__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i29);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i77);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i33);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0_i77);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_decl_info_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mode_defn_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module55)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_mode_defn_info_0_0);
	MR_init_label8(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0,4,6,9,11,13,15,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_mode_defn_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i17);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i9);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mode_defn_0_0,
		__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i11);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__condition_0_0,
		__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i13);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i15);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(12));
	MR_decr_sp_and_return(13);
MR_def_label(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_mode_defn_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mode_defn_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module56)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_mode_defn_info_0_0);
	MR_init_label9(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0,3,2,5,9,14,18,22,26,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_mode_defn_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i62);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i14);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mode_defn_0_0,
		__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i18);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__condition_0_0,
		__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i22);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i26);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_mode_defn_info_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module57)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_module_defn_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_module_defn_info_0_0);
	MR_init_label4(__Unify___parse_tree__prog_item__item_module_defn_info_0_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_module_defn_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_module_defn_info_0_0_i8);
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__module_defn_0_0,
		__Unify___parse_tree__prog_item__item_module_defn_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_module_defn_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_module_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_module_defn_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_module_defn_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_module_defn_info_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___parse_tree__prog_item__item_module_defn_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_module_defn_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module58)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_module_defn_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_module_defn_info_0_0);
	MR_init_label5(__Compare___parse_tree__prog_item__item_module_defn_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_module_defn_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_module_defn_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_module_defn_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_module_defn_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_module_defn_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__module_defn_0_0,
		__Compare___parse_tree__prog_item__item_module_defn_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_module_defn_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_module_defn_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_module_defn_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_module_defn_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_module_defn_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_module_defn_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module59)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_mutable_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_mutable_info_0_0);
	MR_init_label8(__Unify___parse_tree__prog_item__item_mutable_info_0_0,4,6,8,10,12,14,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_mutable_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mutable_info_0_0_i16);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mutable_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(7) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr4, 7);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___parse_tree__prog_item__item_mutable_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_mutable_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mutable_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___term__term_1_0,
		__Unify___parse_tree__prog_item__item_mutable_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_mutable_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mutable_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___parse_tree__prog_item__item_mutable_info_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__item_mutable_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mutable_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0,
		__Unify___parse_tree__prog_item__item_mutable_info_0_0_i10);
MR_def_label(__Unify___parse_tree__prog_item__item_mutable_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mutable_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_mutable_info_0_0_i12);
MR_def_label(__Unify___parse_tree__prog_item__item_mutable_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mutable_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_mutable_info_0_0_i14);
MR_def_label(__Unify___parse_tree__prog_item__item_mutable_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_mutable_info_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(12));
	MR_decr_sp_and_return(13);
MR_def_label(__Unify___parse_tree__prog_item__item_mutable_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_mutable_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module60)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_mutable_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_mutable_info_0_0);
	MR_init_label10(__Compare___parse_tree__prog_item__item_mutable_info_0_0,3,2,5,9,13,17,21,25,29,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_mutable_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mutable_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mutable_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_mutable_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_mutable_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_item__item_mutable_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_mutable_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mutable_info_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___parse_tree__prog_item__item_mutable_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_mutable_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mutable_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___term__term_1_0,
		__Compare___parse_tree__prog_item__item_mutable_info_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__item_mutable_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mutable_info_0_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___parse_tree__prog_item__item_mutable_info_0_0_i17);
MR_def_label(__Compare___parse_tree__prog_item__item_mutable_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mutable_info_0_0_i69);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,
		__Compare___parse_tree__prog_item__item_mutable_info_0_0_i21);
MR_def_label(__Compare___parse_tree__prog_item__item_mutable_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mutable_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_mutable_info_0_0_i25);
MR_def_label(__Compare___parse_tree__prog_item__item_mutable_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mutable_info_0_0_i69);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_mutable_info_0_0_i29);
MR_def_label(__Compare___parse_tree__prog_item__item_mutable_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_mutable_info_0_0_i69);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_mutable_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module61)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_nothing_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_nothing_info_0_0);
	MR_init_label4(__Unify___parse_tree__prog_item__item_nothing_info_0_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_nothing_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_nothing_info_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item_warning);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_nothing_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_nothing_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_nothing_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_nothing_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_nothing_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_nothing_info_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___parse_tree__prog_item__item_nothing_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_nothing_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module62)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_nothing_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_nothing_info_0_0);
	MR_init_label5(__Compare___parse_tree__prog_item__item_nothing_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_nothing_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_nothing_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_nothing_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_nothing_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_nothing_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item_warning);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_nothing_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_nothing_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_nothing_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_nothing_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_nothing_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_nothing_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_nothing_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module63)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_origin_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_origin_0_0);
	MR_init_label3(__Unify___parse_tree__prog_item__item_origin_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_origin_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_origin_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_origin_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_item__item_origin_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_origin_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_origin_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_item__item_origin_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module64)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_origin_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_origin_0_0);
	MR_init_label4(__Compare___parse_tree__prog_item__item_origin_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_origin_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_origin_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_origin_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_origin_0_0_i7);
	}
MR_def_label(__Compare___parse_tree__prog_item__item_origin_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_item__item_origin_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_item__item_origin_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_origin_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_item__item_origin_0_0,9)
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


MR_BEGIN_MODULE(parse_tree__prog_item_module65)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_pragma_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_pragma_info_0_0);
	MR_init_label5(__Unify___parse_tree__prog_item__item_pragma_info_0_0,4,6,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_pragma_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pragma_info_0_0_i10);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__item_origin_0_0,
		__Unify___parse_tree__prog_item__item_pragma_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_pragma_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pragma_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__pragma_type_0_0,
		__Unify___parse_tree__prog_item__item_pragma_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_pragma_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pragma_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_pragma_info_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__item_pragma_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pragma_info_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___parse_tree__prog_item__item_pragma_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_pragma_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module66)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_pragma_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_pragma_info_0_0);
	MR_init_label6(__Compare___parse_tree__prog_item__item_pragma_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_pragma_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pragma_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pragma_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_pragma_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_pragma_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__item_origin_0_0,
		__Compare___parse_tree__prog_item__item_pragma_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_pragma_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pragma_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__pragma_type_0_0,
		__Compare___parse_tree__prog_item__item_pragma_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_pragma_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pragma_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_pragma_info_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__item_pragma_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pragma_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_pragma_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module67)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_pred_decl_info_0_0);
	MR_init_label10(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,4,6,8,11,13,15,17,19,21,23)
	MR_init_label4(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,25,27,29,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_pred_decl_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i29);
	}
	MR_incr_sp(29);
	MR_sv(29) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 13);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 14);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(19) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(21) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(22) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(23) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(24) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(25) = MR_tfield(0, MR_tempr2, 11);
	MR_sv(26) = MR_tfield(0, MR_tempr2, 12);
	MR_sv(27) = MR_tfield(0, MR_tempr2, 13);
	MR_sv(28) = MR_tfield(0, MR_tempr2, 14);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_item__item_origin_0_0,
		__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i11);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(18))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i13);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i15);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i17);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i19);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i21);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__condition_0_0,
		__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i23);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	if ((MR_sv(11) != MR_sv(25))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__prog_constraints_0_0,
		__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i25);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i27);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0_i1);
	}
	MR_r1 = (MR_sv(14) == MR_sv(28));
	MR_decr_sp_and_return(29);
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_pred_decl_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(29);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module68)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_pred_decl_info_0_0);
	MR_init_label10(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,3,2,5,9,13,18,22,26,30,34)
	MR_init_label7(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,38,42,46,50,54,58,126)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_pred_decl_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i3);
	}
	MR_incr_sp(29);
	MR_sv(29) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(28) = MR_tfield(0, MR_tempr5, 14);
	MR_sv(27) = MR_tfield(0, MR_tempr5, 13);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(25) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(14) = MR_tfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_tfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_item__item_origin_0_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i18);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i22);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i26);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_and_mode);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i30);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i34);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i38);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i42);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__condition_0_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i46);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i50);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__prog_constraints_0_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i54);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i58);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0_i126);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(28);
	MR_succip_word = MR_sv(29);
	MR_decr_sp(29);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_pred_decl_info_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(29);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module69)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_promise_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_promise_info_0_0);
	MR_init_label6(__Unify___parse_tree__prog_item__item_promise_info_0_0,4,6,9,11,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_promise_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_promise_info_0_0_i13);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_promise_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr4, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_tfield(0, MR_tempr3, 1);
	MR_r4 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___parse_tree__prog_item__item_promise_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_promise_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_promise_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_promise_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_promise_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_promise_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_promise_info_0_0_i9);
MR_def_label(__Unify___parse_tree__prog_item__item_promise_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_promise_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_promise_info_0_0_i11);
MR_def_label(__Unify___parse_tree__prog_item__item_promise_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_promise_info_0_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___parse_tree__prog_item__item_promise_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_promise_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module70)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_promise_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_promise_info_0_0);
	MR_init_label8(__Compare___parse_tree__prog_item__item_promise_info_0_0,3,2,5,9,13,18,22,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_promise_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_promise_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_promise_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_promise_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_promise_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__item_promise_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_promise_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_promise_info_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___parse_tree__prog_item__item_promise_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_promise_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_promise_info_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_promise_info_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__item_promise_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_promise_info_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_promise_info_0_0_i18);
MR_def_label(__Compare___parse_tree__prog_item__item_promise_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_promise_info_0_0_i54);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_promise_info_0_0_i22);
MR_def_label(__Compare___parse_tree__prog_item__item_promise_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_promise_info_0_0_i54);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_promise_info_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__type_defn_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module71)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_type_defn_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_type_defn_info_0_0);
	MR_init_label8(__Unify___parse_tree__prog_item__item_type_defn_info_0_0,4,6,9,11,13,15,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_type_defn_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i17);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_type_defn_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_type_defn_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i9);
MR_def_label(__Unify___parse_tree__prog_item__item_type_defn_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__type_defn_0_0,
		__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i11);
MR_def_label(__Unify___parse_tree__prog_item__item_type_defn_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__condition_0_0,
		__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i13);
MR_def_label(__Unify___parse_tree__prog_item__item_type_defn_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i15);
MR_def_label(__Unify___parse_tree__prog_item__item_type_defn_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_type_defn_info_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(12));
	MR_decr_sp_and_return(13);
MR_def_label(__Unify___parse_tree__prog_item__item_type_defn_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_type_defn_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__type_defn_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module72)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_type_defn_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_type_defn_info_0_0);
	MR_init_label9(__Compare___parse_tree__prog_item__item_type_defn_info_0_0,3,2,5,9,14,18,22,26,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_type_defn_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_type_defn_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_type_defn_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_type_defn_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_type_defn_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i62);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i14);
MR_def_label(__Compare___parse_tree__prog_item__item_type_defn_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__type_defn_0_0,
		__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i18);
MR_def_label(__Compare___parse_tree__prog_item__item_type_defn_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__condition_0_0,
		__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i22);
MR_def_label(__Compare___parse_tree__prog_item__item_type_defn_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i26);
MR_def_label(__Compare___parse_tree__prog_item__item_type_defn_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_type_defn_info_0_0_i62);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_type_defn_info_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__class_interface_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module73)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_typeclass_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_typeclass_info_0_0);
	MR_init_label9(__Unify___parse_tree__prog_item__item_typeclass_info_0_0,4,6,8,11,13,15,17,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_typeclass_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i19);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_typeclass_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_fundep);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__item_typeclass_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__item_typeclass_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i11);
MR_def_label(__Unify___parse_tree__prog_item__item_typeclass_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__class_interface_0_0,
		__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i13);
MR_def_label(__Unify___parse_tree__prog_item__item_typeclass_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i15);
MR_def_label(__Unify___parse_tree__prog_item__item_typeclass_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i17);
MR_def_label(__Unify___parse_tree__prog_item__item_typeclass_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_typeclass_info_0_0_i1);
	}
	MR_r1 = (MR_sv(7) == MR_sv(14));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__item_typeclass_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_typeclass_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__class_interface_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module74)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_typeclass_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_typeclass_info_0_0);
	MR_init_label10(__Compare___parse_tree__prog_item__item_typeclass_info_0_0,3,2,5,9,13,18,22,26,30,70)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_typeclass_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_typeclass_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_typeclass_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_typeclass_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i70);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_fundep);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_typeclass_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i70);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__item_typeclass_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i70);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i18);
MR_def_label(__Compare___parse_tree__prog_item__item_typeclass_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i70);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__class_interface_0_0,
		__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i22);
MR_def_label(__Compare___parse_tree__prog_item__item_typeclass_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i70);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i26);
MR_def_label(__Compare___parse_tree__prog_item__item_typeclass_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i70);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i30);
MR_def_label(__Compare___parse_tree__prog_item__item_typeclass_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_typeclass_info_0_0_i70);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__item_typeclass_info_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module75)
	MR_init_entry1(__Unify___parse_tree__prog_item__item_warning_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__item_warning_0_0);
	MR_init_label3(__Unify___parse_tree__prog_item__item_warning_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__item_warning_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_warning_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__item_warning_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__item_warning_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_warning_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(3)) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__item_warning_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___term__term_1_0);
MR_def_label(__Unify___parse_tree__prog_item__item_warning_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__item_warning_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module76)
	MR_init_entry1(__Compare___parse_tree__prog_item__item_warning_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__item_warning_0_0);
	MR_init_label5(__Compare___parse_tree__prog_item__item_warning_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__item_warning_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_warning_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_warning_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__item_warning_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__item_warning_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__item_warning_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__item_warning_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_warning_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_item__item_warning_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__item_warning_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__item_warning_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___term__term_1_0);
MR_def_label(__Compare___parse_tree__prog_item__item_warning_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__sym_name_specifier_0_0);
MR_decl_entry(__Unify___recompilation__version_numbers_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module77)
	MR_init_entry1(__Unify___parse_tree__prog_item__module_defn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__module_defn_0_0);
	MR_init_label10(__Unify___parse_tree__prog_item__module_defn_0_0,32,6,54,10,14,16,21,25,27,38)
	MR_init_label6(__Unify___parse_tree__prog_item__module_defn_0_0,39,43,45,47,55,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__module_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i55);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i38) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i32) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i54));
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i43) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i14) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i21) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i39) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i27) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__module_defn_0_0_i45));
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, backend);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__module_defn_0_0_i16);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__sym_name_specifier_0_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__module_defn_0_0_i47);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_defn_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___recompilation__version_numbers_0_0);
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__module_defn_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module78)
	MR_init_entry1(__Index___parse_tree__prog_item__module_defn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___parse_tree__prog_item__module_defn_0_0);
	MR_init_label10(__Index___parse_tree__prog_item__module_defn_0_0,19,12,4,22,3,5,6,7,8,9)
	MR_init_label8(__Index___parse_tree__prog_item__module_defn_0_0,10,11,13,14,15,16,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___parse_tree__prog_item__module_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i22));
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i3) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i15));
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__module_defn_0_0_i18));
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__module_defn_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__sym_name_specifier_0_0);
MR_decl_entry(__Compare___recompilation__version_numbers_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module79)
	MR_init_entry1(__Compare___parse_tree__prog_item__module_defn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__module_defn_0_0);
	MR_init_label10(__Compare___parse_tree__prog_item__module_defn_0_0,4,5,6,7,36,11,59,14,17,20)
	MR_init_label10(__Compare___parse_tree__prog_item__module_defn_0_0,26,29,32,41,42,45,48,51,8,64)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__module_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i41);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__module_defn_0_0,
		__Compare___parse_tree__prog_item__module_defn_0_0_i4);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__module_defn_0_0,
		__Compare___parse_tree__prog_item__module_defn_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i36) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i11) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i59));
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i29) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i17) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i14) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i26) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i42) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i32) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__module_defn_0_0_i48));
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, backend);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__module_defn_0_0_i20);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i64);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__sym_name_specifier_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__module_defn_0_0_i51);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_defn_0_0_i64);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___recompilation__version_numbers_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___parse_tree__prog_item__module_defn_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module80)
	MR_init_entry1(__Unify___parse_tree__prog_item__module_foreign_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__module_foreign_info_0_0);
	MR_init_label5(__Unify___parse_tree__prog_item__module_foreign_info_0_0,4,6,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_item__module_foreign_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_foreign_info_0_0_i10);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___parse_tree__prog_item__module_foreign_info_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_item__module_foreign_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_foreign_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___parse_tree__prog_item__module_foreign_info_0_0_i6);
MR_def_label(__Unify___parse_tree__prog_item__module_foreign_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_foreign_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__module_foreign_info_0_0_i8);
MR_def_label(__Unify___parse_tree__prog_item__module_foreign_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__module_foreign_info_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___parse_tree__prog_item__module_foreign_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__module_foreign_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module81)
	MR_init_entry1(__Compare___parse_tree__prog_item__module_foreign_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__module_foreign_info_0_0);
	MR_init_label6(__Compare___parse_tree__prog_item__module_foreign_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_item__module_foreign_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_foreign_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_foreign_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__module_foreign_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__module_foreign_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___parse_tree__prog_item__module_foreign_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__module_foreign_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_foreign_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___parse_tree__prog_item__module_foreign_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_item__module_foreign_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_foreign_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__module_foreign_info_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__module_foreign_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__module_foreign_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__module_foreign_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module82)
	MR_init_entry1(__Unify___parse_tree__prog_item__mutable_thread_local_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__mutable_thread_local_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(parse_tree__prog_item_module83)
	MR_init_entry1(__Compare___parse_tree__prog_item__mutable_thread_local_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__mutable_thread_local_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(parse_tree__prog_item_module84)
	MR_init_entry1(__Unify___parse_tree__prog_item__mutable_trailed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__mutable_trailed_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(parse_tree__prog_item_module85)
	MR_init_entry1(__Compare___parse_tree__prog_item__mutable_trailed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__mutable_trailed_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(parse_tree__prog_item_module86)
	MR_init_entry1(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__mutable_var_attributes_0_0);
	MR_init_label3(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__mutable_var_attributes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0_i7);
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
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__mutable_var_attributes_0_0_i5);
MR_def_label(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0,5)
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
MR_def_label(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__mutable_var_attributes_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module87)
	MR_init_entry1(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__mutable_var_attributes_0_0);
	MR_init_label7(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,3,2,5,10,14,18,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__mutable_var_attributes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,2)
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
		__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i46);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i10);
MR_def_label(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i46);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i14);
MR_def_label(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i46);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i18);
MR_def_label(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0_i46);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__mutable_var_attributes_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__pragma_foreign_code_impl_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__exception_status_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__export_enum_attributes_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__eval_method_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(parse_tree__prog_item_module88)
	MR_init_entry1(__Unify___parse_tree__prog_item__pragma_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_item__pragma_type_0_0);
	MR_init_label10(__Unify___parse_tree__prog_item__pragma_type_0_0,25,23,53,55,57,59,61,63,218,5)
	MR_init_label10(__Unify___parse_tree__prog_item__pragma_type_0_0,7,9,11,13,15,19,21,27,29,34)
	MR_init_label10(__Unify___parse_tree__prog_item__pragma_type_0_0,36,38,40,42,44,49,67,69,71,73)
	MR_init_label10(__Unify___parse_tree__prog_item__pragma_type_0_0,75,77,79,81,83,85,87,89,91,93)
	MR_init_label10(__Unify___parse_tree__prog_item__pragma_type_0_0,95,97,99,101,103,105,107,111,113,115)
	MR_init_label10(__Unify___parse_tree__prog_item__pragma_type_0_0,117,119,121,124,126,130,132,134,137,139)
	MR_init_label10(__Unify___parse_tree__prog_item__pragma_type_0_0,143,145,147,149,152,156,158,160,162,164)
	MR_init_label10(__Unify___parse_tree__prog_item__pragma_type_0_0,167,169,174,176,178,181,186,188,190,192)
	MR_init_label9(__Unify___parse_tree__prog_item__pragma_type_0_0,194,196,199,203,205,209,211,219,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_item__pragma_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i219);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i53) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i218));
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(15);
	}
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(15);
	}
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(2, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(2, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(2, MR_tempr2, 6);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i55);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i57);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,57)
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
		__Unify___parse_tree__prog_item__pragma_type_0_0_i59);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i61);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i63);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__pragma_foreign_code_impl_0_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i49) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i34) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i67) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i40) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i27) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i190) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i75) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i87) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i209) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i186) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i79) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i91) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i115) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i143) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i19) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i111) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i95) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i99) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i103) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i174) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i160) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i156) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i83) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i130) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i117) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_item__pragma_type_0_0_i107));
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i7);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i11);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,15)
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
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i21);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(4)) == 0);
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i29);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i36);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,36)
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
		__Unify___parse_tree__prog_item__pragma_type_0_0_i38);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_sv(6)) == 0);
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i42);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__export_enum_attributes_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i44);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
	}
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i69);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,69)
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
		__Unify___parse_tree__prog_item__pragma_type_0_0_i71);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i73);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(4), (char *) (MR_Word *) MR_sv(8)) == 0);
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i77);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i81);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,81)
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
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i85);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i89);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i93);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i97);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i101);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i105);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, required_feature);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i113);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(15);
	}
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,27)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 6);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i119);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i121);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i124);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i126);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,126)
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
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 6);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i132);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i134);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i137);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i139);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,139)
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
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 6);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__eval_method_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i145);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i147);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,147)
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
		__Unify___parse_tree__prog_item__pragma_type_0_0_i149);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i152);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,152)
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
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i158);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 6);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i162);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i164);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i167);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i169);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i176);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i178);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i181);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i188);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,188)
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
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 8);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(13) = MR_tfield(3, MR_tempr2, 7);
	MR_sv(14) = MR_tfield(3, MR_tempr2, 8);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i192);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i194);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,194)
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
		__Unify___parse_tree__prog_item__pragma_type_0_0_i196);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i199);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i203);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i205);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(recompilation, item_id);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_item__pragma_type_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___parse_tree__prog_item__pragma_type_0_0_i211);
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,211)
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
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_item__pragma_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_item_module89)
	MR_init_entry1(__Index___parse_tree__prog_item__pragma_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___parse_tree__prog_item__pragma_type_0_0);
	MR_init_label10(__Index___parse_tree__prog_item__pragma_type_0_0,8,7,13,38,3,4,5,6,9,10)
	MR_init_label10(__Index___parse_tree__prog_item__pragma_type_0_0,11,12,14,15,16,17,18,19,20,21)
	MR_init_label10(__Index___parse_tree__prog_item__pragma_type_0_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label3(__Index___parse_tree__prog_item__pragma_type_0_0,32,33,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___parse_tree__prog_item__pragma_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i38));
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i33) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i34) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i32) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i25) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i28) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i31) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i30) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i29) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i3) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i27) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i26) MR_AND
		MR_LABEL_AP(__Index___parse_tree__prog_item__pragma_type_0_0_i23));
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 27;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 26;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 28;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 31;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 30;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 29;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 24;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___parse_tree__prog_item__pragma_type_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__pragma_foreign_code_impl_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__exception_status_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__export_enum_attributes_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__eval_method_0_0);

MR_BEGIN_MODULE(parse_tree__prog_item_module90)
	MR_init_entry1(__Compare___parse_tree__prog_item__pragma_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_item__pragma_type_0_0);
	MR_init_label10(__Compare___parse_tree__prog_item__pragma_type_0_0,3,2,4,5,6,7,70,73,77,62)
	MR_init_label10(__Compare___parse_tree__prog_item__pragma_type_0_0,65,157,160,164,168,172,176,180,547,10)
	MR_init_label10(__Compare___parse_tree__prog_item__pragma_type_0_0,13,18,21,26,29,33,37,41,49,52)
	MR_init_label10(__Compare___parse_tree__prog_item__pragma_type_0_0,56,83,86,90,94,102,105,109,113,117)
	MR_init_label10(__Compare___parse_tree__prog_item__pragma_type_0_0,125,128,132,136,140,149,152,190,193,197)
	MR_init_label10(__Compare___parse_tree__prog_item__pragma_type_0_0,201,205,213,216,221,224,228,232,236,244)
	MR_init_label10(__Compare___parse_tree__prog_item__pragma_type_0_0,247,252,255,260,263,268,271,276,279,284)
	MR_init_label10(__Compare___parse_tree__prog_item__pragma_type_0_0,287,292,295,298,303,306,309,313,317,322)
	MR_init_label10(__Compare___parse_tree__prog_item__pragma_type_0_0,326,335,338,342,346,351,355,364,367,371)
	MR_init_label10(__Compare___parse_tree__prog_item__pragma_type_0_0,375,379,384,393,396,401,404,408,412,417)
	MR_init_label10(__Compare___parse_tree__prog_item__pragma_type_0_0,422,432,435,439,443,448,457,460,464,468)
	MR_init_label10(__Compare___parse_tree__prog_item__pragma_type_0_0,472,480,483,487,491,495,500,506,510,521)
	MR_init_label6(__Compare___parse_tree__prog_item__pragma_type_0_0,524,528,532,536,1070,1071)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_item__pragma_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__pragma_type_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i4);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___parse_tree__prog_item__pragma_type_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(15);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(15);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i70) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i62) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i157) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i547));
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
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
		__Compare___parse_tree__prog_item__pragma_type_0_0_i73);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i77);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i65);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_tfield(2, MR_tempr5, 6);
	MR_sv(11) = MR_tfield(2, MR_tempr5, 5);
	MR_sv(10) = MR_tfield(2, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(2, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(2, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(6) = MR_tfield(2, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(2, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(2, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(2, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i160);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i164);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i168);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, pragma_var);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i172);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i176);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i180);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__pragma_foreign_code_impl_0_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,547)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i149) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i102) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i190) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i125) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i83) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i480) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i213) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i252) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i521) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i26) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i457) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i221) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i260) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i303) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i364) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i295) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i268) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i276) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i284) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i432) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i401) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i393) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i18) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i244) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i335) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i306) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_item__pragma_type_0_0_i292));
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i21);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i29);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i33);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i37);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i41);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__exception_status_0_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i52);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i56);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i86);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i90);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i94);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i105);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i109);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i113);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i117);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i128);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i132);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i136);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__export_enum_attributes_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i140);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i152);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i193);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i197);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i201);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__pragma_foreign_proc_attributes_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i205);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i216);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i224);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i228);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i232);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i236);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i247);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i255);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i263);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i271);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i279);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i287);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, required_feature);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i298);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,27)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 6);
	MR_sv(9) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_tfield(3, MR_tempr6, 6);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i309);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i313);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i317);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i322);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i326);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_reuse_domain);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 6);
	MR_sv(9) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_tfield(3, MR_tempr6, 6);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i338);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i342);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i346);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,346)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i351);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i355);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, structure_sharing_domain);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,364)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 6);
	MR_sv(9) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_tfield(3, MR_tempr6, 6);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__eval_method_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i367);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,367)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i371);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,371)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i375);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,375)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i379);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,379)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i384);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,384)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, table_attributes);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,393)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i396);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,396)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,401)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 6);
	MR_sv(9) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_tfield(3, MR_tempr6, 6);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i404);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,404)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i408);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,408)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i412);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,412)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i417);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,417)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i422);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,422)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,432)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i435);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,435)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i439);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,439)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i443);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,443)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i448);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,448)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,457)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i460);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,460)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i464);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,464)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i468);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,468)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i472);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,472)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,480)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(3, MR_tempr5, 8);
	MR_sv(13) = MR_tfield(3, MR_tempr5, 7);
	MR_sv(12) = MR_tfield(3, MR_tempr5, 6);
	MR_sv(11) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_tfield(3, MR_tempr6, 8);
	MR_sv(6) = MR_tfield(3, MR_tempr6, 7);
	MR_sv(5) = MR_tfield(3, MR_tempr6, 6);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i483);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,483)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i487);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,487)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i491);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,491)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i495);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,495)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i500);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,500)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i506);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,506)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i510);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,510)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(recompilation, item_id);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,521)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1070);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i524);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,524)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i528);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,528)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i532);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,532)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_item__pragma_type_0_0_i536);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,536)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_item__pragma_type_0_0_i1071);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,1070)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___parse_tree__prog_item__pragma_type_0_0,1071)
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
	parse_tree__prog_item_module53();
	parse_tree__prog_item_module54();
	parse_tree__prog_item_module55();
	parse_tree__prog_item_module56();
	parse_tree__prog_item_module57();
	parse_tree__prog_item_module58();
	parse_tree__prog_item_module59();
	parse_tree__prog_item_module60();
	parse_tree__prog_item_module61();
	parse_tree__prog_item_module62();
	parse_tree__prog_item_module63();
	parse_tree__prog_item_module64();
	parse_tree__prog_item_module65();
	parse_tree__prog_item_module66();
	parse_tree__prog_item_module67();
	parse_tree__prog_item_module68();
	parse_tree__prog_item_module69();
	parse_tree__prog_item_module70();
	parse_tree__prog_item_module71();
	parse_tree__prog_item_module72();
	parse_tree__prog_item_module73();
	parse_tree__prog_item_module74();
	parse_tree__prog_item_module75();
	parse_tree__prog_item_module76();
	parse_tree__prog_item_module77();
	parse_tree__prog_item_module78();
	parse_tree__prog_item_module79();
}

static void mercury__parse_tree__prog_item_maybe_bunch_2(void)
{
	parse_tree__prog_item_module80();
	parse_tree__prog_item_module81();
	parse_tree__prog_item_module82();
	parse_tree__prog_item_module83();
	parse_tree__prog_item_module84();
	parse_tree__prog_item_module85();
	parse_tree__prog_item_module86();
	parse_tree__prog_item_module87();
	parse_tree__prog_item_module88();
	parse_tree__prog_item_module89();
	parse_tree__prog_item_module90();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_item__init(void);
void mercury__parse_tree__prog_item__init_type_tables(void);
void mercury__parse_tree__prog_item__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_item__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
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
	mercury__parse_tree__prog_item_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_catch_any_expr_0,
		parse_tree__prog_item__catch_any_expr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_catch_expr_0,
		parse_tree__prog_item__catch_expr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_class_method_0,
		parse_tree__prog_item__class_method_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_class_methods_0,
		parse_tree__prog_item__class_methods_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_compilation_unit_0,
		parse_tree__prog_item__compilation_unit_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_contains_foreign_code_0,
		parse_tree__prog_item__contains_foreign_code_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_contains_foreign_export_0,
		parse_tree__prog_item__contains_foreign_export_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_foreign_name_0,
		parse_tree__prog_item__foreign_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_goal_0,
		parse_tree__prog_item__goal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0,
		parse_tree__prog_item__goal_expr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_goals_0,
		parse_tree__prog_item__goals_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_0,
		parse_tree__prog_item__item_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_clause_info_0,
		parse_tree__prog_item__item_clause_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_compiler_origin_0,
		parse_tree__prog_item__item_compiler_origin_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_finalise_info_0,
		parse_tree__prog_item__item_finalise_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_initialise_info_0,
		parse_tree__prog_item__item_initialise_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0,
		parse_tree__prog_item__item_inst_defn_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_instance_info_0,
		parse_tree__prog_item__item_instance_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0,
		parse_tree__prog_item__item_mode_decl_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0,
		parse_tree__prog_item__item_mode_defn_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_module_defn_info_0,
		parse_tree__prog_item__item_module_defn_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_mutable_info_0,
		parse_tree__prog_item__item_mutable_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_nothing_info_0,
		parse_tree__prog_item__item_nothing_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0,
		parse_tree__prog_item__item_origin_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_pragma_info_0,
		parse_tree__prog_item__item_pragma_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0,
		parse_tree__prog_item__item_pred_decl_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_promise_info_0,
		parse_tree__prog_item__item_promise_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0,
		parse_tree__prog_item__item_type_defn_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0,
		parse_tree__prog_item__item_typeclass_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_item_warning_0,
		parse_tree__prog_item__item_warning_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_module_defn_0,
		parse_tree__prog_item__module_defn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_module_foreign_info_0,
		parse_tree__prog_item__module_foreign_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_mutable_thread_local_0,
		parse_tree__prog_item__mutable_thread_local_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_mutable_trailed_0,
		parse_tree__prog_item__mutable_trailed_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0,
		parse_tree__prog_item__mutable_var_attributes_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_item__type_ctor_info_pragma_type_0,
		parse_tree__prog_item__pragma_type_0_0);
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
		&mercury_data_parse_tree__prog_item__type_ctor_info_catch_any_expr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_catch_expr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_class_method_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_class_methods_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_compilation_unit_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_contains_foreign_code_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_contains_foreign_export_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_foreign_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_goal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_goals_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_clause_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_compiler_origin_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_finalise_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_initialise_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_instance_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_module_defn_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_mutable_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_nothing_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_origin_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_pragma_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_promise_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_item_warning_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_module_defn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_module_foreign_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_mutable_thread_local_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_mutable_trailed_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_item__type_ctor_info_pragma_type_0);
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

void mercury__parse_tree__prog_item__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__prog_item);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_item__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
